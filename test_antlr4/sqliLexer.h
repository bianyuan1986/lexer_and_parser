


// Generated from sqliLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  sqliLexer : public antlr4::Lexer {
public:
  enum {
    TRUE = 1, FALSE = 2, ALL = 3, NOT = 4, LIKE = 5, CHARACTER = 6, IF = 7, 
    EXISTS = 8, ASC = 9, DESC = 10, ORDER = 11, GROUP = 12, BY = 13, HAVING = 14, 
    WHERE = 15, FROM = 16, AS = 17, SELECT = 18, DISTINCT = 19, INSERT = 20, 
    OVERWRITE = 21, OUTER = 22, UNIQUEJOIN = 23, PRESERVE = 24, JOIN = 25, 
    LEFT = 26, RIGHT = 27, FULL = 28, ON = 29, PARTITION = 30, PARTITIONS = 31, 
    TABLE = 32, TABLES = 33, COLUMNS = 34, INDEX = 35, INDEXES = 36, REBUILD = 37, 
    FUNCTIONS = 38, SHOW = 39, MSCK = 40, REPAIR = 41, DIRECTORY = 42, LOCAL = 43, 
    TRANSFORM = 44, USING = 45, CLUSTER = 46, DISTRIBUTE = 47, SORT = 48, 
    UNION = 49, LOAD = 50, EXPORT = 51, IMPORT = 52, DATA = 53, INPATH = 54, 
    IS = 55, CNULL = 56, CREATE = 57, EXTERNAL = 58, ALTER = 59, CHANGE = 60, 
    COLUMN = 61, FIRST = 62, AFTER = 63, DESCRIBE = 64, DROP = 65, RENAME = 66, 
    IGNORE = 67, PROTECTION = 68, TO = 69, COMMENT = 70, BOOLEAN = 71, TINYINT = 72, 
    SMALLINT = 73, INT = 74, BIGINT = 75, FLOAT = 76, DOUBLE = 77, DATE = 78, 
    DATETIME = 79, TIMESTAMP = 80, DECIMAL = 81, STRING = 82, VARCHAR = 83, 
    ARRAY = 84, STRUCT = 85, MAP = 86, UNIONTYPE = 87, REDUCE = 88, PARTITIONED = 89, 
    CLUSTERED = 90, SORTED = 91, INTO = 92, BUCKETS = 93, ROW = 94, ROWS = 95, 
    FORMAT = 96, DELIMITED = 97, FIELDS = 98, TERMINATED = 99, ESCAPED = 100, 
    COLLECTION = 101, ITEMS = 102, KEYS = 103, KEY = 104, LINES = 105, STORED = 106, 
    FILEFORMAT = 107, SEQUENCEFILE = 108, TEXTFILE = 109, RCFILE = 110, 
    ORCFILE = 111, INPUTFORMAT = 112, OUTPUTFORMAT = 113, INPUTDRIVER = 114, 
    OUTPUTDRIVER = 115, OFFLINE = 116, ENABLE = 117, DEFAULT = 118, DISABLE = 119, 
    READONLY = 120, LOCATION = 121, TABLESAMPLE = 122, BUCKET = 123, OUT = 124, 
    OF = 125, PERCENT = 126, CAST = 127, ADD = 128, REPLACE = 129, RLIKE = 130, 
    REGEXP = 131, TEMPORARY = 132, FUNCTION = 133, MACRO = 134, EXPLAIN = 135, 
    EXTENDED = 136, FORMATTED = 137, PRETTY = 138, DEPENDENCY = 139, LOGICAL = 140, 
    SERDE = 141, WITH = 142, DEFERRED = 143, SERDEPROPERTIES = 144, DBPROPERTIES = 145, 
    LIMIT = 146, SET = 147, UNSET = 148, TBLPROPERTIES = 149, IDXPROPERTIES = 150, 
    CASCADED = 151, CASE = 152, WHEN = 153, THEN = 154, ELSE = 155, END = 156, 
    MAPJOIN = 157, STREAMTABLE = 158, CLUSTERSTATUS = 159, UTC = 160, LONG = 161, 
    DELETE = 162, FETCH = 163, INTERSECT = 164, VIEW = 165, IN = 166, DATABASE = 167, 
    DATABASES = 168, MATERIALIZED = 169, SCHEMA = 170, SCHEMAS = 171, GRANT = 172, 
    REVOKE = 173, SSL = 174, UNDO = 175, LOCK = 176, LOCKS = 177, UNLOCK = 178, 
    SHARED = 179, EXCLUSIVE = 180, PROCEDURE = 181, UNSIGNED = 182, WHILE = 183, 
    READ = 184, READS = 185, PURGE = 186, RANGE = 187, ANALYZE = 188, BEFORE = 189, 
    BETWEEN = 190, BOTH = 191, BINARY = 192, CROSS = 193, CONTINUE = 194, 
    CURSOR = 195, TRIGGER = 196, RECORDREADER = 197, RECORDWRITER = 198, 
    LATERAL = 199, TOUCH = 200, ARCHIVE = 201, UNARCHIVE = 202, COMPUTE = 203, 
    STATISTICS = 204, USE = 205, OPTION = 206, CONCATENATE = 207, UPDATE = 208, 
    RESTRICT = 209, CASCADE = 210, SKEWED = 211, ROLLUP = 212, CUBE = 213, 
    DIRECTORIES = 214, FOR = 215, WINDOW = 216, UNBOUNDED = 217, PRECEDING = 218, 
    FOLLOWING = 219, CURRENT = 220, LESS = 221, OVER = 222, GROUPING = 223, 
    SETS = 224, TRUNCATE = 225, NOSCAN = 226, PARTIALSCAN = 227, USER = 228, 
    ROLE = 229, INNER = 230, EXCHANGE = 231, IDENTIFIED = 232, CHAR = 233, 
    ABS = 234, ACOS = 235, ASIN = 236, ATAN = 237, CEIL = 238, COS = 239, 
    COT = 240, EXP = 241, FLOOR = 242, LN = 243, POW = 244, RAND = 245, 
    ROUND = 246, SIN = 247, SQRT = 248, TAN = 249, LCASE = 250, LOWER = 251, 
    LTRIM = 252, RTRIM = 253, CONCAT = 254, SUBSTR = 255, TRIM = 256, UCASE = 257, 
    UPPER = 258, INTERVAL = 259, TO_DATE = 260, DAY = 261, HOUR = 262, MINUTE = 263, 
    MONTH = 264, SECOND = 265, FROM_UNIXTIME = 266, YEAR = 267, DATE_ADD = 268, 
    DATE_SUB = 269, COLLATE = 270, AVG = 271, COUNT = 272, MAX = 273, MIN = 274, 
    SUM = 275, COALESCE = 276, DUPLICATE = 277, SERVER = 278, ALIASES = 279, 
    ALIAS = 280, VALUES = 281, VALUE = 282, LOW_PRIORITY = 283, HIGH_PRIORITY = 284, 
    HASH = 285, REFERENCES = 286, TO_CHAR = 287, DATE_FORMAT = 288, SIGNED = 289, 
    INTEGER = 290, LENGTH = 291, REVERSE = 292, IFNULL = 293, HEX = 294, 
    CONV = 295, SLEEP = 296, BENCHMARK = 297, UPDATEXML = 298, EXTRACTVALUE = 299, 
    LOAD_FILE = 300, SYSTEM_USER = 301, SESSION_USER = 302, CURRENT_USER = 303, 
    ANALYSE = 304, MD5 = 305, ASCII = 306, MID = 307, VERSION = 308, NOW = 309, 
    SYSDATE = 310, ORD = 311, INSTR = 312, CONCAT_WS = 313, GROUP_CONCAT = 314, 
    UNHEX = 315, SUBSTRING = 316, LOCATE = 317, NULLIF = 318, ISNULL = 319, 
    DIVIDE = 320, MOD = 321, OR = 322, AND = 323, XOR = 324, ARROW = 325, 
    EQ = 326, NOT_EQ = 327, LET = 328, GET = 329, SET_VAR = 330, SHIFT_LEFT = 331, 
    SHIFT_RIGHT = 332, SEMI = 333, COLON = 334, DOT = 335, COMMA = 336, 
    ASTERISK = 337, RPAREN = 338, LPAREN = 339, RBRACK = 340, LBRACK = 341, 
    PLUS = 342, MINUS = 343, NEGATION = 344, VERTBAR = 345, BITAND = 346, 
    POWER_OP = 347, GTH = 348, LTH = 349, Double_Quote = 350, UNQUOTE = 351, 
    INTEGER_NUM = 352, VARCHAR_NUM = 353, BINARY_NUM = 354, HEX_DIGIT = 355, 
    REAL_NUMBER = 356, TEXT_STRING = 357, ID = 358, LINE_COMMENT = 359, 
    BLOCK_COMMENT = 360, ANNOTATION_COMMENT = 361, SYSTEM_VAR = 362, WHITE_SPACE = 363, 
    SL_COMMENT = 364, SPEC_MYSQL_COMMENT = 365, COMMENT_INPUT = 366, Regex_Escaped_Unicode = 367
  };

  sqliLexer(antlr4::CharStream *input);
  ~sqliLexer();



  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

