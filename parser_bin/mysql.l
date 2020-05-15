/*
 * Scanner for mysql subset
 * $Header: /usr/home/johnl/flnb/RCS/ch04.tr,v 1.7 2009/05/19 18:28:27 johnl Exp $
 */

%option noyywrap nodefault yylineno case-insensitive
%{
#include "mysql.tab.h"
#include <stdarg.h>
#include <string.h>
#include "mysql_parser.h"
#include "../util/yg_log.h"

void yyerror(char *s, ...);

int oldstate;

#define LEXER_ERROR -1

#define INC_COUNT(field) globalResult.field = 1
#define RECORD_SPECIAL(specialFlag) globalResult.specialChar |= specialFlag

%}

%x COMMENT
%s BTWMODE

%%

	/* keywords */
ADD     { return ADD; }
ALL     { return ALL; }
ALTER   { return ALTER; }
ANALYZE { return ANALYZE; }

  /* Hack for BETWEEN ... AND ... 
   * return special AND token if BETWEEN seen
   */
<BTWMODE>AND    { BEGIN INITIAL; return AND; }
AND     { INC_COUNT(hit_logic); return ANDOP; }
ANY     { return ANY; }
AS      { return AS; }
ASC     { return ASC; }
AUTO_INCREMENT  { return AUTO_INCREMENT; }
BEFORE  { return BEFORE; }
BETWEEN { INC_COUNT(hit_op); BEGIN BTWMODE; return BETWEEN; }
INT8|BIGINT     { return BIGINT; }
BINARY  { return BINARY; }
BIT     { return BIT; }
BLOB    { return BLOB; }
BOTH    { return BOTH; }
BY      { return BY; }
CALL    { return CALL; }
CASCADE { return CASCADE; }
CASE    { INC_COUNT(hit_case_when); return CASE; }
CHANGE  { return CHANGE; }
CHAR(ACTER)?    { return CHAR; }
CHECK   { return CHECK; }
COLLATE { return COLLATE; }
COLUMN  { return COLUMN; }
COMMENT { return COMMENT; }
CONDITION       { return CONDITION; }
CONSTRAINT      { return CONSTRAINT; }
CONTINUE        { return CONTINUE; }
CONVERT { return CONVERT; }
CREATE  { return CREATE; }
CROSS   { return CROSS; }
CURRENT_DATE    { return CURRENT_DATE; }
CURRENT_TIME    { return CURRENT_TIME; }
CURRENT_TIMESTAMP       { return CURRENT_TIMESTAMP; }
CURRENT_USER    { INC_COUNT(hit_sp_var); return CURRENT_USER; }
CURSOR  { return CURSOR; }
DATABASE        { return DATABASE; }
DATABASES       { return DATABASES; }
DATE    { return DATE; }
DATETIME        { return DATETIME; }
DAY_HOUR        { return DAY_HOUR; }
DAY_MICROSECOND { return DAY_MICROSECOND; }
DAY_MINUTE      { return DAY_MINUTE; }
DAY_SECOND      { return DAY_SECOND; }
NUMERIC|DEC|DECIMAL     { return DECIMAL; }
DECLARE { return DECLARE; }
DEFAULT { return DEFAULT; }
DELAYED { return DELAYED; }
DELETE  { return DELETE; }
DESC    { return DESC; }
DESCRIBE        { return DESCRIBE; }
DETERMINISTIC   { return DETERMINISTIC; }
DISTINCT        { return DISTINCT; }
DISTINCTROW     { return DISTINCTROW; }
DIV     { return DIV; }
FLOAT8|DOUBLE   { return DOUBLE; }
DROP    { return DROP; }
DUAL    { return DUAL; }
EACH    { return EACH; }
ELSE    { return ELSE; }
ELSEIF  { return ELSEIF; }
END     { return END; }
ENUM { return ENUM; }
ESCAPED { return ESCAPED; }
EXISTS  { yylval.subtok = 0; return EXISTS; }
NOT[ \t\n]+EXISTS       { yylval.subtok = 1; return EXISTS; }
EXIT    { return EXIT; }
EXPLAIN { return EXPLAIN; }
FETCH   { return FETCH; }
FLOAT4? { return FLOAT; }
FOR     { return FOR; }
FORCE   { return FORCE; }
FOREIGN { return FOREIGN; }
FROM    { ++gFromCnt; if( gFromCnt >= 2 ) INC_COUNT(hit_from); return FROM; }
FULLTEXT        { return FULLTEXT; }
GRANT   { return GRANT; }
GROUP   { return GROUP; }
HAVING  { return HAVING; }
HIGH_PRIORITY   { return HIGH_PRIORITY; }
HOUR_MICROSECOND        { return HOUR_MICROSECOND; }
HOUR_MINUTE     { return HOUR_MINUTE; }
HOUR_SECOND     { return HOUR_SECOND; }
IF      { INC_COUNT(hit_if); return IF; }
IGNORE  { return IGNORE; }
IN      { INC_COUNT(hit_logic); return IN; }
INFILE  { return INFILE; }
INNER   { return INNER; }
INOUT   { return INOUT; }
INSENSITIVE     { return INSENSITIVE; }
INSERT  { return INSERT; }
INT4?|INTEGER   { return INTEGER; }
INTERVAL        { return INTERVAL; }
INTO    { return INTO; }
IS      { return IS; }
ITERATE { return ITERATE; }
JOIN    { return JOIN; }
INDEX|KEY       { return KEY; }
KEYS    { return KEYS; }
KILL    { return KILL; }
LEADING { return LEADING; }
LEAVE   { return LEAVE; }
LEFT    { return LEFT; }
LIKE    { INC_COUNT(hit_op); return LIKE; }
LIMIT   { return LIMIT; }
OFFSET  { return OFFSET; }
LINES   { return LINES; }
LOAD    { return LOAD; }
LOCALTIME       { return LOCALTIME; }
LOCALTIMESTAMP  { return LOCALTIMESTAMP; }
LOCK    { return LOCK; }
LONG    { return LONG; }
LONGBLOB        { return LONGBLOB; }
LONGTEXT        { return LONGTEXT; }
LOOP    { return LOOP; }
LOW_PRIORITY    { return LOW_PRIORITY; }
MATCH   { return MATCH; }
MEDIUMBLOB      { return MEDIUMBLOB; }
MIDDLEINT|MEDIUMINT     { return MEDIUMINT; }
MEDIUMTEXT      { return MEDIUMTEXT; }
MINUTE_MICROSECOND      { return MINUTE_MICROSECOND; }
MINUTE_SECOND   { return MINUTE_SECOND; }
MOD     { INC_COUNT(hit_logic); return MOD; }
MODIFIES        { return MODIFIES; }
NATURAL { return NATURAL; }
NOT     { INC_COUNT(hit_logic); return NOT; }
NO_WRITE_TO_BINLOG      { return NO_WRITE_TO_BINLOG; }
NULL    { return NULLX; }
NUMBER  { return NUMBER; }
ON      { return ON; }
ON[ \t\n]+DUPLICATE { return ONDUPLICATE; } /* hack due to limited lookahead */
OPTIMIZE        { return OPTIMIZE; }
OPTION  { return OPTION; }
OPTIONALLY      { return OPTIONALLY; }
OR      { INC_COUNT(hit_logic); return OR; }
ORDER   { INC_COUNT(hit_order_by); return ORDER; }
OUT     { return OUT; }
OUTER   { return OUTER; }
OUTFILE { INC_COUNT(hit_into_outfile); return OUTFILE; }
DUMPFILE { INC_COUNT(hit_into_outfile);return OUTFILE; }
PRECISION       { return PRECISION; }
PRIMARY { return PRIMARY; }
PROCEDURE       { return PROCEDURE; }
PURGE   { return PURGE; }
QUICK   { return QUICK; }
READ    { return READ; }
READS   { return READS; }
REAL    { return REAL; }
REFERENCES      { return REFERENCES; }
REGEXP|RLIKE    { return REGEXP; }
RELEASE { return RELEASE; }
RENAME  { return RENAME; }
REPEAT  { return REPEAT; }
REPLACE { return REPLACE; }
REQUIRE { return REQUIRE; }
RESTRICT        { return RESTRICT; }
RETURN  { return RETURN; }
REVOKE  { return REVOKE; }
RIGHT   { return RIGHT; }
ROLLUP  { return ROLLUP; }
SCHEMA  { return SCHEMA; }
SCHEMAS { return SCHEMAS; }
SECOND_MICROSECOND      { return SECOND_MICROSECOND; }
SELECT  { ++gSelectCnt; return SELECT; }
SENSITIVE       { return SENSITIVE; }
SEPARATOR       { return SEPARATOR; }
SET     { return SET; }
SHOW    { return SHOW; }
INT2|SMALLINT   { return SMALLINT; }
SOME    { return SOME; }
SONAME  { return SONAME; }
SPATIAL { return SPATIAL; }
SPECIFIC        { return SPECIFIC; }
SQL     { return SQL; }
SQLEXCEPTION    { return SQLEXCEPTION; }
SQLSTATE        { return SQLSTATE; }
SQLWARNING      { return SQLWARNING; }
SQL_BIG_RESULT  { return SQL_BIG_RESULT; }
SQL_CALC_FOUND_ROWS     { return SQL_CALC_FOUND_ROWS; }
SQL_SMALL_RESULT        { return SQL_SMALL_RESULT; }
SSL     { return SSL; }
STARTING        { return STARTING; }
STRAIGHT_JOIN   { return STRAIGHT_JOIN; }
TABLE   { return TABLE; }
TEMPORARY       { return TEMPORARY; }
TERMINATED      { return TERMINATED; }
TEXT    { return TEXT; }
THEN    { return THEN; }
TIME    { return TIME; }
TIMESTAMP       { return TIMESTAMP; }
INT1|TINYINT    { return TINYINT; }
TINYTEXT        { return TINYTEXT; }
TO      { return TO; }
TRAILING        { return TRAILING; }
TRIGGER { return TRIGGER; }
UNDO    { return UNDO; }
UNION   { INC_COUNT(hit_union_select); return UNION; }
UNIQUE  { return UNIQUE; }
UNLOCK  { return UNLOCK; }
UNSIGNED        { return UNSIGNED; }
UPDATE  { return UPDATE; }
USAGE   { return USAGE; }
USE     { return USE; }
USING   { return USING; }
UTC_DATE        { return UTC_DATE; }
UTC_TIME        { return UTC_TIME; }
UTC_TIMESTAMP   { return UTC_TIMESTAMP; }
VALUES? { return VALUES; }
VARBINARY       { return VARBINARY; }
VARCHAR(ACTER)? { return VARCHAR; }
VARYING { return VARYING; }
WHEN    { return WHEN; }
WHERE   { return WHERE; }
WHILE   { return WHILE; }
WITH    { return WITH; }
WRITE   { return WRITE; }
XOR     { return XOR; }
YEAR    { return YEAR; }
YEAR_MONTH      { return YEAR_MONTH; }
ZEROFILL        { return ZEROFILL; }

	/* numbers */
-?[0-9]+                { yylval.intval = atoi(yytext); return INTNUM; } 

-?[0-9]+"."[0-9]* |
-?"."[0-9]+     |
-?[0-9]+E[-+]?[0-9]+    |
-?[0-9]+"."[0-9]*E[-+]?[0-9]+ |
-?"."[0-9]+E[-+]?[0-9]+ { yylval.floatval = atof(yytext) ;
                                  return APPROXNUM; }
	/* booleans */
TRUE    { yylval.intval = 1; return BOOL; }
UNKNOWN { yylval.intval = -1; return BOOL; }
FALSE   { yylval.intval = 0; return BOOL; }

	/* strings */
'(\\.|''|[^'\n])*'   { RECORD_SPECIAL(KEYWORD_FOUND_SINGLE_QUOTE); //yylval.strval = strdup(yytext); 
	return STRING; }
\"(\\.|\"\"|[^"\n])*\"  { RECORD_SPECIAL(KEYWORD_FOUND_DOUBLE_QUOTE); //yylval.strval = strdup(yytext); 
	return STRING; }

'(\\.|[^'\n])*$      { yyerror("Unterminated string %s", yytext); }
\"(\\.|[^"\n])*$    { yyerror("Unterminated string %s", yytext); }

	/* hex strings */
X'[0-9A-F]+' { RECORD_SPECIAL(KEYWORD_FOUND_SINGLE_QUOTE); //yylval.strval = strdup(yytext); 
	return STRING; }
0X[0-9A-F]+  {  //yylval.strval = strdup(yytext); 
	return STRING; }

	/* bit strings */
0B[01]+      |
B'[01]+'     { //yylval.strval = strdup(yytext); 
	return STRING; }

	/* operators */
[(]   { gParenthesisLevel++; return yytext[0]; }
[)]   {  
	if(gParenthesisLevel > 0){ gParenthesisLevel--; return yytext[0]; } }
[,]   { RECORD_SPECIAL(KEYWORD_FOUND_COMMA); return yytext[0]; }
[-+&~|^/%*.;!]   { INC_COUNT(hit_op); return yytext[0]; }

"&&"            { INC_COUNT(hit_logic); return ANDOP; }
"||"            { INC_COUNT(hit_logic); return OR; }

"="     { ++gEqualCnt; if( gEqualCnt > 1 ) INC_COUNT(hit_op); yylval.subtok = 4; return COMPARISON; }
"<=>"   { INC_COUNT(hit_op); yylval.subtok = 12; return COMPARISON; }
">="    { INC_COUNT(hit_op); yylval.subtok = 6; return COMPARISON; }
">"     { INC_COUNT(hit_op); yylval.subtok = 2; return COMPARISON; }
"<="    { INC_COUNT(hit_op); yylval.subtok = 5; return COMPARISON; }
"<"     { INC_COUNT(hit_op); yylval.subtok = 1; return COMPARISON; }
"!="    |
"<>"    { INC_COUNT(hit_op); yylval.subtok = 3; return COMPARISON; }

"<<"    { INC_COUNT(hit_op); yylval.subtok = 1; return SHIFT; }
">>"    { INC_COUNT(hit_op); yylval.subtok = 2; return SHIFT; }

":="     { return ASSIGN; }

    /* keywords functions*/
(loadfile|rand|substr|substring|sleep|pg_sleep|load_file|benchmark|get_lock|updatexml|extractvalue|geometrycollection|multipoint|polygon|multipolygon|linestring|multilinestring|mid|DBMS_PIPE\.RECEIVE_MESSAGE|SYSDATE|user|system_user|session_user|version|current_database|getpgusername|pg_read_file|current_setting)/"(" { INC_COUNT(hit_high_risk_func); return RISK_FUNCTION;}

	/* functions */
TRIM/"("         { return FTRIM; }
DATE_ADD/"("    { return FDATE_ADD; }
DATE_SUB/"("    { return FDATE_SUB; }

	/* check trailing context manually */
COUNT    { int c = input(); unput(c);
           if(c == '(') return FCOUNT;
           //yylval.strval = strdup(yytext);
           return NAME; }

	/* names */
[A-Za-z][A-Za-z0-9_]*   { //yylval.strval = strdup(yytext);
						  return NAME; }

`[^`/\\.\n]+`           { //yylval.strval = strdup(yytext+1);
                          //yylval.strval[yyleng-2] = 0;
                          return NAME; }

`[^`\n]*$               { yyerror("unterminated quoted name %s", yytext); return LEXER_ERROR;}

	/* user variables */
@[0-9a-z_.$]+ |
@\"[^"\n]+\" |
@`[^`\n]+` |
@'[^'\n]+' { //yylval.strval = strdup(yytext+1); 
	return USERVAR; }

@\"[^"\n]*$ |
@`[^`\n]*$ |
@'[^'\n]*$ { yyerror("unterminated quoted user variable %s", yytext); return LEXER_ERROR;}

	/* comments */   
#.*             { RECORD_SPECIAL(KEYWORD_FOUND_NUMBER_SIGN); }
"--"[ \t].*     { RECORD_SPECIAL(KEYWORD_FOUND_DOUBLE_HYPHEN); }

"/*"            { oldstate = YY_START; BEGIN COMMENT; }
<COMMENT>"*/"   { BEGIN oldstate; }
<COMMENT>.|\n   ;
<COMMENT><<EOF>> { yyerror("unclosed comment"); return LEXER_ERROR;}

	/* everything else */
[ \t\n]         /* whitespace */
.               { yyerror("mystery character '%c'", *yytext); return LEXER_ERROR;}

%%

int syntax_check(char *payload, int pLen)
{
	struct yy_buffer_state *b = yy_scan_buffer(payload, pLen+2);
	printf("SQL statement:[%s].\n", payload);
	if( !yyparse() )
	{
		yy_delete_buffer(b);
		return SYNTAX_OK;
	}

	yy_delete_buffer(b);
	return SYNTAX_NOT_OK;
}

