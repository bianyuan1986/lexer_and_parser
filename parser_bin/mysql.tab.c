/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 5 "mysql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/time.h>

void yyerror(char *s, ...);
#define emit(args, ...)
#define free(pointer)


/* Line 371 of yacc.c  */
#line 80 "mysql.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mysql.tab.h".  */
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
/* Line 387 of yacc.c  */
#line 17 "mysql.y"

        int intval;
        double floatval;
        char *strval;
        int subtok;


/* Line 387 of yacc.c  */
#line 371 "mysql.tab.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 399 "mysql.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  88
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1997

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  258
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  328
/* YYNRULES -- Number of states.  */
#define YYNSTATES  703

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   495

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    29,    23,     2,
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
      15,    16,    17,    19,    20,    21,    24,    30,    32,    33,
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    13,    16,    20,    22,
      29,    31,    35,    37,    39,    41,    43,    45,    49,    53,
      57,    61,    65,    69,    72,    76,    80,    84,    88,    92,
      96,   100,   103,   106,   110,   114,   117,   122,   128,   135,
     142,   149,   153,   158,   162,   167,   171,   177,   183,   190,
     196,   203,   208,   213,   218,   223,   228,   233,   238,   245,
     254,   259,   267,   274,   281,   288,   295,   304,   307,   309,
     313,   314,   316,   318,   320,   322,   326,   330,   334,   338,
     342,   346,   350,   354,   358,   363,   370,   374,   380,   385,
     391,   395,   400,   404,   409,   411,   413,   415,   417,   421,
     425,   429,   433,   436,   438,   449,   462,   463,   467,   474,
     475,   478,   479,   484,   487,   492,   493,   495,   497,   498,
     501,   502,   505,   506,   510,   511,   514,   519,   524,   525,
     528,   532,   534,   538,   539,   542,   545,   548,   551,   554,
     557,   560,   563,   565,   569,   571,   574,   577,   579,   580,
     582,   586,   588,   590,   594,   600,   606,   614,   618,   622,
     627,   629,   630,   636,   640,   646,   653,   659,   660,   662,
     664,   665,   667,   669,   671,   674,   677,   678,   679,   681,
     684,   689,   696,   703,   710,   711,   714,   715,   717,   721,
     725,   727,   735,   738,   741,   744,   745,   752,   755,   760,
     761,   764,   772,   774,   783,   784,   789,   790,   793,   796,
     799,   802,   804,   805,   806,   810,   814,   820,   822,   824,
     828,   832,   840,   844,   848,   854,   860,   868,   870,   879,
     887,   895,   897,   906,   907,   910,   913,   917,   923,   929,
     937,   939,   944,   949,   950,   953,   955,   964,   975,   985,
     992,  1004,  1013,  1014,  1016,  1018,  1022,  1028,  1033,  1038,
    1044,  1050,  1051,  1056,  1057,  1061,  1064,  1068,  1072,  1076,
    1080,  1083,  1089,  1093,  1097,  1100,  1104,  1105,  1109,  1115,
    1116,  1118,  1119,  1122,  1125,  1126,  1131,  1135,  1138,  1142,
    1146,  1150,  1154,  1158,  1162,  1166,  1170,  1174,  1178,  1180,
    1182,  1184,  1186,  1188,  1192,  1198,  1201,  1206,  1208,  1210,
    1212,  1214,  1218,  1222,  1226,  1230,  1236,  1242,  1244,  1248,
    1252,  1253,  1255,  1257,  1259,  1262,  1264,  1268,  1272
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     259,     0,    -1,   260,    -1,   261,    -1,   261,   250,   260,
      -1,   269,    -1,   269,   250,    -1,   269,   250,   260,    -1,
     262,    -1,   264,   273,   277,   278,   279,   271,    -1,     3,
      -1,     3,   251,     3,    -1,     9,    -1,     5,    -1,     6,
      -1,     8,    -1,     7,    -1,   263,    25,   263,    -1,   263,
      26,   263,    -1,   263,    27,   263,    -1,   263,    28,   263,
      -1,   263,    29,   263,    -1,   263,    30,   263,    -1,    26,
     263,    -1,   263,    13,   263,    -1,   263,    11,   263,    -1,
     263,    12,   263,    -1,   263,    22,   263,    -1,   263,    23,
     263,    -1,   263,    31,   263,    -1,   263,    24,   263,    -1,
      19,   263,    -1,    18,   263,    -1,   263,    21,   263,    -1,
     252,   263,   253,    -1,   252,   263,    -1,   254,     3,   263,
     255,    -1,   263,    21,   252,   270,   253,    -1,   263,    21,
      38,   252,   270,   253,    -1,   263,    21,   191,   252,   270,
     253,    -1,   263,    21,    34,   252,   270,   253,    -1,   263,
      16,   152,    -1,   263,    16,    19,   152,    -1,   263,    16,
       7,    -1,   263,    16,    19,     7,    -1,     9,    10,   263,
      -1,   263,    20,   263,    37,   263,    -1,   263,    17,   252,
     264,   253,    -1,   263,    19,    17,   252,   264,   253,    -1,
     263,    17,   252,   270,   253,    -1,   263,    19,    17,   252,
     270,   253,    -1,   244,   252,   270,   253,    -1,   252,   270,
     253,   285,    -1,     4,   252,   265,   253,    -1,     3,   252,
     265,   253,    -1,   249,   252,    27,   253,    -1,   249,   252,
     263,   253,    -1,   245,   252,   264,   253,    -1,   245,   252,
     263,   103,   263,   253,    -1,   245,   252,   263,   103,   263,
     100,   263,   253,    -1,   246,   252,   264,   253,    -1,   246,
     252,   266,   263,   103,   264,   253,    -1,   247,   252,   263,
     256,   267,   253,    -1,   248,   252,   263,   256,   267,   253,
      -1,    61,   252,   263,   226,     3,   253,    -1,    61,   252,
     263,   256,     3,   253,    -1,   112,   252,   263,   256,   263,
     256,   263,   253,    -1,    44,   263,    -1,   263,    -1,   263,
     256,   264,    -1,    -1,   264,    -1,   129,    -1,   216,    -1,
      47,    -1,   122,   263,    73,    -1,   122,   263,    74,    -1,
     122,   263,    75,    -1,   122,   263,    76,    -1,   122,   263,
     240,    -1,   122,   263,   239,    -1,   122,   263,   109,    -1,
     122,   263,   110,    -1,   122,   263,   111,    -1,    51,   263,
     268,    94,    -1,    51,   263,   268,    92,   263,    94,    -1,
      51,   268,    94,    -1,    51,   268,    92,   263,    94,    -1,
     234,   263,   209,   263,    -1,   268,   234,   263,   209,   263,
      -1,   263,    15,   263,    -1,   263,    19,    15,   263,    -1,
     263,    14,   263,    -1,   263,    19,    14,   263,    -1,    66,
      -1,    64,    -1,    65,    -1,    67,    -1,    66,   252,   253,
      -1,    64,   252,   253,    -1,    65,   252,   253,    -1,    67,
     252,   253,    -1,    44,   263,    -1,   270,    -1,   185,   282,
     283,   272,   273,   277,   278,   279,   280,   271,    -1,   185,
     282,   283,   103,   286,   272,   273,   277,   278,   279,   280,
     271,    -1,    -1,   219,   282,   270,    -1,   219,   282,   252,
     270,   253,   285,    -1,    -1,   235,   263,    -1,    -1,   106,
      48,   274,   276,    -1,   263,   275,    -1,   274,   256,   263,
     275,    -1,    -1,    40,    -1,    82,    -1,    -1,   237,   181,
      -1,    -1,   107,   263,    -1,    -1,   159,    48,   274,    -1,
      -1,   132,   263,    -1,   132,   263,   256,   263,    -1,   132,
     263,   242,   263,    -1,    -1,   123,   281,    -1,   123,   162,
       5,    -1,     3,    -1,   281,   256,     3,    -1,    -1,   282,
      34,    -1,   282,    85,    -1,   282,    86,    -1,   282,   108,
      -1,   282,   204,    -1,   282,   201,    -1,   282,   199,    -1,
     282,   200,    -1,   284,    -1,   283,   256,   284,    -1,    27,
      -1,   263,   285,    -1,    39,     3,    -1,     3,    -1,    -1,
     287,    -1,   286,   256,   287,    -1,   288,    -1,   290,    -1,
       3,   285,   297,    -1,     3,   251,     3,   285,   297,    -1,
     257,     3,   257,   285,   297,    -1,   257,     3,   251,     3,
     257,   285,   297,    -1,   300,   289,     3,    -1,   252,   286,
     253,    -1,   254,     3,   287,   255,    -1,    39,    -1,    -1,
     287,   291,   125,   288,   295,    -1,   287,   204,   288,    -1,
     287,   204,   288,   154,   263,    -1,   287,   293,   292,   125,
     288,   296,    -1,   287,   150,   294,   125,   288,    -1,    -1,
     116,    -1,    63,    -1,    -1,   161,    -1,   131,    -1,   180,
      -1,   131,   292,    -1,   180,   292,    -1,    -1,    -1,   296,
      -1,   154,   263,    -1,   226,   252,   281,   253,    -1,   225,
     126,   298,   252,   299,   253,    -1,   113,   126,   298,   252,
     299,   253,    -1,   101,   126,   298,   252,   299,   253,    -1,
      -1,   100,   125,    -1,    -1,     3,    -1,   299,   256,     3,
      -1,   252,   270,   253,    -1,   301,    -1,    81,   302,   103,
       3,   272,   278,   279,    -1,   302,   142,    -1,   302,   167,
      -1,   302,   113,    -1,    -1,    81,   302,   303,   103,   286,
     272,    -1,     3,   304,    -1,   303,   256,     3,   304,    -1,
      -1,   251,    27,    -1,    81,   302,   103,   303,   226,   286,
     272,    -1,   305,    -1,   119,   307,   308,     3,   309,   230,
     310,   306,    -1,    -1,   155,   126,   223,   312,    -1,    -1,
     307,   142,    -1,   307,    80,    -1,   307,   108,    -1,   307,
     113,    -1,   123,    -1,    -1,    -1,   252,   281,   253,    -1,
     252,   311,   253,    -1,   310,   256,   252,   311,   253,    -1,
     263,    -1,    79,    -1,   311,   256,   263,    -1,   311,   256,
      79,    -1,   119,   307,   308,     3,   188,   312,   306,    -1,
       3,    21,   263,    -1,     3,    21,    79,    -1,   312,   256,
       3,    21,   263,    -1,   312,   256,     3,    21,    79,    -1,
     119,   307,   308,     3,   309,   270,   306,    -1,   313,    -1,
     175,   307,   308,     3,   309,   230,   310,   306,    -1,   175,
     307,   308,     3,   188,   312,   306,    -1,   175,   307,   308,
       3,   309,   270,   306,    -1,   314,    -1,   223,   315,   286,
     188,   316,   272,   278,   279,    -1,    -1,   307,   142,    -1,
     307,   113,    -1,     3,    21,   263,    -1,     3,   251,     3,
      21,   263,    -1,   316,   256,     3,    21,   263,    -1,   316,
     256,     3,   251,     3,    21,   263,    -1,   317,    -1,    62,
      69,   318,     3,    -1,    62,   182,   318,     3,    -1,    -1,
     112,   244,    -1,   319,    -1,    62,   320,   205,   318,     3,
     252,   321,   253,    -1,    62,   320,   205,   318,     3,   251,
       3,   252,   321,   253,    -1,    62,   320,   205,   318,     3,
     252,   321,   253,   331,    -1,    62,   320,   205,   318,     3,
     331,    -1,    62,   320,   205,   318,     3,   251,     3,   252,
     321,   253,   331,    -1,    62,   320,   205,   318,     3,   251,
       3,   331,    -1,    -1,   206,    -1,   322,    -1,   321,   256,
     322,    -1,   164,   126,   252,   281,   253,    -1,   126,   252,
     281,   253,    -1,   115,   252,   281,   253,    -1,   104,   115,
     252,   281,   253,    -1,   104,   126,   252,   281,   253,    -1,
      -1,   323,     3,   329,   324,    -1,    -1,   324,    19,   152,
      -1,   324,   152,    -1,   324,    79,     5,    -1,   324,    79,
       6,    -1,   324,    79,     8,    -1,   324,    79,     7,    -1,
     324,    41,    -1,   324,   220,   252,   281,   253,    -1,   324,
     220,   126,    -1,   324,   164,   126,    -1,   324,   126,    -1,
     324,    57,     5,    -1,    -1,   252,     6,   253,    -1,   252,
       6,   256,     6,   253,    -1,    -1,    44,    -1,    -1,   327,
     222,    -1,   327,   241,    -1,    -1,   328,    53,   188,     5,
      -1,   328,    55,     5,    -1,    45,   325,    -1,   213,   325,
     327,    -1,   190,   325,   327,    -1,   145,   325,   327,    -1,
     120,   325,   327,    -1,   121,   325,   327,    -1,    43,   325,
     327,    -1,   170,   325,   327,    -1,    88,   325,   327,    -1,
      99,   325,   327,    -1,    77,   325,   327,    -1,    71,    -1,
     210,    -1,   211,    -1,    72,    -1,   239,    -1,    53,   325,
     328,    -1,   232,   252,     6,   253,   328,    -1,    44,   325,
      -1,   231,   252,     6,   253,    -1,   212,    -1,    46,    -1,
     144,    -1,   139,    -1,   214,   326,   328,    -1,   208,   326,
     328,    -1,   146,   326,   328,    -1,   140,   326,   328,    -1,
      95,   252,   330,   253,   328,    -1,   188,   252,   330,   253,
     328,    -1,     5,    -1,   330,   256,     5,    -1,   332,   289,
     270,    -1,    -1,   113,    -1,   175,    -1,   333,    -1,   188,
     334,    -1,   335,    -1,   334,   256,   335,    -1,     9,    21,
     263,    -1,     9,    10,   263,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
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

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "RISK_FUNCTION", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP",
  "REGEXP", "LIKE", "IS", "IN", "'!'", "NOT", "BETWEEN", "COMPARISON",
  "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "UMINUS", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM", "EXIT", "EXPLAIN",
  "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT",
  "GROUP", "HAVING", "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE",
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
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
     274,   275,   124,    38,   276,    43,    45,    42,    47,    37,
     277,    94,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
      59,    46,    40,    41,   123,   125,    44,    96
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    10,     0,    13,    14,    16,    15,    12,     0,     0,
       0,     0,     0,     0,   252,    95,    96,    94,    97,   195,
       0,   206,   206,   133,     0,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     8,    68,   111,
       5,   103,   190,   202,   227,   231,   240,   245,   323,     0,
      70,    70,     0,    32,    31,    23,    67,     0,     0,     0,
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
      26,    24,    92,    90,    43,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    27,    28,    30,
      17,    18,    19,    20,    21,    22,    29,    69,     0,     0,
     122,     7,    54,    53,     0,     0,    84,     0,     0,     0,
       0,   244,   241,   242,     0,     0,   197,   109,     0,     0,
       0,     0,   213,   213,   147,     0,   145,     0,     0,     0,
     111,   328,   327,   326,     0,   184,     0,     0,     0,     0,
       0,     0,   169,   168,   172,   176,   173,     0,     0,   170,
     160,     0,    51,     0,    57,    60,     0,     0,     0,    55,
      56,    52,    36,    44,    42,     0,     0,    93,    91,     0,
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    34,    35,    36,    37,    38,   115,   116,   180,   347,
      59,    40,    41,   426,   250,   112,   296,   360,   363,   220,
     299,   366,   574,   385,    73,   157,   158,   281,   168,   169,
     170,   271,   171,   268,   342,   269,   338,   468,   469,   327,
     455,   576,   172,    42,    69,   138,   236,    43,   442,    71,
     145,   315,   446,   505,   383,    44,    45,    78,   334,    46,
     126,    47,    64,   432,   433,   434,   614,   592,   603,   637,
     638,   566,   642,   375,   376,    48,    75,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -520
static const yytype_int16 yypact[] =
{
     379,    28,  -215,  -520,  -520,  -520,  -520,    37,  1122,  1122,
    1122,  1122,   662,  -195,   -38,  -183,  -140,  -107,   -90,  -520,
     -85,  -520,  -520,  -520,   183,     3,   -52,    -1,    23,    29,
      45,    53,   712,   240,   224,  -520,   -14,  -520,  1179,   208,
      86,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,   337,
    1122,  1122,  1122,   947,   947,  -520,  -520,  1122,  1506,   -46,
    1122,   238,   238,  -520,   165,   122,   126,   143,   153,    47,
    1122,   226,   226,   281,   198,   154,  -520,   282,    10,   244,
    1122,   446,  1122,  1122,   739,  1387,   181,  1122,  -520,    27,
    1122,  1122,  1122,  1122,  1122,    11,   195,   386,  1122,   638,
    1122,  1122,  1122,  1122,  1122,  1122,  1122,  1122,  1122,  1122,
    1122,   400,   350,    27,  -520,  -520,   216,   220,  1966,  1554,
     -31,  1122,  -520,  1122,   107,   217,   475,   476,   238,  -520,
    -520,  -520,  -520,   237,   491,  -520,  -520,  -520,   -83,  1200,
    -520,  -520,  -520,  -520,  -520,   497,   503,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  1945,   -78,  -520,  1122,
    1122,   183,    19,    20,    12,     2,   529,   535,  -115,   228,
    -520,  -520,   502,   291,   557,   293,  -520,  -520,  -520,   294,
    1122,  1239,  1316,   297,  1417,  -520,   146,   584,  -520,  1526,
    1722,  1257,  1334,  1334,  -520,    25,  -520,   712,  1122,  1122,
     303,  1914,   304,   313,   338,   712,   917,   391,   624,   609,
     299,   299,   558,   558,   558,   558,  -520,  -520,  1122,  1122,
     432,  -520,  -520,  -520,  1122,  1122,  -520,  1838,  1586,   589,
     590,  -520,  -520,  -520,   591,   592,  -520,   125,   -73,    10,
     613,  1122,   -34,   -22,  -520,   614,  -520,    10,  1122,  1122,
     208,  1966,  1966,  -520,   615,   -60,   367,   102,    10,   -28,
     619,    10,  -520,  -520,  -520,    55,  -520,    10,   504,   469,
    -520,   629,  -520,  1122,  -520,  -520,  1817,   536,   536,  -520,
    -520,  -520,  -520,  -520,  -520,   406,   408,  1334,  1334,   712,
    1122,   244,   244,   244,   410,  1881,  -192,  1966,   625,   542,
    1966,  1859,  -520,  1122,   422,   424,    -6,  -520,   432,    10,
    -197,   237,  1366,   675,   676,  -159,   675,  -152,  -520,  -197,
    1966,  -520,   350,   146,   559,   560,   561,  -520,  -520,  -520,
      48,   680,   146,    -9,   -30,   228,   469,   469,   571,   530,
      10,  -520,   572,  -520,   850,  1122,  1122,   448,   454,  -520,
    -520,   455,   456,   493,   457,   458,   459,   146,  -520,  -520,
    -520,   533,  1122,  -520,  1122,  1122,   505,  -520,  1966,  -520,
    -520,  -520,  -520,   719,   205,  -520,   502,   542,  -197,  -520,
    -520,  1122,   704,  -101,  -520,   118,   480,   578,  -101,   480,
     578,   208,   432,   -60,   634,   634,   634,  -520,   478,   -60,
    1122,   733,   734,   432,  -520,  -520,    10,  1122,   -86,    10,
    1122,  -520,   486,  1485,  -520,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  1881,   484,   907,  -520,  -520,   -71,   196,   489,
     499,   623,   138,  -520,   749,   244,  -520,  -520,  1438,   789,
     627,   751,  -520,  -520,   752,   995,   -49,  -520,  -520,   -49,
    -520,   350,   542,  -520,   635,   507,   509,   510,   146,  -520,
    1966,   743,    -7,   542,  -520,  1966,  1122,   515,  -520,  -520,
     -86,  1459,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  1122,  1122,    -5,   205,  -520,   516,   517,
     676,   676,   518,    63,   205,  1588,  -520,  -520,  -520,  1966,
     548,   754,  -520,  -520,  1966,   151,   520,  -520,  -520,   432,
     657,  -520,   778,   778,   778,   -60,  1122,  1122,   779,  -520,
    1966,   676,  -520,  -520,  1966,  1966,   244,  -520,   180,   676,
     676,   182,   186,   676,  -520,  -520,   532,   532,   532,  -520,
     532,  -520,  -520,   532,   532,   534,   532,   532,   532,  -520,
     741,  -520,   532,   741,   532,   537,   532,   741,  -520,  -520,
    -520,   532,   741,   539,   547,  -520,  -520,   675,  1045,  -520,
    1072,   995,   542,     8,   505,  -520,   203,   210,   214,  -520,
    1966,  1966,   766,   215,   549,    63,   221,   231,  -520,  -520,
     233,   782,  -520,  -520,  -520,  -520,  -520,  -520,   796,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,   796,  -520,  -520,
    -520,  -520,   803,   804,   152,   555,  -520,  1966,  -520,  1966,
     239,   657,   807,   564,  -520,  -520,   811,  -520,  -520,  1122,
    -520,   146,  -520,  -520,  -520,  -520,   243,   -16,   184,   -16,
     -16,  -520,   248,   -16,   -16,   -16,   184,   -16,   184,   -16,
     249,   -16,   184,   -16,   184,   563,   574,   665,  -520,   820,
     420,  -520,  -520,   705,   -91,  -520,   505,  -520,  -520,  1966,
    -520,  -520,   828,  -520,  -520,   647,   831,  -520,   832,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
     676,  -520,   585,   836,  -520,   184,  -520,   184,   184,   278,
    -520,  -520,  -520
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -520,  -520,   -53,  -520,  -520,    -8,     7,   791,  -520,   565,
     786,  -520,   -23,  -519,   -17,  -233,   481,   425,  -520,  -303,
    -287,  -338,   225,  -463,   423,  -520,   600,  -148,   -26,   279,
    -108,   482,  -520,  -520,   -24,  -520,  -520,  -520,   382,  -359,
     -72,  -149,  -520,  -520,  -520,   723,   577,  -520,   -69,   514,
     787,   617,   500,   320,  -306,  -520,  -520,  -520,  -520,  -520,
      15,  -520,  -520,   407,   401,  -520,  -520,     5,  -304,   222,
    -268,  -520,   287,  -384,  -520,  -520,  -520,   737
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -321
static const yytype_int16 yytable[] =
{
      53,    54,    55,    56,    58,   164,  -233,    39,   246,    86,
     388,   384,   400,   164,   517,   244,   255,   322,   194,   392,
     239,   377,  -235,  -234,    85,   247,    23,   531,   532,   148,
     195,    61,   283,    23,   453,   689,   188,    51,   248,   436,
     459,   324,   371,   487,   118,   361,   121,    52,   122,   119,
     133,   245,   124,   325,   440,   624,   173,    60,   583,   261,
     221,   225,   139,   226,   362,   156,   586,   587,   466,    65,
     590,   386,   174,   260,   181,   182,   184,   127,   389,   187,
     149,   150,   189,   190,   191,   192,   193,   175,   179,    14,
     201,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,  -320,   151,   372,   452,   440,   371,    19,   534,
     623,   262,    66,   227,   510,   228,   463,   217,    90,    91,
      92,    93,    94,    95,    96,   519,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   257,
     467,   261,   256,   234,    62,    67,    21,   691,   509,   244,
     134,   251,   252,   309,   313,   441,   579,   248,   451,   339,
     135,   690,    68,   196,   263,   326,   316,    70,    63,   372,
     622,   657,   276,   240,   286,   393,   371,   284,   249,   264,
      23,   486,   294,   240,   399,   245,   336,    23,   123,   136,
     287,   288,    74,   658,   152,   153,   154,    85,   265,   155,
      79,   632,    22,   123,   285,   248,   673,   506,   159,   659,
     295,   297,    23,   310,   137,    24,   300,   301,   314,   160,
     308,   319,   572,   331,    88,   674,   402,   699,   266,   332,
     314,   660,   408,   312,   621,   337,    89,   675,   372,   676,
     320,   156,   401,    87,   518,   373,   374,   526,  -320,   605,
      25,    80,   267,   609,   165,  -233,   166,  -233,   611,   167,
    -233,   615,   165,   254,   166,   344,   352,   167,   354,   355,
     356,  -235,  -234,  -235,  -234,    81,  -235,  -234,   661,    49,
      50,    82,   353,   378,     1,     2,     3,     4,     5,     6,
       7,   262,   387,   379,   390,   368,   351,    83,   464,     8,
       9,   470,   391,   397,   662,    84,   140,    10,   147,   428,
     515,   488,   404,   405,   111,   148,   663,   403,   447,   448,
     429,   450,   489,   456,   457,    11,   105,   106,   107,   108,
     109,   430,    12,   229,   141,   646,   113,   648,   413,   142,
     114,   652,    13,   654,   263,    15,    16,    17,    18,   143,
     125,  -199,   412,  -167,   422,   329,   295,   424,   261,   264,
     248,   437,   140,   230,   577,   578,   149,   150,   144,   431,
     128,   443,   664,   438,   444,   129,   235,   507,   265,   130,
     508,  -199,     1,     2,     3,     4,     5,     6,     7,   151,
     141,   493,   460,    20,   494,   162,   131,     8,     9,   465,
     198,   199,   471,   200,   569,    10,   132,   570,   266,   695,
     161,   697,   496,   698,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    11,   163,   684,   685,   686,   687,    23,
      12,   499,   267,   585,   186,   588,   494,   504,   444,   589,
      13,    14,   444,    15,    16,    17,    18,   197,   218,     1,
       2,     3,     4,     5,     6,     7,   625,   219,   520,   626,
      19,   231,   527,   627,     8,     9,   626,   628,   630,   222,
     626,   444,    10,   223,   633,   524,   525,   444,   232,   233,
     152,   153,   154,   670,   634,   155,   635,   444,   235,   444,
      11,    20,   665,   176,   237,   570,   671,    12,    21,   672,
     242,   677,   679,   584,   678,   678,   243,    13,   580,   581,
      15,    16,    17,    18,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    26,    27,    28,    29,    30,
      31,   702,   258,    32,   444,    33,    72,   330,   259,    77,
     335,   270,   593,   594,   272,   595,   274,   275,   596,   597,
     279,   599,   600,   601,    22,   289,   291,   604,    20,   606,
     617,   608,   619,   504,    23,   292,   610,    24,    90,    91,
      92,    93,    94,    95,    96,   177,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   109,
     293,   298,   304,   305,   306,    90,    91,    92,    93,    94,
      95,    96,    25,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   311,   318,   323,   307,
     328,   669,   333,    26,    27,    28,    29,    30,    31,   340,
     341,    32,   343,    33,   103,   104,   105,   106,   107,   108,
     109,     1,     2,     3,     4,     5,     6,     7,   102,   103,
     104,   105,   106,   107,   108,   109,     8,     9,   346,   349,
     273,   350,   178,   357,    10,     1,     2,     3,     4,     5,
       6,     7,   202,   364,   365,   369,   203,   370,   382,   384,
       8,     9,    11,   398,   407,   394,   395,   396,    10,    12,
      26,    27,    28,    29,    30,    31,   406,   409,    32,    13,
      33,   414,    15,    16,    17,    18,    11,   415,   416,   417,
     418,   419,   420,    12,   421,     1,     2,     3,     4,     5,
       6,     7,   427,    13,   425,   439,    15,    16,    17,    18,
       8,     9,   445,   440,   454,   458,   461,   462,    10,   472,
     362,   490,     1,     2,     3,     4,     5,     6,     7,   492,
      20,   491,   495,   500,   501,   502,    11,     8,     9,   512,
     511,   513,   514,    12,   516,    10,   183,   521,   529,   530,
     533,   567,   571,    13,    20,   568,    15,    16,    17,    18,
     573,   575,   582,    11,   591,   602,   598,   629,   636,   607,
      12,   612,     1,     2,     3,     4,     5,     6,     7,   613,
      13,   641,   631,    15,    16,    17,    18,     8,     9,   655,
     656,   441,   667,   110,   668,    10,   680,   682,   639,   640,
     444,   643,   644,   645,    20,   683,   647,   681,   649,   204,
     651,   688,   653,    11,   692,   693,   694,   696,   700,   282,
      12,   701,   117,   348,   120,   423,   666,   482,   485,   321,
      13,    20,   522,    15,    16,    17,    18,   238,   435,   146,
     317,    90,    91,    92,    93,    94,    95,    96,   498,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    26,    27,    28,    29,    30,    31,   380,   449,
     205,   620,    33,   528,   650,   535,    57,    23,   253,     0,
       0,    20,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,     0,     0,    32,     0,    33,     0,    90,    91,
      92,    93,    94,    95,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     410,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,     0,     0,    32,     0,    33,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,     0,
       0,    32,     0,    33,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    11,
       0,    32,     0,    33,     0,     0,    12,     0,     1,     2,
       3,     4,     5,     6,     7,     0,    13,     0,     0,    15,
      16,    17,    18,     8,     9,     0,     0,     0,     0,     0,
       0,    10,     0,     0,   503,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     0,    11,
       8,     9,     0,     0,     0,     0,    12,     0,    10,     0,
       0,     0,     0,   411,     0,     0,    13,    20,     0,    15,
      16,    17,    18,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,    12,   616,     1,     2,     3,     4,     5,
       6,     7,     0,    13,     0,     0,    15,    16,    17,    18,
       8,     9,     0,     0,     0,     0,     0,     0,    10,   483,
       0,   618,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,   484,     0,     0,    11,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    20,     0,    15,    16,    17,    18,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    90,    91,    92,    93,    94,    95,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,     0,     0,    20,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,     0,     0,    32,     0,    33,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    93,    94,    95,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    26,
      27,    28,    29,    30,    31,     0,     0,    32,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,     0,     0,    32,     0,    33,    90,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,  -321,  -321,
    -321,  -321,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    26,    27,    28,    29,
      30,    31,     0,     0,    32,     0,    33,    90,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    90,    91,
      92,    93,    94,    95,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,   110,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    90,
      91,    92,    93,    94,    95,    96,   241,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     0,     0,     0,     0,   277,    90,    91,    92,    93,
      94,    95,    96,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    90,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   473,   474,
     475,   476,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,   278,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
       0,     0,     0,     0,   477,   478,   479,    90,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,   381,     0,     0,     0,     0,     0,     0,     0,
       0,   536,   537,   538,   539,     0,     0,     0,     0,     0,
     185,   540,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   541,
     542,     0,     0,     0,     0,   543,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,     0,   545,     0,     0,     0,   546,     0,     0,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   547,   548,
       0,     0,   523,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   480,   481,     0,   549,   550,     0,
       0,     0,   551,   552,   553,    92,    93,    94,    95,    96,
      57,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     0,     0,     0,     0,   554,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   555,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   303,   557,     0,   558,   559,
     560,   561,   562,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   563,
     564,     0,     0,     0,     0,     0,     0,   565,    90,    91,
      92,    93,    94,    95,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    90,
      91,    92,    93,    94,    95,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     0,    90,    91,    92,    93,    94,    95,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     0,
     345,   358,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,   302,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,     0,   244,     0,
       0,   290,     0,   367,     0,     0,    90,    91,    92,    93,
      94,    95,    96,   359,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    90,    91,    92,
      93,    94,    95,    96,   245,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-520)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-321)))

static const yytype_int16 yycheck[] =
{
       8,     9,    10,    11,    12,     3,     3,     0,   156,    32,
     316,     3,    21,     3,    21,     3,   164,   250,     7,   322,
     103,   308,     3,     3,    32,   103,   185,   490,   491,    34,
      19,    69,     7,   185,   393,   126,    89,   252,   235,   377,
     399,   101,   113,   427,    52,   237,    92,    10,    94,    57,
       3,    39,    60,   113,   155,   574,    79,   252,   521,   256,
     113,    92,    70,    94,   256,    73,   529,   530,   154,   252,
     533,   230,    80,   188,    82,    83,    84,    62,   230,    87,
      85,    86,    90,    91,    92,    93,    94,    80,    81,    62,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    39,   108,   175,   392,   155,   113,    81,   493,
     573,    63,   252,   121,   452,   123,   403,   110,    11,    12,
      13,    14,    15,    16,    17,   463,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   165,
     226,   256,   165,   128,   182,   252,   119,   666,   451,     3,
     103,   159,   160,   226,   188,   256,   515,   235,   391,   267,
     113,   252,   252,   152,   116,   225,   188,   252,   206,   175,
     162,    19,   180,   256,   197,   323,   113,   152,   256,   131,
     185,   252,   205,   256,   332,    39,   131,   185,   234,   142,
     198,   199,     9,    41,   199,   200,   201,   205,   150,   204,
     252,   585,   175,   234,   197,   235,   222,   256,    10,    57,
     218,   219,   185,   239,   167,   188,   224,   225,   252,    21,
     237,   247,   509,   251,     0,   241,   256,   690,   180,   257,
     252,    79,   340,   241,   572,   180,   250,    53,   175,    55,
     248,   249,   251,     3,   251,   251,   252,   252,   185,   553,
     223,   252,   204,   557,   252,   252,   254,   254,   562,   257,
     257,   567,   252,   251,   254,   273,   289,   257,   291,   292,
     293,   252,   252,   254,   254,   252,   257,   257,   126,   251,
     252,   252,   290,   309,     3,     4,     5,     6,     7,     8,
       9,    63,   315,   310,   317,   303,   289,   252,   406,    18,
      19,   409,   319,   255,   152,   252,    80,    26,    27,   104,
     458,   115,   336,   337,   106,    34,   164,   334,   387,   388,
     115,   390,   126,   395,   396,    44,    27,    28,    29,    30,
      31,   126,    51,   226,   108,   603,   250,   605,   346,   113,
       3,   609,    61,   611,   116,    64,    65,    66,    67,   123,
     112,   226,   345,   125,   362,   253,   364,   365,   256,   131,
     235,   378,    80,   256,   513,   514,    85,    86,   142,   164,
     205,   253,   220,   381,   256,   253,   251,   446,   150,   253,
     449,   256,     3,     4,     5,     6,     7,     8,     9,   108,
     108,   253,   400,   112,   256,   113,   253,    18,    19,   407,
      14,    15,   410,    17,   253,    26,   253,   256,   180,   677,
     256,   679,   435,   681,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    44,   142,     5,     6,     7,     8,   185,
      51,   439,   204,   253,   253,   253,   256,   445,   256,   253,
      61,    62,   256,    64,    65,    66,    67,   252,    48,     3,
       4,     5,     6,     7,     8,     9,   253,   107,   466,   256,
      81,   244,   485,   253,    18,    19,   256,   253,   253,   253,
     256,   256,    26,   253,   253,   483,   484,   256,     3,     3,
     199,   200,   201,   631,   253,   204,   253,   256,   251,   256,
      44,   112,   253,    47,     3,   256,   253,    51,   119,   256,
       3,   253,   253,   526,   256,   256,     3,    61,   516,   517,
      64,    65,    66,    67,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   244,   245,   246,   247,   248,
     249,   253,     3,   252,   256,   254,    22,   258,     3,    25,
     261,    39,   537,   538,   253,   540,   253,   253,   543,   544,
     253,   546,   547,   548,   175,   252,   252,   552,   112,   554,
     568,   556,   570,   571,   185,   252,   561,   188,    11,    12,
      13,    14,    15,    16,    17,   129,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    31,
     252,   159,     3,     3,     3,    11,    12,    13,    14,    15,
      16,    17,   223,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     3,     3,     3,    27,
     253,   629,     3,   244,   245,   246,   247,   248,   249,   125,
     161,   252,     3,   254,    25,    26,    27,    28,    29,    30,
      31,     3,     4,     5,     6,     7,     8,     9,    24,    25,
      26,    27,    28,    29,    30,    31,    18,    19,   122,   253,
     103,   253,   216,   253,    26,     3,     4,     5,     6,     7,
       8,     9,    34,    48,   132,   253,    38,   253,     3,     3,
      18,    19,    44,     3,   154,   126,   126,   126,    26,    51,
     244,   245,   246,   247,   248,   249,   125,   125,   252,    61,
     254,   253,    64,    65,    66,    67,    44,   253,   253,   253,
     253,   253,   253,    51,   181,     3,     4,     5,     6,     7,
       8,     9,     3,    61,   219,    21,    64,    65,    66,    67,
      18,    19,   252,   155,   100,   257,     3,     3,    26,   253,
     256,   252,     3,     4,     5,     6,     7,     8,     9,   126,
     112,   252,     3,   126,     3,     3,    44,    18,    19,   252,
     125,   252,   252,    51,    21,    26,    27,   252,   252,   252,
     252,   223,   252,    61,   112,    21,    64,    65,    66,    67,
     123,     3,     3,    44,   252,    44,   252,    21,     6,   252,
      51,   252,     3,     4,     5,     6,     7,     8,     9,   252,
      61,     5,   253,    64,    65,    66,    67,    18,    19,     6,
       6,   256,     5,   256,     3,    26,   253,   152,   596,   597,
     256,   599,   600,   601,   112,     5,   604,   253,   606,   191,
     608,   126,   610,    44,     6,   188,     5,     5,   253,   255,
      51,     5,    51,   278,    58,   364,   621,   422,   425,   249,
      61,   112,   470,    64,    65,    66,    67,   134,   376,    72,
     243,    11,    12,    13,    14,    15,    16,    17,    79,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   244,   245,   246,   247,   248,   249,   311,   389,
     252,   571,   254,   486,   607,   494,   234,   185,   161,    -1,
      -1,   112,    -1,    -1,    -1,    -1,   244,   245,   246,   247,
     248,   249,    -1,    -1,   252,    -1,   254,    -1,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
     100,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,
     248,   249,    -1,    -1,   252,    -1,   254,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,   244,   245,   246,   247,   248,   249,    -1,
      -1,   252,    -1,   254,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,   245,   246,   247,   248,   249,    44,
      -1,   252,    -1,   254,    -1,    -1,    51,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    61,    -1,    -1,    64,
      65,    66,    67,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    79,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      18,    19,    -1,    -1,    -1,    -1,    51,    -1,    26,    -1,
      -1,    -1,    -1,   253,    -1,    -1,    61,   112,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    79,     3,     4,     5,     6,     7,
       8,     9,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,   242,
      -1,    79,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,   112,    -1,    64,    65,    66,    67,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,   112,    -1,    -1,    -1,    -1,   244,
     245,   246,   247,   248,   249,    -1,    -1,   252,    -1,   254,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   244,
     245,   246,   247,   248,   249,    -1,    -1,   252,    -1,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,
     248,   249,    -1,    -1,   252,    -1,   254,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   244,   245,   246,   247,
     248,   249,    -1,    -1,   252,    -1,   254,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,   256,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    11,
      12,    13,    14,    15,    16,    17,   256,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,   256,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    73,    74,
      75,    76,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,   256,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
     253,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    99,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121,
      -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,    -1,   139,   140,    -1,
      -1,    -1,   144,   145,   146,    13,    14,    15,    16,    17,
     234,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   208,    -1,   210,   211,
     212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,   239,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    40,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    94,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,     3,    -1,
      -1,    37,    -1,    94,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    82,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    11,    12,    13,
      14,    15,    16,    17,    39,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
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
      11,    12,    13,    14,    15,    16,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     256,   106,   273,   250,     3,   264,   265,   265,   263,   263,
     268,    92,    94,   234,   263,   112,   318,   318,   205,   253,
     253,   253,   253,     3,   103,   113,   142,   167,   303,   263,
      80,   108,   113,   123,   142,   308,   308,    27,    34,    85,
      86,   108,   199,   200,   201,   204,   263,   283,   284,    10,
      21,   256,   113,   142,     3,   252,   254,   257,   286,   287,
     288,   290,   300,   270,   263,   264,    47,   129,   216,   264,
     266,   263,   263,    27,   263,   253,   253,   263,   260,   263,
     263,   263,   263,   263,     7,    19,   152,   252,    14,    15,
      17,   263,    34,    38,   191,   252,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   264,    48,   107,
     277,   260,   253,   253,   209,    92,    94,   263,   263,   226,
     256,   244,     3,     3,   318,   251,   304,     3,   303,   103,
     256,   256,     3,     3,     3,    39,   285,   103,   235,   256,
     272,   263,   263,   335,   251,   285,   270,   286,     3,     3,
     188,   256,    63,   116,   131,   150,   180,   204,   291,   293,
      39,   289,   253,   103,   253,   253,   263,   256,   256,   253,
     253,   285,   255,     7,   152,   264,   270,   263,   263,   252,
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
     330,   327,   328,   327,   328,     6,     6,    19,    41,    57,
      79,   126,   152,   164,   220,   253,   280,     5,     3,   263,
     285,   253,   256,   222,   241,    53,    55,   253,   256,   253,
     253,   253,   152,     5,     5,     6,     7,     8,   126,   126,
     252,   271,     6,   188,     5,   328,     5,   328,   328,   281,
     253,     5,   253
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:
/* Line 1792 of yacc.c  */
#line 311 "mysql.y"
    { emit("NAME %s", (yyvsp[(1) - (1)].strval)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 312 "mysql.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 313 "mysql.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 314 "mysql.y"
    { emit("STRING %s", (yyvsp[(1) - (1)].strval)); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 315 "mysql.y"
    { emit("NUMBER %d", (yyvsp[(1) - (1)].intval)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 316 "mysql.y"
    { emit("FLOAT %g", (yyvsp[(1) - (1)].floatval)); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 317 "mysql.y"
    { emit("BOOL %d", (yyvsp[(1) - (1)].intval)); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 320 "mysql.y"
    { emit("ADD"); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 321 "mysql.y"
    { emit("SUB"); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 322 "mysql.y"
    { emit("MUL"); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 323 "mysql.y"
    { emit("DIV"); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 324 "mysql.y"
    { emit("MOD"); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 325 "mysql.y"
    { emit("MOD"); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 326 "mysql.y"
    { emit("NEG"); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 327 "mysql.y"
    { emit("AND"); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 328 "mysql.y"
    { emit("OR"); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 329 "mysql.y"
    { emit("XOR"); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 330 "mysql.y"
    { emit("BITOR"); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 331 "mysql.y"
    { emit("BITAND"); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 332 "mysql.y"
    { emit("BITXOR"); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 333 "mysql.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 334 "mysql.y"
    { emit("NOT"); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 335 "mysql.y"
    { emit("NOT"); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 336 "mysql.y"
    { emit("CMP %d", (yyvsp[(2) - (3)].subtok)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 337 "mysql.y"
    { emit("EMBRACE"); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 338 "mysql.y"
    { emit("LEFT"); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 339 "mysql.y"
    { emit("SUB ALIAS %s", (yyvsp[(2) - (4)].strval)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 342 "mysql.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 343 "mysql.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 344 "mysql.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 345 "mysql.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 348 "mysql.y"
    { emit("ISNULL"); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 349 "mysql.y"
    { emit("ISNULL"); emit("NOT"); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 350 "mysql.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 351 "mysql.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 353 "mysql.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 356 "mysql.y"
    { emit("BETWEEN"); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 359 "mysql.y"
    { emit("ISIN %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 360 "mysql.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); emit("NOT"); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 361 "mysql.y"
    { emit("CMPANYSELECT 4"); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 362 "mysql.y"
    { emit("CMPALLSELECT 3"); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 363 "mysql.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 364 "mysql.y"
    {  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 368 "mysql.y"
    {  emit("CALL RISK_FUNCTION %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 369 "mysql.y"
    {  emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 373 "mysql.y"
    { emit("COUNTALL"); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 374 "mysql.y"
    { emit(" CALL 1 COUNT"); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 376 "mysql.y"
    {  emit("CALL %d SUBSTR", (yyvsp[(3) - (4)].intval)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 377 "mysql.y"
    {  emit("CALL 2 SUBSTR"); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 378 "mysql.y"
    {  emit("CALL 3 SUBSTR"); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 380 "mysql.y"
    { emit("CALL %d TRIM", (yyvsp[(3) - (4)].intval)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 381 "mysql.y"
    { emit("CALL 3 TRIM"); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 382 "mysql.y"
    { emit("CALL 3 DATE_ADD"); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 383 "mysql.y"
    { emit("CALL 3 DATE_SUB"); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 384 "mysql.y"
    { emit("CALL 2 CONVERT"); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 385 "mysql.y"
    { emit("CALL 2 CONVERT"); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 388 "mysql.y"
    { emit("IF") ;}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 389 "mysql.y"
    { emit("STRTOBIN"); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 393 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 394 "mysql.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 397 "mysql.y"
    { (yyval.intval) = 0 ;}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 402 "mysql.y"
    { emit("NUMBER 1"); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 403 "mysql.y"
    { emit("NUMBER 2"); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 404 "mysql.y"
    { emit("NUMBER 3"); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 407 "mysql.y"
    { emit("NUMBER 1"); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 408 "mysql.y"
    { emit("NUMBER 2"); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 409 "mysql.y"
    { emit("NUMBER 3"); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 410 "mysql.y"
    { emit("NUMBER 4"); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 411 "mysql.y"
    { emit("NUMBER 5"); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 412 "mysql.y"
    { emit("NUMBER 6"); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 413 "mysql.y"
    { emit("NUMBER 7"); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 414 "mysql.y"
    { emit("NUMBER 8"); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 415 "mysql.y"
    { emit("NUMBER 9"); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 417 "mysql.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 418 "mysql.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 419 "mysql.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 420 "mysql.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 423 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 424 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (5)].intval)+1; }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 427 "mysql.y"
    { emit("LIKE"); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 428 "mysql.y"
    { emit("LIKE"); emit("NOT"); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 431 "mysql.y"
    { emit("REGEXP"); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 432 "mysql.y"
    { emit("REGEXP"); emit("NOT"); }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 435 "mysql.y"
    { emit("NOW"); }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 436 "mysql.y"
    { emit("NOW"); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 437 "mysql.y"
    { emit("NOW"); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 438 "mysql.y"
    { emit("CURRENT_USER") ;}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 439 "mysql.y"
    { emit("NOW") ;}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 440 "mysql.y"
    { emit("NOW") ;}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 441 "mysql.y"
    { emit("NOW") ;}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 442 "mysql.y"
    { emit("CURRENT_USER") ;}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 445 "mysql.y"
    { emit("STRTOBIN"); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 450 "mysql.y"
    { emit("STMT"); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 454 "mysql.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (10)].intval), (yyvsp[(3) - (10)].intval)); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 455 "mysql.y"
    { emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval)); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 464 "mysql.y"
    { emit("WHERE"); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 468 "mysql.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 472 "mysql.y"
    { emit("GROUPBY %d",  (yyvsp[(2) - (2)].intval)); (yyval.intval) = 1; }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 474 "mysql.y"
    { emit("GROUPBY %d",  (yyvsp[(4) - (4)].intval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 477 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 478 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 479 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 482 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 483 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 487 "mysql.y"
    { emit("HAVING"); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 490 "mysql.y"
    { emit("ORDERBY %d", (yyvsp[(3) - (3)].intval)); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 493 "mysql.y"
    { emit("LIMIT 1"); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 494 "mysql.y"
    { emit("LIMIT 2"); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 495 "mysql.y"
    { emit("LIMIT 2"); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 499 "mysql.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 503 "mysql.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 504 "mysql.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval));  (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 507 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 509 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; return 1;}
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 511 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; return 1;}
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 513 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; return 1;}
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 515 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; return 1;}
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 517 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; return 1;}
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 519 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; return 1;}
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 521 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; return 1;}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 523 "mysql.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = 
   (yyvsp[(1) - (2)].intval) | 0200; return 1;}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 527 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 528 "mysql.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 529 "mysql.y"
    { emit("SELECTALL"); (yyval.intval) = 1; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 534 "mysql.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 535 "mysql.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 539 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 540 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 548 "mysql.y"
    { emit("TABLE %s", (yyvsp[(1) - (3)].strval)); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 549 "mysql.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 550 "mysql.y"
    { emit("TABLE %s", (yyvsp[(2) - (5)].strval)); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 551 "mysql.y"
    { emit("TABLE %s.%s", (yyvsp[(2) - (7)].strval), (yyvsp[(4) - (7)].strval)); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 552 "mysql.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 553 "mysql.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 554 "mysql.y"
    { emit("TABLE ALIAS %s", (yyvsp[(2) - (4)].strval)); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 563 "mysql.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 565 "mysql.y"
    { emit("JOIN %d", 200); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 567 "mysql.y"
    { emit("JOIN %d", 200); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 569 "mysql.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 571 "mysql.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 574 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 575 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 576 "mysql.y"
    { (yyval.intval) = 2; }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 579 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 580 "mysql.y"
    {(yyval.intval) = 4; }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 583 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 584 "mysql.y"
    { (yyval.intval) = 2; }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 587 "mysql.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 588 "mysql.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 589 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 596 "mysql.y"
    { emit("ONEXPR"); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 597 "mysql.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 602 "mysql.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 604 "mysql.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 606 "mysql.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 610 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 611 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 614 "mysql.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 615 "mysql.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 618 "mysql.y"
    { emit("SUBQUERY"); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 623 "mysql.y"
    { emit("STMT"); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 629 "mysql.y"
    { emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 632 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 633 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 634 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 635 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 642 "mysql.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 644 "mysql.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 646 "mysql.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 655 "mysql.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 660 "mysql.y"
    { emit("STMT"); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 666 "mysql.y"
    { emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 670 "mysql.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 673 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 674 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 675 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 676 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 677 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 684 "mysql.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 687 "mysql.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 688 "mysql.y"
    { emit("VALUES %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 691 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 692 "mysql.y"
    { emit("DEFAULT"); (yyval.intval) = 1; }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 693 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 694 "mysql.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 699 "mysql.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 704 "mysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; return 1;}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 707 "mysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; return 1;}
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 710 "mysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; return 1;}
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 713 "mysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; return 1;}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 719 "mysql.y"
    { emit("INSERTSELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 723 "mysql.y"
    { emit("STMT"); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 729 "mysql.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 735 "mysql.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 740 "mysql.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 744 "mysql.y"
    { emit("STMT"); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 751 "mysql.y"
    { emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 754 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 755 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 756 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 761 "mysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; return 1;}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 764 "mysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(1) - (5)].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); (yyval.intval) = 1; return 1;}
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 767 "mysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; return 1;}
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 770 "mysql.y"
    { if ((yyvsp[(6) - (7)].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval)); 
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval)); (yyval.intval) = 1; return 1;}
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 777 "mysql.y"
    { emit("STMT"); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 782 "mysql.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 784 "mysql.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 787 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 789 "mysql.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ return 1;}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 794 "mysql.y"
    { emit("STMT"); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 798 "mysql.y"
    { emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval)); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 802 "mysql.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 807 "mysql.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 811 "mysql.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 816 "mysql.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval));
                               }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 821 "mysql.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval));
                          }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 825 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 826 "mysql.y"
    { (yyval.intval) = 1;}
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 829 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 830 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 833 "mysql.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 834 "mysql.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 835 "mysql.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 836 "mysql.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 837 "mysql.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 840 "mysql.y"
    { emit("STARTCOL"); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 841 "mysql.y"
    { emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval)); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 843 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 844 "mysql.y"
    { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 847 "mysql.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval));  (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 849 "mysql.y"
    { emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 851 "mysql.y"
    { emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 853 "mysql.y"
    { emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 855 "mysql.y"
    { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 857 "mysql.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 858 "mysql.y"
    { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 859 "mysql.y"
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 860 "mysql.y"
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 862 "mysql.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 865 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 866 "mysql.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 867 "mysql.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 870 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 871 "mysql.y"
    { (yyval.intval) = 4000; }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 874 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 875 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 876 "mysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 880 "mysql.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval));  }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 881 "mysql.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval));  }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 885 "mysql.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 886 "mysql.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 887 "mysql.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 888 "mysql.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 889 "mysql.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 890 "mysql.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 891 "mysql.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 892 "mysql.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 893 "mysql.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 894 "mysql.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 895 "mysql.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 896 "mysql.y"
    { (yyval.intval) = 100001; }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 897 "mysql.y"
    { (yyval.intval) = 100002; }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 898 "mysql.y"
    { (yyval.intval) = 100003; }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 899 "mysql.y"
    { (yyval.intval) = 100004; }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 900 "mysql.y"
    { (yyval.intval) = 100005; }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 901 "mysql.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 902 "mysql.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 903 "mysql.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 904 "mysql.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 905 "mysql.y"
    { (yyval.intval) = 160001; }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 906 "mysql.y"
    { (yyval.intval) = 160002; }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 907 "mysql.y"
    { (yyval.intval) = 160003; }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 908 "mysql.y"
    { (yyval.intval) = 160004; }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 909 "mysql.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 910 "mysql.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 911 "mysql.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 912 "mysql.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 913 "mysql.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 914 "mysql.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 917 "mysql.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval));  (yyval.intval) = 1; }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 918 "mysql.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval));  (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 921 "mysql.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 924 "mysql.y"
    { (yyval.intval) = 0; }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 925 "mysql.y"
    { (yyval.intval) = 1; }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 926 "mysql.y"
    { (yyval.intval) = 2; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 931 "mysql.y"
    { emit("STMT"); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 939 "mysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[(1) - (3)].strval));  return 1;}
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 941 "mysql.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval));  }
    break;


/* Line 1792 of yacc.c  */
#line 4298 "mysql.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 944 "mysql.y"

/*void emit(char *s, ...)
{
  extern yylineno;

}*/

void
yyerror(char *s, ...)
{
  extern yylineno;

  /*
  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
  */
}

