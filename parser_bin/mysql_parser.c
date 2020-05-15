/*
 *
 *  Author: baohuren
 *  Data: 2019-11-11
 *
 */
#include <string.h>
#include <stdio.h>

#include "mysql_parser.h"

#define SQL_PREFIX  "select a from test where test =            "

#define SQL_BUFFER_LEN 8*1024


#define SQL_PREFIX_MAX 4
#define SPECIAL_CHAR_LEN_MAX 16

static char *sql_prefix[SQL_PREFIX_MAX] = {
						"select a from test where test =            ",
						"select a from test where test =           '",
						"select a from test where test =          \"",
						"select a from test where test = 1 order by ",
					};

static int sql_prefix_len[SQL_PREFIX_MAX] = {
						43,
						43,
						43,
						43
					};

static char *sql_suffix[SQL_PREFIX_MAX] = {
						" ;",
						"';",
						"\";",
						" ;"
					};

static int sql_suffix_len[SQL_PREFIX_MAX] = {
						2,
						2,
						2,
						2
					};

extern int syntax_check(char *payload, int pLen);

struct result globalResult = {0};

int gSelectCnt = 0;
int gFromCnt = 0;
int gEqualCnt = 0;
int gParenthesisLevel = 0;

int result_check(struct result *r)
{
	int risk = NO_RISK;
	int sum = 0;

	if( r->hit_if || r->hit_case_when ||
			r->hit_high_risk_func || r->hit_from ||
			r->hit_into_outfile || r->hit_order_by ||
			r->hit_union_select )
	{
		return RISK_HIGH;
	}

	sum = r->hit_logic + r->hit_op + r->hit_call;
	if( sum == 0 )
	{
		return NO_RISK;
	}
	else if( sum > 1 )
	{
		return RISK_HIGH;
	}
	else
	{
		if( r->hit_sp_var )
		{
			if( r->hit_call )
			{
				return NO_RISK;
			}
			else
			{
				return RISK_HIGH;
			}
		}
	}

	return risk;
}

int replace_special(const char *payload, int pLen, char *buf, int bLen)
{
	int cpLen = 0;
	int i = 0;

	for( ; i < pLen; i++)
	{
		if( payload[i] == '#')
		{
			if( cpLen + 2 >= bLen )
			{
				goto FAILED;
			}
			buf[cpLen++] = ';';
			buf[cpLen++] = '#';
		}
		else if( payload[i] == '-' )
		{
			if( (i+1 < pLen) && (payload[i+1] == '-') )
			{
				if( cpLen + 3 >= bLen )
				{
					goto FAILED;
				}
				buf[cpLen++] = ';';
				buf[cpLen++] = '-';
				buf[cpLen++] = '-';
				i += 1;
			}
		}
		else
		{
			if( cpLen + 1 >= bLen )
			{
				goto FAILED;
			}
			buf[cpLen++] = payload[i];
		}
	}

	return cpLen;

FAILED:
	return 0;
}

int syntax_parser(const char *payload, int pLen, struct matchResult *hit)
{
	static char sqlBuf[SQL_BUFFER_LEN+4] = {SQL_PREFIX};
	static int prefixLen = 43;
	int totalLen = 0;
	unsigned int stage = 1;
	int ret = 0;
	int state = 0;
	int specialChar = 0;

	if( !payload || (pLen <= 0) )
	{
		return SYNTAX_NOT_OK;
	}

	totalLen = sql_prefix_len[0];
	if( totalLen + pLen >= SQL_BUFFER_LEN )
	{
		return SYNTAX_NOT_OK;
	}

	if( r->specialChar & (KEYWORD_FOUND_NUMBER_SIGN|KEYWORD_FOUND_DOUBLE_HYPHEN) )
	{
		totalLen += replace_special(payload, pLen, sqlBuf+totalLen, SQL_BUFFER_LEN-totalLen);
	}
	else
	{
		memcpy(sqlBuf+totalLen, payload, pLen);
		totalLen += pLen;
	}

	if( totalLen + sql_suffix_len[0] > SQL_BUFFER_LEN )
	{
		return SYNTAX_NOT_OK;
	}
	memcpy(sqlBuf+totalLen, sql_suffix[0], sql_suffix_len[0]);
	totalLen += sql_suffix_len[0];
	sqlBuf[totalLen] = '\0';
	sqlBuf[totalLen+1] = '\0';

	gSelectCnt = 0;
	gFromCnt = 0;
	gEqualCnt = 0;
	if( (ret = syntax_check(sqlBuf, totalLen)) == SYNTAX_OK )
	{
		goto RESULT;
	}

#define CONTEXT_INIT() memset(&globalResult, 0x00, sizeof(globalResult)); gSelectCnt = 0; gFromCnt = 0; gEqualCnt = 0
#define REPLACE(c) sqlBuf[prefixLen-1] = c; sqlBuf[totalLen-2] = c

	specialChar = r->specialChar;
	while( stage <= KEYWORD_FOUND_COMMA )
	{
		state = (specialChar & stage);
		switch(state)
		{
			case KEYWORD_FOUND_SINGLE_QUOTE:
				REPLACE('\'');
				CONTEXT_INIT();
				if( (ret = syntax_check(sqlBuf, totalLen)) == SYNTAX_OK )
				{
					REPLACE(' ');
					goto RESULT;
				}
				REPLACE(' ');
				break;
			case KEYWORD_FOUND_DOUBLE_QUOTE:
				REPLACE('"');
				CONTEXT_INIT();
				if( (ret = syntax_check(sqlBuf, totalLen)) == SYNTAX_OK )
				{
					REPLACE(' ');
					goto RESULT;
				}
				REPLACE(' ');
				break;
			case KEYWORD_FOUND_COMMA:
				memcpy(sqlBuf+prefixLen-11, "1 order by ", 11);
				CONTEXT_INIT();
				if( (ret = syntax_check(sqlBuf, totalLen)) == SYNTAX_OK )
				{
					memset(sqlBuf+prefixLen-11, (int)' ', 11);
					goto RESULT;
				}
				memset(sqlBuf+prefixLen-11, (int)' ', 11);
				break;
			default:
				break;
		}

		stage <<= 1;
	}


RESULT:
	if( ret == SYNTAX_OK )
	{
		hit->sql = sqlBuf;
	}
	return ret;
}

#ifndef SHARED 
int main(int argc, char *argv[])
{
	struct matchResult hit;
	int ret = 0;

	memset(&hit, 0x00, sizeof(hit));
	if( syntax_parser((const char*)argv[1], strlen(argv[1]), &hit) == SYNTAX_OK )
	{
		ret = result_check(&globalResult);
		printf("SQL syntax ok! Risk:%d!\n", ret);
		if( ret != NO_RISK )
		{
			//hit->param = (char*)l->data[i].pval;
			//hit->paramLen = l->data[i].valLen;
			//hit->riskLevel = ret;
		}
	}

	return ret;
}
#else
int sqldetect(char *payload, int pLen)
{
	struct matchResult hit;
	int ret = 0;

	memset(&hit, 0x00, sizeof(hit));
	if( syntax_parser((const char*)payload, pLen, &hit) == SYNTAX_OK )
	{
		ret = result_check(&globalResult);
		printf("SQL syntax ok! Risk:%d!\n", ret);
		if( ret != NO_RISK )
		{
			//hit->param = (char*)l->data[i].pval;
			//hit->paramLen = l->data[i].valLen;
			//hit->riskLevel = ret;
		}
	}

	return ret;
}
#endif

