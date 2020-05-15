/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_MYSQL_TAB_H_INCLUDED
# define YY_YY_MYSQL_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     RISK_FUNCTION = 259,
     STRING = 260,
     INTNUM = 261,
     BOOL = 262,
     APPROXNUM = 263,
     USERVAR = 264,
     ASSIGN = 265,
     OR = 266,
     XOR = 267,
     ANDOP = 268,
     REGEXP = 269,
     LIKE = 270,
     IS = 271,
     IN = 272,
     NOT = 273,
     BETWEEN = 274,
     COMPARISON = 275,
     SHIFT = 276,
     MOD = 277,
     UMINUS = 278,
     ADD = 279,
     ALL = 280,
     ALTER = 281,
     ANALYZE = 282,
     AND = 283,
     ANY = 284,
     AS = 285,
     ASC = 286,
     AUTO_INCREMENT = 287,
     BEFORE = 288,
     BIGINT = 289,
     BINARY = 290,
     BIT = 291,
     BLOB = 292,
     BOTH = 293,
     BY = 294,
     CALL = 295,
     CASCADE = 296,
     CASE = 297,
     CHANGE = 298,
     CHAR = 299,
     CHECK = 300,
     COLLATE = 301,
     COLUMN = 302,
     COMMENT = 303,
     CONDITION = 304,
     CONSTRAINT = 305,
     CONTINUE = 306,
     CONVERT = 307,
     CREATE = 308,
     CROSS = 309,
     CURRENT_DATE = 310,
     CURRENT_TIME = 311,
     CURRENT_TIMESTAMP = 312,
     CURRENT_USER = 313,
     CURSOR = 314,
     DATABASE = 315,
     DATABASES = 316,
     DATE = 317,
     DATETIME = 318,
     DAY_HOUR = 319,
     DAY_MICROSECOND = 320,
     DAY_MINUTE = 321,
     DAY_SECOND = 322,
     DECIMAL = 323,
     DECLARE = 324,
     DEFAULT = 325,
     DELAYED = 326,
     DELETE = 327,
     DESC = 328,
     DESCRIBE = 329,
     DETERMINISTIC = 330,
     DISTINCT = 331,
     DISTINCTROW = 332,
     DIV = 333,
     DOUBLE = 334,
     DROP = 335,
     DUAL = 336,
     EACH = 337,
     ELSE = 338,
     ELSEIF = 339,
     END = 340,
     ENUM = 341,
     EXIT = 342,
     EXPLAIN = 343,
     FETCH = 344,
     FLOAT = 345,
     FOR = 346,
     FORCE = 347,
     FOREIGN = 348,
     FROM = 349,
     FULLTEXT = 350,
     GRANT = 351,
     GROUP = 352,
     HAVING = 353,
     HIGH_PRIORITY = 354,
     HOUR_MICROSECOND = 355,
     HOUR_MINUTE = 356,
     HOUR_SECOND = 357,
     IF = 358,
     IGNORE = 359,
     INFILE = 360,
     INDEX = 361,
     INNER = 362,
     INOUT = 363,
     INSENSITIVE = 364,
     INSERT = 365,
     INT = 366,
     INTEGER = 367,
     INTERVAL = 368,
     INTO = 369,
     ITERATE = 370,
     JOIN = 371,
     KEY = 372,
     KEYS = 373,
     KILL = 374,
     LEADING = 375,
     LEAVE = 376,
     LEFT = 377,
     LIMIT = 378,
     LINES = 379,
     LOAD = 380,
     LOCALTIME = 381,
     LOCALTIMESTAMP = 382,
     LOCK = 383,
     LONG = 384,
     LONGBLOB = 385,
     LONGTEXT = 386,
     LOOP = 387,
     LOW_PRIORITY = 388,
     MATCH = 389,
     MEDIUMBLOB = 390,
     MEDIUMINT = 391,
     MEDIUMTEXT = 392,
     MINUTE_MICROSECOND = 393,
     MINUTE_SECOND = 394,
     MODIFIES = 395,
     NATURAL = 396,
     NO_WRITE_TO_BINLOG = 397,
     NULLX = 398,
     NUMBER = 399,
     ON = 400,
     ONDUPLICATE = 401,
     OPTIMIZE = 402,
     OPTION = 403,
     OPTIONALLY = 404,
     ORDER = 405,
     OUT = 406,
     OUTER = 407,
     OUTFILE = 408,
     PRECISION = 409,
     PRIMARY = 410,
     PROCEDURE = 411,
     PURGE = 412,
     QUICK = 413,
     READ = 414,
     READS = 415,
     REAL = 416,
     REFERENCES = 417,
     RELEASE = 418,
     RENAME = 419,
     REPEAT = 420,
     REPLACE = 421,
     REQUIRE = 422,
     RESTRICT = 423,
     RETURN = 424,
     REVOKE = 425,
     RIGHT = 426,
     ROLLUP = 427,
     SCHEMA = 428,
     SCHEMAS = 429,
     SECOND_MICROSECOND = 430,
     SELECT = 431,
     SENSITIVE = 432,
     SEPARATOR = 433,
     SET = 434,
     SHOW = 435,
     SMALLINT = 436,
     SOME = 437,
     SONAME = 438,
     SPATIAL = 439,
     SPECIFIC = 440,
     SQL = 441,
     SQLEXCEPTION = 442,
     SQLSTATE = 443,
     SQLWARNING = 444,
     SQL_BIG_RESULT = 445,
     SQL_CALC_FOUND_ROWS = 446,
     SQL_SMALL_RESULT = 447,
     SSL = 448,
     STARTING = 449,
     STRAIGHT_JOIN = 450,
     TABLE = 451,
     TEMPORARY = 452,
     TERMINATED = 453,
     TEXT = 454,
     THEN = 455,
     TIME = 456,
     TIMESTAMP = 457,
     TINYBLOB = 458,
     TINYINT = 459,
     TINYTEXT = 460,
     TO = 461,
     TRAILING = 462,
     TRIGGER = 463,
     UNDO = 464,
     UNION = 465,
     UNIQUE = 466,
     UNLOCK = 467,
     UNSIGNED = 468,
     UPDATE = 469,
     USAGE = 470,
     USE = 471,
     USING = 472,
     UTC_DATE = 473,
     UTC_TIME = 474,
     UTC_TIMESTAMP = 475,
     VALUES = 476,
     VARBINARY = 477,
     VARCHAR = 478,
     VARYING = 479,
     WHEN = 480,
     WHERE = 481,
     WHILE = 482,
     WITH = 483,
     WRITE = 484,
     YEAR = 485,
     YEAR_MONTH = 486,
     ZEROFILL = 487,
     OFFSET = 488,
     ESCAPED = 489,
     EXISTS = 490,
     FSUBSTRING = 491,
     FTRIM = 492,
     FDATE_ADD = 493,
     FDATE_SUB = 494,
     FCOUNT = 495
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 17 "mysql.y"

        int intval;
        double floatval;
        char *strval;
        int subtok;


/* Line 2058 of yacc.c  */
#line 305 "mysql.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_MYSQL_TAB_H_INCLUDED  */
