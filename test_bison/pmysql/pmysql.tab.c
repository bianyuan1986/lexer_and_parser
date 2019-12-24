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
#line 5 "pmysql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/time.h>

void yyerror(char *s, ...);
void emit(char *s, ...);

/* Line 371 of yacc.c  */
#line 78 "pmysql.tab.c"

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
   by #include "symbols.h".  */
#ifndef YY_YY_SYMBOLS_H_INCLUDED
# define YY_YY_SYMBOLS_H_INCLUDED
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
     STRING = 259,
     INTNUM = 260,
     BOOL = 261,
     APPROXNUM = 262,
     USERVAR = 263,
     ASSIGN = 264,
     OR = 265,
     XOR = 266,
     ANDOP = 267,
     REGEXP = 268,
     LIKE = 269,
     IS = 270,
     IN = 271,
     NOT = 272,
     BETWEEN = 273,
     COMPARISON = 274,
     SHIFT = 275,
     MOD = 276,
     UMINUS = 277,
     ADD = 278,
     ALL = 279,
     ALTER = 280,
     ANALYZE = 281,
     AND = 282,
     ANY = 283,
     AS = 284,
     ASC = 285,
     AUTO_INCREMENT = 286,
     BEFORE = 287,
     BIGINT = 288,
     BINARY = 289,
     BIT = 290,
     BLOB = 291,
     BOTH = 292,
     BY = 293,
     CALL = 294,
     CASCADE = 295,
     CASE = 296,
     CHANGE = 297,
     CHAR = 298,
     CHECK = 299,
     COLLATE = 300,
     COLUMN = 301,
     COMMENT = 302,
     CONDITION = 303,
     CONSTRAINT = 304,
     CONTINUE = 305,
     CONVERT = 306,
     CREATE = 307,
     CROSS = 308,
     CURRENT_DATE = 309,
     CURRENT_TIME = 310,
     CURRENT_TIMESTAMP = 311,
     CURRENT_USER = 312,
     CURSOR = 313,
     DATABASE = 314,
     DATABASES = 315,
     DATE = 316,
     DATETIME = 317,
     DAY_HOUR = 318,
     DAY_MICROSECOND = 319,
     DAY_MINUTE = 320,
     DAY_SECOND = 321,
     DECIMAL = 322,
     DECLARE = 323,
     DEFAULT = 324,
     DELAYED = 325,
     DELETE = 326,
     DESC = 327,
     DESCRIBE = 328,
     DETERMINISTIC = 329,
     DISTINCT = 330,
     DISTINCTROW = 331,
     DIV = 332,
     DOUBLE = 333,
     DROP = 334,
     DUAL = 335,
     EACH = 336,
     ELSE = 337,
     ELSEIF = 338,
     END = 339,
     ENUM = 340,
     EXIT = 341,
     EXPLAIN = 342,
     FETCH = 343,
     FLOAT = 344,
     FOR = 345,
     FORCE = 346,
     FOREIGN = 347,
     FROM = 348,
     FULLTEXT = 349,
     GRANT = 350,
     GROUP = 351,
     HAVING = 352,
     HIGH_PRIORITY = 353,
     HOUR_MICROSECOND = 354,
     HOUR_MINUTE = 355,
     HOUR_SECOND = 356,
     IF = 357,
     IGNORE = 358,
     INFILE = 359,
     INDEX = 360,
     INNER = 361,
     INOUT = 362,
     INSENSITIVE = 363,
     INSERT = 364,
     INT = 365,
     INTEGER = 366,
     INTERVAL = 367,
     INTO = 368,
     ITERATE = 369,
     JOIN = 370,
     KEY = 371,
     KEYS = 372,
     KILL = 373,
     LEADING = 374,
     LEAVE = 375,
     LEFT = 376,
     LIMIT = 377,
     LINES = 378,
     LOAD = 379,
     LOCALTIME = 380,
     LOCALTIMESTAMP = 381,
     LOCK = 382,
     LONG = 383,
     LONGBLOB = 384,
     LONGTEXT = 385,
     LOOP = 386,
     LOW_PRIORITY = 387,
     MATCH = 388,
     MEDIUMBLOB = 389,
     MEDIUMINT = 390,
     MEDIUMTEXT = 391,
     MINUTE_MICROSECOND = 392,
     MINUTE_SECOND = 393,
     MODIFIES = 394,
     NATURAL = 395,
     NO_WRITE_TO_BINLOG = 396,
     NULLX = 397,
     NUMBER = 398,
     ON = 399,
     ONDUPLICATE = 400,
     OPTIMIZE = 401,
     OPTION = 402,
     OPTIONALLY = 403,
     ORDER = 404,
     OUT = 405,
     OUTER = 406,
     OUTFILE = 407,
     PRECISION = 408,
     PRIMARY = 409,
     PROCEDURE = 410,
     PURGE = 411,
     QUICK = 412,
     READ = 413,
     READS = 414,
     REAL = 415,
     REFERENCES = 416,
     RELEASE = 417,
     RENAME = 418,
     REPEAT = 419,
     REPLACE = 420,
     REQUIRE = 421,
     RESTRICT = 422,
     RETURN = 423,
     REVOKE = 424,
     RIGHT = 425,
     ROLLUP = 426,
     SCHEMA = 427,
     SCHEMAS = 428,
     SECOND_MICROSECOND = 429,
     SELECT = 430,
     SENSITIVE = 431,
     SEPARATOR = 432,
     SET = 433,
     SHOW = 434,
     SMALLINT = 435,
     SOME = 436,
     SONAME = 437,
     SPATIAL = 438,
     SPECIFIC = 439,
     SQL = 440,
     SQLEXCEPTION = 441,
     SQLSTATE = 442,
     SQLWARNING = 443,
     SQL_BIG_RESULT = 444,
     SQL_CALC_FOUND_ROWS = 445,
     SQL_SMALL_RESULT = 446,
     SSL = 447,
     STARTING = 448,
     STRAIGHT_JOIN = 449,
     TABLE = 450,
     TEMPORARY = 451,
     TERMINATED = 452,
     TEXT = 453,
     THEN = 454,
     TIME = 455,
     TIMESTAMP = 456,
     TINYBLOB = 457,
     TINYINT = 458,
     TINYTEXT = 459,
     TO = 460,
     TRAILING = 461,
     TRIGGER = 462,
     UNDO = 463,
     UNION = 464,
     UNIQUE = 465,
     UNLOCK = 466,
     UNSIGNED = 467,
     UPDATE = 468,
     USAGE = 469,
     USE = 470,
     USING = 471,
     UTC_DATE = 472,
     UTC_TIME = 473,
     UTC_TIMESTAMP = 474,
     VALUES = 475,
     VARBINARY = 476,
     VARCHAR = 477,
     VARYING = 478,
     WHEN = 479,
     WHERE = 480,
     WHILE = 481,
     WITH = 482,
     WRITE = 483,
     YEAR = 484,
     YEAR_MONTH = 485,
     ZEROFILL = 486,
     ESCAPED = 487,
     EXISTS = 488,
     FSUBSTRING = 489,
     FTRIM = 490,
     FDATE_ADD = 491,
     FDATE_SUB = 492,
     FCOUNT = 493
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 15 "pmysql.y"

        int intval;
        double floatval;
        char *strval;
        int subtok;


/* Line 387 of yacc.c  */
#line 367 "pmysql.tab.c"
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

#endif /* !YY_YY_SYMBOLS_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 395 "pmysql.tab.c"

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  253
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNRULES -- Number of states.  */
#define YYNSTATES  620

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   493

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     250,   251,    26,    24,   252,    25,   249,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   248,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15,    16,    18,    19,    20,    23,    29,    31,    32,    33,
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
     244,   245,   246,   247
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    18,    20,    22,
      24,    26,    30,    34,    38,    42,    46,    50,    53,    57,
      61,    65,    69,    73,    77,    81,    84,    87,    91,    97,
     104,   111,   118,   122,   127,   131,   136,   140,   146,   148,
     152,   153,   155,   161,   168,   174,   181,   186,   191,   196,
     201,   206,   213,   222,   227,   235,   237,   239,   241,   248,
     255,   259,   263,   267,   271,   275,   279,   283,   287,   291,
     296,   303,   307,   313,   318,   324,   328,   333,   337,   342,
     344,   346,   348,   351,   353,   357,   369,   370,   373,   374,
     379,   382,   387,   388,   390,   392,   393,   396,   397,   400,
     401,   405,   406,   409,   414,   415,   418,   420,   424,   425,
     428,   431,   434,   437,   440,   443,   446,   449,   451,   455,
     457,   460,   463,   465,   466,   468,   472,   474,   476,   480,
     486,   490,   494,   496,   497,   503,   507,   513,   520,   526,
     527,   529,   531,   532,   534,   536,   538,   541,   544,   545,
     546,   548,   551,   556,   563,   570,   577,   578,   581,   582,
     584,   588,   592,   594,   602,   605,   608,   611,   612,   619,
     622,   627,   628,   631,   639,   641,   650,   651,   656,   657,
     660,   663,   666,   669,   671,   672,   673,   677,   681,   687,
     689,   691,   695,   699,   707,   711,   715,   721,   727,   735,
     737,   746,   754,   762,   764,   773,   774,   777,   780,   784,
     790,   796,   804,   806,   811,   816,   817,   820,   822,   831,
     842,   852,   859,   871,   880,   881,   883,   885,   889,   895,
     900,   905,   911,   917,   918,   923,   924,   928,   931,   935,
     939,   943,   947,   950,   956,   960,   964,   967,   971,   972,
     976,   982,   983,   985,   986,   989,   992,   993,   998,  1002,
    1005,  1009,  1013,  1017,  1021,  1025,  1029,  1033,  1037,  1041,
    1045,  1047,  1049,  1051,  1053,  1055,  1059,  1065,  1068,  1073,
    1075,  1077,  1079,  1081,  1085,  1089,  1093,  1097,  1103,  1109,
    1111,  1115,  1119,  1120,  1122,  1124,  1126,  1129,  1131,  1135,
    1139
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     254,     0,    -1,   261,   248,    -1,   254,   261,   248,    -1,
       3,    -1,     3,   249,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   255,    24,   255,    -1,
     255,    25,   255,    -1,   255,    26,   255,    -1,   255,    27,
     255,    -1,   255,    28,   255,    -1,   255,    29,   255,    -1,
      25,   255,    -1,   255,    12,   255,    -1,   255,    10,   255,
      -1,   255,    11,   255,    -1,   255,    21,   255,    -1,   255,
      22,   255,    -1,   255,    30,   255,    -1,   255,    23,   255,
      -1,    18,   255,    -1,    17,   255,    -1,   255,    20,   255,
      -1,   255,    20,   250,   262,   251,    -1,   255,    20,    37,
     250,   262,   251,    -1,   255,    20,   190,   250,   262,   251,
      -1,   255,    20,    33,   250,   262,   251,    -1,   255,    15,
     151,    -1,   255,    15,    18,   151,    -1,   255,    15,     6,
      -1,   255,    15,    18,     6,    -1,     8,     9,   255,    -1,
     255,    19,   255,    36,   255,    -1,   255,    -1,   255,   252,
     256,    -1,    -1,   256,    -1,   255,    16,   250,   256,   251,
      -1,   255,    18,    16,   250,   256,   251,    -1,   255,    16,
     250,   262,   251,    -1,   255,    18,    16,   250,   262,   251,
      -1,   242,   250,   262,   251,    -1,     3,   250,   257,   251,
      -1,   247,   250,    26,   251,    -1,   247,   250,   255,   251,
      -1,   243,   250,   256,   251,    -1,   243,   250,   255,   102,
     255,   251,    -1,   243,   250,   255,   102,   255,    99,   255,
     251,    -1,   244,   250,   256,   251,    -1,   244,   250,   258,
     255,   102,   256,   251,    -1,   128,    -1,   215,    -1,    46,
      -1,   245,   250,   255,   252,   259,   251,    -1,   246,   250,
     255,   252,   259,   251,    -1,   121,   255,    72,    -1,   121,
     255,    73,    -1,   121,   255,    74,    -1,   121,   255,    75,
      -1,   121,   255,   239,    -1,   121,   255,   238,    -1,   121,
     255,   108,    -1,   121,   255,   109,    -1,   121,   255,   110,
      -1,    50,   255,   260,    93,    -1,    50,   255,   260,    91,
     255,    93,    -1,    50,   260,    93,    -1,    50,   260,    91,
     255,    93,    -1,   233,   255,   208,   255,    -1,   260,   233,
     255,   208,   255,    -1,   255,    14,   255,    -1,   255,    18,
      14,   255,    -1,   255,    13,   255,    -1,   255,    18,    13,
     255,    -1,    65,    -1,    63,    -1,    64,    -1,    43,   255,
      -1,   262,    -1,   184,   273,   274,    -1,   184,   273,   274,
     102,   277,   263,   264,   268,   269,   270,   271,    -1,    -1,
     234,   255,    -1,    -1,   105,    47,   265,   267,    -1,   255,
     266,    -1,   265,   252,   255,   266,    -1,    -1,    39,    -1,
      81,    -1,    -1,   236,   180,    -1,    -1,   106,   255,    -1,
      -1,   158,    47,   265,    -1,    -1,   131,   255,    -1,   131,
     255,   252,   255,    -1,    -1,   122,   272,    -1,     3,    -1,
     272,   252,     3,    -1,    -1,   273,    33,    -1,   273,    84,
      -1,   273,    85,    -1,   273,   107,    -1,   273,   203,    -1,
     273,   200,    -1,   273,   198,    -1,   273,   199,    -1,   275,
      -1,   274,   252,   275,    -1,    26,    -1,   255,   276,    -1,
      38,     3,    -1,     3,    -1,    -1,   278,    -1,   277,   252,
     278,    -1,   279,    -1,   281,    -1,     3,   276,   288,    -1,
       3,   249,     3,   276,   288,    -1,   291,   280,     3,    -1,
     250,   277,   251,    -1,    38,    -1,    -1,   278,   282,   124,
     279,   286,    -1,   278,   203,   279,    -1,   278,   203,   279,
     153,   255,    -1,   278,   284,   283,   124,   279,   287,    -1,
     278,   149,   285,   124,   279,    -1,    -1,   115,    -1,    62,
      -1,    -1,   160,    -1,   130,    -1,   179,    -1,   130,   283,
      -1,   179,   283,    -1,    -1,    -1,   287,    -1,   153,   255,
      -1,   225,   250,   272,   251,    -1,   224,   125,   289,   250,
     290,   251,    -1,   112,   125,   289,   250,   290,   251,    -1,
     100,   125,   289,   250,   290,   251,    -1,    -1,    99,   124,
      -1,    -1,     3,    -1,   290,   252,     3,    -1,   250,   262,
     251,    -1,   292,    -1,    80,   293,   102,     3,   263,   269,
     270,    -1,   293,   141,    -1,   293,   166,    -1,   293,   112,
      -1,    -1,    80,   293,   294,   102,   277,   263,    -1,     3,
     295,    -1,   294,   252,     3,   295,    -1,    -1,   249,    26,
      -1,    80,   293,   102,   294,   225,   277,   263,    -1,   296,
      -1,   118,   298,   299,     3,   300,   229,   301,   297,    -1,
      -1,   154,   125,   222,   303,    -1,    -1,   298,   141,    -1,
     298,    79,    -1,   298,   107,    -1,   298,   112,    -1,   122,
      -1,    -1,    -1,   250,   272,   251,    -1,   250,   302,   251,
      -1,   301,   252,   250,   302,   251,    -1,   255,    -1,    78,
      -1,   302,   252,   255,    -1,   302,   252,    78,    -1,   118,
     298,   299,     3,   187,   303,   297,    -1,     3,    20,   255,
      -1,     3,    20,    78,    -1,   303,   252,     3,    20,   255,
      -1,   303,   252,     3,    20,    78,    -1,   118,   298,   299,
       3,   300,   262,   297,    -1,   304,    -1,   174,   298,   299,
       3,   300,   229,   301,   297,    -1,   174,   298,   299,     3,
     187,   303,   297,    -1,   174,   298,   299,     3,   300,   262,
     297,    -1,   305,    -1,   222,   306,   277,   187,   307,   263,
     269,   270,    -1,    -1,   298,   141,    -1,   298,   112,    -1,
       3,    20,   255,    -1,     3,   249,     3,    20,   255,    -1,
     307,   252,     3,    20,   255,    -1,   307,   252,     3,   249,
       3,    20,   255,    -1,   308,    -1,    61,    68,   309,     3,
      -1,    61,   181,   309,     3,    -1,    -1,   111,   242,    -1,
     310,    -1,    61,   311,   204,   309,     3,   250,   312,   251,
      -1,    61,   311,   204,   309,     3,   249,     3,   250,   312,
     251,    -1,    61,   311,   204,   309,     3,   250,   312,   251,
     322,    -1,    61,   311,   204,   309,     3,   322,    -1,    61,
     311,   204,   309,     3,   249,     3,   250,   312,   251,   322,
      -1,    61,   311,   204,   309,     3,   249,     3,   322,    -1,
      -1,   205,    -1,   313,    -1,   312,   252,   313,    -1,   163,
     125,   250,   272,   251,    -1,   125,   250,   272,   251,    -1,
     114,   250,   272,   251,    -1,   103,   114,   250,   272,   251,
      -1,   103,   125,   250,   272,   251,    -1,    -1,   314,     3,
     320,   315,    -1,    -1,   315,    18,   151,    -1,   315,   151,
      -1,   315,    78,     4,    -1,   315,    78,     5,    -1,   315,
      78,     7,    -1,   315,    78,     6,    -1,   315,    40,    -1,
     315,   219,   250,   272,   251,    -1,   315,   219,   125,    -1,
     315,   163,   125,    -1,   315,   125,    -1,   315,    56,     4,
      -1,    -1,   250,     5,   251,    -1,   250,     5,   252,     5,
     251,    -1,    -1,    43,    -1,    -1,   318,   221,    -1,   318,
     240,    -1,    -1,   319,    52,   187,     4,    -1,   319,    54,
       4,    -1,    44,   316,    -1,   212,   316,   318,    -1,   189,
     316,   318,    -1,   144,   316,   318,    -1,   119,   316,   318,
      -1,   120,   316,   318,    -1,    42,   316,   318,    -1,   169,
     316,   318,    -1,    87,   316,   318,    -1,    98,   316,   318,
      -1,    76,   316,   318,    -1,    70,    -1,   209,    -1,   210,
      -1,    71,    -1,   238,    -1,    52,   316,   319,    -1,   231,
     250,     5,   251,   319,    -1,    43,   316,    -1,   230,   250,
       5,   251,    -1,   211,    -1,    45,    -1,   143,    -1,   138,
      -1,   213,   317,   319,    -1,   207,   317,   319,    -1,   145,
     317,   319,    -1,   139,   317,   319,    -1,    94,   250,   321,
     251,   319,    -1,   187,   250,   321,   251,   319,    -1,     4,
      -1,   321,   252,     4,    -1,   323,   280,   262,    -1,    -1,
     112,    -1,   174,    -1,   324,    -1,   187,   325,    -1,   326,
      -1,   325,   252,   326,    -1,     8,    20,   255,    -1,     8,
       9,   255,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   288,   288,   289,   294,   295,   296,   297,   298,   299,
     300,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   322,   323,
     324,   325,   328,   329,   330,   331,   333,   336,   339,   340,
     343,   344,   347,   348,   349,   350,   351,   355,   359,   360,
     362,   363,   364,   366,   367,   370,   371,   372,   375,   376,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   389,
     390,   391,   392,   395,   396,   399,   400,   403,   404,   407,
     408,   409,   412,   417,   420,   423,   429,   430,   432,   433,
     437,   439,   443,   444,   445,   448,   449,   452,   453,   455,
     456,   459,   459,   460,   463,   464,   467,   468,   471,   472,
     474,   476,   478,   480,   482,   484,   486,   491,   492,   493,
     496,   498,   499,   500,   503,   504,   507,   508,   512,   513,
     515,   516,   519,   520,   524,   526,   528,   530,   532,   536,
     537,   538,   541,   542,   545,   546,   549,   550,   551,   554,
     555,   558,   559,   563,   565,   567,   569,   572,   573,   576,
     577,   580,   585,   589,   594,   595,   596,   597,   601,   606,
     607,   611,   611,   614,   622,   625,   631,   632,   635,   636,
     637,   638,   639,   642,   642,   645,   646,   649,   650,   653,
     654,   655,   656,   658,   665,   668,   671,   674,   679,   685,
     688,   694,   700,   706,   709,   716,   717,   718,   722,   725,
     728,   731,   739,   743,   745,   749,   750,   756,   759,   763,
     768,   773,   777,   783,   788,   789,   792,   793,   796,   797,
     798,   799,   800,   803,   803,   806,   807,   808,   809,   811,
     813,   815,   817,   819,   821,   822,   823,   824,   828,   829,
     830,   833,   834,   837,   838,   839,   842,   843,   844,   848,
     849,   850,   851,   852,   853,   854,   855,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   880,
     881,   884,   887,   888,   889,   894,   897,   899,   899,   902,
     904
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "REGEXP", "LIKE",
  "IS", "IN", "'!'", "NOT", "BETWEEN", "COMPARISON", "'|'", "'&'", "SHIFT",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "ADD", "ALL",
  "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC", "AUTO_INCREMENT",
  "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH", "BY", "CALL",
  "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE", "COLUMN",
  "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT", "CREATE",
  "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
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
  "ESCAPED", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "val_list", "opt_val_list", "trim_ltb", "interval_exp",
  "case_list", "stmt", "select_stmt", "opt_where", "opt_groupby",
  "groupby_list", "opt_asc_desc", "opt_with_rollup", "opt_having",
  "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "$@1",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    33,   272,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
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
     486,   487,   488,   489,   490,   491,   492,   493,    59,    46,
      40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   258,   258,   258,   255,   255,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   255,
     255,   255,   255,   260,   260,   255,   255,   255,   255,   255,
     255,   255,   255,   261,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   266,   267,   267,   268,   268,   269,
     269,   270,   270,   270,   271,   271,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   274,   274,   274,
     275,   276,   276,   276,   277,   277,   278,   278,   279,   279,
     279,   279,   280,   280,   281,   281,   281,   281,   281,   282,
     282,   282,   283,   283,   284,   284,   285,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   288,   289,   289,   290,
     290,   291,   261,   292,   293,   293,   293,   293,   292,   294,
     294,   295,   295,   292,   261,   296,   297,   297,   298,   298,
     298,   298,   298,   299,   299,   300,   300,   301,   301,   302,
     302,   302,   302,   296,   303,   303,   303,   303,   296,   261,
     304,   304,   304,   261,   305,   306,   306,   306,   307,   307,
     307,   307,   261,   308,   308,   309,   309,   261,   310,   310,
     310,   310,   310,   310,   311,   311,   312,   312,   313,   313,
     313,   313,   313,   314,   313,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     316,   317,   317,   318,   318,   318,   319,   319,   319,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   321,
     321,   322,   323,   323,   323,   261,   324,   325,   325,   326,
     326
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     8,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     2,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     8,     0,     4,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     3,     5,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     7,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     8,    10,
       9,     6,    11,     8,     0,     1,     1,     3,     5,     4,
       4,     5,     5,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     2,     5,     3,     3,     2,     3,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       3,     3,     0,     1,     1,     1,     2,     1,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   224,   167,   178,   178,   108,     0,   178,     0,     0,
      83,   162,   174,   199,   203,   212,   217,   295,   215,   215,
     225,     0,     0,   184,   184,     0,     0,   296,   297,     0,
       0,     1,     0,     2,     0,     0,     0,   215,   171,     0,
     166,   164,   165,     0,   180,   181,   182,   183,   179,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     119,   109,     0,     0,    80,    81,    79,   110,   111,   112,
     115,   116,   114,   113,     0,     0,     0,     0,     0,     0,
     123,    84,   117,     0,     0,     0,   182,   179,   123,     0,
       0,   124,   126,   127,   133,     3,   216,   213,   214,     0,
       0,   169,    86,     0,     0,     0,   185,   185,     0,    40,
       0,    26,    25,    17,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,   300,
     299,   298,     0,   156,     0,     0,     0,     0,   141,   140,
     144,   148,   145,     0,     0,   142,   132,     0,   292,   172,
       0,    99,     0,    86,   171,     0,     0,     0,     0,     0,
       5,    38,    41,     0,    36,     0,     0,     0,    71,     0,
       0,    38,     0,    57,    55,    56,     0,     0,     0,     0,
       0,     0,    19,    20,    18,    77,    75,    34,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      21,    22,    24,    11,    12,    13,    14,    15,    16,    23,
     121,    86,   118,   123,     0,     0,     0,   128,   161,   131,
       0,    86,   125,   142,   142,     0,   135,     0,   143,     0,
     130,   293,   294,     0,   233,   221,   133,    87,     0,   101,
      86,   168,   170,     0,   176,   106,     0,     0,   176,   176,
       0,   176,     0,    47,     0,     0,    69,     0,     0,    46,
       0,    50,    53,     0,     0,     0,    48,    49,    35,    33,
       0,     0,    78,    76,     0,     0,     0,     0,     0,     0,
      88,   156,   158,   158,   158,     0,     0,     0,    99,   146,
     147,     0,     0,   149,     0,   292,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,   163,   173,     0,     0,
       0,   193,   186,     0,     0,   176,   198,   201,   176,   202,
      39,    73,     0,    72,     0,     0,     0,     0,     0,     0,
      42,    44,     0,     0,    37,     0,     0,     0,    28,     0,
      97,   129,     0,     0,     0,     0,   208,     0,     0,   101,
     138,   136,     0,     0,   134,   150,     0,   233,   223,     0,
       0,     0,     0,     0,   292,   233,     0,   291,    92,   100,
     102,   195,   194,     0,     0,   107,   190,   189,     0,     0,
     175,   200,    70,    74,     0,    51,     0,     0,    58,    59,
      43,    45,    31,    29,    30,     0,     0,    99,   157,     0,
       0,     0,     0,     0,     0,   204,   151,     0,   137,     0,
       0,     0,     0,     0,     0,   220,   227,   248,   248,   248,
     280,   248,   270,   273,   248,   248,     0,   248,   248,   248,
     282,   251,   281,   248,   251,   248,     0,   248,   251,   271,
     272,   279,   248,   251,     0,     0,   274,   235,    93,    94,
      90,     0,     0,     0,     0,   187,     0,     0,     0,    54,
      60,    61,    62,    63,    66,    67,    68,    65,    64,    95,
      98,   101,   159,     0,     0,     0,   209,   210,     0,     0,
     292,     0,     0,   230,   229,     0,     0,   253,   277,   259,
     256,   253,   253,     0,   253,   253,   253,   252,   256,   253,
     256,   253,     0,   253,   256,   253,   256,     0,     0,   234,
      92,   103,   177,   197,   196,   192,   191,     0,    52,     0,
      89,   104,   155,     0,   154,   153,     0,   152,   222,   231,
     232,   228,     0,   265,   275,   269,   267,   289,     0,   268,
     263,   264,   286,   262,   285,   266,     0,   261,   284,   260,
     283,     0,     0,     0,   242,     0,     0,   246,   237,     0,
       0,    91,   188,    96,     0,    85,   160,   211,   249,     0,
     254,   255,     0,     0,   256,     0,   256,   278,   256,   236,
     247,   238,   239,   241,   240,   245,   244,     0,   105,     0,
       0,   258,   287,   290,   288,   276,     0,   250,   257,   243
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,   181,   182,   183,   197,   348,   117,     9,    10,
     171,   360,   389,   470,   540,   417,   259,   326,   585,   266,
      25,    81,    82,   146,    90,    91,    92,   167,    93,   164,
     249,   165,   245,   374,   375,   237,   363,   493,    94,    11,
      22,    43,   101,    12,   331,    23,    49,   177,   335,   398,
     264,    13,    14,    30,   241,    15,    35,    16,    21,   320,
     321,   322,   529,   507,   518,   553,   554,   467,   558,   255,
     256,    17,    27,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -390
static const yytype_int16 yypact[] =
{
     -30,   -21,  -390,  -390,  -390,  -390,    59,     2,   866,  -176,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,   -32,   -32,
    -390,   -97,    57,   198,   198,   125,   193,  -130,  -390,   429,
       3,  -390,  -153,  -390,  -118,   168,   196,   -32,   -66,   200,
    -390,  -390,  -390,  -100,  -390,  -390,  -390,  -390,  -390,   204,
     219,   -38,  -390,  -390,  -390,  -390,   206,   546,   546,   546,
    -390,  -390,   546,   268,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,    17,    33,    39,    41,    48,    52,
    1300,   -99,  -390,   546,   546,    59,     4,     6,     8,     1,
    -160,   883,  -390,  -390,   220,  -390,  -390,  -390,  -390,   266,
     278,  -390,   -28,  -172,     3,   326,  -174,  -157,   385,   546,
     546,  1084,  1084,  -390,  -390,   546,   864,   -51,   208,   546,
     131,   546,   546,   337,  -390,   546,   546,   546,   546,   546,
      10,   144,   281,   546,    18,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   404,  -390,     3,   546,  1321,
    1321,  -390,   411,   -46,   169,   -33,   421,     3,  -390,  -390,
    -390,   -74,  -390,     3,   302,   276,  -390,   431,   -49,  -390,
     546,   282,     3,   -61,   -66,   447,   451,  -145,   447,  -109,
    -390,   616,  -390,   205,  1321,   910,   -29,   546,  -390,   546,
     241,   215,   245,  -390,  -390,  -390,   249,   546,   643,   664,
     251,   784,  1341,  1360,  1378,  1396,  1396,  -390,    14,  -390,
     378,   546,   546,   259,  1270,   270,   283,   284,   208,   749,
     874,   589,   923,   308,   308,   450,   450,   450,   450,  -390,
    -390,   -61,  -390,    49,   391,   410,   412,  -390,  -390,  -390,
      -3,    56,   883,   276,   276,   414,   389,     3,  -390,   419,
    -390,  -390,  -390,   545,   290,  -390,   220,  1321,   508,   425,
     -61,  -390,  -390,   537,  -106,  -390,    61,   310,   407,  -106,
     310,   407,   546,  -390,   546,   546,  -390,  1194,   953,  -390,
     546,  -390,  -390,  1109,   437,   437,  -390,  -390,  -390,  -390,
     315,   316,  1396,  1396,   378,   546,   208,   208,   208,   317,
     464,   -46,   474,   474,   474,   546,   571,   572,   282,  -390,
    -390,     3,   546,  -139,     3,   -83,    91,   327,   328,   463,
      64,  -390,   573,   208,   546,   546,  -390,  -390,   405,   465,
     588,  -390,  -390,   590,   454,  -105,  -390,  -390,  -105,  -390,
    -390,  1321,  1215,  -390,   546,   719,   546,   546,   341,   350,
    -390,  -390,   354,   356,   733,   382,   409,   430,  -390,   556,
     603,  -390,   612,   445,   500,   501,  1321,   760,    -2,   425,
    -390,  1321,   546,   532,  -390,  -390,  -139,   290,  -390,   533,
     534,   451,   451,   535,   -68,   290,   957,  -390,  1236,   549,
     692,  -390,  1321,   564,   767,  -390,  -390,  1321,    75,   565,
    -390,  -390,  -390,  1321,   546,  -390,   566,   833,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,   546,   546,   282,  -390,   813,
     813,   813,   546,   546,   823,  -390,  1321,   451,  -390,    98,
     451,   451,   109,   114,   451,  -390,  -390,   591,   591,   591,
    -390,   591,  -390,  -390,   591,   591,   600,   591,   591,   591,
    -390,   824,  -390,   591,   824,   591,   619,   591,   824,  -390,
    -390,  -390,   591,   824,   620,   621,  -390,  -390,  -390,  -390,
    -390,   546,   546,   447,   481,  -390,   522,   454,   809,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -195,
    1321,   425,  -390,   154,   165,   167,  1321,  1321,   852,   180,
     -34,   187,   212,  -390,  -390,   214,   904,  -390,  -390,  -390,
    -390,  -390,  -390,   907,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,   907,  -390,  -390,  -390,  -390,   913,   914,   274,
    1236,  1321,   660,  -390,  1321,  -390,  1321,   222,  -390,   735,
    -390,   832,  -390,   952,  -390,  -390,   546,  -390,  -390,  -390,
    -390,  -390,   224,  -151,    19,  -151,  -151,  -390,   226,  -151,
    -151,  -151,    19,  -151,    19,  -151,   230,  -151,    19,  -151,
      19,   705,   707,   811,  -390,   981,   352,  -390,  -390,   862,
     -80,  -390,  -390,  -390,   451,  -390,  -390,  1321,  -390,   983,
    -390,  -390,   802,   986,  -390,   987,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,   451,   740,   742,
     990,  -390,    19,  -390,    19,    19,   239,  -390,  -390,  -390
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -390,  -390,   -25,     7,  -390,  -390,   710,   880,   989,   663,
      47,  -390,   595,   473,  -390,  -390,  -296,  -350,  -390,   483,
    -390,  -390,   856,   -78,   217,   860,  -148,   762,  -390,  -390,
     201,  -390,  -390,  -390,   645,   718,   191,   102,  -390,  -390,
    -390,   984,   851,  -390,    13,   172,  1002,   924,   764,   553,
    -177,  -390,  -390,  -390,  -390,  -390,   229,  -390,  -390,   659,
     652,  -390,  -390,   567,  -389,    83,   -91,  -390,   516,  -307,
    -390,  -390,  -390,   954
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -220
static const yytype_int16 yytable[] =
{
      80,   269,   104,   147,    88,  -205,    88,  -207,   378,  -206,
     153,   124,   369,   175,   372,   246,   207,   305,   423,   425,
     288,    51,    52,    53,    54,    55,    56,   156,   208,   251,
     178,     1,   111,   112,   113,    57,    58,   114,   116,     5,
     187,   539,   188,    59,   251,   606,   145,    18,   329,   329,
       2,   215,   124,   172,   234,   216,   243,   471,   149,   150,
      38,    62,   275,   251,   276,   520,   235,    26,    63,   524,
     590,   592,    33,   593,   526,     5,   176,   435,   251,    34,
     105,    64,    65,    66,   267,   184,   373,   145,     3,   591,
     185,   252,   157,   176,   191,    95,   198,   199,   201,   313,
     202,   203,   204,   205,   206,   244,   252,    37,   214,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     270,   491,    85,    80,    96,   252,   192,   196,    51,    52,
      53,    54,    55,    56,    51,    52,    53,    54,    55,    56,
     252,   541,    57,    58,     4,   257,   330,   399,    57,    58,
      59,    60,   105,   148,     5,   301,    59,     6,    61,    39,
      19,   209,   277,   370,   278,   289,   376,   377,    62,    40,
     607,    97,   283,   170,    62,    63,    24,   193,   236,    29,
    -218,    63,   189,   100,    20,     5,   292,   293,    64,    65,
      66,   157,     7,   548,    64,    65,    66,  -171,    41,    98,
     253,   254,    83,   102,   189,   379,   170,   106,   217,    67,
      68,   108,   109,    84,  -219,   110,   380,   290,   239,   157,
     261,   100,   107,    42,  -171,   125,   126,   127,   128,   129,
     130,   131,    69,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   306,   424,    36,   341,
     342,    89,  -205,    89,  -207,   345,  -206,   152,   166,   194,
      74,    75,    76,    77,    78,    79,    99,   118,   218,   168,
     354,    51,    52,    53,    54,    55,    56,    44,   300,   340,
     366,   336,   337,   119,   339,    57,    58,   371,   308,   120,
     170,   121,   573,    59,   211,   212,   532,   213,   122,   388,
     390,   352,   123,   392,   169,    45,   155,   327,   307,   397,
      46,    62,   332,   333,   574,   384,   385,   280,    63,   403,
      47,   173,   407,    70,    71,    72,   475,   476,    73,   174,
     575,    64,    65,    66,   140,   141,   142,   143,   144,    48,
      51,    52,    53,    54,    55,    56,   195,   426,   400,   500,
     385,   401,   576,   406,    57,    58,   601,   602,   603,   604,
     503,   333,    59,   200,   231,   504,   333,    74,    75,    76,
      77,    78,    79,    74,    75,    76,    77,    78,    79,   478,
      62,    51,    52,    53,    54,    55,    56,    63,   180,   260,
     388,   490,     5,   316,   210,    57,    58,   496,   497,   577,
      64,    65,    66,    59,   317,   542,   543,   230,    51,    52,
      53,    54,    55,    56,   233,   318,   544,   543,   545,   543,
     238,    62,    57,    58,   240,   578,   247,   562,    63,   564,
      59,   547,   333,   568,   250,   570,   248,   579,   549,   333,
     258,    64,    65,    66,   309,   310,   530,   531,    62,   534,
     263,   536,   397,   319,   265,    63,   273,    51,    52,    53,
      54,    55,    56,   550,   333,   551,   333,   272,    64,    65,
      66,    57,    58,   582,   476,   588,   589,   594,   595,    59,
     144,   596,   595,   391,    51,    52,    53,    54,    55,    56,
     619,   333,   279,   580,   364,   365,   281,    62,    57,    58,
     282,   115,   286,   612,    63,   614,    59,   615,    44,   294,
      74,    75,    76,    77,    78,    79,   302,    64,    65,    66,
     296,   587,   494,   495,    62,    51,    52,    53,    54,    55,
      56,    63,   396,   297,   298,   303,    45,   304,   311,    57,
      58,    86,   312,   314,    64,    65,    66,    59,   315,    51,
      52,    53,    54,    55,    56,   324,   325,   328,   347,   533,
     334,   329,     5,    57,    58,    62,   350,   351,   358,   359,
      87,    59,    63,   362,   367,   368,   386,   381,   382,    74,
      75,    76,    77,    78,    79,    64,    65,    66,   383,    62,
     393,   394,   408,   395,   555,   556,    63,   559,   560,   561,
     535,   409,   563,   415,   565,   410,   567,   411,   569,    64,
      65,    66,   137,   138,   139,   140,   141,   142,   143,   144,
      74,    75,    76,    77,    78,    79,   125,   126,   127,   128,
     129,   130,   131,   412,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    74,    75,    76,
      77,    78,    79,   125,   126,   127,   128,   129,   130,   131,
     413,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   125,   126,   127,   128,   129,   130,
     131,   414,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   419,    74,    75,    76,    77,
      78,    79,   125,   126,   127,   128,   129,   130,   131,   416,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    74,    75,    76,    77,    78,    79,   125,
     126,   127,   128,   129,   130,   131,   418,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     420,   421,   154,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    74,    75,    76,    77,    78,    79,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     422,   190,   427,   430,   431,   434,   473,   474,    74,    75,
      76,    77,    78,    79,   125,   126,   127,   128,   129,   130,
     131,   471,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   477,   492,   479,   404,   125,
     126,   127,   128,   129,   130,   131,   498,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     268,   506,   271,   125,   126,   127,   128,   129,   130,   131,
     513,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   432,   433,    31,   517,   272,   522,
     527,   528,   546,   291,   125,   126,   127,   128,   129,   130,
     131,   299,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   284,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   480,   481,   482,   483,   552,
     499,   557,   330,   501,   502,   583,   285,   505,   571,   572,
     125,   126,   127,   128,   129,   130,   131,     1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   484,   485,   486,   472,   158,     2,   138,   139,   140,
     141,   142,   143,   144,   584,   586,   597,   353,   598,   355,
     356,   357,   599,   125,   126,   127,   128,   129,   130,   131,
     405,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     3,   600,   387,   605,   609,   610,
     611,   613,   333,   617,   618,   349,   186,    32,   159,   437,
     438,   439,   440,   581,   232,   508,   509,  -139,   510,   441,
     489,   511,   512,   160,   514,   515,   516,   242,   323,   361,
     519,   428,   521,   103,   523,   262,    50,   442,   443,   525,
     537,   179,   161,   444,   338,   287,   429,   436,   566,   151,
       4,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       5,   446,     0,     6,     0,   447,     0,     0,     0,     0,
     538,     0,   162,     0,     0,     0,     0,   608,     0,     0,
       0,   487,   488,     0,     0,     0,   448,   449,     0,     0,
       0,     0,     0,     0,     0,     0,   163,     0,     7,     0,
     616,     0,     0,     0,     0,   450,   451,   115,     0,     0,
     452,   453,   454,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,     0,   274,   125,
     126,   127,   128,   129,   130,   131,   455,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,     0,   456,     0,   457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   344,     0,     0,   458,     0,   459,   460,   461,   462,
     463,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,   465,     0,
       0,     0,     0,     0,     0,   466,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   346,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   125,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,     0,
       0,     0,     0,     0,     0,   468,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   343,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,     0,   124,     0,     0,   295,     0,   402,     0,
     125,   126,   127,   128,   129,   130,   131,   469,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   125,   126,   127,   128,   129,   130,   131,   145,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   126,   127,   128,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   127,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,  -220,
    -220,  -220,  -220,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-390)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-220)))

static const yytype_int16 yycheck[] =
{
      25,   178,   102,   102,     3,     3,     3,     3,   315,     3,
      88,     3,   308,   187,   153,   163,     6,    20,    20,   369,
       6,     3,     4,     5,     6,     7,     8,   187,    18,   112,
     187,    61,    57,    58,    59,    17,    18,    62,    63,   184,
      91,   236,    93,    25,   112,   125,    38,    68,   154,   154,
      80,    33,     3,   225,   100,    37,   130,   252,    83,    84,
       3,    43,    91,   112,    93,   454,   112,     8,    50,   458,
     221,    52,   248,    54,   463,   184,   250,   384,   112,   111,
     252,    63,    64,    65,   229,   110,   225,    38,   118,   240,
     115,   174,   252,   250,   119,   248,   121,   122,   123,   247,
     125,   126,   127,   128,   129,   179,   174,   204,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     229,   417,   252,   148,   242,   174,   119,   120,     3,     4,
       5,     6,     7,     8,     3,     4,     5,     6,     7,     8,
     174,   491,    17,    18,   174,   170,   252,   252,    17,    18,
      25,    26,   252,   252,   184,   233,    25,   187,    33,   102,
     181,   151,   187,   311,   189,   151,   314,   250,    43,   112,
     250,     3,   197,   234,    43,    50,     4,    46,   224,     7,
     248,    50,   233,   249,   205,   184,   211,   212,    63,    64,
      65,   252,   222,   500,    63,    64,    65,   225,   141,     3,
     249,   250,     9,     3,   233,   114,   234,     3,   190,    84,
      85,   249,   250,    20,   248,     9,   125,   210,   251,   252,
     173,   249,     3,   166,   252,    10,    11,    12,    13,    14,
      15,    16,   107,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   249,   249,    19,   274,
     275,   250,   250,   250,   250,   280,   250,   249,    38,   128,
     242,   243,   244,   245,   246,   247,    37,   250,   250,     3,
     295,     3,     4,     5,     6,     7,     8,    79,   231,   272,
     305,   268,   269,   250,   271,    17,    18,   312,   241,   250,
     234,   250,    18,    25,    13,    14,   473,    16,   250,   324,
     325,   294,   250,   328,    26,   107,    89,   260,   252,   334,
     112,    43,   251,   252,    40,   251,   252,   102,    50,   344,
     122,   104,   347,   198,   199,   200,   251,   252,   203,     3,
      56,    63,    64,    65,    26,    27,    28,    29,    30,   141,
       3,     4,     5,     6,     7,     8,   215,   372,   335,   251,
     252,   338,    78,   346,    17,    18,     4,     5,     6,     7,
     251,   252,    25,    26,   147,   251,   252,   242,   243,   244,
     245,   246,   247,   242,   243,   244,   245,   246,   247,   404,
      43,     3,     4,     5,     6,     7,     8,    50,     3,   172,
     415,   416,   184,   103,   250,    17,    18,   422,   423,   125,
      63,    64,    65,    25,   114,   251,   252,     3,     3,     4,
       5,     6,     7,     8,     3,   125,   251,   252,   251,   252,
     251,    43,    17,    18,     3,   151,   124,   518,    50,   520,
      25,   251,   252,   524,     3,   526,   160,   163,   251,   252,
     158,    63,    64,    65,   243,   244,   471,   472,    43,   474,
       3,   476,   477,   163,     3,    50,   251,     3,     4,     5,
       6,     7,     8,   251,   252,   251,   252,   252,    63,    64,
      65,    17,    18,   251,   252,   251,   252,   251,   252,    25,
      30,   251,   252,    78,     3,     4,     5,     6,     7,     8,
     251,   252,   251,   219,   303,   304,   251,    43,    17,    18,
     251,   233,   251,   594,    50,   596,    25,   598,    79,   250,
     242,   243,   244,   245,   246,   247,   125,    63,    64,    65,
     250,   546,   420,   421,    43,     3,     4,     5,     6,     7,
       8,    50,    78,   250,   250,   125,   107,   125,   124,    17,
      18,   112,   153,   124,    63,    64,    65,    25,     3,     3,
       4,     5,     6,     7,     8,    47,   131,    20,   121,    78,
     250,   154,   184,    17,    18,    43,   251,   251,   251,   105,
     141,    25,    50,    99,     3,     3,     3,   250,   250,   242,
     243,   244,   245,   246,   247,    63,    64,    65,   125,    43,
     125,     3,   251,     3,   511,   512,    50,   514,   515,   516,
      78,   251,   519,    47,   521,   251,   523,   251,   525,    63,
      64,    65,    23,    24,    25,    26,    27,    28,    29,    30,
     242,   243,   244,   245,   246,   247,    10,    11,    12,    13,
      14,    15,    16,   251,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   242,   243,   244,
     245,   246,   247,    10,    11,    12,    13,    14,    15,    16,
     251,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   251,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   250,   242,   243,   244,   245,
     246,   247,    10,    11,    12,    13,    14,    15,    16,   106,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   242,   243,   244,   245,   246,   247,    10,
      11,    12,    13,    14,    15,    16,   124,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     250,   250,    89,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   242,   243,   244,   245,   246,   247,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      20,   118,   250,   250,   250,   250,   222,    20,   242,   243,
     244,   245,   246,   247,    10,    11,    12,    13,    14,    15,
      16,   252,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   250,     3,   251,    99,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     177,   250,   179,    10,    11,    12,    13,    14,    15,    16,
     250,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   381,   382,     0,    43,   252,   250,
     250,   250,    20,   210,    10,    11,    12,    13,    14,    15,
      16,   218,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   252,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    72,    73,    74,    75,     5,
     427,     4,   252,   430,   431,   180,   252,   434,     5,     5,
      10,    11,    12,    13,    14,    15,    16,    61,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   108,   109,   110,   252,    62,    80,    24,    25,    26,
      27,    28,    29,    30,   122,     3,   251,   294,   251,   296,
     297,   298,   151,    10,    11,    12,    13,    14,    15,    16,
     251,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   118,     4,   323,   125,     5,   187,
       4,     4,   252,   251,     4,   285,   116,     8,   115,    42,
      43,    44,    45,   530,   148,   438,   439,   124,   441,    52,
     415,   444,   445,   130,   447,   448,   449,   157,   256,   301,
     453,   376,   455,    39,   457,   174,    24,    70,    71,   462,
     477,   107,   149,    76,   270,   251,   377,   385,   522,    85,
     174,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
     184,    94,    -1,   187,    -1,    98,    -1,    -1,    -1,    -1,
     251,    -1,   179,    -1,    -1,    -1,    -1,   584,    -1,    -1,
      -1,   238,   239,    -1,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,   222,    -1,
     607,    -1,    -1,    -1,    -1,   138,   139,   233,    -1,    -1,
     143,   144,   145,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,   208,    10,
      11,    12,    13,    14,    15,    16,   169,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,   187,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   208,    -1,    -1,   207,    -1,   209,   210,   211,   212,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   102,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    93,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,     3,    -1,    -1,    36,    -1,    93,    -1,
      10,    11,    12,    13,    14,    15,    16,    81,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    61,    80,   118,   174,   184,   187,   222,   254,   261,
     262,   292,   296,   304,   305,   308,   310,   324,    68,   181,
     205,   311,   293,   298,   298,   273,     8,   325,   326,   298,
     306,     0,   261,   248,   111,   309,   309,   204,     3,   102,
     112,   141,   166,   294,    79,   107,   112,   122,   141,   299,
     299,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    33,    43,    50,    63,    64,    65,    84,    85,   107,
     198,   199,   200,   203,   242,   243,   244,   245,   246,   247,
     255,   274,   275,     9,    20,   252,   112,   141,     3,   250,
     277,   278,   279,   281,   291,   248,   242,     3,     3,   309,
     249,   295,     3,   294,   102,   252,     3,     3,   249,   250,
       9,   255,   255,   255,   255,   233,   255,   260,   250,   250,
     250,   250,   250,   250,     3,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    38,   276,   102,   252,   255,
     255,   326,   249,   276,   262,   277,   187,   252,    62,   115,
     130,   149,   179,   203,   282,   284,    38,   280,     3,    26,
     234,   263,   225,   277,     3,   187,   250,   300,   187,   300,
       3,   255,   256,   257,   255,   255,   260,    91,    93,   233,
     262,   255,   256,    46,   128,   215,   256,   258,   255,   255,
      26,   255,   255,   255,   255,   255,   255,     6,    18,   151,
     250,    13,    14,    16,   255,    33,    37,   190,   250,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
       3,   277,   275,     3,   100,   112,   224,   288,   251,   251,
       3,   307,   278,   130,   179,   285,   279,   124,   160,   283,
       3,   112,   174,   249,   250,   322,   323,   255,   158,   269,
     277,   263,   295,     3,   303,     3,   272,   229,   262,   303,
     229,   262,   252,   251,   208,    91,    93,   255,   255,   251,
     102,   251,   251,   255,   252,   252,   251,   251,     6,   151,
     256,   262,   255,   255,   250,    36,   250,   250,   250,   262,
     263,   276,   125,   125,   125,    20,   249,   252,   263,   283,
     283,   124,   153,   279,   124,     3,   103,   114,   125,   163,
     312,   313,   314,   280,    47,   131,   270,   263,    20,   154,
     252,   297,   251,   252,   250,   301,   297,   297,   301,   297,
     256,   255,   255,    93,   208,   255,   102,   121,   259,   259,
     251,   251,   256,   262,   255,   262,   262,   262,   251,   105,
     264,   288,    99,   289,   289,   289,   255,     3,     3,   269,
     279,   255,   153,   225,   286,   287,   279,   250,   322,   114,
     125,   250,   250,   125,   251,   252,     3,   262,   255,   265,
     255,    78,   255,   125,     3,     3,    78,   255,   302,   252,
     297,   297,    93,   255,    99,   251,   256,   255,   251,   251,
     251,   251,   251,   251,   251,    47,   106,   268,   124,   250,
     250,   250,    20,    20,   249,   270,   255,   250,   287,   312,
     250,   250,   272,   272,   250,   322,   313,    42,    43,    44,
      45,    52,    70,    71,    76,    87,    94,    98,   119,   120,
     138,   139,   143,   144,   145,   169,   187,   189,   207,   209,
     210,   211,   212,   213,   230,   231,   238,   320,    39,    81,
     266,   252,   252,   222,    20,   251,   252,   250,   255,   251,
      72,    73,    74,    75,   108,   109,   110,   238,   239,   265,
     255,   269,     3,   290,   290,   290,   255,   255,     3,   272,
     251,   272,   272,   251,   251,   272,   250,   316,   316,   316,
     316,   316,   316,   250,   316,   316,   316,    43,   317,   316,
     317,   316,   250,   316,   317,   316,   317,   250,   250,   315,
     255,   255,   303,    78,   255,    78,   255,   302,   251,   236,
     267,   270,   251,   252,   251,   251,    20,   251,   322,   251,
     251,   251,     5,   318,   319,   318,   318,     4,   321,   318,
     318,   318,   319,   318,   319,   318,   321,   318,   319,   318,
     319,     5,     5,    18,    40,    56,    78,   125,   151,   163,
     219,   266,   251,   180,   122,   271,     3,   255,   251,   252,
     221,   240,    52,    54,   251,   252,   251,   251,   251,   151,
       4,     4,     5,     6,     7,   125,   125,   250,   272,     5,
     187,     4,   319,     4,   319,   319,   272,   251,     4,   251
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
        case 4:
/* Line 1792 of yacc.c  */
#line 294 "pmysql.y"
    { emit("NAME %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 295 "pmysql.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 296 "pmysql.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 297 "pmysql.y"
    { emit("STRING %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 298 "pmysql.y"
    { emit("NUMBER %d", (yyvsp[(1) - (1)].intval)); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 299 "pmysql.y"
    { emit("FLOAT %g", (yyvsp[(1) - (1)].floatval)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 300 "pmysql.y"
    { emit("BOOL %d", (yyvsp[(1) - (1)].intval)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 303 "pmysql.y"
    { emit("ADD"); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 304 "pmysql.y"
    { emit("SUB"); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 305 "pmysql.y"
    { emit("MUL"); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 306 "pmysql.y"
    { emit("DIV"); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 307 "pmysql.y"
    { emit("MOD"); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 308 "pmysql.y"
    { emit("MOD"); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 309 "pmysql.y"
    { emit("NEG"); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 310 "pmysql.y"
    { emit("AND"); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 311 "pmysql.y"
    { emit("OR"); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 312 "pmysql.y"
    { emit("XOR"); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 313 "pmysql.y"
    { emit("BITOR"); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 314 "pmysql.y"
    { emit("BITAND"); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 315 "pmysql.y"
    { emit("BITXOR"); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 316 "pmysql.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 317 "pmysql.y"
    { emit("NOT"); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 318 "pmysql.y"
    { emit("NOT"); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 319 "pmysql.y"
    { emit("CMP %d", (yyvsp[(2) - (3)].subtok)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 322 "pmysql.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 323 "pmysql.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 324 "pmysql.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 325 "pmysql.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 328 "pmysql.y"
    { emit("ISNULL"); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 329 "pmysql.y"
    { emit("ISNULL"); emit("NOT"); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 330 "pmysql.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 331 "pmysql.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 333 "pmysql.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 336 "pmysql.y"
    { emit("BETWEEN"); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 339 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 340 "pmysql.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 343 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 347 "pmysql.y"
    { emit("ISIN %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 348 "pmysql.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); emit("NOT"); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 349 "pmysql.y"
    { emit("CMPANYSELECT 4"); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 350 "pmysql.y"
    { emit("CMPALLSELECT 3"); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 351 "pmysql.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 355 "pmysql.y"
    {  emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 359 "pmysql.y"
    { emit("COUNTALL"); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 360 "pmysql.y"
    { emit(" CALL 1 COUNT"); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 362 "pmysql.y"
    {  emit("CALL %d SUBSTR", (yyvsp[(3) - (4)].intval)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 363 "pmysql.y"
    {  emit("CALL 2 SUBSTR"); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 364 "pmysql.y"
    {  emit("CALL 3 SUBSTR"); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 366 "pmysql.y"
    { emit("CALL %d TRIM", (yyvsp[(3) - (4)].intval)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 367 "pmysql.y"
    { emit("CALL 3 TRIM"); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 370 "pmysql.y"
    { emit("NUMBER 1"); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 371 "pmysql.y"
    { emit("NUMBER 2"); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 372 "pmysql.y"
    { emit("NUMBER 3"); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 375 "pmysql.y"
    { emit("CALL 3 DATE_ADD"); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 376 "pmysql.y"
    { emit("CALL 3 DATE_SUB"); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 379 "pmysql.y"
    { emit("NUMBER 1"); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 380 "pmysql.y"
    { emit("NUMBER 2"); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 381 "pmysql.y"
    { emit("NUMBER 3"); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 382 "pmysql.y"
    { emit("NUMBER 4"); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 383 "pmysql.y"
    { emit("NUMBER 5"); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 384 "pmysql.y"
    { emit("NUMBER 6"); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 385 "pmysql.y"
    { emit("NUMBER 7"); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 386 "pmysql.y"
    { emit("NUMBER 8"); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 387 "pmysql.y"
    { emit("NUMBER 9"); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 389 "pmysql.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 390 "pmysql.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 391 "pmysql.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 392 "pmysql.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 395 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 396 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (5)].intval)+1; }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 399 "pmysql.y"
    { emit("LIKE"); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 400 "pmysql.y"
    { emit("LIKE"); emit("NOT"); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 403 "pmysql.y"
    { emit("REGEXP"); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 404 "pmysql.y"
    { emit("REGEXP"); emit("NOT"); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 407 "pmysql.y"
    { emit("NOW"); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 408 "pmysql.y"
    { emit("NOW"); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 409 "pmysql.y"
    { emit("NOW"); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 412 "pmysql.y"
    { emit("STRTOBIN"); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 417 "pmysql.y"
    { emit("STMT"); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 421 "pmysql.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 426 "pmysql.y"
    { emit("SELECT %d %d %d", (yyvsp[(2) - (11)].intval), (yyvsp[(3) - (11)].intval), (yyvsp[(5) - (11)].intval)); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 430 "pmysql.y"
    { emit("WHERE"); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 434 "pmysql.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 438 "pmysql.y"
    { emit("GROUPBY %d",  (yyvsp[(2) - (2)].intval)); (yyval.intval) = 1; }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 440 "pmysql.y"
    { emit("GROUPBY %d",  (yyvsp[(4) - (4)].intval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 443 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 444 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 445 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 448 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 449 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 453 "pmysql.y"
    { emit("HAVING"); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 456 "pmysql.y"
    { emit("ORDERBY %d", (yyvsp[(3) - (3)].intval)); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 459 "pmysql.y"
    { emit("LIMIT 1"); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 460 "pmysql.y"
    { emit("LIMIT 2"); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 464 "pmysql.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 467 "pmysql.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 468 "pmysql.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 471 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 473 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 475 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 477 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 479 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 481 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 483 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 485 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 487 "pmysql.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = 
   (yyvsp[(1) - (2)].intval) | 0200; }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 491 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 492 "pmysql.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 493 "pmysql.y"
    { emit("SELECTALL"); (yyval.intval) = 1; }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 498 "pmysql.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 499 "pmysql.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 503 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 504 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 512 "pmysql.y"
    { emit("TABLE %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 513 "pmysql.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval));
                               free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 515 "pmysql.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 516 "pmysql.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 525 "pmysql.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 527 "pmysql.y"
    { emit("JOIN %d", 200); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 529 "pmysql.y"
    { emit("JOIN %d", 200); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 531 "pmysql.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 533 "pmysql.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 536 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 537 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 538 "pmysql.y"
    { (yyval.intval) = 2; }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 541 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 542 "pmysql.y"
    {(yyval.intval) = 4; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 545 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 546 "pmysql.y"
    { (yyval.intval) = 2; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 549 "pmysql.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 550 "pmysql.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 551 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 558 "pmysql.y"
    { emit("ONEXPR"); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 559 "pmysql.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 564 "pmysql.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 566 "pmysql.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 568 "pmysql.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 572 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 573 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 576 "pmysql.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 577 "pmysql.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 580 "pmysql.y"
    { emit("SUBQUERY"); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 585 "pmysql.y"
    { emit("STMT"); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 591 "pmysql.y"
    { emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 594 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 595 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 596 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 597 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 604 "pmysql.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 606 "pmysql.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 608 "pmysql.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 617 "pmysql.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 622 "pmysql.y"
    { emit("STMT"); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 628 "pmysql.y"
    { emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 632 "pmysql.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 635 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 636 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 637 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 638 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 639 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 646 "pmysql.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 649 "pmysql.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 650 "pmysql.y"
    { emit("VALUES %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 653 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 654 "pmysql.y"
    { emit("DEFAULT"); (yyval.intval) = 1; }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 655 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 656 "pmysql.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 661 "pmysql.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 666 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 669 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 672 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 675 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 681 "pmysql.y"
    { emit("INSERTSELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 685 "pmysql.y"
    { emit("STMT"); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 691 "pmysql.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 697 "pmysql.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 702 "pmysql.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 706 "pmysql.y"
    { emit("STMT"); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 713 "pmysql.y"
    { emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval)); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 716 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 717 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 718 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 723 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 726 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(1) - (5)].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = 1; }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 729 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 732 "pmysql.y"
    { if ((yyvsp[(6) - (7)].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval)); 
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval)); free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); (yyval.intval) = 1; }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 739 "pmysql.y"
    { emit("STMT"); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 744 "pmysql.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 746 "pmysql.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 749 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 751 "pmysql.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 756 "pmysql.y"
    { emit("STMT"); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 760 "pmysql.y"
    { emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 764 "pmysql.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
                          free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 770 "pmysql.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 774 "pmysql.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 779 "pmysql.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval));
                              free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 784 "pmysql.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval));
                          free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 788 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 789 "pmysql.y"
    { (yyval.intval) = 1;}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 792 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 793 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 796 "pmysql.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 797 "pmysql.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 798 "pmysql.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 799 "pmysql.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 800 "pmysql.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 803 "pmysql.y"
    { emit("STARTCOL"); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 804 "pmysql.y"
    { emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval)); free((yyvsp[(2) - (4)].strval)); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 806 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 807 "pmysql.y"
    { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 810 "pmysql.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 812 "pmysql.y"
    { emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 814 "pmysql.y"
    { emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 816 "pmysql.y"
    { emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 818 "pmysql.y"
    { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 820 "pmysql.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 821 "pmysql.y"
    { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 822 "pmysql.y"
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 823 "pmysql.y"
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 825 "pmysql.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 828 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 829 "pmysql.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 830 "pmysql.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 833 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 834 "pmysql.y"
    { (yyval.intval) = 4000; }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 837 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 838 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 839 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 843 "pmysql.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 844 "pmysql.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 848 "pmysql.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 849 "pmysql.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 850 "pmysql.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 851 "pmysql.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 852 "pmysql.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 853 "pmysql.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 854 "pmysql.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 855 "pmysql.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 856 "pmysql.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 857 "pmysql.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 858 "pmysql.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 859 "pmysql.y"
    { (yyval.intval) = 100001; }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 860 "pmysql.y"
    { (yyval.intval) = 100002; }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 861 "pmysql.y"
    { (yyval.intval) = 100003; }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 862 "pmysql.y"
    { (yyval.intval) = 100004; }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 863 "pmysql.y"
    { (yyval.intval) = 100005; }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 864 "pmysql.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 865 "pmysql.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 866 "pmysql.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 867 "pmysql.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 868 "pmysql.y"
    { (yyval.intval) = 160001; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 869 "pmysql.y"
    { (yyval.intval) = 160002; }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 870 "pmysql.y"
    { (yyval.intval) = 160003; }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 871 "pmysql.y"
    { (yyval.intval) = 160004; }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 872 "pmysql.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 873 "pmysql.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 874 "pmysql.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 875 "pmysql.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 876 "pmysql.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 877 "pmysql.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 880 "pmysql.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 881 "pmysql.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 884 "pmysql.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 887 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 888 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 889 "pmysql.y"
    { (yyval.intval) = 2; }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 894 "pmysql.y"
    { emit("STMT"); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 902 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 904 "pmysql.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); }
    break;


/* Line 1792 of yacc.c  */
#line 4025 "pmysql.tab.c"
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
#line 907 "pmysql.y"

void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

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

main(int ac, char **av)
{
  extern FILE *yyin;
  struct timeval t1;
  struct timeval t2;
  //char payload[] = {"select a from b where '123' and '1' =                     '1'   ;\0\0"};
  char payload[] = {"select a from test where test =''\\\\/**\\\\/or\\\\/**\\\\/if(now()=sysdate(),sleep(0),0);#';"};

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  /*
  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }
  */

  //yy_scan_buffer(payload, strlen(payload));
  yy_scan_bytes(payload, strlen(payload));
  //yy_scan_string(payload, strlen(payload));
  gettimeofday(&t1, NULL);
  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
  gettimeofday(&t2, NULL);
  printf("Parser time consumed %dus\n", (t2.tv_sec-t1.tv_sec)*1000000+(t2.tv_usec-t1.tv_usec));
} /* main */
