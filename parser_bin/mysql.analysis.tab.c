/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "mysql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/time.h>

void yyerror(char *s, ...);
#define emit(args, ...)
#define free(pointer)


#line 83 "mysql.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "mysql.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_RISK_FUNCTION = 4,              /* RISK_FUNCTION  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_INTNUM = 6,                     /* INTNUM  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 8,                  /* APPROXNUM  */
  YYSYMBOL_USERVAR = 9,                    /* USERVAR  */
  YYSYMBOL_ASSIGN = 10,                    /* ASSIGN  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_XOR = 12,                       /* XOR  */
  YYSYMBOL_ANDOP = 13,                     /* ANDOP  */
  YYSYMBOL_IN = 14,                        /* IN  */
  YYSYMBOL_IS = 15,                        /* IS  */
  YYSYMBOL_LIKE = 16,                      /* LIKE  */
  YYSYMBOL_REGEXP = 17,                    /* REGEXP  */
  YYSYMBOL_NOT = 18,                       /* NOT  */
  YYSYMBOL_19_ = 19,                       /* '!'  */
  YYSYMBOL_BETWEEN = 20,                   /* BETWEEN  */
  YYSYMBOL_COMPARISON = 21,                /* COMPARISON  */
  YYSYMBOL_22_ = 22,                       /* '|'  */
  YYSYMBOL_23_ = 23,                       /* '&'  */
  YYSYMBOL_SHIFT = 24,                     /* SHIFT  */
  YYSYMBOL_25_ = 25,                       /* '+'  */
  YYSYMBOL_26_ = 26,                       /* '-'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_29_ = 29,                       /* '%'  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_31_ = 31,                       /* '^'  */
  YYSYMBOL_UMINUS = 32,                    /* UMINUS  */
  YYSYMBOL_ADD = 33,                       /* ADD  */
  YYSYMBOL_ALL = 34,                       /* ALL  */
  YYSYMBOL_ALTER = 35,                     /* ALTER  */
  YYSYMBOL_ANALYZE = 36,                   /* ANALYZE  */
  YYSYMBOL_AND = 37,                       /* AND  */
  YYSYMBOL_ANY = 38,                       /* ANY  */
  YYSYMBOL_AS = 39,                        /* AS  */
  YYSYMBOL_ASC = 40,                       /* ASC  */
  YYSYMBOL_AUTO_INCREMENT = 41,            /* AUTO_INCREMENT  */
  YYSYMBOL_BEFORE = 42,                    /* BEFORE  */
  YYSYMBOL_BIGINT = 43,                    /* BIGINT  */
  YYSYMBOL_BINARY = 44,                    /* BINARY  */
  YYSYMBOL_BIT = 45,                       /* BIT  */
  YYSYMBOL_BLOB = 46,                      /* BLOB  */
  YYSYMBOL_BOTH = 47,                      /* BOTH  */
  YYSYMBOL_BY = 48,                        /* BY  */
  YYSYMBOL_CALL = 49,                      /* CALL  */
  YYSYMBOL_CASCADE = 50,                   /* CASCADE  */
  YYSYMBOL_CASE = 51,                      /* CASE  */
  YYSYMBOL_CHANGE = 52,                    /* CHANGE  */
  YYSYMBOL_CHAR = 53,                      /* CHAR  */
  YYSYMBOL_CHECK = 54,                     /* CHECK  */
  YYSYMBOL_COLLATE = 55,                   /* COLLATE  */
  YYSYMBOL_COLUMN = 56,                    /* COLUMN  */
  YYSYMBOL_COMMENT = 57,                   /* COMMENT  */
  YYSYMBOL_CONDITION = 58,                 /* CONDITION  */
  YYSYMBOL_CONSTRAINT = 59,                /* CONSTRAINT  */
  YYSYMBOL_CONTINUE = 60,                  /* CONTINUE  */
  YYSYMBOL_CONVERT = 61,                   /* CONVERT  */
  YYSYMBOL_CREATE = 62,                    /* CREATE  */
  YYSYMBOL_CROSS = 63,                     /* CROSS  */
  YYSYMBOL_CURRENT_DATE = 64,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 65,              /* CURRENT_TIME  */
  YYSYMBOL_CURRENT_TIMESTAMP = 66,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CURRENT_USER = 67,              /* CURRENT_USER  */
  YYSYMBOL_CURSOR = 68,                    /* CURSOR  */
  YYSYMBOL_DATABASE = 69,                  /* DATABASE  */
  YYSYMBOL_DATABASES = 70,                 /* DATABASES  */
  YYSYMBOL_DATE = 71,                      /* DATE  */
  YYSYMBOL_DATETIME = 72,                  /* DATETIME  */
  YYSYMBOL_DAY_HOUR = 73,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 74,           /* DAY_MICROSECOND  */
  YYSYMBOL_DAY_MINUTE = 75,                /* DAY_MINUTE  */
  YYSYMBOL_DAY_SECOND = 76,                /* DAY_SECOND  */
  YYSYMBOL_DECIMAL = 77,                   /* DECIMAL  */
  YYSYMBOL_DECLARE = 78,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 79,                   /* DEFAULT  */
  YYSYMBOL_DELAYED = 80,                   /* DELAYED  */
  YYSYMBOL_DELETE = 81,                    /* DELETE  */
  YYSYMBOL_DESC = 82,                      /* DESC  */
  YYSYMBOL_DESCRIBE = 83,                  /* DESCRIBE  */
  YYSYMBOL_DETERMINISTIC = 84,             /* DETERMINISTIC  */
  YYSYMBOL_DISTINCT = 85,                  /* DISTINCT  */
  YYSYMBOL_DISTINCTROW = 86,               /* DISTINCTROW  */
  YYSYMBOL_DIV = 87,                       /* DIV  */
  YYSYMBOL_DOUBLE = 88,                    /* DOUBLE  */
  YYSYMBOL_DROP = 89,                      /* DROP  */
  YYSYMBOL_DUAL = 90,                      /* DUAL  */
  YYSYMBOL_EACH = 91,                      /* EACH  */
  YYSYMBOL_ELSE = 92,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 93,                    /* ELSEIF  */
  YYSYMBOL_END = 94,                       /* END  */
  YYSYMBOL_ENUM = 95,                      /* ENUM  */
  YYSYMBOL_EXIT = 96,                      /* EXIT  */
  YYSYMBOL_EXPLAIN = 97,                   /* EXPLAIN  */
  YYSYMBOL_FETCH = 98,                     /* FETCH  */
  YYSYMBOL_FLOAT = 99,                     /* FLOAT  */
  YYSYMBOL_FOR = 100,                      /* FOR  */
  YYSYMBOL_FORCE = 101,                    /* FORCE  */
  YYSYMBOL_FOREIGN = 102,                  /* FOREIGN  */
  YYSYMBOL_FROM = 103,                     /* FROM  */
  YYSYMBOL_FULLTEXT = 104,                 /* FULLTEXT  */
  YYSYMBOL_GRANT = 105,                    /* GRANT  */
  YYSYMBOL_GROUP = 106,                    /* GROUP  */
  YYSYMBOL_HAVING = 107,                   /* HAVING  */
  YYSYMBOL_HIGH_PRIORITY = 108,            /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_MICROSECOND = 109,         /* HOUR_MICROSECOND  */
  YYSYMBOL_HOUR_MINUTE = 110,              /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_SECOND = 111,              /* HOUR_SECOND  */
  YYSYMBOL_IF = 112,                       /* IF  */
  YYSYMBOL_IGNORE = 113,                   /* IGNORE  */
  YYSYMBOL_INFILE = 114,                   /* INFILE  */
  YYSYMBOL_INDEX = 115,                    /* INDEX  */
  YYSYMBOL_INNER = 116,                    /* INNER  */
  YYSYMBOL_INOUT = 117,                    /* INOUT  */
  YYSYMBOL_INSENSITIVE = 118,              /* INSENSITIVE  */
  YYSYMBOL_INSERT = 119,                   /* INSERT  */
  YYSYMBOL_INT = 120,                      /* INT  */
  YYSYMBOL_INTEGER = 121,                  /* INTEGER  */
  YYSYMBOL_INTERVAL = 122,                 /* INTERVAL  */
  YYSYMBOL_INTO = 123,                     /* INTO  */
  YYSYMBOL_ITERATE = 124,                  /* ITERATE  */
  YYSYMBOL_JOIN = 125,                     /* JOIN  */
  YYSYMBOL_KEY = 126,                      /* KEY  */
  YYSYMBOL_KEYS = 127,                     /* KEYS  */
  YYSYMBOL_KILL = 128,                     /* KILL  */
  YYSYMBOL_LEADING = 129,                  /* LEADING  */
  YYSYMBOL_LEAVE = 130,                    /* LEAVE  */
  YYSYMBOL_LEFT = 131,                     /* LEFT  */
  YYSYMBOL_LIMIT = 132,                    /* LIMIT  */
  YYSYMBOL_LINES = 133,                    /* LINES  */
  YYSYMBOL_LOAD = 134,                     /* LOAD  */
  YYSYMBOL_LOCALTIME = 135,                /* LOCALTIME  */
  YYSYMBOL_LOCALTIMESTAMP = 136,           /* LOCALTIMESTAMP  */
  YYSYMBOL_LOCK = 137,                     /* LOCK  */
  YYSYMBOL_LONG = 138,                     /* LONG  */
  YYSYMBOL_LONGBLOB = 139,                 /* LONGBLOB  */
  YYSYMBOL_LONGTEXT = 140,                 /* LONGTEXT  */
  YYSYMBOL_LOOP = 141,                     /* LOOP  */
  YYSYMBOL_LOW_PRIORITY = 142,             /* LOW_PRIORITY  */
  YYSYMBOL_MATCH = 143,                    /* MATCH  */
  YYSYMBOL_MEDIUMBLOB = 144,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 145,                /* MEDIUMINT  */
  YYSYMBOL_MEDIUMTEXT = 146,               /* MEDIUMTEXT  */
  YYSYMBOL_MINUTE_MICROSECOND = 147,       /* MINUTE_MICROSECOND  */
  YYSYMBOL_MINUTE_SECOND = 148,            /* MINUTE_SECOND  */
  YYSYMBOL_MODIFIES = 149,                 /* MODIFIES  */
  YYSYMBOL_NATURAL = 150,                  /* NATURAL  */
  YYSYMBOL_NO_WRITE_TO_BINLOG = 151,       /* NO_WRITE_TO_BINLOG  */
  YYSYMBOL_NULLX = 152,                    /* NULLX  */
  YYSYMBOL_NUMBER = 153,                   /* NUMBER  */
  YYSYMBOL_ON = 154,                       /* ON  */
  YYSYMBOL_ONDUPLICATE = 155,              /* ONDUPLICATE  */
  YYSYMBOL_OPTIMIZE = 156,                 /* OPTIMIZE  */
  YYSYMBOL_OPTION = 157,                   /* OPTION  */
  YYSYMBOL_OPTIONALLY = 158,               /* OPTIONALLY  */
  YYSYMBOL_ORDER = 159,                    /* ORDER  */
  YYSYMBOL_OUT = 160,                      /* OUT  */
  YYSYMBOL_OUTER = 161,                    /* OUTER  */
  YYSYMBOL_OUTFILE = 162,                  /* OUTFILE  */
  YYSYMBOL_PRECISION = 163,                /* PRECISION  */
  YYSYMBOL_PRIMARY = 164,                  /* PRIMARY  */
  YYSYMBOL_PROCEDURE = 165,                /* PROCEDURE  */
  YYSYMBOL_PURGE = 166,                    /* PURGE  */
  YYSYMBOL_QUICK = 167,                    /* QUICK  */
  YYSYMBOL_READ = 168,                     /* READ  */
  YYSYMBOL_READS = 169,                    /* READS  */
  YYSYMBOL_REAL = 170,                     /* REAL  */
  YYSYMBOL_REFERENCES = 171,               /* REFERENCES  */
  YYSYMBOL_RELEASE = 172,                  /* RELEASE  */
  YYSYMBOL_RENAME = 173,                   /* RENAME  */
  YYSYMBOL_REPEAT = 174,                   /* REPEAT  */
  YYSYMBOL_REPLACE = 175,                  /* REPLACE  */
  YYSYMBOL_REQUIRE = 176,                  /* REQUIRE  */
  YYSYMBOL_RESTRICT = 177,                 /* RESTRICT  */
  YYSYMBOL_RETURN = 178,                   /* RETURN  */
  YYSYMBOL_REVOKE = 179,                   /* REVOKE  */
  YYSYMBOL_RIGHT = 180,                    /* RIGHT  */
  YYSYMBOL_ROLLUP = 181,                   /* ROLLUP  */
  YYSYMBOL_SCHEMA = 182,                   /* SCHEMA  */
  YYSYMBOL_SCHEMAS = 183,                  /* SCHEMAS  */
  YYSYMBOL_SECOND_MICROSECOND = 184,       /* SECOND_MICROSECOND  */
  YYSYMBOL_SELECT = 185,                   /* SELECT  */
  YYSYMBOL_SENSITIVE = 186,                /* SENSITIVE  */
  YYSYMBOL_SEPARATOR = 187,                /* SEPARATOR  */
  YYSYMBOL_SET = 188,                      /* SET  */
  YYSYMBOL_SHOW = 189,                     /* SHOW  */
  YYSYMBOL_SMALLINT = 190,                 /* SMALLINT  */
  YYSYMBOL_SOME = 191,                     /* SOME  */
  YYSYMBOL_SONAME = 192,                   /* SONAME  */
  YYSYMBOL_SPATIAL = 193,                  /* SPATIAL  */
  YYSYMBOL_SPECIFIC = 194,                 /* SPECIFIC  */
  YYSYMBOL_SQL = 195,                      /* SQL  */
  YYSYMBOL_SQLEXCEPTION = 196,             /* SQLEXCEPTION  */
  YYSYMBOL_SQLSTATE = 197,                 /* SQLSTATE  */
  YYSYMBOL_SQLWARNING = 198,               /* SQLWARNING  */
  YYSYMBOL_SQL_BIG_RESULT = 199,           /* SQL_BIG_RESULT  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 200,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_SMALL_RESULT = 201,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SSL = 202,                      /* SSL  */
  YYSYMBOL_STARTING = 203,                 /* STARTING  */
  YYSYMBOL_STRAIGHT_JOIN = 204,            /* STRAIGHT_JOIN  */
  YYSYMBOL_TABLE = 205,                    /* TABLE  */
  YYSYMBOL_TEMPORARY = 206,                /* TEMPORARY  */
  YYSYMBOL_TERMINATED = 207,               /* TERMINATED  */
  YYSYMBOL_TEXT = 208,                     /* TEXT  */
  YYSYMBOL_THEN = 209,                     /* THEN  */
  YYSYMBOL_TIME = 210,                     /* TIME  */
  YYSYMBOL_TIMESTAMP = 211,                /* TIMESTAMP  */
  YYSYMBOL_TINYBLOB = 212,                 /* TINYBLOB  */
  YYSYMBOL_TINYINT = 213,                  /* TINYINT  */
  YYSYMBOL_TINYTEXT = 214,                 /* TINYTEXT  */
  YYSYMBOL_TO = 215,                       /* TO  */
  YYSYMBOL_TRAILING = 216,                 /* TRAILING  */
  YYSYMBOL_TRIGGER = 217,                  /* TRIGGER  */
  YYSYMBOL_UNDO = 218,                     /* UNDO  */
  YYSYMBOL_UNION = 219,                    /* UNION  */
  YYSYMBOL_UNIQUE = 220,                   /* UNIQUE  */
  YYSYMBOL_UNLOCK = 221,                   /* UNLOCK  */
  YYSYMBOL_UNSIGNED = 222,                 /* UNSIGNED  */
  YYSYMBOL_UPDATE = 223,                   /* UPDATE  */
  YYSYMBOL_USAGE = 224,                    /* USAGE  */
  YYSYMBOL_USE = 225,                      /* USE  */
  YYSYMBOL_USING = 226,                    /* USING  */
  YYSYMBOL_UTC_DATE = 227,                 /* UTC_DATE  */
  YYSYMBOL_UTC_TIME = 228,                 /* UTC_TIME  */
  YYSYMBOL_UTC_TIMESTAMP = 229,            /* UTC_TIMESTAMP  */
  YYSYMBOL_VALUES = 230,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 231,                /* VARBINARY  */
  YYSYMBOL_VARCHAR = 232,                  /* VARCHAR  */
  YYSYMBOL_VARYING = 233,                  /* VARYING  */
  YYSYMBOL_WHEN = 234,                     /* WHEN  */
  YYSYMBOL_WHERE = 235,                    /* WHERE  */
  YYSYMBOL_WHILE = 236,                    /* WHILE  */
  YYSYMBOL_WITH = 237,                     /* WITH  */
  YYSYMBOL_WRITE = 238,                    /* WRITE  */
  YYSYMBOL_YEAR = 239,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 240,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 241,                 /* ZEROFILL  */
  YYSYMBOL_OFFSET = 242,                   /* OFFSET  */
  YYSYMBOL_ESCAPED = 243,                  /* ESCAPED  */
  YYSYMBOL_EXISTS = 244,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 245,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 246,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 247,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 248,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 249,                   /* FCOUNT  */
  YYSYMBOL_250_ = 250,                     /* ';'  */
  YYSYMBOL_251_ = 251,                     /* '.'  */
  YYSYMBOL_252_ = 252,                     /* '('  */
  YYSYMBOL_253_ = 253,                     /* ')'  */
  YYSYMBOL_254_ = 254,                     /* '{'  */
  YYSYMBOL_255_ = 255,                     /* '}'  */
  YYSYMBOL_256_ = 256,                     /* ','  */
  YYSYMBOL_257_ = 257,                     /* '`'  */
  YYSYMBOL_YYACCEPT = 258,                 /* $accept  */
  YYSYMBOL_inputstring = 259,              /* inputstring  */
  YYSYMBOL_stmt_list = 260,                /* stmt_list  */
  YYSYMBOL_sql_segment = 261,              /* sql_segment  */
  YYSYMBOL_select_after_where = 262,       /* select_after_where  */
  YYSYMBOL_expr = 263,                     /* expr  */
  YYSYMBOL_val_list = 264,                 /* val_list  */
  YYSYMBOL_opt_val_list = 265,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 266,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 267,             /* interval_exp  */
  YYSYMBOL_case_list = 268,                /* case_list  */
  YYSYMBOL_stmt = 269,                     /* stmt  */
  YYSYMBOL_select_stmt = 270,              /* select_stmt  */
  YYSYMBOL_opt_union = 271,                /* opt_union  */
  YYSYMBOL_opt_where = 272,                /* opt_where  */
  YYSYMBOL_opt_groupby = 273,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 274,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 275,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 276,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 277,               /* opt_having  */
  YYSYMBOL_opt_orderby = 278,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 279,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 280,            /* opt_into_list  */
  YYSYMBOL_column_list = 281,              /* column_list  */
  YYSYMBOL_select_opts = 282,              /* select_opts  */
  YYSYMBOL_select_expr_list = 283,         /* select_expr_list  */
  YYSYMBOL_select_expr = 284,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 285,             /* opt_as_alias  */
  YYSYMBOL_table_references = 286,         /* table_references  */
  YYSYMBOL_table_reference = 287,          /* table_reference  */
  YYSYMBOL_table_factor = 288,             /* table_factor  */
  YYSYMBOL_opt_as = 289,                   /* opt_as  */
  YYSYMBOL_join_table = 290,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 291,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 292,                /* opt_outer  */
  YYSYMBOL_left_or_right = 293,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 294,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 295,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 296,           /* join_condition  */
  YYSYMBOL_index_hint = 297,               /* index_hint  */
  YYSYMBOL_opt_for_join = 298,             /* opt_for_join  */
  YYSYMBOL_index_list = 299,               /* index_list  */
  YYSYMBOL_table_subquery = 300,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 301,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 302,              /* delete_opts  */
  YYSYMBOL_delete_list = 303,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 304,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 305,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 306,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 307,              /* insert_opts  */
  YYSYMBOL_opt_into = 308,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 309,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 310,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 311,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 312,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 313,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 314,              /* update_stmt  */
  YYSYMBOL_update_opts = 315,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 316,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 317,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 318,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 319,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 320,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 321,          /* create_col_list  */
  YYSYMBOL_create_definition = 322,        /* create_definition  */
  YYSYMBOL_323_1 = 323,                    /* $@1  */
  YYSYMBOL_column_atts = 324,              /* column_atts  */
  YYSYMBOL_opt_length = 325,               /* opt_length  */
  YYSYMBOL_opt_binary = 326,               /* opt_binary  */
  YYSYMBOL_opt_uz = 327,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 328,                  /* opt_csc  */
  YYSYMBOL_data_type = 329,                /* data_type  */
  YYSYMBOL_enum_list = 330,                /* enum_list  */
  YYSYMBOL_create_select_statement = 331,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 332,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 333,                 /* set_stmt  */
  YYSYMBOL_set_list = 334,                 /* set_list  */
  YYSYMBOL_set_expr = 335                  /* set_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  88
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2144

/* YYNTOKENS -- Number of terminals.  */
/*终结符的个数*/
#define YYNTOKENS  258
/* YYNNTS -- Number of nonterminals.  */
/*非终结符的个数*/
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
/*规约规则的数目*/
#define YYNRULES  328
/* YYNSTATES -- Number of states.  */
/*状态数*/
#define YYNSTATES  703

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   495


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
/*token索引减去非终结符的个数作为索引查找yytranslate*/
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,     2,     2,     2,    29,    23,     2,
     252,   253,    27,    25,   256,    26,   251,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   250,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    31,     2,   257,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   254,    22,   255,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    20,    21,    24,    30,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   292,   292,   293,   294,   296,   297,   298,   303,   306,
     311,   312,   313,   314,   315,   316,   317,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   342,   343,   344,
     345,   348,   349,   350,   351,   353,   356,   359,   360,   361,
     362,   363,   364,   368,   369,   373,   374,   376,   377,   378,
     380,   381,   382,   383,   384,   385,   388,   389,   393,   394,
     397,   398,   402,   403,   404,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   417,   418,   419,   420,   423,   424,
     427,   428,   431,   432,   435,   436,   437,   438,   439,   440,
     441,   442,   445,   450,   453,   455,   458,   459,   460,   463,
     464,   466,   467,   471,   473,   477,   478,   479,   482,   483,
     486,   487,   489,   490,   493,   493,   494,   495,   498,   499,
     500,   503,   504,   507,   508,   510,   512,   514,   516,   518,
     520,   522,   527,   528,   529,   532,   534,   535,   536,   539,
     540,   543,   544,   548,   549,   550,   551,   552,   553,   554,
     557,   558,   562,   564,   566,   568,   570,   574,   575,   576,
     579,   580,   583,   584,   587,   588,   589,   592,   593,   596,
     597,   601,   603,   605,   607,   610,   611,   614,   615,   618,
     623,   627,   632,   633,   634,   635,   639,   644,   645,   649,
     649,   652,   660,   663,   669,   670,   673,   674,   675,   676,
     677,   680,   680,   683,   684,   687,   688,   691,   692,   693,
     694,   696,   703,   706,   709,   712,   717,   723,   726,   732,
     738,   744,   747,   754,   755,   756,   760,   763,   766,   769,
     777,   781,   783,   787,   788,   794,   797,   801,   805,   810,
     814,   820,   825,   826,   829,   830,   833,   834,   835,   836,
     837,   840,   840,   843,   844,   845,   846,   848,   850,   852,
     854,   856,   858,   859,   860,   861,   865,   866,   867,   870,
     871,   874,   875,   876,   879,   880,   881,   885,   886,   887,
     888,   889,   890,   891,   892,   893,   894,   895,   896,   897,
     898,   899,   900,   901,   902,   903,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   917,   918,   921,
     924,   925,   926,   931,   934,   936,   936,   939,   941
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
/*记录了符号的名称，使用token类型索引可以获取对应的符号名称，比如
 * mysql.output中定义的SELECT (431)，使用431作为索引获取索引值
 * idx=yytranslate[431]，然后使用idx作为索引获取token符号名称
 * yytname[idx]，即“SELECT"
 * 索引值小于YYNTOKENS的为终结符，大于等于的则为非终结符*/
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME",
  "RISK_FUNCTION", "STRING", "INTNUM", "BOOL", "APPROXNUM", "USERVAR",
  "ASSIGN", "OR", "XOR", "ANDOP", "IN", "IS", "LIKE", "REGEXP", "NOT",
  "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'", "SHIFT", "'+'", "'-'",
  "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "ADD", "ALL", "ALTER",
  "ANALYZE", "AND", "ANY", "AS", "ASC", "AUTO_INCREMENT", "BEFORE",
  "BIGINT", "BINARY", "BIT", "BLOB", "BOTH", "BY", "CALL", "CASCADE",
  "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE", "COLUMN", "COMMENT",
  "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT", "CREATE", "CROSS",
  "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP", "CURRENT_USER",
  "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME", "DAY_HOUR",
  "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL", "DECLARE",
  "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE", "DETERMINISTIC",
  "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP", "DUAL", "EACH",
  "ELSE", "ELSEIF", "END", "ENUM", "EXIT", "EXPLAIN", "FETCH", "FLOAT",
  "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP",
  "HAVING", "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE",
  "HOUR_SECOND", "IF", "IGNORE", "INFILE", "INDEX", "INNER", "INOUT",
  "INSENSITIVE", "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE",
  "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIMIT",
  "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG",
  "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB",
  "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND",
  "MODIFIES", "NATURAL", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON",
  "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "ORDER", "OUT",
  "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "RELEASE", "RENAME",
  "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE", "RIGHT",
  "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT",
  "THEN", "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "OFFSET", "ESCAPED", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD",
  "FDATE_SUB", "FCOUNT", "';'", "'.'", "'('", "')'", "'{'", "'}'", "','",
  "'`'", "$accept", "inputstring", "stmt_list", "sql_segment",
  "select_after_where", "expr", "val_list", "opt_val_list", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_union",
  "opt_where", "opt_groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_orderby", "opt_limit",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "opt_as", "join_table", "opt_inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "opt_join_condition",
  "join_condition", "index_hint", "opt_for_join", "index_list",
  "table_subquery", "delete_stmt", "delete_opts", "delete_list",
  "opt_dot_star", "insert_stmt", "opt_ondupupdate", "insert_opts",
  "opt_into", "opt_col_names", "insert_vals_list", "insert_vals",
  "insert_asgn_list", "replace_stmt", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_table_stmt", "opt_temporary", "create_col_list",
  "create_definition", "$@1", "column_atts", "opt_length", "opt_binary",
  "opt_uz", "opt_csc", "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-546)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-321)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
/*yytable中记录了跳转状态，使用当前状态减去终结符数目，然后查找
 * yypact获取跳转状态集合在yytable中的首索引地址，该跳转状态集合中
 * 存储的是该状态对应的跳转信息*/
static const yytype_int16 yypact[] =
{
     438,    71,  -205,  -546,  -546,  -546,  -546,    51,  1094,  1094,
    1094,  1094,   645,  -196,    37,  -183,  -121,  -114,  -109,  -546,
     -99,  -546,  -546,  -546,   203,     6,   -20,   -16,    -4,     5,
      21,    34,   720,   247,   264,  -546,   -23,  -546,  1280,   188,
      56,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,   380,
    1094,  1094,  1094,   844,   844,  -546,  -546,  1094,  1637,   -51,
    1094,   272,   272,  -546,   191,   155,   161,   170,   174,    14,
    1094,   175,   175,   321,    50,   142,  -546,   224,    17,   249,
    1094,   488,  1094,  1094,   747,  1487,   187,  1094,  -546,   -30,
    1094,  1094,  1094,   186,    19,  1094,  1094,   317,  1094,   576,
    1094,  1094,  1094,  1094,  1094,  1094,  1094,  1094,  1094,  1094,
    1094,   406,   348,   -30,  -546,  -546,   208,   210,  2093,  1681,
     -46,  1094,  -546,  1094,  1163,   233,   475,   476,   272,  -546,
    -546,  -546,  -546,   235,   487,  -546,  -546,  -546,   -90,  1301,
    -546,  -546,  -546,  -546,  -546,   495,   508,  -546,  -546,  -546,
    -546,  -546,  -546,  -546,  -546,  -546,  2035,   -88,  -546,  1094,
    1094,   203,    18,    24,    28,     2,   513,   514,  -130,    97,
    -546,  -546,   479,   275,  1187,   276,  -546,  -546,  -546,   277,
    1094,  1338,  1370,   278,  1517,  -546,   145,  1445,  -546,  2113,
    1101,  1240,   720,  -546,    12,  -546,  1796,  1796,   281,  1094,
    1094,  2066,   282,   284,   286,   720,   443,   517,   350,   333,
     285,   285,   506,   506,   506,   506,  -546,  -546,  1094,  1094,
     392,  -546,  -546,  -546,  1094,  1094,  -546,  1960,  1721,   553,
     555,  -546,  -546,  -546,   556,   534,  -546,    -5,   -61,    17,
     561,  1094,  -118,  -110,  -546,   568,  -546,    17,  1094,  1094,
     188,  2093,  2093,  -546,   569,   -68,   323,    43,    17,   -12,
     571,    17,  -546,  -546,  -546,    46,  -546,    17,   452,   417,
    -546,   583,  -546,  1094,  -546,  -546,  1939,   465,   465,  -546,
    -546,  -546,  -546,   335,   337,  -546,  -546,   720,  1796,  1796,
    1094,   249,   249,   249,   338,  2003,   -22,  2093,   541,   460,
    2093,  1981,  -546,  1094,   340,   343,   -45,  -546,   392,    17,
     -66,   235,  1400,   594,   595,   -36,   594,    23,  -546,   -66,
    2093,  -546,   348,   145,   473,   477,   478,  -546,  -546,  -546,
      -6,   598,   145,   -13,   -33,    97,   417,   417,   480,   453,
      17,  -546,   481,  -546,  1466,  1094,  1094,   355,   356,  -546,
    -546,   358,   359,   929,   362,   363,   365,   145,  -546,  -546,
    -546,   441,  1094,  -546,  1094,  1094,   400,  -546,  2093,  -546,
    -546,  -546,  -546,   621,   185,  -546,   479,   460,   -66,  -546,
    -546,  1094,   604,  -127,  -546,    88,   376,   474,  -127,   376,
     474,   188,   392,   -68,   530,   530,   530,  -546,   374,   -68,
    1094,   629,   630,   392,  -546,  -546,    17,  1094,   -91,    17,
    1094,  -546,   381,  1607,  -546,  -546,  -546,  -546,  -546,  -546,
    -546,  -546,  2003,   379,  1208,  -546,  -546,   -63,    94,   384,
     386,   518,    89,  -546,   636,   249,  -546,  -546,  1547,   837,
     519,   643,  -546,  -546,   644,   919,  -120,  -546,  -546,  -120,
    -546,   348,   460,  -546,   531,   403,   405,   407,   145,  -546,
    2093,   637,    -9,   460,  -546,  2093,  1094,   408,  -546,  -546,
     -91,  1575,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,
    -546,  -546,  -546,  1094,  1094,     0,   185,  -546,   410,   413,
     595,   595,   414,     1,   185,  1710,  -546,  -546,  -546,  2093,
     444,   647,  -546,  -546,  2093,   115,   418,  -546,  -546,   392,
     546,  -546,   669,   669,   669,   -68,  1094,  1094,   670,  -546,
    2093,   595,  -546,  -546,  2093,  2093,   249,  -546,   137,   595,
     595,   159,   169,   595,  -546,  -546,   422,   422,   422,  -546,
     422,  -546,  -546,   422,   422,   423,   422,   422,   422,  -546,
     632,  -546,   422,   632,   422,   425,   422,   632,  -546,  -546,
    -546,   422,   632,   426,   427,  -546,  -546,   594,   999,  -546,
    1029,   919,   460,     8,   400,  -546,   179,   183,   195,  -546,
    2093,  2093,   659,   196,   428,     1,   197,   206,  -546,  -546,
     227,   685,  -546,  -546,  -546,  -546,  -546,  -546,   688,  -546,
    -546,  -546,  -546,  -546,  -546,  -546,  -546,   688,  -546,  -546,
    -546,  -546,   689,   691,    -2,   442,  -546,  2093,  -546,  2093,
     231,   546,   694,   445,  -546,  -546,   697,  -546,  -546,  1094,
    -546,   145,  -546,  -546,  -546,  -546,   232,    69,   336,    69,
      69,  -546,   257,    69,    69,    69,   336,    69,   336,    69,
     259,    69,   336,    69,   336,   449,   450,   542,  -546,   700,
     313,  -546,  -546,   581,   -73,  -546,   400,  -546,  -546,  2093,
    -546,  -546,   702,  -546,  -546,   525,   709,  -546,   710,  -546,
    -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,
     595,  -546,   463,   712,  -546,   336,  -546,   336,   336,   270,
    -546,  -546,  -546
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
/*默认动作，使用yystate作为索引可以获取默认动作id+1，比如
 *State 23
   103 select_stmt → SELECT • select_opts select_expr_list opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list opt_union
   104             | SELECT • select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list opt_union
   132 select_opts → • %empty
   133             | • select_opts ALL
   134             | • select_opts DISTINCT
   135             | • select_opts DISTINCTROW
   136             | • select_opts HIGH_PRIORITY
   137             | • select_opts STRAIGHT_JOIN
   138             | • select_opts SQL_SMALL_RESULT
   139             | • select_opts SQL_BIG_RESULT
   140             | • select_opts SQL_CALC_FOUND_ROWS

     $default  reduce using rule 132 (select_opts)
     select_opts  go to state 73
根据状态state 23获取默认的规约规则id为133
   */
static const yytype_int16 yydefact[] =
{
       0,    10,     0,    13,    14,    16,    15,    12,     0,     0,
       0,     0,     0,     0,   252,    95,    96,    94,    97,   195,
       0,   206,   206,   133,     0,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     8,    68,   111,
       5,   103,   190,   202,   227,   231,   240,   245,   323,     0,
      70,    70,     0,    31,    32,    23,    67,     0,     0,     0,
       0,   243,   243,   253,     0,     0,     0,     0,     0,     0,
       0,   212,   212,     0,     0,   324,   325,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     6,    11,    71,     0,     0,    45,     0,
       0,     0,    86,     0,     0,     0,     0,     0,   243,    99,
     100,    98,   101,   199,     0,   194,   192,   193,     0,     0,
     208,   209,   210,   211,   207,     0,     0,   144,   134,   135,
     136,   137,   140,   141,   139,   138,   148,   109,   142,     0,
       0,     0,   210,   207,   148,     0,     0,     0,     0,   149,
     151,   152,   161,     0,    68,     0,    74,    72,    73,     0,
       0,     0,     0,     0,     0,    34,   148,     0,     4,    25,
      26,    24,     0,    43,     0,    41,    90,    92,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    27,    28,    30,
      17,    18,    19,    20,    21,    22,    29,    69,     0,     0,
     122,     7,    54,    53,     0,     0,    84,     0,     0,     0,
       0,   244,   241,   242,     0,     0,   197,   109,     0,     0,
       0,     0,   213,   213,   147,     0,   145,     0,     0,     0,
     111,   328,   327,   326,     0,   184,     0,     0,     0,     0,
       0,     0,   169,   168,   172,   176,   173,     0,     0,   170,
     160,     0,    51,     0,    57,    60,     0,     0,     0,    55,
      56,    52,    36,     0,     0,    44,    42,     0,    91,    93,
       0,     0,     0,     0,     0,   115,   118,   121,     0,   124,
      88,     0,    87,     0,     0,     0,   320,   200,   122,     0,
     109,   199,     0,     0,     0,     0,     0,     0,   146,   109,
     110,   143,   120,   148,     0,     0,     0,   153,   189,   158,
     167,     0,   148,     0,   109,   150,   170,   170,     0,   163,
       0,   171,     0,   157,     0,     0,     0,     0,     0,    47,
      49,     0,     0,    46,     0,     0,     0,    37,   116,   117,
     113,     0,     0,   112,     0,     0,   106,    85,    89,    64,
      65,   321,   322,     0,   261,   249,   161,   124,   109,   196,
     198,     0,     0,   204,   131,     0,     0,   204,   204,     0,
     204,   111,   122,   184,   186,   186,   186,   159,     0,   184,
       0,     0,     0,   122,   174,   175,     0,     0,   177,     0,
       0,    58,     0,     0,    62,    63,    48,    50,    40,    38,
      39,   119,   115,   123,   125,   133,     9,   320,     0,     0,
       0,     0,     0,   254,     0,     0,   191,   201,     0,     0,
       0,     0,   221,   214,     0,     0,   204,   226,   229,   204,
     230,   120,   124,   154,     0,     0,     0,     0,   148,   155,
     236,     0,     0,   124,   166,   164,     0,     0,   162,   178,
       0,     0,    61,    75,    76,    77,    78,    81,    82,    83,
      80,    79,   114,     0,     0,     0,   261,   251,     0,     0,
       0,     0,     0,   246,   261,     0,   319,    66,   223,   222,
       0,     0,   132,   218,   217,     0,     0,   203,   228,   122,
     128,   185,     0,     0,     0,   184,     0,     0,     0,   232,
     179,     0,   165,    59,   127,   126,     0,   107,     0,     0,
       0,     0,     0,     0,   248,   255,   276,   276,   276,   308,
     276,   298,   301,   276,   276,     0,   276,   276,   276,   310,
     279,   309,   276,   279,   276,     0,   276,   279,   299,   300,
     307,   276,   279,     0,     0,   302,   263,     0,     0,   215,
       0,     0,   124,     0,   106,   187,     0,     0,     0,   156,
     237,   238,     0,     0,     0,   247,     0,     0,   258,   257,
       0,     0,   281,   305,   287,   284,   281,   281,     0,   281,
     281,   281,   280,   284,   281,   284,   281,     0,   281,   284,
     281,   284,     0,     0,   262,   205,   225,   224,   220,   219,
       0,   128,     0,   129,   104,   183,     0,   182,   181,     0,
     180,   148,   250,   259,   260,   256,     0,   293,   303,   297,
     295,   317,     0,   296,   291,   292,   314,   290,   313,   294,
       0,   289,   312,   288,   311,     0,     0,     0,   270,     0,
       0,   274,   265,     0,     0,   216,   106,   130,   188,   239,
     108,   277,     0,   282,   283,     0,     0,   284,     0,   284,
     306,   284,   264,   275,   266,   267,   269,   268,   273,   272,
       0,   105,     0,     0,   286,   315,   318,   316,   304,     0,
     278,   285,   271
};

/* YYPGOTO[NTERM-NUM].  */
/*非终结符号的索引减去终结符的个数，然后使用差值作为索引查找
 * yypgoto*/
static const yytype_int16 yypgoto[] =
{
    -546,  -546,   -47,  -546,  -546,    -8,    22,   667,  -546,   466,
     661,  -546,   -25,  -545,  -173,  -232,   357,   298,  -546,  -297,
    -285,  -347,   101,  -410,   305,  -546,   482,  -150,  -106,    92,
    -231,   367,  -546,  -546,    -1,  -546,  -546,  -546,   271,  -271,
     -44,  -144,  -546,  -546,  -546,   611,   436,  -546,  -103,   502,
     676,   515,   360,   189,  -306,  -546,  -546,  -546,  -546,  -546,
      11,  -546,  -546,   273,   267,  -546,  -546,  -143,  -260,  -180,
    -374,  -546,   156,  -389,  -546,  -546,  -546,   601
};

/* YYDEFGOTO[NTERM-NUM].  */
/*通过非终结符索引减去终结符数目，然后使用差值作为索引查找yydefgoto*/
static const yytype_int16 yydefgoto[] =
{
       0,    34,    35,    36,    37,    38,   115,   116,   180,   347,
      59,    40,    41,   426,   250,   112,   296,   360,   363,   220,
     299,   366,   574,   385,    73,   157,   158,   281,   168,   169,
     170,   271,   171,   268,   342,   269,   338,   468,   469,   327,
     455,   576,   172,    42,    69,   138,   236,    43,   442,    71,
     145,   315,   446,   505,   383,    44,    45,    78,   334,    46,
     126,    47,    64,   432,   433,   434,   614,   592,   603,   637,
     638,   566,   642,   375,   376,    48,    75,    76
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
/*使用当前状态减去终结符数目，查找yypact获取跳转状态集合在yytable
 * 中的首索引地址，记录移动token后跳转状态或者规约规则id*/
static const yytype_int16 yytable[] =
{
      53,    54,    55,    56,    58,   164,   246,    86,   400,  -233,
     388,   384,   517,   239,   255,   247,   657,   133,   322,   285,
     164,  -235,    39,   377,    85,   392,   193,  -234,   440,   624,
     436,   244,    14,   324,   148,   440,   339,   194,   487,   658,
    -320,   121,   188,   122,   118,   325,   225,    51,   226,   119,
     371,    19,   124,   689,   173,   659,    60,   262,   260,   257,
     159,    52,   139,   466,   308,   156,   221,   245,   371,    65,
     313,   160,   174,   127,   181,   182,   184,   660,   316,   187,
     531,   532,   189,   190,   191,   149,   150,   196,   197,    21,
     201,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   175,   179,   534,   510,    61,   452,   151,   408,
     263,   583,   372,   227,   371,   228,   519,   134,   463,   586,
     587,   691,   453,   590,   661,   264,   261,   135,   459,   441,
     372,    66,   217,   310,   314,   467,   506,   379,    67,   234,
     256,   319,   314,    68,   265,    22,   391,   248,   244,    23,
     662,   251,   252,    70,   509,    23,   136,   326,    24,   451,
     262,   403,   663,   623,   286,   309,   240,   284,   249,   248,
     622,   195,   276,   393,   266,   464,   372,   336,   470,   690,
     294,   137,   399,   123,   245,    23,  -320,    23,   123,   486,
     261,   288,   289,    25,   386,   240,   632,    85,   267,   152,
     153,   154,   248,   378,   155,   437,   373,   374,    23,   488,
     295,   297,    74,   263,   283,   361,   300,   301,   664,    62,
     489,  -199,  -167,   402,   572,   621,   337,    89,   264,   646,
     248,   648,    79,   312,   362,   652,    80,   654,   401,   331,
     320,   156,   518,    63,   579,   332,   235,   265,    81,   397,
      87,  -199,   526,   389,   165,   140,   166,    82,  -233,   167,
    -233,   615,   352,  -233,    88,   344,   354,   355,   356,   165,
    -235,   166,  -235,    83,   167,  -235,  -234,   266,  -234,   254,
     699,  -234,   353,   141,   447,   448,    84,   450,   142,   428,
     387,   673,   390,   605,   111,   368,   329,   609,   143,   261,
     429,   267,   611,   695,   140,   697,   113,   698,   515,   351,
     674,   430,   105,   106,   107,   108,   109,   144,   684,   685,
     686,   687,    49,    50,     1,     2,     3,     4,     5,     6,
       7,   198,   141,   199,   200,   404,   405,   162,   413,     8,
       9,   443,   493,   507,   444,   494,   508,    10,   147,   431,
     330,   456,   457,   335,   422,   148,   295,   424,   103,   104,
     105,   106,   107,   108,   109,    11,   163,   412,   569,   577,
     578,   570,    12,   438,   102,   103,   104,   105,   106,   107,
     108,   109,    13,   114,   125,    15,    16,    17,    18,   675,
     585,   676,   460,   494,   593,   594,   128,   595,   161,   465,
     596,   597,   471,   599,   600,   601,   149,   150,   129,   604,
     496,   606,   588,   608,   130,   444,   639,   640,   610,   643,
     644,   645,   589,   131,   647,   444,   649,   132,   651,   151,
     653,   499,   625,    20,    23,   626,   627,   504,   192,   626,
     186,     1,     2,     3,     4,     5,     6,     7,   628,   630,
     633,   626,   444,   444,   218,   219,     8,     9,   520,   634,
     527,   222,   444,   223,    10,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   524,   525,   231,   232,   233,
     635,   670,    11,   444,   665,   671,   235,   570,   672,    12,
     237,     1,     2,     3,     4,     5,     6,     7,   242,    13,
      14,   584,    15,    16,    17,    18,     8,     9,   580,   581,
     677,   243,   679,   678,    10,   678,   258,   259,   270,    19,
     152,   153,   154,   702,    72,   155,   444,    77,   272,   274,
     275,   279,    11,   287,   291,   176,   292,   109,   293,    12,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    13,
      20,   298,    15,    16,    17,    18,   304,    21,   305,   306,
     617,   307,   619,   504,   311,    26,    27,    28,    29,    30,
      31,   318,   323,    32,   333,    33,   328,   340,   341,     1,
       2,     3,     4,     5,     6,     7,   343,   346,   349,   364,
     350,   357,   365,   369,     8,     9,   370,   382,   384,   394,
      20,   398,    10,   395,   396,   406,   409,   407,   414,   415,
     202,   416,   417,    22,   203,   418,   419,   177,   420,   425,
      11,   669,   421,    23,   427,   439,    24,    12,   445,   440,
     454,   458,   461,   462,   472,   362,   490,    13,   491,   495,
      15,    16,    17,    18,   492,   500,   501,   502,     1,     2,
       3,     4,     5,     6,     7,   512,   511,   513,   516,   514,
     521,    25,   529,     8,     9,   530,   533,   567,   568,   573,
     571,    10,   575,   582,   591,   598,   602,   607,   612,   613,
     629,   631,    26,    27,    28,    29,    30,    31,    20,    11,
      32,   636,    33,   641,   682,   655,    12,   656,   441,   667,
     668,   444,   680,   681,   178,   683,    13,   688,   692,    15,
      16,    17,    18,   693,   694,   696,   700,   701,   117,   120,
     482,   423,   666,     1,     2,     3,     4,     5,     6,     7,
     485,   321,    26,    27,    28,    29,    30,    31,     8,     9,
      32,   522,    33,   435,   348,   238,    10,   380,   146,   449,
       1,     2,     3,     4,     5,     6,     7,    20,   317,   528,
     620,   535,   253,   650,    11,     8,     9,   204,     0,     0,
       0,    12,     0,    10,   183,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    15,    16,    17,    18,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    15,    16,    17,    18,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,     0,     0,   205,     0,
      33,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,    20,
       0,     0,     0,    10,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,     0,     0,    57,
       0,    11,     0,     0,     0,     0,     0,     0,    12,    26,
      27,    28,    29,    30,    31,     0,     0,    32,    13,    33,
       0,    15,    16,    17,    18,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    20,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     0,     0,    11,    26,    27,    28,    29,    30,    31,
      12,     0,    32,     0,    33,     0,     0,     0,     0,     0,
      13,     0,     0,    15,    16,    17,    18,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,     0,   503,    32,
       0,    33,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    20,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     0,     0,    11,     0,     0,     0,     8,     9,     0,
      12,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      13,     0,     0,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,   616,     0,
      12,    26,    27,    28,    29,    30,    31,     0,     0,    32,
      13,    33,     0,    15,    16,    17,    18,     1,     2,     3,
       4,     5,     6,     7,     0,     0,     0,     0,   618,     0,
       0,    20,     8,     9,    92,    93,    94,    95,    96,    97,
      10,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,    11,     0,
       0,    20,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,    15,    16,
      17,    18,     0,    26,    27,    28,    29,    30,    31,     0,
       0,    32,     0,    33,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,    20,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    90,
      91,    92,    93,    94,    95,    96,    97,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
       0,     0,     0,    26,    27,    28,    29,    30,    31,     0,
       0,    32,     0,    33,    93,    94,    95,    96,    97,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,     0,    26,    27,    28,    29,    30,    31,     0,
       0,    32,     0,    33,     0,     0,     0,     0,     0,     0,
     273,    90,    91,    92,    93,    94,    95,    96,    97,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    90,    91,    92,    93,    94,    95,    96,    97,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,     0,     0,    32,     0,    33,    90,
      91,    92,    93,    94,    95,    96,    97,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,   229,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,   230,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
     483,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,   484,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    90,    91,    92,
      93,    94,    95,    96,    97,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    90,    91,
      92,    93,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,   110,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,   241,    90,    91,
      92,    93,    94,    95,    96,    97,   410,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,   277,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,   278,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,   381,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     473,   474,   475,   476,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
     282,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,     0,     0,   477,   478,   479,   411,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
     185,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   536,   537,   538,   539,     0,     0,     0,
       0,     0,     0,   540,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   541,   542,     0,     0,     0,     0,   543,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   544,     0,
     497,     0,     0,     0,     0,   545,     0,     0,     0,   546,
    -321,  -321,  -321,  -321,    97,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   523,     0,
     547,   548,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   480,   481,     0,   549,
     550,     0,     0,     0,   551,   552,   553,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
     554,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   557,     0,
     558,   559,   560,   561,   562,     0,     0,     0,     0,     0,
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   563,   564,     0,     0,     0,     0,     0,     0,   565,
      90,    91,    92,    93,    94,    95,    96,    97,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    90,    91,    92,    93,    94,    95,    96,    97,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    90,    91,    92,    93,    94,    95,    96,    97,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,     0,     0,     0,   244,     0,
       0,     0,   345,   358,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,   302,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,     0,     0,     0,   245,   367,     0,    90,    91,    92,
      93,    94,    95,    96,    97,   359,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,   290,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    91,    92,    93,    94,    95,
      96,    97,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109
};

static const yytype_int16 yycheck[] =
{
       8,     9,    10,    11,    12,     3,   156,    32,    21,     3,
     316,     3,    21,   103,   164,   103,    18,     3,   250,     7,
       3,     3,     0,   308,    32,   322,     7,     3,   155,   574,
     377,     3,    62,   101,    34,   155,   267,    18,   427,    41,
      39,    92,    89,    94,    52,   113,    92,   252,    94,    57,
     113,    81,    60,   126,    79,    57,   252,    63,   188,   165,
      10,    10,    70,   154,   237,    73,   113,    39,   113,   252,
     188,    21,    80,    62,    82,    83,    84,    79,   188,    87,
     490,   491,    90,    91,    92,    85,    86,    95,    96,   119,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    80,    81,   493,   452,    69,   392,   108,   340,
     116,   521,   175,   121,   113,   123,   463,   103,   403,   529,
     530,   666,   393,   533,   126,   131,   256,   113,   399,   256,
     175,   252,   110,   239,   252,   226,   256,   310,   252,   128,
     165,   247,   252,   252,   150,   175,   319,   235,     3,   185,
     152,   159,   160,   252,   451,   185,   142,   225,   188,   391,
      63,   334,   164,   573,   152,   226,   256,   192,   256,   235,
     162,   152,   180,   323,   180,   406,   175,   131,   409,   252,
     205,   167,   332,   234,    39,   185,   185,   185,   234,   252,
     256,   199,   200,   223,   230,   256,   585,   205,   204,   199,
     200,   201,   235,   309,   204,   378,   251,   252,   185,   115,
     218,   219,     9,   116,   192,   237,   224,   225,   220,   182,
     126,   226,   125,   256,   509,   572,   180,   250,   131,   603,
     235,   605,   252,   241,   256,   609,   252,   611,   251,   251,
     248,   249,   251,   206,   515,   257,   251,   150,   252,   255,
       3,   256,   252,   230,   252,    80,   254,   252,   252,   257,
     254,   567,   287,   257,     0,   273,   291,   292,   293,   252,
     252,   254,   254,   252,   257,   257,   252,   180,   254,   251,
     690,   257,   290,   108,   387,   388,   252,   390,   113,   104,
     315,   222,   317,   553,   106,   303,   253,   557,   123,   256,
     115,   204,   562,   677,    80,   679,   250,   681,   458,   287,
     241,   126,    27,    28,    29,    30,    31,   142,     5,     6,
       7,     8,   251,   252,     3,     4,     5,     6,     7,     8,
       9,    14,   108,    16,    17,   336,   337,   113,   346,    18,
      19,   253,   253,   446,   256,   256,   449,    26,    27,   164,
     258,   395,   396,   261,   362,    34,   364,   365,    25,    26,
      27,    28,    29,    30,    31,    44,   142,   345,   253,   513,
     514,   256,    51,   381,    24,    25,    26,    27,    28,    29,
      30,    31,    61,     3,   112,    64,    65,    66,    67,    53,
     253,    55,   400,   256,   537,   538,   205,   540,   256,   407,
     543,   544,   410,   546,   547,   548,    85,    86,   253,   552,
     435,   554,   253,   556,   253,   256,   596,   597,   561,   599,
     600,   601,   253,   253,   604,   256,   606,   253,   608,   108,
     610,   439,   253,   112,   185,   256,   253,   445,   252,   256,
     253,     3,     4,     5,     6,     7,     8,     9,   253,   253,
     253,   256,   256,   256,    48,   107,    18,    19,   466,   253,
     485,   253,   256,   253,    26,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   483,   484,   244,     3,     3,
     253,   631,    44,   256,   253,   253,   251,   256,   256,    51,
       3,     3,     4,     5,     6,     7,     8,     9,     3,    61,
      62,   526,    64,    65,    66,    67,    18,    19,   516,   517,
     253,     3,   253,   256,    26,   256,     3,     3,    39,    81,
     199,   200,   201,   253,    22,   204,   256,    25,   253,   253,
     253,   253,    44,   252,   252,    47,   252,    31,   252,    51,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    61,
     112,   159,    64,    65,    66,    67,     3,   119,     3,     3,
     568,    27,   570,   571,     3,   244,   245,   246,   247,   248,
     249,     3,     3,   252,     3,   254,   253,   125,   161,     3,
       4,     5,     6,     7,     8,     9,     3,   122,   253,    48,
     253,   253,   132,   253,    18,    19,   253,     3,     3,   126,
     112,     3,    26,   126,   126,   125,   125,   154,   253,   253,
      34,   253,   253,   175,    38,   253,   253,   129,   253,   219,
      44,   629,   181,   185,     3,    21,   188,    51,   252,   155,
     100,   257,     3,     3,   253,   256,   252,    61,   252,     3,
      64,    65,    66,    67,   126,   126,     3,     3,     3,     4,
       5,     6,     7,     8,     9,   252,   125,   252,    21,   252,
     252,   223,   252,    18,    19,   252,   252,   223,    21,   123,
     252,    26,     3,     3,   252,   252,    44,   252,   252,   252,
      21,   253,   244,   245,   246,   247,   248,   249,   112,    44,
     252,     6,   254,     5,   152,     6,    51,     6,   256,     5,
       3,   256,   253,   253,   216,     5,    61,   126,     6,    64,
      65,    66,    67,   188,     5,     5,   253,     5,    51,    58,
     422,   364,   621,     3,     4,     5,     6,     7,     8,     9,
     425,   249,   244,   245,   246,   247,   248,   249,    18,    19,
     252,   470,   254,   376,   278,   134,    26,   311,    72,   389,
       3,     4,     5,     6,     7,     8,     9,   112,   243,   486,
     571,   494,   161,   607,    44,    18,    19,   191,    -1,    -1,
      -1,    51,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
     244,   245,   246,   247,   248,   249,    -1,    -1,   252,    -1,
     254,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,   112,
      -1,    -1,    -1,    26,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,   234,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,   244,
     245,   246,   247,   248,   249,    -1,    -1,   252,    61,   254,
      -1,    64,    65,    66,    67,   185,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,   112,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    44,   244,   245,   246,   247,   248,   249,
      51,    -1,   252,    -1,   254,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,   244,   245,   246,   247,   248,   249,    -1,    79,   252,
      -1,   254,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,   112,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    18,    19,    -1,
      51,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    79,    -1,
      51,   244,   245,   246,   247,   248,   249,    -1,    -1,   252,
      61,   254,    -1,    64,    65,    66,    67,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    79,    -1,
      -1,   112,    18,    19,    13,    14,    15,    16,    17,    18,
      26,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,   112,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    -1,   244,   245,   246,   247,   248,   249,    -1,
      -1,   252,    -1,   254,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,   112,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,   244,   245,   246,   247,   248,   249,    -1,
      -1,   252,    -1,   254,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,   244,   245,   246,   247,   248,   249,    -1,
      -1,   252,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,   244,   245,
     246,   247,   248,   249,    -1,    -1,   252,    -1,   254,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,   226,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,   256,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,   256,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,   256,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    11,    12,
      13,    14,    15,    16,    17,    18,   100,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,   256,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,   256,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,   256,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
     255,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,   109,   110,   111,   253,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
     253,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
     253,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   253,    -1,
     120,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   240,    -1,   139,
     140,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,   239,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,     3,    -1,
      -1,    -1,   103,    40,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    94,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    94,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    82,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    37,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    18,    19,
      26,    44,    51,    61,    62,    64,    65,    66,    67,    81,
     112,   119,   175,   185,   188,   223,   244,   245,   246,   247,
     248,   249,   252,   254,   259,   260,   261,   262,   263,   264,
     269,   270,   301,   305,   313,   314,   317,   319,   333,   251,
     252,   252,    10,   263,   263,   263,   263,   234,   263,   268,
     252,    69,   182,   206,   320,   252,   252,   252,   252,   302,
     252,   307,   307,   282,     9,   334,   335,   307,   315,   252,
     252,   252,   252,   252,   252,   263,   270,     3,     0,   250,
      11,    12,    13,    14,    15,    16,    17,    18,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     256,   106,   273,   250,     3,   264,   265,   265,   263,   263,
     268,    92,    94,   234,   263,   112,   318,   318,   205,   253,
     253,   253,   253,     3,   103,   113,   142,   167,   303,   263,
      80,   108,   113,   123,   142,   308,   308,    27,    34,    85,
      86,   108,   199,   200,   201,   204,   263,   283,   284,    10,
      21,   256,   113,   142,     3,   252,   254,   257,   286,   287,
     288,   290,   300,   270,   263,   264,    47,   129,   216,   264,
     266,   263,   263,    27,   263,   253,   253,   263,   260,   263,
     263,   263,   252,     7,    18,   152,   263,   263,    14,    16,
      17,   263,    34,    38,   191,   252,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   264,    48,   107,
     277,   260,   253,   253,   209,    92,    94,   263,   263,   226,
     256,   244,     3,     3,   318,   251,   304,     3,   303,   103,
     256,   256,     3,     3,     3,    39,   285,   103,   235,   256,
     272,   263,   263,   335,   251,   285,   270,   286,     3,     3,
     188,   256,    63,   116,   131,   150,   180,   204,   291,   293,
      39,   289,   253,   103,   253,   253,   263,   256,   256,   253,
     253,   285,   255,   264,   270,     7,   152,   252,   263,   263,
      37,   252,   252,   252,   270,   263,   274,   263,   159,   278,
     263,   263,    94,   209,     3,     3,     3,    27,   272,   226,
     286,     3,   263,   188,   252,   309,   188,   309,     3,   286,
     263,   284,   273,     3,   101,   113,   225,   297,   253,   253,
     287,   251,   257,     3,   316,   287,   131,   180,   294,   288,
     125,   161,   292,     3,   263,   103,   122,   267,   267,   253,
     253,   264,   270,   263,   270,   270,   270,   253,    40,    82,
     275,   237,   256,   276,    48,   132,   279,    94,   263,   253,
     253,   113,   175,   251,   252,   331,   332,   278,   286,   272,
     304,   256,     3,   312,     3,   281,   230,   270,   312,   230,
     270,   272,   277,   285,   126,   126,   126,   255,     3,   285,
      21,   251,   256,   272,   292,   292,   125,   154,   288,   125,
     100,   253,   264,   263,   253,   253,   253,   253,   253,   253,
     253,   181,   263,   274,   263,   219,   271,     3,   104,   115,
     126,   164,   321,   322,   323,   289,   279,   272,   263,    21,
     155,   256,   306,   253,   256,   252,   310,   306,   306,   310,
     306,   273,   278,   297,   100,   298,   298,   298,   257,   297,
     263,     3,     3,   278,   288,   263,   154,   226,   295,   296,
     288,   263,   253,    73,    74,    75,    76,   109,   110,   111,
     239,   240,   275,   242,   256,   282,   252,   331,   115,   126,
     252,   252,   126,   253,   256,     3,   270,   253,    79,   263,
     126,     3,     3,    79,   263,   311,   256,   306,   306,   277,
     279,   125,   252,   252,   252,   285,    21,    21,   251,   279,
     263,   252,   296,   253,   263,   263,   252,   270,   321,   252,
     252,   281,   281,   252,   331,   322,    43,    44,    45,    46,
      53,    71,    72,    77,    88,    95,    99,   120,   121,   139,
     140,   144,   145,   146,   170,   188,   190,   208,   210,   211,
     212,   213,   214,   231,   232,   239,   329,   223,    21,   253,
     256,   252,   278,   123,   280,     3,   299,   299,   299,   297,
     263,   263,     3,   281,   270,   253,   281,   281,   253,   253,
     281,   252,   325,   325,   325,   325,   325,   325,   252,   325,
     325,   325,    44,   326,   325,   326,   325,   252,   325,   326,
     325,   326,   252,   252,   324,   312,    79,   263,    79,   263,
     311,   279,   162,   281,   271,   253,   256,   253,   253,    21,
     253,   253,   331,   253,   253,   253,     6,   327,   328,   327,
     327,     5,   330,   327,   327,   327,   328,   327,   328,   327,
     330,   327,   328,   327,   328,     6,     6,    18,    41,    57,
      79,   126,   152,   164,   220,   253,   280,     5,     3,   263,
     285,   253,   256,   222,   241,    53,    55,   253,   256,   253,
     253,   253,   152,     5,     5,     6,     7,     8,   126,   126,
     252,   271,     6,   188,     5,   328,     5,   328,   328,   281,
     253,     5,   253
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
/*YYSYMBOL_select_opts = 282,     //// select_opts
 * 使用规约规则id获取规则左边的符号类型，比如规约规则索引为
 * 133，则根据yyr1[133]=282，获取规约规则左边的节点的符号类型，
 * 即YYSYMBOL_select_opts，yyr1则是获取规约规则右边的节点个数，
 * 用于从栈中pop节点
 * **/
static const yytype_int16 yyr1[] =
{
       0,   258,   259,   259,   259,   260,   260,   260,   261,   262,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   264,   264,
     265,   265,   266,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   263,   263,   263,   263,   268,   268,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   269,   270,   270,   271,   271,   271,   272,
     272,   273,   273,   274,   274,   275,   275,   275,   276,   276,
     277,   277,   278,   278,   279,   279,   279,   279,   280,   280,
     280,   281,   281,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   283,   283,   283,   284,   285,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   288,   288,   288,   288,
     289,   289,   290,   290,   290,   290,   290,   291,   291,   291,
     292,   292,   293,   293,   294,   294,   294,   295,   295,   296,
     296,   297,   297,   297,   297,   298,   298,   299,   299,   300,
     269,   301,   302,   302,   302,   302,   301,   303,   303,   304,
     304,   301,   269,   305,   306,   306,   307,   307,   307,   307,
     307,   308,   308,   309,   309,   310,   310,   311,   311,   311,
     311,   305,   312,   312,   312,   312,   305,   269,   313,   313,
     313,   269,   314,   315,   315,   315,   316,   316,   316,   316,
     269,   317,   317,   318,   318,   269,   319,   319,   319,   319,
     319,   319,   320,   320,   321,   321,   322,   322,   322,   322,
     322,   323,   322,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   325,   325,   325,   326,
     326,   327,   327,   327,   328,   328,   328,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   330,   330,   331,
     332,   332,   332,   269,   333,   334,   334,   335,   335
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
/*记录了规约规则右边的符号数，即节点数，规约时根据节点数
 * 从栈中pop出对应节点，并且可以使用$1/$2进行节点引用*/
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     2,     3,     1,     6,
       1,     3,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     2,     4,     5,     6,     6,
       6,     3,     4,     3,     4,     3,     5,     5,     6,     5,
       6,     4,     4,     4,     4,     4,     4,     4,     6,     8,
       4,     7,     6,     6,     6,     6,     8,     2,     1,     3,
       0,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     6,     3,     5,     4,     5,
       3,     4,     3,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     2,     1,    10,    12,     0,     3,     6,     0,
       2,     0,     4,     2,     4,     0,     1,     1,     0,     2,
       0,     2,     0,     3,     0,     2,     4,     4,     0,     2,
       3,     1,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     2,     2,     1,     0,     1,
       3,     1,     1,     3,     5,     5,     7,     3,     3,     4,
       1,     0,     5,     3,     5,     6,     5,     0,     1,     1,
       0,     1,     1,     1,     2,     2,     0,     0,     1,     2,
       4,     6,     6,     6,     0,     2,     0,     1,     3,     3,
       1,     7,     2,     2,     2,     0,     6,     2,     4,     0,
       2,     7,     1,     8,     0,     4,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     3,     5,     1,     1,     3,
       3,     7,     3,     3,     5,     5,     7,     1,     8,     7,
       7,     1,     8,     0,     2,     2,     3,     5,     5,     7,
       1,     4,     4,     0,     2,     1,     8,    10,     9,     6,
      11,     8,     0,     1,     1,     3,     5,     4,     4,     5,
       5,     0,     4,     0,     3,     2,     3,     3,     3,     3,
       2,     5,     3,     3,     2,     3,     0,     3,     5,     0,
       1,     0,     2,     2,     0,     4,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     5,     2,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     1,     3,     3,
       0,     1,     1,     1,     2,     1,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  /*小于YYNTOKENS的为终结符，否则为非终结符*/
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
/*提前看token的类型，即yylex()返回的类型索引*/
int yychar;

/* The semantic value of the lookahead symbol.  */
/*提前看token的语义值*/
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

/*语法分析入口函数*/
int yyparse (void)
{
	/*状态值*/
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
	/*保存状态的栈，栈底，栈顶*/
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
	/*保存语义值的栈，栈底，栈顶*/
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  /*提前看token的符号类型*/
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  /*语义值*/
  YYSTYPE yyval;


/*出栈N个节点*/
#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  /*状态栈栈顶指针递增*/
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  /*当前状态机状态入栈*/
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  /*栈需要扩容*/
  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  /*根据当前状态查询yypact*/
  yyn = yypact[yystate];
  /*是否走默认状态，判断yyn是否等于YYPACT_NINF*/
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  /*需要调用yylex()获取一个token*/
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
	  /*读取lookahead token，返回token类型索引，比如
	   *mysql.output中定义的SELECT (431)，如果token为select
	   *则返回的yychar为431*/
	  /* 51   enum yytokentype
	   * 52   {
	   * 53     YYEMPTY = -2,
	   * 54     YYEOF = 0,                // "end of file"
	   * 55     YYerror = 256,                 // error
	   * 56     YYUNDEF = 257,         // "invalid token"
	   * 57     NAME = 258,           // NAME
	   */
      yychar = yylex ();
    }

  /*数据结束*/
  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  /*出错*/
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
	  /*使用yychar作为索引查找yytranslate表，转换为bison中的符号索引*/
	  /*   YYSYMBOL_NAME = 3,      // NAME  */
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  /*计算在yytable中的索引，根据该索引获取跳转状态，当前状态加上token符号索引*/
  /*yytable[yypact[yystate]+yytoken]=1;
   * NAME   shift, and go to state 1*/
  yyn += yytoken;
  /*走默认动作*/
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  /*查询跳转状态*/
  yyn = yytable[yyn];
  /*小于0则进行规约*/
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
	  /*取负数的绝对值获取规约规则id号*/
      yyn = -yyn;
	  /*需要规约*/
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  /*移动lookahead token，即入栈token*/
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  /*更新跳转状态*/
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  /*把当前token的语义值入栈*/
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  /*执行默认动作，返回的值为规约规则id+1*/
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  /*进行规约，yyn记录了要执行的动作id*/
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
/*执行规约动作*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  /*根据规约规则id获取要规约的状态数，即要从状态栈中出栈的节点数*/
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  /*如果yylen不为空，则执行默认动作$$ = $1，根据$I所以可以从yyvsp中
   * 获取各个token的语义值。此时yyval相当于指向要规约的token的基础
   * 线，然后根据yyval[0],yyval[1]即可获取代码中引用的$1,$2的值*/
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  /*根据要执行的动作id执行动作*/
  switch (yyn)
    {
  case 10: /* expr: NAME  */
#line 311 "mysql.y"
                   { emit("NAME %s", (yyvsp[0].strval)); }
#line 2220 "mysql.tab.c"
    break;

  case 11: /* expr: NAME '.' NAME  */
#line 312 "mysql.y"
                   { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); }
#line 2226 "mysql.tab.c"
    break;

  case 12: /* expr: USERVAR  */
#line 313 "mysql.y"
                   { emit("USERVAR %s", (yyvsp[0].strval)); }
#line 2232 "mysql.tab.c"
    break;

  case 13: /* expr: STRING  */
#line 314 "mysql.y"
                   { emit("STRING %s", (yyvsp[0].strval)); }
#line 2238 "mysql.tab.c"
    break;

  case 14: /* expr: INTNUM  */
#line 315 "mysql.y"
                   { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 2244 "mysql.tab.c"
    break;

  case 15: /* expr: APPROXNUM  */
#line 316 "mysql.y"
                   { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 2250 "mysql.tab.c"
    break;

  case 16: /* expr: BOOL  */
#line 317 "mysql.y"
                   { emit("BOOL %d", (yyvsp[0].intval)); }
#line 2256 "mysql.tab.c"
    break;

  case 17: /* expr: expr '+' expr  */
#line 320 "mysql.y"
                    { emit("ADD"); }
#line 2262 "mysql.tab.c"
    break;

  case 18: /* expr: expr '-' expr  */
#line 321 "mysql.y"
                   { emit("SUB"); }
#line 2268 "mysql.tab.c"
    break;

  case 19: /* expr: expr '*' expr  */
#line 322 "mysql.y"
                   { emit("MUL"); }
#line 2274 "mysql.tab.c"
    break;

  case 20: /* expr: expr '/' expr  */
#line 323 "mysql.y"
                   { emit("DIV"); }
#line 2280 "mysql.tab.c"
    break;

  case 21: /* expr: expr '%' expr  */
#line 324 "mysql.y"
                   { emit("MOD"); }
#line 2286 "mysql.tab.c"
    break;

  case 22: /* expr: expr MOD expr  */
#line 325 "mysql.y"
                   { emit("MOD"); }
#line 2292 "mysql.tab.c"
    break;

  case 23: /* expr: '-' expr  */
#line 326 "mysql.y"
                           { emit("NEG"); }
#line 2298 "mysql.tab.c"
    break;

  case 24: /* expr: expr ANDOP expr  */
#line 327 "mysql.y"
                     { emit("AND"); }
#line 2304 "mysql.tab.c"
    break;

  case 25: /* expr: expr OR expr  */
#line 328 "mysql.y"
                  { emit("OR"); }
#line 2310 "mysql.tab.c"
    break;

  case 26: /* expr: expr XOR expr  */
#line 329 "mysql.y"
                   { emit("XOR"); }
#line 2316 "mysql.tab.c"
    break;

  case 27: /* expr: expr '|' expr  */
#line 330 "mysql.y"
                   { emit("BITOR"); }
#line 2322 "mysql.tab.c"
    break;

  case 28: /* expr: expr '&' expr  */
#line 331 "mysql.y"
                   { emit("BITAND"); }
#line 2328 "mysql.tab.c"
    break;

  case 29: /* expr: expr '^' expr  */
#line 332 "mysql.y"
                   { emit("BITXOR"); }
#line 2334 "mysql.tab.c"
    break;

  case 30: /* expr: expr SHIFT expr  */
#line 333 "mysql.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2340 "mysql.tab.c"
    break;

  case 31: /* expr: NOT expr  */
#line 334 "mysql.y"
              { emit("NOT"); }
#line 2346 "mysql.tab.c"
    break;

  case 32: /* expr: '!' expr  */
#line 335 "mysql.y"
              { emit("NOT"); }
#line 2352 "mysql.tab.c"
    break;

  case 33: /* expr: expr COMPARISON expr  */
#line 336 "mysql.y"
                          { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 2358 "mysql.tab.c"
    break;

  case 34: /* expr: '(' expr ')'  */
#line 337 "mysql.y"
                  { emit("EMBRACE"); }
#line 2364 "mysql.tab.c"
    break;

  case 35: /* expr: '(' expr  */
#line 338 "mysql.y"
              { emit("LEFT"); }
#line 2370 "mysql.tab.c"
    break;

  case 36: /* expr: '{' NAME expr '}'  */
#line 339 "mysql.y"
                       { emit("SUB ALIAS %s", (yyvsp[-2].strval)); }
#line 2376 "mysql.tab.c"
    break;

  case 37: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 342 "mysql.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2382 "mysql.tab.c"
    break;

  case 38: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 343 "mysql.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2388 "mysql.tab.c"
    break;

  case 39: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 344 "mysql.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2394 "mysql.tab.c"
    break;

  case 40: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 345 "mysql.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2400 "mysql.tab.c"
    break;

  case 41: /* expr: expr IS NULLX  */
#line 348 "mysql.y"
                         { emit("ISNULL"); }
#line 2406 "mysql.tab.c"
    break;

  case 42: /* expr: expr IS NOT NULLX  */
#line 349 "mysql.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 2412 "mysql.tab.c"
    break;

  case 43: /* expr: expr IS BOOL  */
#line 350 "mysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2418 "mysql.tab.c"
    break;

  case 44: /* expr: expr IS NOT BOOL  */
#line 351 "mysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2424 "mysql.tab.c"
    break;

  case 45: /* expr: USERVAR ASSIGN expr  */
#line 353 "mysql.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); }
#line 2430 "mysql.tab.c"
    break;

  case 46: /* expr: expr BETWEEN expr AND expr  */
#line 356 "mysql.y"
                                               { emit("BETWEEN"); }
#line 2436 "mysql.tab.c"
    break;

  case 47: /* expr: expr IN '(' val_list ')'  */
#line 359 "mysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2442 "mysql.tab.c"
    break;

  case 48: /* expr: expr NOT IN '(' val_list ')'  */
#line 360 "mysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2448 "mysql.tab.c"
    break;

  case 49: /* expr: expr IN '(' select_stmt ')'  */
#line 361 "mysql.y"
                                     { emit("CMPANYSELECT 4"); }
#line 2454 "mysql.tab.c"
    break;

  case 50: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 362 "mysql.y"
                                     { emit("CMPALLSELECT 3"); }
#line 2460 "mysql.tab.c"
    break;

  case 51: /* expr: EXISTS '(' select_stmt ')'  */
#line 363 "mysql.y"
                                     { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2466 "mysql.tab.c"
    break;

  case 52: /* expr: '(' select_stmt ')' opt_as_alias  */
#line 364 "mysql.y"
                                      {  }
#line 2472 "mysql.tab.c"
    break;

  case 53: /* expr: RISK_FUNCTION '(' opt_val_list ')'  */
#line 368 "mysql.y"
                                         {  emit("CALL RISK_FUNCTION %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); }
#line 2478 "mysql.tab.c"
    break;

  case 54: /* expr: NAME '(' opt_val_list ')'  */
#line 369 "mysql.y"
                                    {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); }
#line 2484 "mysql.tab.c"
    break;

  case 55: /* expr: FCOUNT '(' '*' ')'  */
#line 373 "mysql.y"
                         { emit("COUNTALL"); }
#line 2490 "mysql.tab.c"
    break;

  case 56: /* expr: FCOUNT '(' expr ')'  */
#line 374 "mysql.y"
                         { emit(" CALL 1 COUNT"); }
#line 2496 "mysql.tab.c"
    break;

  case 57: /* expr: FSUBSTRING '(' val_list ')'  */
#line 376 "mysql.y"
                                                {  emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2502 "mysql.tab.c"
    break;

  case 58: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 377 "mysql.y"
                                                {  emit("CALL 2 SUBSTR"); }
#line 2508 "mysql.tab.c"
    break;

  case 59: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 378 "mysql.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 2514 "mysql.tab.c"
    break;

  case 60: /* expr: FTRIM '(' val_list ')'  */
#line 380 "mysql.y"
                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2520 "mysql.tab.c"
    break;

  case 61: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 381 "mysql.y"
                                                { emit("CALL 3 TRIM"); }
#line 2526 "mysql.tab.c"
    break;

  case 62: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 382 "mysql.y"
                                             { emit("CALL 3 DATE_ADD"); }
#line 2532 "mysql.tab.c"
    break;

  case 63: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 383 "mysql.y"
                                             { emit("CALL 3 DATE_SUB"); }
#line 2538 "mysql.tab.c"
    break;

  case 64: /* expr: CONVERT '(' expr USING NAME ')'  */
#line 384 "mysql.y"
                                     { emit("CALL 2 CONVERT"); }
#line 2544 "mysql.tab.c"
    break;

  case 65: /* expr: CONVERT '(' expr ',' NAME ')'  */
#line 385 "mysql.y"
                                   { emit("CALL 2 CONVERT"); }
#line 2550 "mysql.tab.c"
    break;

  case 66: /* expr: IF '(' expr ',' expr ',' expr ')'  */
#line 388 "mysql.y"
                                       { emit("IF") }
#line 2556 "mysql.tab.c"
    break;

  case 67: /* expr: BINARY expr  */
#line 389 "mysql.y"
                              { emit("STRTOBIN"); }
#line 2562 "mysql.tab.c"
    break;

  case 68: /* val_list: expr  */
#line 393 "mysql.y"
               { (yyval.intval) = 1; }
#line 2568 "mysql.tab.c"
    break;

  case 69: /* val_list: expr ',' val_list  */
#line 394 "mysql.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2574 "mysql.tab.c"
    break;

  case 70: /* opt_val_list: %empty  */
#line 397 "mysql.y"
                        { (yyval.intval) = 0; }
#line 2580 "mysql.tab.c"
    break;

  case 72: /* trim_ltb: LEADING  */
#line 402 "mysql.y"
                  { emit("NUMBER 1"); }
#line 2586 "mysql.tab.c"
    break;

  case 73: /* trim_ltb: TRAILING  */
#line 403 "mysql.y"
                  { emit("NUMBER 2"); }
#line 2592 "mysql.tab.c"
    break;

  case 74: /* trim_ltb: BOTH  */
#line 404 "mysql.y"
                  { emit("NUMBER 3"); }
#line 2598 "mysql.tab.c"
    break;

  case 75: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 407 "mysql.y"
                                     { emit("NUMBER 1"); }
#line 2604 "mysql.tab.c"
    break;

  case 76: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 408 "mysql.y"
                                     { emit("NUMBER 2"); }
#line 2610 "mysql.tab.c"
    break;

  case 77: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 409 "mysql.y"
                                     { emit("NUMBER 3"); }
#line 2616 "mysql.tab.c"
    break;

  case 78: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 410 "mysql.y"
                                     { emit("NUMBER 4"); }
#line 2622 "mysql.tab.c"
    break;

  case 79: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 411 "mysql.y"
                                     { emit("NUMBER 5"); }
#line 2628 "mysql.tab.c"
    break;

  case 80: /* interval_exp: INTERVAL expr YEAR  */
#line 412 "mysql.y"
                                     { emit("NUMBER 6"); }
#line 2634 "mysql.tab.c"
    break;

  case 81: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 413 "mysql.y"
                                     { emit("NUMBER 7"); }
#line 2640 "mysql.tab.c"
    break;

  case 82: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 414 "mysql.y"
                                     { emit("NUMBER 8"); }
#line 2646 "mysql.tab.c"
    break;

  case 83: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 415 "mysql.y"
                                     { emit("NUMBER 9"); }
#line 2652 "mysql.tab.c"
    break;

  case 84: /* expr: CASE expr case_list END  */
#line 417 "mysql.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2658 "mysql.tab.c"
    break;

  case 85: /* expr: CASE expr case_list ELSE expr END  */
#line 418 "mysql.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2664 "mysql.tab.c"
    break;

  case 86: /* expr: CASE case_list END  */
#line 419 "mysql.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2670 "mysql.tab.c"
    break;

  case 87: /* expr: CASE case_list ELSE expr END  */
#line 420 "mysql.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2676 "mysql.tab.c"
    break;

  case 88: /* case_list: WHEN expr THEN expr  */
#line 423 "mysql.y"
                                   { (yyval.intval) = 1; }
#line 2682 "mysql.tab.c"
    break;

  case 89: /* case_list: case_list WHEN expr THEN expr  */
#line 424 "mysql.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2688 "mysql.tab.c"
    break;

  case 90: /* expr: expr LIKE expr  */
#line 427 "mysql.y"
                     { emit("LIKE"); }
#line 2694 "mysql.tab.c"
    break;

  case 91: /* expr: expr NOT LIKE expr  */
#line 428 "mysql.y"
                        { emit("LIKE"); emit("NOT"); }
#line 2700 "mysql.tab.c"
    break;

  case 92: /* expr: expr REGEXP expr  */
#line 431 "mysql.y"
                       { emit("REGEXP"); }
#line 2706 "mysql.tab.c"
    break;

  case 93: /* expr: expr NOT REGEXP expr  */
#line 432 "mysql.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 2712 "mysql.tab.c"
    break;

  case 94: /* expr: CURRENT_TIMESTAMP  */
#line 435 "mysql.y"
                        { emit("NOW"); }
#line 2718 "mysql.tab.c"
    break;

  case 95: /* expr: CURRENT_DATE  */
#line 436 "mysql.y"
                        { emit("NOW"); }
#line 2724 "mysql.tab.c"
    break;

  case 96: /* expr: CURRENT_TIME  */
#line 437 "mysql.y"
                        { emit("NOW"); }
#line 2730 "mysql.tab.c"
    break;

  case 97: /* expr: CURRENT_USER  */
#line 438 "mysql.y"
                        { emit("CURRENT_USER") }
#line 2736 "mysql.tab.c"
    break;

  case 98: /* expr: CURRENT_TIMESTAMP '(' ')'  */
#line 439 "mysql.y"
                               { emit("NOW") }
#line 2742 "mysql.tab.c"
    break;

  case 99: /* expr: CURRENT_DATE '(' ')'  */
#line 440 "mysql.y"
                               { emit("NOW") }
#line 2748 "mysql.tab.c"
    break;

  case 100: /* expr: CURRENT_TIME '(' ')'  */
#line 441 "mysql.y"
                               { emit("NOW") }
#line 2754 "mysql.tab.c"
    break;

  case 101: /* expr: CURRENT_USER '(' ')'  */
#line 442 "mysql.y"
                               { emit("CURRENT_USER") }
#line 2760 "mysql.tab.c"
    break;

  case 102: /* expr: BINARY expr  */
#line 445 "mysql.y"
                               { emit("STRTOBIN"); }
#line 2766 "mysql.tab.c"
    break;

  case 103: /* stmt: select_stmt  */
#line 450 "mysql.y"
                  { emit("STMT"); }
#line 2772 "mysql.tab.c"
    break;

  case 104: /* select_stmt: SELECT select_opts select_expr_list opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list opt_union  */
#line 454 "mysql.y"
                        { emit("SELECTNODATA %d %d", (yyvsp[-8].intval), (yyvsp[-7].intval)); }
#line 2778 "mysql.tab.c"
    break;

  case 105: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list opt_union  */
#line 455 "mysql.y"
                                                                                                                                                { emit("SELECT %d %d %d", (yyvsp[-10].intval), (yyvsp[-9].intval), (yyvsp[-7].intval)); }
#line 2784 "mysql.tab.c"
    break;

  case 110: /* opt_where: WHERE expr  */
#line 464 "mysql.y"
                { emit("WHERE"); }
#line 2790 "mysql.tab.c"
    break;

  case 112: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 468 "mysql.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2796 "mysql.tab.c"
    break;

  case 113: /* groupby_list: expr opt_asc_desc  */
#line 472 "mysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2802 "mysql.tab.c"
    break;

  case 114: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 474 "mysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2808 "mysql.tab.c"
    break;

  case 115: /* opt_asc_desc: %empty  */
#line 477 "mysql.y"
                        { (yyval.intval) = 0; }
#line 2814 "mysql.tab.c"
    break;

  case 116: /* opt_asc_desc: ASC  */
#line 478 "mysql.y"
                        { (yyval.intval) = 0; }
#line 2820 "mysql.tab.c"
    break;

  case 117: /* opt_asc_desc: DESC  */
#line 479 "mysql.y"
                        { (yyval.intval) = 1; }
#line 2826 "mysql.tab.c"
    break;

  case 118: /* opt_with_rollup: %empty  */
#line 482 "mysql.y"
                            { (yyval.intval) = 0; }
#line 2832 "mysql.tab.c"
    break;

  case 119: /* opt_with_rollup: WITH ROLLUP  */
#line 483 "mysql.y"
                  { (yyval.intval) = 1; }
#line 2838 "mysql.tab.c"
    break;

  case 121: /* opt_having: HAVING expr  */
#line 487 "mysql.y"
                 { emit("HAVING"); }
#line 2844 "mysql.tab.c"
    break;

  case 123: /* opt_orderby: ORDER BY groupby_list  */
#line 490 "mysql.y"
                           { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2850 "mysql.tab.c"
    break;

  case 125: /* opt_limit: LIMIT expr  */
#line 493 "mysql.y"
                                  { emit("LIMIT 1"); }
#line 2856 "mysql.tab.c"
    break;

  case 126: /* opt_limit: LIMIT expr ',' expr  */
#line 494 "mysql.y"
                                    { emit("LIMIT 2"); }
#line 2862 "mysql.tab.c"
    break;

  case 127: /* opt_limit: LIMIT expr OFFSET expr  */
#line 495 "mysql.y"
                                  { emit("LIMIT 2"); }
#line 2868 "mysql.tab.c"
    break;

  case 129: /* opt_into_list: INTO column_list  */
#line 499 "mysql.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2874 "mysql.tab.c"
    break;

  case 131: /* column_list: NAME  */
#line 503 "mysql.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2880 "mysql.tab.c"
    break;

  case 132: /* column_list: column_list ',' NAME  */
#line 504 "mysql.y"
                          { emit("COLUMN %s", (yyvsp[0].strval));  (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2886 "mysql.tab.c"
    break;

  case 133: /* select_opts: %empty  */
#line 507 "mysql.y"
                                      { (yyval.intval) = 0; }
#line 2892 "mysql.tab.c"
    break;

  case 134: /* select_opts: select_opts ALL  */
#line 509 "mysql.y"
   { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; return 1;}
#line 2898 "mysql.tab.c"
    break;

  case 135: /* select_opts: select_opts DISTINCT  */
#line 511 "mysql.y"
   { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; return 1;}
#line 2904 "mysql.tab.c"
    break;

  case 136: /* select_opts: select_opts DISTINCTROW  */
#line 513 "mysql.y"
   { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; return 1;}
#line 2910 "mysql.tab.c"
    break;

  case 137: /* select_opts: select_opts HIGH_PRIORITY  */
#line 515 "mysql.y"
   { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; return 1;}
#line 2916 "mysql.tab.c"
    break;

  case 138: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 517 "mysql.y"
   { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; return 1;}
#line 2922 "mysql.tab.c"
    break;

  case 139: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 519 "mysql.y"
   { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; return 1;}
#line 2928 "mysql.tab.c"
    break;

  case 140: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 521 "mysql.y"
   { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; return 1;}
#line 2934 "mysql.tab.c"
    break;

  case 141: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 523 "mysql.y"
   { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) =
   (yyvsp[-1].intval) | 0200; return 1;}
#line 2941 "mysql.tab.c"
    break;

  case 142: /* select_expr_list: select_expr  */
#line 527 "mysql.y"
                              { (yyval.intval) = 1; }
#line 2947 "mysql.tab.c"
    break;

  case 143: /* select_expr_list: select_expr_list ',' select_expr  */
#line 528 "mysql.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2953 "mysql.tab.c"
    break;

  case 144: /* select_expr_list: '*'  */
#line 529 "mysql.y"
          { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2959 "mysql.tab.c"
    break;

  case 146: /* opt_as_alias: AS NAME  */
#line 534 "mysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); }
#line 2965 "mysql.tab.c"
    break;

  case 147: /* opt_as_alias: NAME  */
#line 535 "mysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); }
#line 2971 "mysql.tab.c"
    break;

  case 149: /* table_references: table_reference  */
#line 539 "mysql.y"
                                       { (yyval.intval) = 1; }
#line 2977 "mysql.tab.c"
    break;

  case 150: /* table_references: table_references ',' table_reference  */
#line 540 "mysql.y"
                                           { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2983 "mysql.tab.c"
    break;

  case 153: /* table_factor: NAME opt_as_alias index_hint  */
#line 548 "mysql.y"
                                 { emit("TABLE %s", (yyvsp[-2].strval)); }
#line 2989 "mysql.tab.c"
    break;

  case 154: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 549 "mysql.y"
                                          { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); }
#line 2995 "mysql.tab.c"
    break;

  case 155: /* table_factor: '`' NAME '`' opt_as_alias index_hint  */
#line 550 "mysql.y"
                                         { emit("TABLE %s", (yyvsp[-3].strval)); }
#line 3001 "mysql.tab.c"
    break;

  case 156: /* table_factor: '`' NAME '.' NAME '`' opt_as_alias index_hint  */
#line 551 "mysql.y"
                                                  { emit("TABLE %s.%s", (yyvsp[-5].strval), (yyvsp[-3].strval)); }
#line 3007 "mysql.tab.c"
    break;

  case 157: /* table_factor: table_subquery opt_as NAME  */
#line 552 "mysql.y"
                               { emit("SUBQUERYAS %s", (yyvsp[0].strval)); }
#line 3013 "mysql.tab.c"
    break;

  case 158: /* table_factor: '(' table_references ')'  */
#line 553 "mysql.y"
                             { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 3019 "mysql.tab.c"
    break;

  case 159: /* table_factor: '{' NAME table_reference '}'  */
#line 554 "mysql.y"
                                 { emit("TABLE ALIAS %s", (yyvsp[-2].strval)); }
#line 3025 "mysql.tab.c"
    break;

  case 162: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 563 "mysql.y"
                  { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 3031 "mysql.tab.c"
    break;

  case 163: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 565 "mysql.y"
                  { emit("JOIN %d", 200); }
#line 3037 "mysql.tab.c"
    break;

  case 164: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 567 "mysql.y"
                  { emit("JOIN %d", 200); }
#line 3043 "mysql.tab.c"
    break;

  case 165: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 569 "mysql.y"
                  { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 3049 "mysql.tab.c"
    break;

  case 166: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 571 "mysql.y"
                  { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 3055 "mysql.tab.c"
    break;

  case 167: /* opt_inner_cross: %empty  */
#line 574 "mysql.y"
                           { (yyval.intval) = 0; }
#line 3061 "mysql.tab.c"
    break;

  case 168: /* opt_inner_cross: INNER  */
#line 575 "mysql.y"
           { (yyval.intval) = 1; }
#line 3067 "mysql.tab.c"
    break;

  case 169: /* opt_inner_cross: CROSS  */
#line 576 "mysql.y"
            { (yyval.intval) = 2; }
#line 3073 "mysql.tab.c"
    break;

  case 170: /* opt_outer: %empty  */
#line 579 "mysql.y"
                      { (yyval.intval) = 0; }
#line 3079 "mysql.tab.c"
    break;

  case 171: /* opt_outer: OUTER  */
#line 580 "mysql.y"
           {(yyval.intval) = 4; }
#line 3085 "mysql.tab.c"
    break;

  case 172: /* left_or_right: LEFT  */
#line 583 "mysql.y"
                    { (yyval.intval) = 1; }
#line 3091 "mysql.tab.c"
    break;

  case 173: /* left_or_right: RIGHT  */
#line 584 "mysql.y"
            { (yyval.intval) = 2; }
#line 3097 "mysql.tab.c"
    break;

  case 174: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 587 "mysql.y"
                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 3103 "mysql.tab.c"
    break;

  case 175: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 588 "mysql.y"
                      { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 3109 "mysql.tab.c"
    break;

  case 176: /* opt_left_or_right_outer: %empty  */
#line 589 "mysql.y"
               { (yyval.intval) = 0; }
#line 3115 "mysql.tab.c"
    break;

  case 179: /* join_condition: ON expr  */
#line 596 "mysql.y"
            { emit("ONEXPR"); }
#line 3121 "mysql.tab.c"
    break;

  case 180: /* join_condition: USING '(' column_list ')'  */
#line 597 "mysql.y"
                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 3127 "mysql.tab.c"
    break;

  case 181: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 602 "mysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 3133 "mysql.tab.c"
    break;

  case 182: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 604 "mysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 3139 "mysql.tab.c"
    break;

  case 183: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 606 "mysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 3145 "mysql.tab.c"
    break;

  case 185: /* opt_for_join: FOR JOIN  */
#line 610 "mysql.y"
                       { (yyval.intval) = 1; }
#line 3151 "mysql.tab.c"
    break;

  case 186: /* opt_for_join: %empty  */
#line 611 "mysql.y"
               { (yyval.intval) = 0; }
#line 3157 "mysql.tab.c"
    break;

  case 187: /* index_list: NAME  */
#line 614 "mysql.y"
                  { emit("INDEX %s", (yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3163 "mysql.tab.c"
    break;

  case 188: /* index_list: index_list ',' NAME  */
#line 615 "mysql.y"
                         { emit("INDEX %s", (yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3169 "mysql.tab.c"
    break;

  case 189: /* table_subquery: '(' select_stmt ')'  */
#line 618 "mysql.y"
                                    { emit("SUBQUERY"); }
#line 3175 "mysql.tab.c"
    break;

  case 190: /* stmt: delete_stmt  */
#line 623 "mysql.y"
                  { emit("STMT"); }
#line 3181 "mysql.tab.c"
    break;

  case 191: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 629 "mysql.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); }
#line 3187 "mysql.tab.c"
    break;

  case 192: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 632 "mysql.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 3193 "mysql.tab.c"
    break;

  case 193: /* delete_opts: delete_opts QUICK  */
#line 633 "mysql.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 3199 "mysql.tab.c"
    break;

  case 194: /* delete_opts: delete_opts IGNORE  */
#line 634 "mysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 3205 "mysql.tab.c"
    break;

  case 195: /* delete_opts: %empty  */
#line 635 "mysql.y"
               { (yyval.intval) = 0; }
#line 3211 "mysql.tab.c"
    break;

  case 196: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 642 "mysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3217 "mysql.tab.c"
    break;

  case 197: /* delete_list: NAME opt_dot_star  */
#line 644 "mysql.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 3223 "mysql.tab.c"
    break;

  case 198: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 646 "mysql.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 3229 "mysql.tab.c"
    break;

  case 201: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 655 "mysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3235 "mysql.tab.c"
    break;

  case 202: /* stmt: insert_stmt  */
#line 660 "mysql.y"
                  { emit("STMT"); }
#line 3241 "mysql.tab.c"
    break;

  case 203: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 666 "mysql.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); }
#line 3247 "mysql.tab.c"
    break;

  case 205: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 670 "mysql.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 3253 "mysql.tab.c"
    break;

  case 206: /* insert_opts: %empty  */
#line 673 "mysql.y"
                       { (yyval.intval) = 0; }
#line 3259 "mysql.tab.c"
    break;

  case 207: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 674 "mysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3265 "mysql.tab.c"
    break;

  case 208: /* insert_opts: insert_opts DELAYED  */
#line 675 "mysql.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 3271 "mysql.tab.c"
    break;

  case 209: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 676 "mysql.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 3277 "mysql.tab.c"
    break;

  case 210: /* insert_opts: insert_opts IGNORE  */
#line 677 "mysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3283 "mysql.tab.c"
    break;

  case 214: /* opt_col_names: '(' column_list ')'  */
#line 684 "mysql.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3289 "mysql.tab.c"
    break;

  case 215: /* insert_vals_list: '(' insert_vals ')'  */
#line 687 "mysql.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3295 "mysql.tab.c"
    break;

  case 216: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 688 "mysql.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3301 "mysql.tab.c"
    break;

  case 217: /* insert_vals: expr  */
#line 691 "mysql.y"
          { (yyval.intval) = 1; }
#line 3307 "mysql.tab.c"
    break;

  case 218: /* insert_vals: DEFAULT  */
#line 692 "mysql.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3313 "mysql.tab.c"
    break;

  case 219: /* insert_vals: insert_vals ',' expr  */
#line 693 "mysql.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3319 "mysql.tab.c"
    break;

  case 220: /* insert_vals: insert_vals ',' DEFAULT  */
#line 694 "mysql.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3325 "mysql.tab.c"
    break;

  case 221: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 699 "mysql.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); }
#line 3331 "mysql.tab.c"
    break;

  case 222: /* insert_asgn_list: NAME COMPARISON expr  */
#line 704 "mysql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); (yyval.intval) = 1; return 1;}
#line 3338 "mysql.tab.c"
    break;

  case 223: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 707 "mysql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); (yyval.intval) = 1; return 1;}
#line 3345 "mysql.tab.c"
    break;

  case 224: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 710 "mysql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; return 1;}
#line 3352 "mysql.tab.c"
    break;

  case 225: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 713 "mysql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; return 1;}
#line 3359 "mysql.tab.c"
    break;

  case 226: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 719 "mysql.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); }
#line 3365 "mysql.tab.c"
    break;

  case 227: /* stmt: replace_stmt  */
#line 723 "mysql.y"
                   { emit("STMT"); }
#line 3371 "mysql.tab.c"
    break;

  case 228: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 729 "mysql.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); }
#line 3377 "mysql.tab.c"
    break;

  case 229: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 735 "mysql.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); }
#line 3383 "mysql.tab.c"
    break;

  case 230: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 740 "mysql.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); }
#line 3389 "mysql.tab.c"
    break;

  case 231: /* stmt: update_stmt  */
#line 744 "mysql.y"
                  { emit("STMT"); }
#line 3395 "mysql.tab.c"
    break;

  case 232: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 751 "mysql.y"
                  { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 3401 "mysql.tab.c"
    break;

  case 233: /* update_opts: %empty  */
#line 754 "mysql.y"
                       { (yyval.intval) = 0; }
#line 3407 "mysql.tab.c"
    break;

  case 234: /* update_opts: insert_opts LOW_PRIORITY  */
#line 755 "mysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3413 "mysql.tab.c"
    break;

  case 235: /* update_opts: insert_opts IGNORE  */
#line 756 "mysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3419 "mysql.tab.c"
    break;

  case 236: /* update_asgn_list: NAME COMPARISON expr  */
#line 761 "mysql.y"
     { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); (yyval.intval) = 1; return 1;}
#line 3426 "mysql.tab.c"
    break;

  case 237: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 764 "mysql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); (yyval.intval) = 1; return 1;}
#line 3433 "mysql.tab.c"
    break;

  case 238: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 767 "mysql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; return 1;}
#line 3440 "mysql.tab.c"
    break;

  case 239: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 770 "mysql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval));
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); (yyval.intval) = 1; return 1;}
#line 3448 "mysql.tab.c"
    break;

  case 240: /* stmt: create_database_stmt  */
#line 777 "mysql.y"
                           { emit("STMT"); }
#line 3454 "mysql.tab.c"
    break;

  case 241: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 782 "mysql.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); }
#line 3460 "mysql.tab.c"
    break;

  case 242: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 784 "mysql.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); }
#line 3466 "mysql.tab.c"
    break;

  case 243: /* opt_if_not_exists: %empty  */
#line 787 "mysql.y"
                              { (yyval.intval) = 0; }
#line 3472 "mysql.tab.c"
    break;

  case 244: /* opt_if_not_exists: IF EXISTS  */
#line 789 "mysql.y"
       { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ return 1;}
#line 3479 "mysql.tab.c"
    break;

  case 245: /* stmt: create_table_stmt  */
#line 794 "mysql.y"
                        { emit("STMT"); }
#line 3485 "mysql.tab.c"
    break;

  case 246: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 798 "mysql.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); }
#line 3491 "mysql.tab.c"
    break;

  case 247: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 802 "mysql.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); }
#line 3497 "mysql.tab.c"
    break;

  case 248: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 807 "mysql.y"
                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); }
#line 3503 "mysql.tab.c"
    break;

  case 249: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 811 "mysql.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); }
#line 3509 "mysql.tab.c"
    break;

  case 250: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 816 "mysql.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                               }
#line 3516 "mysql.tab.c"
    break;

  case 251: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 821 "mysql.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          }
#line 3523 "mysql.tab.c"
    break;

  case 252: /* opt_temporary: %empty  */
#line 825 "mysql.y"
                           { (yyval.intval) = 0; }
#line 3529 "mysql.tab.c"
    break;

  case 253: /* opt_temporary: TEMPORARY  */
#line 826 "mysql.y"
               { (yyval.intval) = 1;}
#line 3535 "mysql.tab.c"
    break;

  case 254: /* create_col_list: create_definition  */
#line 829 "mysql.y"
                                   { (yyval.intval) = 1; }
#line 3541 "mysql.tab.c"
    break;

  case 255: /* create_col_list: create_col_list ',' create_definition  */
#line 830 "mysql.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3547 "mysql.tab.c"
    break;

  case 256: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 833 "mysql.y"
                                                      { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3553 "mysql.tab.c"
    break;

  case 257: /* create_definition: KEY '(' column_list ')'  */
#line 834 "mysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3559 "mysql.tab.c"
    break;

  case 258: /* create_definition: INDEX '(' column_list ')'  */
#line 835 "mysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3565 "mysql.tab.c"
    break;

  case 259: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 836 "mysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3571 "mysql.tab.c"
    break;

  case 260: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 837 "mysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3577 "mysql.tab.c"
    break;

  case 261: /* $@1: %empty  */
#line 840 "mysql.y"
                   { emit("STARTCOL"); }
#line 3583 "mysql.tab.c"
    break;

  case 262: /* create_definition: $@1 NAME data_type column_atts  */
#line 841 "mysql.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); }
#line 3589 "mysql.tab.c"
    break;

  case 263: /* column_atts: %empty  */
#line 843 "mysql.y"
                       { (yyval.intval) = 0; }
#line 3595 "mysql.tab.c"
    break;

  case 264: /* column_atts: column_atts NOT NULLX  */
#line 844 "mysql.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3601 "mysql.tab.c"
    break;

  case 266: /* column_atts: column_atts DEFAULT STRING  */
#line 847 "mysql.y"
        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval));  (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3607 "mysql.tab.c"
    break;

  case 267: /* column_atts: column_atts DEFAULT INTNUM  */
#line 849 "mysql.y"
        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3613 "mysql.tab.c"
    break;

  case 268: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 851 "mysql.y"
        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3619 "mysql.tab.c"
    break;

  case 269: /* column_atts: column_atts DEFAULT BOOL  */
#line 853 "mysql.y"
        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3625 "mysql.tab.c"
    break;

  case 270: /* column_atts: column_atts AUTO_INCREMENT  */
#line 855 "mysql.y"
        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3631 "mysql.tab.c"
    break;

  case 271: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 857 "mysql.y"
        { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3637 "mysql.tab.c"
    break;

  case 272: /* column_atts: column_atts UNIQUE KEY  */
#line 858 "mysql.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3643 "mysql.tab.c"
    break;

  case 273: /* column_atts: column_atts PRIMARY KEY  */
#line 859 "mysql.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3649 "mysql.tab.c"
    break;

  case 274: /* column_atts: column_atts KEY  */
#line 860 "mysql.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3655 "mysql.tab.c"
    break;

  case 275: /* column_atts: column_atts COMMENT STRING  */
#line 862 "mysql.y"
        { emit("ATTR COMMENT %s", (yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3661 "mysql.tab.c"
    break;

  case 276: /* opt_length: %empty  */
#line 865 "mysql.y"
                      { (yyval.intval) = 0; }
#line 3667 "mysql.tab.c"
    break;

  case 277: /* opt_length: '(' INTNUM ')'  */
#line 866 "mysql.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3673 "mysql.tab.c"
    break;

  case 278: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 867 "mysql.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3679 "mysql.tab.c"
    break;

  case 279: /* opt_binary: %empty  */
#line 870 "mysql.y"
                      { (yyval.intval) = 0; }
#line 3685 "mysql.tab.c"
    break;

  case 280: /* opt_binary: BINARY  */
#line 871 "mysql.y"
            { (yyval.intval) = 4000; }
#line 3691 "mysql.tab.c"
    break;

  case 281: /* opt_uz: %empty  */
#line 874 "mysql.y"
                  { (yyval.intval) = 0; }
#line 3697 "mysql.tab.c"
    break;

  case 282: /* opt_uz: opt_uz UNSIGNED  */
#line 875 "mysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3703 "mysql.tab.c"
    break;

  case 283: /* opt_uz: opt_uz ZEROFILL  */
#line 876 "mysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3709 "mysql.tab.c"
    break;

  case 285: /* opt_csc: opt_csc CHAR SET STRING  */
#line 880 "mysql.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval));  }
#line 3715 "mysql.tab.c"
    break;

  case 286: /* opt_csc: opt_csc COLLATE STRING  */
#line 881 "mysql.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval));  }
#line 3721 "mysql.tab.c"
    break;

  case 287: /* data_type: BIT opt_length  */
#line 885 "mysql.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3727 "mysql.tab.c"
    break;

  case 288: /* data_type: TINYINT opt_length opt_uz  */
#line 886 "mysql.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3733 "mysql.tab.c"
    break;

  case 289: /* data_type: SMALLINT opt_length opt_uz  */
#line 887 "mysql.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3739 "mysql.tab.c"
    break;

  case 290: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 888 "mysql.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3745 "mysql.tab.c"
    break;

  case 291: /* data_type: INT opt_length opt_uz  */
#line 889 "mysql.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3751 "mysql.tab.c"
    break;

  case 292: /* data_type: INTEGER opt_length opt_uz  */
#line 890 "mysql.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3757 "mysql.tab.c"
    break;

  case 293: /* data_type: BIGINT opt_length opt_uz  */
#line 891 "mysql.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3763 "mysql.tab.c"
    break;

  case 294: /* data_type: REAL opt_length opt_uz  */
#line 892 "mysql.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3769 "mysql.tab.c"
    break;

  case 295: /* data_type: DOUBLE opt_length opt_uz  */
#line 893 "mysql.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3775 "mysql.tab.c"
    break;

  case 296: /* data_type: FLOAT opt_length opt_uz  */
#line 894 "mysql.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3781 "mysql.tab.c"
    break;

  case 297: /* data_type: DECIMAL opt_length opt_uz  */
#line 895 "mysql.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3787 "mysql.tab.c"
    break;

  case 298: /* data_type: DATE  */
#line 896 "mysql.y"
          { (yyval.intval) = 100001; }
#line 3793 "mysql.tab.c"
    break;

  case 299: /* data_type: TIME  */
#line 897 "mysql.y"
          { (yyval.intval) = 100002; }
#line 3799 "mysql.tab.c"
    break;

  case 300: /* data_type: TIMESTAMP  */
#line 898 "mysql.y"
               { (yyval.intval) = 100003; }
#line 3805 "mysql.tab.c"
    break;

  case 301: /* data_type: DATETIME  */
#line 899 "mysql.y"
              { (yyval.intval) = 100004; }
#line 3811 "mysql.tab.c"
    break;

  case 302: /* data_type: YEAR  */
#line 900 "mysql.y"
          { (yyval.intval) = 100005; }
#line 3817 "mysql.tab.c"
    break;

  case 303: /* data_type: CHAR opt_length opt_csc  */
#line 901 "mysql.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3823 "mysql.tab.c"
    break;

  case 304: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 902 "mysql.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3829 "mysql.tab.c"
    break;

  case 305: /* data_type: BINARY opt_length  */
#line 903 "mysql.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3835 "mysql.tab.c"
    break;

  case 306: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 904 "mysql.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3841 "mysql.tab.c"
    break;

  case 307: /* data_type: TINYBLOB  */
#line 905 "mysql.y"
              { (yyval.intval) = 160001; }
#line 3847 "mysql.tab.c"
    break;

  case 308: /* data_type: BLOB  */
#line 906 "mysql.y"
          { (yyval.intval) = 160002; }
#line 3853 "mysql.tab.c"
    break;

  case 309: /* data_type: MEDIUMBLOB  */
#line 907 "mysql.y"
                { (yyval.intval) = 160003; }
#line 3859 "mysql.tab.c"
    break;

  case 310: /* data_type: LONGBLOB  */
#line 908 "mysql.y"
              { (yyval.intval) = 160004; }
#line 3865 "mysql.tab.c"
    break;

  case 311: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 909 "mysql.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3871 "mysql.tab.c"
    break;

  case 312: /* data_type: TEXT opt_binary opt_csc  */
#line 910 "mysql.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3877 "mysql.tab.c"
    break;

  case 313: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 911 "mysql.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3883 "mysql.tab.c"
    break;

  case 314: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 912 "mysql.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3889 "mysql.tab.c"
    break;

  case 315: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 913 "mysql.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3895 "mysql.tab.c"
    break;

  case 316: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 914 "mysql.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3901 "mysql.tab.c"
    break;

  case 317: /* enum_list: STRING  */
#line 917 "mysql.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval));  (yyval.intval) = 1; }
#line 3907 "mysql.tab.c"
    break;

  case 318: /* enum_list: enum_list ',' STRING  */
#line 918 "mysql.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval));  (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3913 "mysql.tab.c"
    break;

  case 319: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 921 "mysql.y"
                                                                  { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3919 "mysql.tab.c"
    break;

  case 320: /* opt_ignore_replace: %empty  */
#line 924 "mysql.y"
                              { (yyval.intval) = 0; }
#line 3925 "mysql.tab.c"
    break;

  case 321: /* opt_ignore_replace: IGNORE  */
#line 925 "mysql.y"
            { (yyval.intval) = 1; }
#line 3931 "mysql.tab.c"
    break;

  case 322: /* opt_ignore_replace: REPLACE  */
#line 926 "mysql.y"
             { (yyval.intval) = 2; }
#line 3937 "mysql.tab.c"
    break;

  case 323: /* stmt: set_stmt  */
#line 931 "mysql.y"
               { emit("STMT"); }
#line 3943 "mysql.tab.c"
    break;

  case 327: /* set_expr: USERVAR COMPARISON expr  */
#line 939 "mysql.y"
                              { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[-2].strval));  return 1;}
#line 3950 "mysql.tab.c"
    break;

  case 328: /* set_expr: USERVAR ASSIGN expr  */
#line 941 "mysql.y"
                          { emit("SET %s", (yyvsp[-2].strval));  }
#line 3956 "mysql.tab.c"
    break;


#line 3960 "mysql.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  /*从栈中把要规约的token出栈*/
  YYPOPSTACK (yylen);
  yylen = 0;

  /*把语义值入栈*/
  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
	/*根据规约规则id获取规则左边非终结符的索引偏移，YYNTOKENS为终结符个数，如果查询yydefgoto表则使用非终结符的偏移索引作为key获取跳转状态*/
    const int yylhs = yyr1[yyn] - YYNTOKENS;
	/*如果查询yytable表，则使用yyi作为索引*/
    const int yyi = yypgoto[yylhs] + *yyssp;
	/*更新跳转状态，从yytable获取跳转状态或者yydefgoto获取默认
	 * 跳转状态*/
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 944 "mysql.y"

/*void emit(char *s, ...)
{
  extern yylineno;

}*/

void
yyerror(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}
