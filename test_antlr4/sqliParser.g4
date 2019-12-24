parser grammar sqliParser;

options {
	tokenVocab=sqliLexer;
}

@header {
}

@members {
}

// SQL Statement Syntax
root_statement:
	(data_manipulation_statements | data_definition_statements ) (SEMI)
//	| (SEMI)?
;

data_manipulation_statements:
	  select_statement
	| insert_statement
	| update_statements
	| delete_statements
    | server_event_statement
//	| load_data_statement
;

data_definition_statements:
      create_statement
    | drop_statement
    | privilege_alter_statement
	| show_event_statement
	| set_event_statement
	| use_event_statement
//	| alter_database_statements
;

create_statement:
      CREATE create_statement_spec
;

create_statement_spec:
      create_database_statement
    | create_user_statement
    | create_table_statement
//	| create_view_statement
;

drop_statement:
      drop_database_statement
	| drop_user_statement
    | drop_table_statement
//  | drop_view_statement
;

privilege_alter_statement:
      grant_privilege_statement
	| revoke_privilege_statement
    | alter_table_statement
	| alter_view_statement
;

//DQL
// select
select_statement:
        (LPAREN)? select_expression  (RPAREN)? ( (UNION (ALL)?) (LPAREN)? select_expression_subquery (RPAREN)? )*
;

select_statement_subquery:
		(LPAREN)? select_expression_subquery  (RPAREN)? ( (UNION (ALL)?) (LPAREN)? select_expression_subquery (RPAREN)? )*
;

select_expression:
	SELECT
	( ALL | DISTINCT )?
	select_list
	(
		FROM table_references
		where_clause
		( groupby_clause )?
		( having_clause )?
	) 
	( orderby_clause )?
	( limit_clause )?
;


select_expression_subquery:
 SELECT
	( ALL | DISTINCT )?
	select_list
	(
		FROM table_references
		( where_clause )?
		( groupby_clause )?
		( having_clause )?
	) ?
	( orderby_clause )?
	( limit_clause )?
;

where_clause:
	WHERE expression
;

groupby_clause:
	GROUP BY groupby_item (COMMA groupby_item)*
;

groupby_item:	column_spec |  simple_expr ;

having_clause:
	HAVING expression
;

orderby_clause:
	ORDER BY orderby_item (COMMA orderby_item)*
;
orderby_item:	orderby_column_spec (ASC | DESC)? ;

orderby_column_spec:
        ( table_spec DOT )? orderby_column_name
;

orderby_column_name: orderby_any_name;

orderby_any_name
: ID
| number_literal
| function_call
| subquery
;


limit_clause:
	LIMIT ((offset COMMA)? row_count) (function_call)?
;
offset:		INTEGER_NUM ;
row_count:	INTEGER_NUM ;

select_list:
	  displayed_column (  COMMA displayed_column )*
;

column_list:
	LPAREN column_spec (COMMA column_spec)* RPAREN
;

subquery:
	 (LPAREN)? select_statement_subquery (RPAREN)? 
;

table_spec:
	   (database_name  DOT)? table_name
;


// displayed_column
displayed_column :
       ASTERISK
    | (column_spec (alias)? )
	| ( expression (alias)? )
;


// insert

insert_statement:
		insert_header
    	(column_list)?
    	(select_expression | value_list_clause)
;

insert_header:
	INSERT
	(INTO)? table_spec
//	(partition_clause)?
;

value_list_clause:	(VALUES | VALUE) value_list ;

value_list:
    LPAREN value_name (COMMA value_name )* RPAREN
;

column_value_list:	LPAREN bit_expr (COMMA bit_expr )* RPAREN ;

set_columns_cluase:	SET set_column_cluase ( COMMA set_column_cluase )*;

set_column_cluase:	column_spec EQ expression ;



// create databases
create_database_statement:
	 (DATABASE | SCHEMA) (IF NOT EXISTS)? database_name  (SERVER ALIAS server_alias_name)?
;


// create table
create_table_statement:
	 (TEMPORARY)? (EXTERNAL)? (TABLE | VIEW) (IF NOT EXISTS)?  table_spec  (create_table_spec)?
;

create_table_spec:
        AS select_statement
     |  LPAREN create_definition ( COMMA create_definition )* RPAREN (COMMENT TEXT_STRING)?  (AS select_statement)?
	 | (LPAREN)? LIKE table_spec (RPAREN)?
;

create_definition:
	  (  column_name column_definition  )
;

column_definition:
	column_data_type_header
	(COMMENT TEXT_STRING)?
;


null_or_notnull:
	  CNULL
	| NOT CNULL
;

column_data_type_header:
	  (  TINYINT(LPAREN length RPAREN)?  (null_or_notnull)? )
	| (  SMALLINT(LPAREN length RPAREN)?  (null_or_notnull)? )
	| (  INT(LPAREN length RPAREN)?   (null_or_notnull)? )
	| (  BIGINT(LPAREN length RPAREN)?   (null_or_notnull)? )
	| (  DOUBLE(LPAREN length COMMA number_literal RPAREN)?  (null_or_notnull)? )
	| (  FLOAT(LPAREN length COMMA number_literal RPAREN)?  (null_or_notnull)? )
	| (  DECIMAL(LPAREN length( COMMA number_literal)? RPAREN)?  (null_or_notnull)? )
	| (  DATE (null_or_notnull)?  )
	| (  TIMESTAMP (null_or_notnull)? )
	| (  DATETIME (null_or_notnull)? )
	| (  VARCHAR LPAREN varchar_length RPAREN  (null_or_notnull)? )
	| (  BINARY  (LPAREN binary_length RPAREN)? (null_or_notnull)? )
	| (  BOOLEAN (null_or_notnull)?  )
;

index_column_name:
	column_name (LPAREN INTEGER_NUM RPAREN)? (ASC | DESC)?
;


length	:	INTEGER_NUM;
varchar_length :    INTEGER_NUM;
binary_length :     INTEGER_NUM;


// alter database
/*
alter_database_statements:
    ALTER DATABASE database_name CHARACTER SET charset_name
;
*/

// alter table
alter_table_statement:
	ALTER TABLE table_spec
	( alter_table_specification (COMMA alter_table_specification)* )?
;

alter_table_specification:
	   RENAME TO table_spec
	|  CHANGE (COLUMN)? column_name column_name
;

index_column_names:
	index_column_name (COMMA index_column_name)*;

index_type:
	USING ( HASH)
;

index_option:
	   index_type
	| ( COMMENT TEXT_STRING )
;

column_definitions:
	column_name column_definition (COMMA column_name column_definition)*
;


rename_table_statement:
	RENAME TABLE
	table_spec TO table_spec
	(COMMA table_spec TO table_spec)*
;


// drop database
drop_database_statement:
	DROP (DATABASE | SCHEMA) (IF EXISTS)? database_name
;

// drop table
drop_table_statement:
	  DROP (TABLE | VIEW) (IF EXISTS)? table_spec
	| TRUNCATE TABLE  table_spec
;

// drop view
drop_view_statement:
	DROP VIEW (IF EXISTS)? table_spec
;




// drop_uder_statement
drop_user_statement:
    DROP
    USER
    user_name
;

// create view
create_view_statement:
	CREATE  create_view_body
;
create_view_body:
	VIEW (database_name DOT)? view_name (IF NOT EXISTS)? ( column_list )?
	AS select_statement
;

// alter view
alter_view_statement:
	ALTER create_view_body
;


// create_event_statement
create_user_statement:
	 USER user_name IDENTIFIED BY TEXT_STRING
;


// grant_event_statement
grant_privilege_statement:
       GRANT
       priv_type (COMMA priv_type)*
       ON (database_name|ASTERISK) (DOT (table_name|ASTERISK))?
       TO principal_specification (COMMA principal_specification)*
       (WITH GRANT OPTION)?
;

principal_specification:
        (USER)? user_name
;


// revoke_event_statement
revoke_privilege_statement:
      REVOKE (GRANT OPTION FOR)?
      priv_type (COMMA priv_type)*
      ON (database_name|ASTERISK) (DOT (table_name|ASTERISK))?
      FROM principal_specification ( COMMA principal_specification)*
;


// show_event_statement
show_event_statement:
      SHOW show_specification;

show_specification:
         CREATE (TABLE | VIEW) table_spec
       | COLUMNS FROM table_spec
       | (DATABASES | SCHEMAS) (LIKE TEXT_STRING)?
       | TABLES (IN database_name)? (TEXT_STRING)?
       | GRANT (principal_name | principal_specification)? ON (ALL | (TABLE)? table_spec)
       | SERVER ALIASES
     //  | VARIABLES LIKE TEXT_STRING    charset
;


// set_database_statement
set_event_statement:
     SET TABLE table_spec TO server_alias_name DOT database_name
;


// use_database_statement
use_event_statement:
    USE database_name
;

// service_event_statement
server_event_statement:
    SERVER ALIAS server_alias_name
;

// update_statement
update_statements:
        UPDATE table_spec  set_columns_cluase where_clause
;

// delete_statements
delete_statements:
    DELETE FROM table_spec (where_clause)?
;


// expression statement
expression:	    (NOT)? exp_factor1 ( ( OR | XOR | AND ) exp_factor1 )* ;

exp_factor1:	bool_primary ( IS ( boolean_literal | null_or_notnull ) )? ;

bool_primary:
          predicate 
		  | (LPAREN)* predicate relational_op  predicate_quote (RPAREN)*
		  | (LPAREN)* predicate predicate_exp (RPAREN)*
;

predicate_quote:	bit_expr_quote (predicate_exp_quote)? ;

predicate_exp_quote:
         IN ( subquery | column_value_list )
       | BETWEEN bit_expr AND bit_expr
       | (NOT)?( LIKE | RLIKE ) (LPAREN)* simple_expr_quote (RPAREN)*
;

bit_expr_quote:
	factor1_quote (( VERTBAR | BITAND | PLUS | MINUS ) (factor1_quote | interval_expr))? ;
	
factor1_quote:
	factor2_quote (( PLUS | MINUS | ASTERISK | DIVIDE | MOD | POWER_OP ) factor2_quote )* ;
	
factor2_quote:	(LPAREN)* simple_expr_quote  (RPAREN)*;

simple_expr_quote:
	 // literal_value
	  column_spec_quote
	| function_call
	| case_when_statement
//	| expression_list
//	| raw_expression_list
	| (NOT)? (EXISTS)? subquery 
//	| interval_expr
;

column_spec_quote:
        ( table_spec DOT )? (column_name_quote)
;

column_name_quote: any_name_quote;

any_name_quote: 
//  (SYSTEM_VAR)?keyword		// fix @@version
 | number_literal
 | string_literal
 | function_call
 | HEX_DIGIT  				//fix concat(0x5e5e5e,user(),0x5e5e5e)
 ;





/*
bool_primary_exp:
           predicate
        |  subquery
;
*/


/*

bool_primary:
	  ( predicate relational_op predicate )
	| ( predicate relational_op ( ALL )? subquery )
	| ( NOT? EXISTS subquery )
	| predicate
;
*/



predicate:
	   bit_expr (predicate_exp)?
;

predicate_exp:
         IN ( subquery | column_value_list )
       | BETWEEN bit_expr AND bit_expr
       | (NOT)? ( LIKE | RLIKE ) (LPAREN)* simple_expr (RPAREN)*
;

bit_expr:
	factor1 (( VERTBAR | BITAND | PLUS | MINUS ) (factor1 | interval_expr))? ;

factor1:
	factor2 (( PLUS | MINUS | ASTERISK | DIVIDE | MOD | POWER_OP ) factor2 )* ;

factor2:
	 (LPAREN)* simple_expr (RPAREN)*;


simple_expr:
	 // literal_value
	  column_spec
	| function_call
	| case_when_statement
	| expression_list
//	| raw_expression_list
	| (NOT)? (EXISTS)? subquery
	| interval_expr
;


function_call:
	    (UNQUOTE)? functionList (UNQUOTE)? ( LPAREN (expression ( COMMA expression ) * )?  RPAREN )? (relational_op number_literal)?
	|   CAST LPAREN expression AS cast_data_type RPAREN
    |   group_functions LPAREN ( ALL | DISTINCT )?  (ASTERISK | bit_expr) RPAREN    //fix count(*)
;

case_when_statement:
     CASE (column_name)?
     ( WHEN expression THEN simple_expr )+
     ( ELSE expression )?
      END (alias)?
;

column_spec:
        ( table_spec DOT )? (ASTERISK |column_name)
;

expression_list:
	LPAREN expression ( COMMA expression )* RPAREN ;


interval_expr:
	INTERVAL expression interval_unit
;





// JOIN Syntax
table_references:
        table_reference ( COMMA table_reference )*
;

table_reference:
    table_atom  ( (CROSS | INNER | LEFT | RIGHT| FULL)? (OUTER)? JOIN table_atom (join_condition)? )*
;


table_atom:
	  ( table_spec (alias)?)
	| ( LPAREN  subquery (alias)?  ( where_clause )?  ( groupby_clause )? ( having_clause )? RPAREN) (alias)?       //here subquery can be seen as "table name"
;

join_condition:
	  ON expression
;
index_hint_list:
	index_hint (COMMA index_hint)*
;
index_options:
	(INDEX | KEY) (  FOR ((JOIN) | (ORDER BY) | (GROUP BY))  )?
;
index_hint:
	  USE    index_options LPAREN (index_list)? RPAREN
	| IGNORE index_options LPAREN index_list RPAREN
;
index_list:
	index_name (COMMA index_name)*
;
partition_clause:
	PARTITION LPAREN partition_names RPAREN
;
partition_names:	partition_name (COMMA partition_name)* ;


keyword
 : TRUE
 | FALSE
 | ALL
 | NOT
 | LIKE
 | IF
 | EXISTS
 | ASC
 | DESC
 | BY
 | HAVING
 | WHERE
 | AS
 | SELECT
 | DISTINCT
 | INSERT
 | OVERWRITE
 | OUTER
 | UNIQUEJOIN
 | PRESERVE
 | JOIN
 | LEFT
 | RIGHT
 | FULL
 | ON
 | PARTITION
 | PARTITIONS
 | TABLE
 | TABLES
 | COLUMNS
 | INDEX
 | INDEXES
 | REBUILD
 | FUNCTIONS
 | SHOW
 | MSCK
 | REPAIR
 | DIRECTORY
 | LOCAL
 | TRANSFORM
 | USING
 | CLUSTER
 | DISTRIBUTE
 | SORT
 | UNION
 | LOAD
 | EXPORT
 | IMPORT
 | DATA
 | INPATH
 | IS
 | CNULL
 | CREATE
 | EXTERNAL
 | ALTER
 | CHANGE
 | COLUMN
 | FIRST
 | AFTER
 | DESCRIBE
 | DROP
 | RENAME
 | IGNORE
 | PROTECTION
 | TO
 | COMMENT
 | BOOLEAN
 | TINYINT
 | SMALLINT
 | INT
 | BIGINT
 | FLOAT
 | DOUBLE
 | DATE
 | DATETIME
 | TIMESTAMP
 | DECIMAL
 | STRING
 | VARCHAR
 | ARRAY
 | STRUCT
 | MAP
 | UNIONTYPE
 | REDUCE
 | PARTITIONED
 | CLUSTERED
 | SORTED
 | INTO
 | BUCKETS
 | ROW
 | ROWS
 | FORMAT
 | DELIMITED
 | FIELDS
 | TERMINATED
 | ESCAPED
 | COLLECTION
 | ITEMS
 | KEYS
 | KEY
 | LINES
 | STORED
 | FILEFORMAT
 | SEQUENCEFILE
 | TEXTFILE
 | RCFILE
 | ORCFILE
 | INPUTFORMAT
 | OUTPUTFORMAT
 | INPUTDRIVER
 | OUTPUTDRIVER
 | OFFLINE
 | ENABLE
 | DEFAULT
 | DISABLE
 | READONLY
 | LOCATION
 | TABLESAMPLE
 | BUCKET
 | OUT
 | OF
 | PERCENT
 | CAST
 | ADD
 | REPLACE
 | RLIKE
 | REGEXP
 | TEMPORARY
 | FUNCTION
 | MACRO
 | EXPLAIN
 | EXTENDED
 | FORMATTED
 | PRETTY
 | DEPENDENCY
 | LOGICAL
 | SERDE
 | WITH
 | DEFERRED
 | SERDEPROPERTIES
 | DBPROPERTIES
 | LIMIT
 | SET
 | UNSET
 | TBLPROPERTIES
 | IDXPROPERTIES
 | CASCADED
 | THEN
 | ELSE
 | END
 | MAPJOIN
 | STREAMTABLE
 | CLUSTERSTATUS
 | UTC
 | LONG
 | DELETE
 | FETCH
 | INTERSECT
 | VIEW
 | IN
 | DATABASE
 | DATABASES
 | MATERIALIZED
 | SCHEMA
 | SCHEMAS
 | GRANT
 | REVOKE
 | SSL
 | UNDO
 | LOCK
 | LOCKS
 | UNLOCK
 | SHARED
 | EXCLUSIVE
 | PROCEDURE
 | UNSIGNED
 | WHILE
 | READ
 | READS
 | PURGE
 | RANGE
 | ANALYZE
 | BEFORE
 | BETWEEN
 | BOTH
 | BINARY
 | CROSS
 | CONTINUE
 | CURSOR
 | TRIGGER
 | RECORDREADER
 | RECORDWRITER
 | LATERAL
 | TOUCH
 | ARCHIVE
 | UNARCHIVE
 | COMPUTE
 | STATISTICS
 | USE
 | OPTION
 | CONCATENATE
 | UPDATE
 | RESTRICT
 | CASCADE
 | SKEWED
 | ROLLUP
 | CUBE
 | DIRECTORIES
 | FOR
 | WINDOW
 | UNBOUNDED
 | PRECEDING
 | FOLLOWING
 | CURRENT
 | LESS
 | MORE
 | OVER
 | GROUPING
 | SETS
 | TRUNCATE
 | NOSCAN
 | PARTIALSCAN
 | USER
 | ROLE
 | INNER
 | EXCHANGE
 | IDENTIFIED
 | CHAR
 | ABS
 | ACOS
 | ASIN
 | ATAN
 | CEIL
 | COS
 | COT
 | EXP
 | FLOOR
 | LN
 | POW
 | RAND
 | ROUND
 | SIN
 | SQRT
 | TAN
 | LCASE
 | LOWER
 | LTRIM
 | RTRIM
 | CONCAT
 | SUBSTR
 | TRIM
 | UCASE
 | UPPER
 | INTERVAL
 | TO_DATE
 | DAY
 | HOUR
 | MINUTE
 | MONTH
 | SECOND
 | FROM_UNIXTIME
 | YEAR
 | DATE_ADD
 | DATE_SUB
 | COLLATE
 | AVG
 | COUNT
 | MAX
 | MIN
 | SUM
 | COALESCE
 | DUPLICATE
 | SERVER
 | ALIASES
 | ALIAS
 | VALUES
 | VALUE
 | LOW_PRIORITY
 | HIGH_PRIORITY
 | HASH
 | REFERENCES
 | TO_CHAR
 | DATE_FORMAT
 | SIGNED
 | INTEGER
 | LENGTH
 | REVERSE
 | IFNULL
 | DIVIDE
 | MOD
 | OR
 | AND
 | XOR
 | ARROW
 | EQ
 | NOT_EQ
 | LET
 | GET
 | SET_VAR
 | SHIFT_LEFT
 | SHIFT_RIGHT
 | CASE
 | WHEN
 | END
 | CHARACTER
 | HEX
 | CONV
 | VERSION
 ;
 
delimited_statement:
    Regex_Escaped_Unicode
;


// data type definition ------------------------------------------------------------------------------
integer_types:
| TINYINT
| SMALLINT
| INT
| BIGINT
| BOOLEAN
| FLOAT
| DOUBLE
| DATE
| TIMESTAMP
| VARCHAR
| BINARY
| DECIMAL
;






// basic type definition -----------------------------------------------------------------------
relational_op:
	EQ | LTH | GTH | NOT_EQ | LET | GET  ;

/*charset_name:
	  ARMSCII8
	| ASCII
	| BIG5
	| BINARY
	| CP1250
	| CP1251
	| CP1256
	| CP1257
	| CP850
	| CP852
	| CP866
	| CP932
	| DEC8
	| EUCJPMS
	| EUCKR
	| GB2312
	| GBK
	| GEOSTD8
	| GREEK
	| HEBREW
	| HP8
	| KEYBCS2
	| KOI8R
	| KOI8U
	| LATIN1
	| LATIN2
	| LATIN5
	| LATIN7
	| MACCE
	| MACROMAN
	| SJIS
	| SWE7
	| TIS620
	| UCS2
	| UJIS
	| UTF8
;
*/

cast_data_type:
	BINARY (INTEGER_NUM)?
	| CHAR (INTEGER_NUM)?
	| DATE
	| DATETIME
	| DECIMAL (LPAREN INTEGER_NUM (COMMA INTEGER_NUM)? RPAREN )?
	| SIGNED (INTEGER)?
	| UNSIGNED (INTEGER)?
;



interval_unit:
	  SECOND
	| MINUTE
	| HOUR
	| DAY
	| MONTH
	| YEAR
/*
	| WEEK
	| QUARTER
	| SECOND_MICROSECOND
	| MINUTE_MICROSECOND
	| MINUTE_SECOND
	| HOUR_MICROSECOND
	| HOUR_SECOND
	| HOUR_MINUTE
	| DAY_MICROSECOND
	| DAY_SECOND
	| DAY_MINUTE
	| DAY_HOUR
	| YEAR_MONTH */
;

/*
collation_names:
	LATIN1_GENERAL_CS | LATIN1_BIN
;
*/

// basic const data definition ---------------------------------------------------------------
string_literal:		TEXT_STRING ;
number_literal:		(PLUS | MINUS)? (INTEGER_NUM | REAL_NUMBER) ;

//date_time_literal---------------------------------------------------------------------------
hex_literal:		HEX_DIGIT;
boolean_literal:	TRUE | FALSE ;
//bit_literal:		BIT_NUM;

literal_value:
        ( string_literal | number_literal | hex_literal | boolean_literal  ) ;  /*bit_literal*/


// function defintion -------------------------------------------------------------------------
functionList:
	  number_functions
	| char_functions
	| time_functions
	| other_functions
	| group_functions
	| sensitive_functions
;

number_functions:
	  ABS
	| ACOS
	| ASIN
	| ATAN
	| CEIL
	| COS
	| COT
	| EXP
	| FLOOR
	| LN
	| POW
	| RAND
	| ROUND
	| SIN
	| SQRT
	| TAN
;

char_functions:
	  LCASE
	| LOWER
	| LTRIM
	| RTRIM
	| CONCAT
	| SUBSTR
	| TRIM
	| UCASE
	| UPPER
	| TO_CHAR
	| LENGTH
	| REVERSE
	| HEX
	| CONV
	| CHAR
	| UNHEX
	| SUBSTRING
	| LOCATE
;

time_functions:
	  TO_DATE
	| DAY
	| HOUR
	| MINUTE
	| MONTH
	| SECOND
	| FROM_UNIXTIME
	| YEAR
	| DATE_ADD
	| DATE_SUB
	| DATE_FORMAT
	| NOW
	| SYSDATE
;

other_functions:
     COALESCE
    |IFNULL
	| NULLIF
	| ISNULL
;

group_functions:
      AVG
	| COUNT
	| MAX
	| MIN
	| SUM
;

sensitive_functions:
	  SLEEP
	| BENCHMARK
	| UPDATEXML
	| EXTRACTVALUE
	| LOAD_FILE
	| DATABASE
	| SCHEMA
	| USER
	| SYSTEM_USER
	| SESSION_USER
	| CURRENT_USER
	| PROCEDURE ANALYSE
	| MD5
	| IF
	| ASCII
	| MID
	| ORD
	| INSTR
	| CONCAT_WS
	| GROUP_CONCAT
	| VERSION
;



// identifiers
schema_name			: any_name;
database_name      : any_name ;
table_name			: any_name ;
engine_name			: any_name ;
column_name			: any_name ;
value_name          : any_name ;
view_name			: any_name ;
parser_name			: any_name ;
index_name			: any_name ;
partition_name			: any_name ;
partition_logical_name		: any_name ;
constraintbol_name		: any_name ;
foreign_keybol_name		: any_name ;
collation_name			: any_name ;
event_name			: any_name ;
user_name			: any_name ;
function_name			: any_name ;
procedure_name			: any_name ;
server_name			: any_name ;
wrapper_name			: any_name ;
alias				: ( AS )? alias_name ;
password            : any_name ;
server_alias_name        : any_name ;
role_name           : any_name ;
group_name          : any_name ;
principal_name      : any_name ;


any_name
 : ID
 | (SYSTEM_VAR)? keyword  //fix @@version
 | number_literal
 | string_literal
 | function_call	//column name eg£ºcount(*)
 | HEX_DIGIT  				//fix concat(0x5e5e5e,user(),0x5e5e5e)
 ;

alias_name:
      ID
    | keyword
    | string_literal
;



// priv_type
priv_type:
      INSERT
    | SELECT
    | UPDATE
    | DELETE
    | ALTER
    | DROP
    | CREATE
    | ALL
;
