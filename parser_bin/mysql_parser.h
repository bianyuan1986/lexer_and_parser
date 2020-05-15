/*
 *
 *  Author: baohuren
 *  Data: 2019-11-11
 *
 */
#ifndef _MYSQL_PARSER_H_
#define _MYSQL_PARSER_H_

#define KEYWORD_NOT_FOUND 0
#define KEYWORD_FOUND 1

#define SYNTAX_NOT_OK 0
#define SYNTAX_OK 1

#ifdef __cplusplus
extern "C" {
#endif

#define RISK_HIGH 3
#define RISK_MID  2
#define RISK_LOW  1
#define NO_RISK 0

#define KEYWORD_FOUND_SINGLE_QUOTE  0x1
#define KEYWORD_FOUND_DOUBLE_QUOTE  0x2
#define KEYWORD_FOUND_COMMA         0x4
#define KEYWORD_FOUND_NUMBER_SIGN   0x8
#define KEYWORD_FOUND_DOUBLE_HYPHEN 0x10

#define SQL_ATTACK_RULE_ID 5001555

struct result
{
	int specialChar;
	unsigned char hit_from;
	unsigned char hit_high_risk_func;
	unsigned char hit_op;
	unsigned char hit_logic;
	unsigned char hit_call;
	unsigned char hit_sp_var;
	unsigned char hit_order_by;
	unsigned char hit_union_select;
	unsigned char hit_into_outfile;
	unsigned char hit_if;
	unsigned char hit_case_when;
};

struct matchResult
{
	char *param;
	int paramLen;
	char *sql;
	int riskLevel;
};

extern int gSelectCnt;
extern int gFromCnt;
extern int gEqualCnt;
extern int gParenthesisLevel;

extern unsigned int score;
extern struct result globalResult;

int syntax_parser(const char *payload, int pLen, struct result *r, struct matchResult *hit);
int result_check(struct result *r);

#ifdef __cplusplus
}
#endif

#endif
