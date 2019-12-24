


// Generated from sqliParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  sqliParser : public antlr4::Parser {
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
    SL_COMMENT = 364, SPEC_MYSQL_COMMENT = 365, COMMENT_INPUT = 366, Regex_Escaped_Unicode = 367, 
    MORE = 368
  };

  enum {
    RuleRoot_statement = 0, RuleData_manipulation_statements = 1, RuleData_definition_statements = 2, 
    RuleCreate_statement = 3, RuleCreate_statement_spec = 4, RuleDrop_statement = 5, 
    RulePrivilege_alter_statement = 6, RuleSelect_statement = 7, RuleSelect_statement_subquery = 8, 
    RuleSelect_expression = 9, RuleSelect_expression_subquery = 10, RuleWhere_clause = 11, 
    RuleGroupby_clause = 12, RuleGroupby_item = 13, RuleHaving_clause = 14, 
    RuleOrderby_clause = 15, RuleOrderby_item = 16, RuleOrderby_column_spec = 17, 
    RuleOrderby_column_name = 18, RuleOrderby_any_name = 19, RuleLimit_clause = 20, 
    RuleOffset = 21, RuleRow_count = 22, RuleSelect_list = 23, RuleColumn_list = 24, 
    RuleSubquery = 25, RuleTable_spec = 26, RuleDisplayed_column = 27, RuleInsert_statement = 28, 
    RuleInsert_header = 29, RuleValue_list_clause = 30, RuleValue_list = 31, 
    RuleColumn_value_list = 32, RuleSet_columns_cluase = 33, RuleSet_column_cluase = 34, 
    RuleCreate_database_statement = 35, RuleCreate_table_statement = 36, 
    RuleCreate_table_spec = 37, RuleCreate_definition = 38, RuleColumn_definition = 39, 
    RuleNull_or_notnull = 40, RuleColumn_data_type_header = 41, RuleIndex_column_name = 42, 
    RuleLength = 43, RuleVarchar_length = 44, RuleBinary_length = 45, RuleAlter_table_statement = 46, 
    RuleAlter_table_specification = 47, RuleIndex_column_names = 48, RuleIndex_type = 49, 
    RuleIndex_option = 50, RuleColumn_definitions = 51, RuleRename_table_statement = 52, 
    RuleDrop_database_statement = 53, RuleDrop_table_statement = 54, RuleDrop_view_statement = 55, 
    RuleDrop_user_statement = 56, RuleCreate_view_statement = 57, RuleCreate_view_body = 58, 
    RuleAlter_view_statement = 59, RuleCreate_user_statement = 60, RuleGrant_privilege_statement = 61, 
    RulePrincipal_specification = 62, RuleRevoke_privilege_statement = 63, 
    RuleShow_event_statement = 64, RuleShow_specification = 65, RuleSet_event_statement = 66, 
    RuleUse_event_statement = 67, RuleServer_event_statement = 68, RuleUpdate_statements = 69, 
    RuleDelete_statements = 70, RuleExpression = 71, RuleExp_factor1 = 72, 
    RuleBool_primary = 73, RulePredicate_quote = 74, RulePredicate_exp_quote = 75, 
    RuleBit_expr_quote = 76, RuleFactor1_quote = 77, RuleFactor2_quote = 78, 
    RuleSimple_expr_quote = 79, RuleColumn_spec_quote = 80, RuleColumn_name_quote = 81, 
    RuleAny_name_quote = 82, RulePredicate = 83, RulePredicate_exp = 84, 
    RuleBit_expr = 85, RuleFactor1 = 86, RuleFactor2 = 87, RuleSimple_expr = 88, 
    RuleFunction_call = 89, RuleCase_when_statement = 90, RuleColumn_spec = 91, 
    RuleExpression_list = 92, RuleInterval_expr = 93, RuleTable_references = 94, 
    RuleTable_reference = 95, RuleTable_atom = 96, RuleJoin_condition = 97, 
    RuleIndex_hint_list = 98, RuleIndex_options = 99, RuleIndex_hint = 100, 
    RuleIndex_list = 101, RulePartition_clause = 102, RulePartition_names = 103, 
    RuleKeyword = 104, RuleDelimited_statement = 105, RuleInteger_types = 106, 
    RuleRelational_op = 107, RuleCast_data_type = 108, RuleInterval_unit = 109, 
    RuleString_literal = 110, RuleNumber_literal = 111, RuleHex_literal = 112, 
    RuleBoolean_literal = 113, RuleLiteral_value = 114, RuleFunctionList = 115, 
    RuleNumber_functions = 116, RuleChar_functions = 117, RuleTime_functions = 118, 
    RuleOther_functions = 119, RuleGroup_functions = 120, RuleSensitive_functions = 121, 
    RuleSchema_name = 122, RuleDatabase_name = 123, RuleTable_name = 124, 
    RuleEngine_name = 125, RuleColumn_name = 126, RuleValue_name = 127, 
    RuleView_name = 128, RuleParser_name = 129, RuleIndex_name = 130, RulePartition_name = 131, 
    RulePartition_logical_name = 132, RuleConstraintbol_name = 133, RuleForeign_keybol_name = 134, 
    RuleCollation_name = 135, RuleEvent_name = 136, RuleUser_name = 137, 
    RuleFunction_name = 138, RuleProcedure_name = 139, RuleServer_name = 140, 
    RuleWrapper_name = 141, RuleAlias = 142, RulePassword = 143, RuleServer_alias_name = 144, 
    RuleRole_name = 145, RuleGroup_name = 146, RulePrincipal_name = 147, 
    RuleAny_name = 148, RuleAlias_name = 149, RulePriv_type = 150
  };

  sqliParser(antlr4::TokenStream *input);
  ~sqliParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;




  class Root_statementContext;
  class Data_manipulation_statementsContext;
  class Data_definition_statementsContext;
  class Create_statementContext;
  class Create_statement_specContext;
  class Drop_statementContext;
  class Privilege_alter_statementContext;
  class Select_statementContext;
  class Select_statement_subqueryContext;
  class Select_expressionContext;
  class Select_expression_subqueryContext;
  class Where_clauseContext;
  class Groupby_clauseContext;
  class Groupby_itemContext;
  class Having_clauseContext;
  class Orderby_clauseContext;
  class Orderby_itemContext;
  class Orderby_column_specContext;
  class Orderby_column_nameContext;
  class Orderby_any_nameContext;
  class Limit_clauseContext;
  class OffsetContext;
  class Row_countContext;
  class Select_listContext;
  class Column_listContext;
  class SubqueryContext;
  class Table_specContext;
  class Displayed_columnContext;
  class Insert_statementContext;
  class Insert_headerContext;
  class Value_list_clauseContext;
  class Value_listContext;
  class Column_value_listContext;
  class Set_columns_cluaseContext;
  class Set_column_cluaseContext;
  class Create_database_statementContext;
  class Create_table_statementContext;
  class Create_table_specContext;
  class Create_definitionContext;
  class Column_definitionContext;
  class Null_or_notnullContext;
  class Column_data_type_headerContext;
  class Index_column_nameContext;
  class LengthContext;
  class Varchar_lengthContext;
  class Binary_lengthContext;
  class Alter_table_statementContext;
  class Alter_table_specificationContext;
  class Index_column_namesContext;
  class Index_typeContext;
  class Index_optionContext;
  class Column_definitionsContext;
  class Rename_table_statementContext;
  class Drop_database_statementContext;
  class Drop_table_statementContext;
  class Drop_view_statementContext;
  class Drop_user_statementContext;
  class Create_view_statementContext;
  class Create_view_bodyContext;
  class Alter_view_statementContext;
  class Create_user_statementContext;
  class Grant_privilege_statementContext;
  class Principal_specificationContext;
  class Revoke_privilege_statementContext;
  class Show_event_statementContext;
  class Show_specificationContext;
  class Set_event_statementContext;
  class Use_event_statementContext;
  class Server_event_statementContext;
  class Update_statementsContext;
  class Delete_statementsContext;
  class ExpressionContext;
  class Exp_factor1Context;
  class Bool_primaryContext;
  class Predicate_quoteContext;
  class Predicate_exp_quoteContext;
  class Bit_expr_quoteContext;
  class Factor1_quoteContext;
  class Factor2_quoteContext;
  class Simple_expr_quoteContext;
  class Column_spec_quoteContext;
  class Column_name_quoteContext;
  class Any_name_quoteContext;
  class PredicateContext;
  class Predicate_expContext;
  class Bit_exprContext;
  class Factor1Context;
  class Factor2Context;
  class Simple_exprContext;
  class Function_callContext;
  class Case_when_statementContext;
  class Column_specContext;
  class Expression_listContext;
  class Interval_exprContext;
  class Table_referencesContext;
  class Table_referenceContext;
  class Table_atomContext;
  class Join_conditionContext;
  class Index_hint_listContext;
  class Index_optionsContext;
  class Index_hintContext;
  class Index_listContext;
  class Partition_clauseContext;
  class Partition_namesContext;
  class KeywordContext;
  class Delimited_statementContext;
  class Integer_typesContext;
  class Relational_opContext;
  class Cast_data_typeContext;
  class Interval_unitContext;
  class String_literalContext;
  class Number_literalContext;
  class Hex_literalContext;
  class Boolean_literalContext;
  class Literal_valueContext;
  class FunctionListContext;
  class Number_functionsContext;
  class Char_functionsContext;
  class Time_functionsContext;
  class Other_functionsContext;
  class Group_functionsContext;
  class Sensitive_functionsContext;
  class Schema_nameContext;
  class Database_nameContext;
  class Table_nameContext;
  class Engine_nameContext;
  class Column_nameContext;
  class Value_nameContext;
  class View_nameContext;
  class Parser_nameContext;
  class Index_nameContext;
  class Partition_nameContext;
  class Partition_logical_nameContext;
  class Constraintbol_nameContext;
  class Foreign_keybol_nameContext;
  class Collation_nameContext;
  class Event_nameContext;
  class User_nameContext;
  class Function_nameContext;
  class Procedure_nameContext;
  class Server_nameContext;
  class Wrapper_nameContext;
  class AliasContext;
  class PasswordContext;
  class Server_alias_nameContext;
  class Role_nameContext;
  class Group_nameContext;
  class Principal_nameContext;
  class Any_nameContext;
  class Alias_nameContext;
  class Priv_typeContext; 

  class  Root_statementContext : public antlr4::ParserRuleContext {
  public:
    Root_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_manipulation_statementsContext *data_manipulation_statements();
    Data_definition_statementsContext *data_definition_statements();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Root_statementContext* root_statement();

  class  Data_manipulation_statementsContext : public antlr4::ParserRuleContext {
  public:
    Data_manipulation_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();
    Insert_statementContext *insert_statement();
    Update_statementsContext *update_statements();
    Delete_statementsContext *delete_statements();
    Server_event_statementContext *server_event_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_manipulation_statementsContext* data_manipulation_statements();

  class  Data_definition_statementsContext : public antlr4::ParserRuleContext {
  public:
    Data_definition_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_statementContext *create_statement();
    Drop_statementContext *drop_statement();
    Privilege_alter_statementContext *privilege_alter_statement();
    Show_event_statementContext *show_event_statement();
    Set_event_statementContext *set_event_statement();
    Use_event_statementContext *use_event_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_definition_statementsContext* data_definition_statements();

  class  Create_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    Create_statement_specContext *create_statement_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_statementContext* create_statement();

  class  Create_statement_specContext : public antlr4::ParserRuleContext {
  public:
    Create_statement_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_database_statementContext *create_database_statement();
    Create_user_statementContext *create_user_statement();
    Create_table_statementContext *create_table_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_statement_specContext* create_statement_spec();

  class  Drop_statementContext : public antlr4::ParserRuleContext {
  public:
    Drop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Drop_database_statementContext *drop_database_statement();
    Drop_user_statementContext *drop_user_statement();
    Drop_table_statementContext *drop_table_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_statementContext* drop_statement();

  class  Privilege_alter_statementContext : public antlr4::ParserRuleContext {
  public:
    Privilege_alter_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Grant_privilege_statementContext *grant_privilege_statement();
    Revoke_privilege_statementContext *revoke_privilege_statement();
    Alter_table_statementContext *alter_table_statement();
    Alter_view_statementContext *alter_view_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privilege_alter_statementContext* privilege_alter_statement();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_expressionContext *select_expression();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<Select_expression_subqueryContext *> select_expression_subquery();
    Select_expression_subqueryContext* select_expression_subquery(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNION();
    antlr4::tree::TerminalNode* UNION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_statementContext* select_statement();

  class  Select_statement_subqueryContext : public antlr4::ParserRuleContext {
  public:
    Select_statement_subqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_expression_subqueryContext *> select_expression_subquery();
    Select_expression_subqueryContext* select_expression_subquery(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNION();
    antlr4::tree::TerminalNode* UNION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_statement_subqueryContext* select_statement_subquery();

  class  Select_expressionContext : public antlr4::ParserRuleContext {
  public:
    Select_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Select_listContext *select_list();
    antlr4::tree::TerminalNode *FROM();
    Table_referencesContext *table_references();
    Where_clauseContext *where_clause();
    Orderby_clauseContext *orderby_clause();
    Limit_clauseContext *limit_clause();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    Groupby_clauseContext *groupby_clause();
    Having_clauseContext *having_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_expressionContext* select_expression();

  class  Select_expression_subqueryContext : public antlr4::ParserRuleContext {
  public:
    Select_expression_subqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Select_listContext *select_list();
    antlr4::tree::TerminalNode *FROM();
    Table_referencesContext *table_references();
    Orderby_clauseContext *orderby_clause();
    Limit_clauseContext *limit_clause();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    Where_clauseContext *where_clause();
    Groupby_clauseContext *groupby_clause();
    Having_clauseContext *having_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_expression_subqueryContext* select_expression_subquery();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_clauseContext* where_clause();

  class  Groupby_clauseContext : public antlr4::ParserRuleContext {
  public:
    Groupby_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<Groupby_itemContext *> groupby_item();
    Groupby_itemContext* groupby_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Groupby_clauseContext* groupby_clause();

  class  Groupby_itemContext : public antlr4::ParserRuleContext {
  public:
    Groupby_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_specContext *column_spec();
    Simple_exprContext *simple_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Groupby_itemContext* groupby_item();

  class  Having_clauseContext : public antlr4::ParserRuleContext {
  public:
    Having_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Having_clauseContext* having_clause();

  class  Orderby_clauseContext : public antlr4::ParserRuleContext {
  public:
    Orderby_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<Orderby_itemContext *> orderby_item();
    Orderby_itemContext* orderby_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Orderby_clauseContext* orderby_clause();

  class  Orderby_itemContext : public antlr4::ParserRuleContext {
  public:
    Orderby_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Orderby_column_specContext *orderby_column_spec();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Orderby_itemContext* orderby_item();

  class  Orderby_column_specContext : public antlr4::ParserRuleContext {
  public:
    Orderby_column_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Orderby_column_nameContext *orderby_column_name();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Orderby_column_specContext* orderby_column_spec();

  class  Orderby_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Orderby_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Orderby_any_nameContext *orderby_any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Orderby_column_nameContext* orderby_column_name();

  class  Orderby_any_nameContext : public antlr4::ParserRuleContext {
  public:
    Orderby_any_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Number_literalContext *number_literal();
    Function_callContext *function_call();
    SubqueryContext *subquery();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Orderby_any_nameContext* orderby_any_name();

  class  Limit_clauseContext : public antlr4::ParserRuleContext {
  public:
    Limit_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    Row_countContext *row_count();
    Function_callContext *function_call();
    OffsetContext *offset();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Limit_clauseContext* limit_clause();

  class  OffsetContext : public antlr4::ParserRuleContext {
  public:
    OffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OffsetContext* offset();

  class  Row_countContext : public antlr4::ParserRuleContext {
  public:
    Row_countContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_countContext* row_count();

  class  Select_listContext : public antlr4::ParserRuleContext {
  public:
    Select_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Displayed_columnContext *> displayed_column();
    Displayed_columnContext* displayed_column(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_listContext* select_list();

  class  Column_listContext : public antlr4::ParserRuleContext {
  public:
    Column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Column_specContext *> column_spec();
    Column_specContext* column_spec(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_listContext* column_list();

  class  SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statement_subqueryContext *select_statement_subquery();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class  Table_specContext : public antlr4::ParserRuleContext {
  public:
    Table_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_specContext* table_spec();

  class  Displayed_columnContext : public antlr4::ParserRuleContext {
  public:
    Displayed_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK();
    Column_specContext *column_spec();
    AliasContext *alias();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Displayed_columnContext* displayed_column();

  class  Insert_statementContext : public antlr4::ParserRuleContext {
  public:
    Insert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Insert_headerContext *insert_header();
    Select_expressionContext *select_expression();
    Value_list_clauseContext *value_list_clause();
    Column_listContext *column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statementContext* insert_statement();

  class  Insert_headerContext : public antlr4::ParserRuleContext {
  public:
    Insert_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *INTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_headerContext* insert_header();

  class  Value_list_clauseContext : public antlr4::ParserRuleContext {
  public:
    Value_list_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_listContext *value_list();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_list_clauseContext* value_list_clause();

  class  Value_listContext : public antlr4::ParserRuleContext {
  public:
    Value_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Value_nameContext *> value_name();
    Value_nameContext* value_name(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_listContext* value_list();

  class  Column_value_listContext : public antlr4::ParserRuleContext {
  public:
    Column_value_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Bit_exprContext *> bit_expr();
    Bit_exprContext* bit_expr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_value_listContext* column_value_list();

  class  Set_columns_cluaseContext : public antlr4::ParserRuleContext {
  public:
    Set_columns_cluaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<Set_column_cluaseContext *> set_column_cluase();
    Set_column_cluaseContext* set_column_cluase(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_columns_cluaseContext* set_columns_cluase();

  class  Set_column_cluaseContext : public antlr4::ParserRuleContext {
  public:
    Set_column_cluaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_specContext *column_spec();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_column_cluaseContext* set_column_cluase();

  class  Create_database_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_database_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ALIAS();
    Server_alias_nameContext *server_alias_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_statementContext* create_database_statement();

  class  Create_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    Create_table_specContext *create_table_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_statementContext* create_table_statement();

  class  Create_table_specContext : public antlr4::ParserRuleContext {
  public:
    Create_table_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Create_definitionContext *> create_definition();
    Create_definitionContext* create_definition(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *TEXT_STRING();
    antlr4::tree::TerminalNode *LIKE();
    Table_specContext *table_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_specContext* create_table_spec();

  class  Create_definitionContext : public antlr4::ParserRuleContext {
  public:
    Create_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Column_definitionContext *column_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_definitionContext* create_definition();

  class  Column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_data_type_headerContext *column_data_type_header();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *TEXT_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definitionContext* column_definition();

  class  Null_or_notnullContext : public antlr4::ParserRuleContext {
  public:
    Null_or_notnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CNULL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_or_notnullContext* null_or_notnull();

  class  Column_data_type_headerContext : public antlr4::ParserRuleContext {
  public:
    Column_data_type_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *LPAREN();
    LengthContext *length();
    antlr4::tree::TerminalNode *RPAREN();
    Null_or_notnullContext *null_or_notnull();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *COMMA();
    Number_literalContext *number_literal();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *VARCHAR();
    Varchar_lengthContext *varchar_length();
    antlr4::tree::TerminalNode *BINARY();
    Binary_lengthContext *binary_length();
    antlr4::tree::TerminalNode *BOOLEAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_data_type_headerContext* column_data_type_header();

  class  Index_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *INTEGER_NUM();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_column_nameContext* index_column_name();

  class  LengthContext : public antlr4::ParserRuleContext {
  public:
    LengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthContext* length();

  class  Varchar_lengthContext : public antlr4::ParserRuleContext {
  public:
    Varchar_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Varchar_lengthContext* varchar_length();

  class  Binary_lengthContext : public antlr4::ParserRuleContext {
  public:
    Binary_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_lengthContext* binary_length();

  class  Alter_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_specContext *table_spec();
    std::vector<Alter_table_specificationContext *> alter_table_specification();
    Alter_table_specificationContext* alter_table_specification(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_statementContext* alter_table_statement();

  class  Alter_table_specificationContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *CHANGE();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_specificationContext* alter_table_specification();

  class  Index_column_namesContext : public antlr4::ParserRuleContext {
  public:
    Index_column_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Index_column_nameContext *> index_column_name();
    Index_column_nameContext* index_column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_column_namesContext* index_column_names();

  class  Index_typeContext : public antlr4::ParserRuleContext {
  public:
    Index_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *HASH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_typeContext* index_type();

  class  Index_optionContext : public antlr4::ParserRuleContext {
  public:
    Index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Index_typeContext *index_type();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *TEXT_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_optionContext* index_option();

  class  Column_definitionsContext : public antlr4::ParserRuleContext {
  public:
    Column_definitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definitionsContext* column_definitions();

  class  Rename_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Rename_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Table_specContext *> table_spec();
    Table_specContext* table_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_table_statementContext* rename_table_statement();

  class  Drop_database_statementContext : public antlr4::ParserRuleContext {
  public:
    Drop_database_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_database_statementContext* drop_database_statement();

  class  Drop_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Drop_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *TRUNCATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_table_statementContext* drop_table_statement();

  class  Drop_view_statementContext : public antlr4::ParserRuleContext {
  public:
    Drop_view_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_view_statementContext* drop_view_statement();

  class  Drop_user_statementContext : public antlr4::ParserRuleContext {
  public:
    Drop_user_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    User_nameContext *user_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_user_statementContext* drop_user_statement();

  class  Create_view_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_view_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    Create_view_bodyContext *create_view_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_statementContext* create_view_statement();

  class  Create_view_bodyContext : public antlr4::ParserRuleContext {
  public:
    Create_view_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *AS();
    Select_statementContext *select_statement();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    Column_listContext *column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_bodyContext* create_view_body();

  class  Alter_view_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_view_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Create_view_bodyContext *create_view_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_view_statementContext* alter_view_statement();

  class  Create_user_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_user_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *TEXT_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_user_statementContext* create_user_statement();

  class  Grant_privilege_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_privilege_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    std::vector<Priv_typeContext *> priv_type();
    Priv_typeContext* priv_type(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    std::vector<Principal_specificationContext *> principal_specification();
    Principal_specificationContext* principal_specification(size_t i);
    Database_nameContext *database_name();
    std::vector<antlr4::tree::TerminalNode *> ASTERISK();
    antlr4::tree::TerminalNode* ASTERISK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_privilege_statementContext* grant_privilege_statement();

  class  Principal_specificationContext : public antlr4::ParserRuleContext {
  public:
    Principal_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *USER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Principal_specificationContext* principal_specification();

  class  Revoke_privilege_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_privilege_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    std::vector<Priv_typeContext *> priv_type();
    Priv_typeContext* priv_type(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    std::vector<Principal_specificationContext *> principal_specification();
    Principal_specificationContext* principal_specification(size_t i);
    Database_nameContext *database_name();
    std::vector<antlr4::tree::TerminalNode *> ASTERISK();
    antlr4::tree::TerminalNode* ASTERISK(size_t i);
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DOT();
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_privilege_statementContext* revoke_privilege_statement();

  class  Show_event_statementContext : public antlr4::ParserRuleContext {
  public:
    Show_event_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    Show_specificationContext *show_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Show_event_statementContext* show_event_statement();

  class  Show_specificationContext : public antlr4::ParserRuleContext {
  public:
    Show_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *TEXT_STRING();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *IN();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ALL();
    Principal_nameContext *principal_name();
    Principal_specificationContext *principal_specification();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ALIASES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Show_specificationContext* show_specification();

  class  Set_event_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_event_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TABLE();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *TO();
    Server_alias_nameContext *server_alias_name();
    antlr4::tree::TerminalNode *DOT();
    Database_nameContext *database_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_event_statementContext* set_event_statement();

  class  Use_event_statementContext : public antlr4::ParserRuleContext {
  public:
    Use_event_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    Database_nameContext *database_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_event_statementContext* use_event_statement();

  class  Server_event_statementContext : public antlr4::ParserRuleContext {
  public:
    Server_event_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ALIAS();
    Server_alias_nameContext *server_alias_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_event_statementContext* server_event_statement();

  class  Update_statementsContext : public antlr4::ParserRuleContext {
  public:
    Update_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    Table_specContext *table_spec();
    Set_columns_cluaseContext *set_columns_cluase();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statementsContext* update_statements();

  class  Delete_statementsContext : public antlr4::ParserRuleContext {
  public:
    Delete_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    Table_specContext *table_spec();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statementsContext* delete_statements();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Exp_factor1Context *> exp_factor1();
    Exp_factor1Context* exp_factor1(size_t i);
    antlr4::tree::TerminalNode *NOT();
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> XOR();
    antlr4::tree::TerminalNode* XOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Exp_factor1Context : public antlr4::ParserRuleContext {
  public:
    Exp_factor1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_primaryContext *bool_primary();
    antlr4::tree::TerminalNode *IS();
    Boolean_literalContext *boolean_literal();
    Null_or_notnullContext *null_or_notnull();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exp_factor1Context* exp_factor1();

  class  Bool_primaryContext : public antlr4::ParserRuleContext {
  public:
    Bool_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();
    Relational_opContext *relational_op();
    Predicate_quoteContext *predicate_quote();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    Predicate_expContext *predicate_exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_primaryContext* bool_primary();

  class  Predicate_quoteContext : public antlr4::ParserRuleContext {
  public:
    Predicate_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_expr_quoteContext *bit_expr_quote();
    Predicate_exp_quoteContext *predicate_exp_quote();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Predicate_quoteContext* predicate_quote();

  class  Predicate_exp_quoteContext : public antlr4::ParserRuleContext {
  public:
    Predicate_exp_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    SubqueryContext *subquery();
    Column_value_listContext *column_value_list();
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<Bit_exprContext *> bit_expr();
    Bit_exprContext* bit_expr(size_t i);
    antlr4::tree::TerminalNode *AND();
    Simple_expr_quoteContext *simple_expr_quote();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *NOT();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Predicate_exp_quoteContext* predicate_exp_quote();

  class  Bit_expr_quoteContext : public antlr4::ParserRuleContext {
  public:
    Bit_expr_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Factor1_quoteContext *> factor1_quote();
    Factor1_quoteContext* factor1_quote(size_t i);
    antlr4::tree::TerminalNode *VERTBAR();
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    Interval_exprContext *interval_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_expr_quoteContext* bit_expr_quote();

  class  Factor1_quoteContext : public antlr4::ParserRuleContext {
  public:
    Factor1_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Factor2_quoteContext *> factor2_quote();
    Factor2_quoteContext* factor2_quote(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASTERISK();
    antlr4::tree::TerminalNode* ASTERISK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVIDE();
    antlr4::tree::TerminalNode* DIVIDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POWER_OP();
    antlr4::tree::TerminalNode* POWER_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factor1_quoteContext* factor1_quote();

  class  Factor2_quoteContext : public antlr4::ParserRuleContext {
  public:
    Factor2_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_expr_quoteContext *simple_expr_quote();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factor2_quoteContext* factor2_quote();

  class  Simple_expr_quoteContext : public antlr4::ParserRuleContext {
  public:
    Simple_expr_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_spec_quoteContext *column_spec_quote();
    Function_callContext *function_call();
    Case_when_statementContext *case_when_statement();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_expr_quoteContext* simple_expr_quote();

  class  Column_spec_quoteContext : public antlr4::ParserRuleContext {
  public:
    Column_spec_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_name_quoteContext *column_name_quote();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_spec_quoteContext* column_spec_quote();

  class  Column_name_quoteContext : public antlr4::ParserRuleContext {
  public:
    Column_name_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_name_quoteContext *any_name_quote();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_quoteContext* column_name_quote();

  class  Any_name_quoteContext : public antlr4::ParserRuleContext {
  public:
    Any_name_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Number_literalContext *number_literal();
    String_literalContext *string_literal();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *HEX_DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_name_quoteContext* any_name_quote();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_exprContext *bit_expr();
    Predicate_expContext *predicate_exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  Predicate_expContext : public antlr4::ParserRuleContext {
  public:
    Predicate_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    SubqueryContext *subquery();
    Column_value_listContext *column_value_list();
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<Bit_exprContext *> bit_expr();
    Bit_exprContext* bit_expr(size_t i);
    antlr4::tree::TerminalNode *AND();
    Simple_exprContext *simple_expr();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *NOT();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Predicate_expContext* predicate_exp();

  class  Bit_exprContext : public antlr4::ParserRuleContext {
  public:
    Bit_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Factor1Context *> factor1();
    Factor1Context* factor1(size_t i);
    antlr4::tree::TerminalNode *VERTBAR();
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    Interval_exprContext *interval_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_exprContext* bit_expr();

  class  Factor1Context : public antlr4::ParserRuleContext {
  public:
    Factor1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Factor2Context *> factor2();
    Factor2Context* factor2(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASTERISK();
    antlr4::tree::TerminalNode* ASTERISK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVIDE();
    antlr4::tree::TerminalNode* DIVIDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POWER_OP();
    antlr4::tree::TerminalNode* POWER_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factor1Context* factor1();

  class  Factor2Context : public antlr4::ParserRuleContext {
  public:
    Factor2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_exprContext *simple_expr();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factor2Context* factor2();

  class  Simple_exprContext : public antlr4::ParserRuleContext {
  public:
    Simple_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_specContext *column_spec();
    Function_callContext *function_call();
    Case_when_statementContext *case_when_statement();
    Expression_listContext *expression_list();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    Interval_exprContext *interval_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_exprContext* simple_expr();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionListContext *functionList();
    std::vector<antlr4::tree::TerminalNode *> UNQUOTE();
    antlr4::tree::TerminalNode* UNQUOTE(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Relational_opContext *relational_op();
    Number_literalContext *number_literal();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *AS();
    Cast_data_typeContext *cast_data_type();
    Group_functionsContext *group_functions();
    antlr4::tree::TerminalNode *ASTERISK();
    Bit_exprContext *bit_expr();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Case_when_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_when_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    Column_nameContext *column_name();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<Simple_exprContext *> simple_expr();
    Simple_exprContext* simple_expr(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    AliasContext *alias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_when_statementContext* case_when_statement();

  class  Column_specContext : public antlr4::ParserRuleContext {
  public:
    Column_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK();
    Column_nameContext *column_name();
    Table_specContext *table_spec();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_specContext* column_spec();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();

  class  Interval_exprContext : public antlr4::ParserRuleContext {
  public:
    Interval_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();
    ExpressionContext *expression();
    Interval_unitContext *interval_unit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_exprContext* interval_expr();

  class  Table_referencesContext : public antlr4::ParserRuleContext {
  public:
    Table_referencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_referenceContext *> table_reference();
    Table_referenceContext* table_reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_referencesContext* table_references();

  class  Table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_atomContext *> table_atom();
    Table_atomContext* table_atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> JOIN();
    antlr4::tree::TerminalNode* JOIN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OUTER();
    antlr4::tree::TerminalNode* OUTER(size_t i);
    std::vector<Join_conditionContext *> join_condition();
    Join_conditionContext* join_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CROSS();
    antlr4::tree::TerminalNode* CROSS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INNER();
    antlr4::tree::TerminalNode* INNER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT();
    antlr4::tree::TerminalNode* LEFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT();
    antlr4::tree::TerminalNode* RIGHT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FULL();
    antlr4::tree::TerminalNode* FULL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_referenceContext* table_reference();

  class  Table_atomContext : public antlr4::ParserRuleContext {
  public:
    Table_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_specContext *table_spec();
    std::vector<AliasContext *> alias();
    AliasContext* alias(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *RPAREN();
    Where_clauseContext *where_clause();
    Groupby_clauseContext *groupby_clause();
    Having_clauseContext *having_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_atomContext* table_atom();

  class  Join_conditionContext : public antlr4::ParserRuleContext {
  public:
    Join_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_conditionContext* join_condition();

  class  Index_hint_listContext : public antlr4::ParserRuleContext {
  public:
    Index_hint_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Index_hintContext *> index_hint();
    Index_hintContext* index_hint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_hint_listContext* index_hint_list();

  class  Index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_optionsContext* index_options();

  class  Index_hintContext : public antlr4::ParserRuleContext {
  public:
    Index_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    Index_optionsContext *index_options();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Index_listContext *index_list();
    antlr4::tree::TerminalNode *IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_hintContext* index_hint();

  class  Index_listContext : public antlr4::ParserRuleContext {
  public:
    Index_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Index_nameContext *> index_name();
    Index_nameContext* index_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_listContext* index_list();

  class  Partition_clauseContext : public antlr4::ParserRuleContext {
  public:
    Partition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LPAREN();
    Partition_namesContext *partition_names();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_clauseContext* partition_clause();

  class  Partition_namesContext : public antlr4::ParserRuleContext {
  public:
    Partition_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Partition_nameContext *> partition_name();
    Partition_nameContext* partition_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_namesContext* partition_names();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *UNIQUEJOIN();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *FUNCTIONS();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *MSCK();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INPATH();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *CNULL();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *PROTECTION();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *UNIONTYPE();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *SORTED();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *DELIMITED();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *ESCAPED();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *ITEMS();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *FILEFORMAT();
    antlr4::tree::TerminalNode *SEQUENCEFILE();
    antlr4::tree::TerminalNode *TEXTFILE();
    antlr4::tree::TerminalNode *RCFILE();
    antlr4::tree::TerminalNode *ORCFILE();
    antlr4::tree::TerminalNode *INPUTFORMAT();
    antlr4::tree::TerminalNode *OUTPUTFORMAT();
    antlr4::tree::TerminalNode *INPUTDRIVER();
    antlr4::tree::TerminalNode *OUTPUTDRIVER();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *BUCKET();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *MACRO();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *PRETTY();
    antlr4::tree::TerminalNode *DEPENDENCY();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *SERDE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *UNSET();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    antlr4::tree::TerminalNode *IDXPROPERTIES();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *MAPJOIN();
    antlr4::tree::TerminalNode *STREAMTABLE();
    antlr4::tree::TerminalNode *CLUSTERSTATUS();
    antlr4::tree::TerminalNode *UTC();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *SSL();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *RECORDREADER();
    antlr4::tree::TerminalNode *RECORDWRITER();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *TOUCH();
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *UNARCHIVE();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *CONCATENATE();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SKEWED();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *DIRECTORIES();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *MORE();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *NOSCAN();
    antlr4::tree::TerminalNode *PARTIALSCAN();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *POW();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *TO_DATE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *FROM_UNIXTIME();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *DATE_ADD();
    antlr4::tree::TerminalNode *DATE_SUB();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ALIASES();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *TO_CHAR();
    antlr4::tree::TerminalNode *DATE_FORMAT();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *IFNULL();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NOT_EQ();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *SET_VAR();
    antlr4::tree::TerminalNode *SHIFT_LEFT();
    antlr4::tree::TerminalNode *SHIFT_RIGHT();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *CONV();
    antlr4::tree::TerminalNode *VERSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  Delimited_statementContext : public antlr4::ParserRuleContext {
  public:
    Delimited_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Regex_Escaped_Unicode();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delimited_statementContext* delimited_statement();

  class  Integer_typesContext : public antlr4::ParserRuleContext {
  public:
    Integer_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *DECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_typesContext* integer_types();

  class  Relational_opContext : public antlr4::ParserRuleContext {
  public:
    Relational_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LTH();
    antlr4::tree::TerminalNode *GTH();
    antlr4::tree::TerminalNode *NOT_EQ();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *GET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_opContext* relational_op();

  class  Cast_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Cast_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    std::vector<antlr4::tree::TerminalNode *> INTEGER_NUM();
    antlr4::tree::TerminalNode* INTEGER_NUM(size_t i);
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *UNSIGNED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cast_data_typeContext* cast_data_type();

  class  Interval_unitContext : public antlr4::ParserRuleContext {
  public:
    Interval_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *YEAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_unitContext* interval_unit();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_literalContext* string_literal();

  class  Number_literalContext : public antlr4::ParserRuleContext {
  public:
    Number_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_NUM();
    antlr4::tree::TerminalNode *REAL_NUMBER();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_literalContext* number_literal();

  class  Hex_literalContext : public antlr4::ParserRuleContext {
  public:
    Hex_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hex_literalContext* hex_literal();

  class  Boolean_literalContext : public antlr4::ParserRuleContext {
  public:
    Boolean_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_literalContext* boolean_literal();

  class  Literal_valueContext : public antlr4::ParserRuleContext {
  public:
    Literal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_literalContext *string_literal();
    Number_literalContext *number_literal();
    Hex_literalContext *hex_literal();
    Boolean_literalContext *boolean_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Literal_valueContext* literal_value();

  class  FunctionListContext : public antlr4::ParserRuleContext {
  public:
    FunctionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Number_functionsContext *number_functions();
    Char_functionsContext *char_functions();
    Time_functionsContext *time_functions();
    Other_functionsContext *other_functions();
    Group_functionsContext *group_functions();
    Sensitive_functionsContext *sensitive_functions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionListContext* functionList();

  class  Number_functionsContext : public antlr4::ParserRuleContext {
  public:
    Number_functionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *POW();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *TAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_functionsContext* number_functions();

  class  Char_functionsContext : public antlr4::ParserRuleContext {
  public:
    Char_functionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *TO_CHAR();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *CONV();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *UNHEX();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *LOCATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Char_functionsContext* char_functions();

  class  Time_functionsContext : public antlr4::ParserRuleContext {
  public:
    Time_functionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO_DATE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *FROM_UNIXTIME();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *DATE_ADD();
    antlr4::tree::TerminalNode *DATE_SUB();
    antlr4::tree::TerminalNode *DATE_FORMAT();
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *SYSDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_functionsContext* time_functions();

  class  Other_functionsContext : public antlr4::ParserRuleContext {
  public:
    Other_functionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *IFNULL();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *ISNULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Other_functionsContext* other_functions();

  class  Group_functionsContext : public antlr4::ParserRuleContext {
  public:
    Group_functionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_functionsContext* group_functions();

  class  Sensitive_functionsContext : public antlr4::ParserRuleContext {
  public:
    Sensitive_functionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SLEEP();
    antlr4::tree::TerminalNode *BENCHMARK();
    antlr4::tree::TerminalNode *UPDATEXML();
    antlr4::tree::TerminalNode *EXTRACTVALUE();
    antlr4::tree::TerminalNode *LOAD_FILE();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *ANALYSE();
    antlr4::tree::TerminalNode *MD5();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *ORD();
    antlr4::tree::TerminalNode *INSTR();
    antlr4::tree::TerminalNode *CONCAT_WS();
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *VERSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sensitive_functionsContext* sensitive_functions();

  class  Schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_nameContext* schema_name();

  class  Database_nameContext : public antlr4::ParserRuleContext {
  public:
    Database_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_nameContext* database_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  Engine_nameContext : public antlr4::ParserRuleContext {
  public:
    Engine_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Engine_nameContext* engine_name();

  class  Column_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_nameContext* column_name();

  class  Value_nameContext : public antlr4::ParserRuleContext {
  public:
    Value_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_nameContext* value_name();

  class  View_nameContext : public antlr4::ParserRuleContext {
  public:
    View_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_nameContext* view_name();

  class  Parser_nameContext : public antlr4::ParserRuleContext {
  public:
    Parser_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parser_nameContext* parser_name();

  class  Index_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_nameContext* index_name();

  class  Partition_nameContext : public antlr4::ParserRuleContext {
  public:
    Partition_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_nameContext* partition_name();

  class  Partition_logical_nameContext : public antlr4::ParserRuleContext {
  public:
    Partition_logical_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_logical_nameContext* partition_logical_name();

  class  Constraintbol_nameContext : public antlr4::ParserRuleContext {
  public:
    Constraintbol_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraintbol_nameContext* constraintbol_name();

  class  Foreign_keybol_nameContext : public antlr4::ParserRuleContext {
  public:
    Foreign_keybol_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_keybol_nameContext* foreign_keybol_name();

  class  Collation_nameContext : public antlr4::ParserRuleContext {
  public:
    Collation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collation_nameContext* collation_name();

  class  Event_nameContext : public antlr4::ParserRuleContext {
  public:
    Event_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_nameContext* event_name();

  class  User_nameContext : public antlr4::ParserRuleContext {
  public:
    User_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_nameContext* user_name();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  Procedure_nameContext : public antlr4::ParserRuleContext {
  public:
    Procedure_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_nameContext* procedure_name();

  class  Server_nameContext : public antlr4::ParserRuleContext {
  public:
    Server_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_nameContext* server_name();

  class  Wrapper_nameContext : public antlr4::ParserRuleContext {
  public:
    Wrapper_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wrapper_nameContext* wrapper_name();

  class  AliasContext : public antlr4::ParserRuleContext {
  public:
    AliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alias_nameContext *alias_name();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasContext* alias();

  class  PasswordContext : public antlr4::ParserRuleContext {
  public:
    PasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PasswordContext* password();

  class  Server_alias_nameContext : public antlr4::ParserRuleContext {
  public:
    Server_alias_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_alias_nameContext* server_alias_name();

  class  Role_nameContext : public antlr4::ParserRuleContext {
  public:
    Role_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_nameContext* role_name();

  class  Group_nameContext : public antlr4::ParserRuleContext {
  public:
    Group_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_nameContext* group_name();

  class  Principal_nameContext : public antlr4::ParserRuleContext {
  public:
    Principal_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Principal_nameContext* principal_name();

  class  Any_nameContext : public antlr4::ParserRuleContext {
  public:
    Any_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *SYSTEM_VAR();
    Number_literalContext *number_literal();
    String_literalContext *string_literal();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *HEX_DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_nameContext* any_name();

  class  Alias_nameContext : public antlr4::ParserRuleContext {
  public:
    Alias_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    KeywordContext *keyword();
    String_literalContext *string_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_nameContext* alias_name();

  class  Priv_typeContext : public antlr4::ParserRuleContext {
  public:
    Priv_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Priv_typeContext* priv_type();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

