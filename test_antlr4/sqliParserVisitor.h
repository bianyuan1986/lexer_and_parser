


// Generated from sqliParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sqliParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by sqliParser.
 */
class  sqliParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by sqliParser.
   */
    virtual antlrcpp::Any visitRoot_statement(sqliParser::Root_statementContext *context) = 0;

    virtual antlrcpp::Any visitData_manipulation_statements(sqliParser::Data_manipulation_statementsContext *context) = 0;

    virtual antlrcpp::Any visitData_definition_statements(sqliParser::Data_definition_statementsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_statement(sqliParser::Create_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_statement_spec(sqliParser::Create_statement_specContext *context) = 0;

    virtual antlrcpp::Any visitDrop_statement(sqliParser::Drop_statementContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege_alter_statement(sqliParser::Privilege_alter_statementContext *context) = 0;

    virtual antlrcpp::Any visitSelect_statement(sqliParser::Select_statementContext *context) = 0;

    virtual antlrcpp::Any visitSelect_statement_subquery(sqliParser::Select_statement_subqueryContext *context) = 0;

    virtual antlrcpp::Any visitSelect_expression(sqliParser::Select_expressionContext *context) = 0;

    virtual antlrcpp::Any visitSelect_expression_subquery(sqliParser::Select_expression_subqueryContext *context) = 0;

    virtual antlrcpp::Any visitWhere_clause(sqliParser::Where_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupby_clause(sqliParser::Groupby_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupby_item(sqliParser::Groupby_itemContext *context) = 0;

    virtual antlrcpp::Any visitHaving_clause(sqliParser::Having_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrderby_clause(sqliParser::Orderby_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrderby_item(sqliParser::Orderby_itemContext *context) = 0;

    virtual antlrcpp::Any visitOrderby_column_spec(sqliParser::Orderby_column_specContext *context) = 0;

    virtual antlrcpp::Any visitOrderby_column_name(sqliParser::Orderby_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitOrderby_any_name(sqliParser::Orderby_any_nameContext *context) = 0;

    virtual antlrcpp::Any visitLimit_clause(sqliParser::Limit_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOffset(sqliParser::OffsetContext *context) = 0;

    virtual antlrcpp::Any visitRow_count(sqliParser::Row_countContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list(sqliParser::Select_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_list(sqliParser::Column_listContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(sqliParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitTable_spec(sqliParser::Table_specContext *context) = 0;

    virtual antlrcpp::Any visitDisplayed_column(sqliParser::Displayed_columnContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement(sqliParser::Insert_statementContext *context) = 0;

    virtual antlrcpp::Any visitInsert_header(sqliParser::Insert_headerContext *context) = 0;

    virtual antlrcpp::Any visitValue_list_clause(sqliParser::Value_list_clauseContext *context) = 0;

    virtual antlrcpp::Any visitValue_list(sqliParser::Value_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_value_list(sqliParser::Column_value_listContext *context) = 0;

    virtual antlrcpp::Any visitSet_columns_cluase(sqliParser::Set_columns_cluaseContext *context) = 0;

    virtual antlrcpp::Any visitSet_column_cluase(sqliParser::Set_column_cluaseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database_statement(sqliParser::Create_database_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_statement(sqliParser::Create_table_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_spec(sqliParser::Create_table_specContext *context) = 0;

    virtual antlrcpp::Any visitCreate_definition(sqliParser::Create_definitionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_definition(sqliParser::Column_definitionContext *context) = 0;

    virtual antlrcpp::Any visitNull_or_notnull(sqliParser::Null_or_notnullContext *context) = 0;

    virtual antlrcpp::Any visitColumn_data_type_header(sqliParser::Column_data_type_headerContext *context) = 0;

    virtual antlrcpp::Any visitIndex_column_name(sqliParser::Index_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitLength(sqliParser::LengthContext *context) = 0;

    virtual antlrcpp::Any visitVarchar_length(sqliParser::Varchar_lengthContext *context) = 0;

    virtual antlrcpp::Any visitBinary_length(sqliParser::Binary_lengthContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_statement(sqliParser::Alter_table_statementContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_specification(sqliParser::Alter_table_specificationContext *context) = 0;

    virtual antlrcpp::Any visitIndex_column_names(sqliParser::Index_column_namesContext *context) = 0;

    virtual antlrcpp::Any visitIndex_type(sqliParser::Index_typeContext *context) = 0;

    virtual antlrcpp::Any visitIndex_option(sqliParser::Index_optionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_definitions(sqliParser::Column_definitionsContext *context) = 0;

    virtual antlrcpp::Any visitRename_table_statement(sqliParser::Rename_table_statementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_database_statement(sqliParser::Drop_database_statementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table_statement(sqliParser::Drop_table_statementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_view_statement(sqliParser::Drop_view_statementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_user_statement(sqliParser::Drop_user_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view_statement(sqliParser::Create_view_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view_body(sqliParser::Create_view_bodyContext *context) = 0;

    virtual antlrcpp::Any visitAlter_view_statement(sqliParser::Alter_view_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_user_statement(sqliParser::Create_user_statementContext *context) = 0;

    virtual antlrcpp::Any visitGrant_privilege_statement(sqliParser::Grant_privilege_statementContext *context) = 0;

    virtual antlrcpp::Any visitPrincipal_specification(sqliParser::Principal_specificationContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_privilege_statement(sqliParser::Revoke_privilege_statementContext *context) = 0;

    virtual antlrcpp::Any visitShow_event_statement(sqliParser::Show_event_statementContext *context) = 0;

    virtual antlrcpp::Any visitShow_specification(sqliParser::Show_specificationContext *context) = 0;

    virtual antlrcpp::Any visitSet_event_statement(sqliParser::Set_event_statementContext *context) = 0;

    virtual antlrcpp::Any visitUse_event_statement(sqliParser::Use_event_statementContext *context) = 0;

    virtual antlrcpp::Any visitServer_event_statement(sqliParser::Server_event_statementContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_statements(sqliParser::Update_statementsContext *context) = 0;

    virtual antlrcpp::Any visitDelete_statements(sqliParser::Delete_statementsContext *context) = 0;

    virtual antlrcpp::Any visitExpression(sqliParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExp_factor1(sqliParser::Exp_factor1Context *context) = 0;

    virtual antlrcpp::Any visitBool_primary(sqliParser::Bool_primaryContext *context) = 0;

    virtual antlrcpp::Any visitPredicate_quote(sqliParser::Predicate_quoteContext *context) = 0;

    virtual antlrcpp::Any visitPredicate_exp_quote(sqliParser::Predicate_exp_quoteContext *context) = 0;

    virtual antlrcpp::Any visitBit_expr_quote(sqliParser::Bit_expr_quoteContext *context) = 0;

    virtual antlrcpp::Any visitFactor1_quote(sqliParser::Factor1_quoteContext *context) = 0;

    virtual antlrcpp::Any visitFactor2_quote(sqliParser::Factor2_quoteContext *context) = 0;

    virtual antlrcpp::Any visitSimple_expr_quote(sqliParser::Simple_expr_quoteContext *context) = 0;

    virtual antlrcpp::Any visitColumn_spec_quote(sqliParser::Column_spec_quoteContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name_quote(sqliParser::Column_name_quoteContext *context) = 0;

    virtual antlrcpp::Any visitAny_name_quote(sqliParser::Any_name_quoteContext *context) = 0;

    virtual antlrcpp::Any visitPredicate(sqliParser::PredicateContext *context) = 0;

    virtual antlrcpp::Any visitPredicate_exp(sqliParser::Predicate_expContext *context) = 0;

    virtual antlrcpp::Any visitBit_expr(sqliParser::Bit_exprContext *context) = 0;

    virtual antlrcpp::Any visitFactor1(sqliParser::Factor1Context *context) = 0;

    virtual antlrcpp::Any visitFactor2(sqliParser::Factor2Context *context) = 0;

    virtual antlrcpp::Any visitSimple_expr(sqliParser::Simple_exprContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(sqliParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitCase_when_statement(sqliParser::Case_when_statementContext *context) = 0;

    virtual antlrcpp::Any visitColumn_spec(sqliParser::Column_specContext *context) = 0;

    virtual antlrcpp::Any visitExpression_list(sqliParser::Expression_listContext *context) = 0;

    virtual antlrcpp::Any visitInterval_expr(sqliParser::Interval_exprContext *context) = 0;

    virtual antlrcpp::Any visitTable_references(sqliParser::Table_referencesContext *context) = 0;

    virtual antlrcpp::Any visitTable_reference(sqliParser::Table_referenceContext *context) = 0;

    virtual antlrcpp::Any visitTable_atom(sqliParser::Table_atomContext *context) = 0;

    virtual antlrcpp::Any visitJoin_condition(sqliParser::Join_conditionContext *context) = 0;

    virtual antlrcpp::Any visitIndex_hint_list(sqliParser::Index_hint_listContext *context) = 0;

    virtual antlrcpp::Any visitIndex_options(sqliParser::Index_optionsContext *context) = 0;

    virtual antlrcpp::Any visitIndex_hint(sqliParser::Index_hintContext *context) = 0;

    virtual antlrcpp::Any visitIndex_list(sqliParser::Index_listContext *context) = 0;

    virtual antlrcpp::Any visitPartition_clause(sqliParser::Partition_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPartition_names(sqliParser::Partition_namesContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(sqliParser::KeywordContext *context) = 0;

    virtual antlrcpp::Any visitDelimited_statement(sqliParser::Delimited_statementContext *context) = 0;

    virtual antlrcpp::Any visitInteger_types(sqliParser::Integer_typesContext *context) = 0;

    virtual antlrcpp::Any visitRelational_op(sqliParser::Relational_opContext *context) = 0;

    virtual antlrcpp::Any visitCast_data_type(sqliParser::Cast_data_typeContext *context) = 0;

    virtual antlrcpp::Any visitInterval_unit(sqliParser::Interval_unitContext *context) = 0;

    virtual antlrcpp::Any visitString_literal(sqliParser::String_literalContext *context) = 0;

    virtual antlrcpp::Any visitNumber_literal(sqliParser::Number_literalContext *context) = 0;

    virtual antlrcpp::Any visitHex_literal(sqliParser::Hex_literalContext *context) = 0;

    virtual antlrcpp::Any visitBoolean_literal(sqliParser::Boolean_literalContext *context) = 0;

    virtual antlrcpp::Any visitLiteral_value(sqliParser::Literal_valueContext *context) = 0;

    virtual antlrcpp::Any visitFunctionList(sqliParser::FunctionListContext *context) = 0;

    virtual antlrcpp::Any visitNumber_functions(sqliParser::Number_functionsContext *context) = 0;

    virtual antlrcpp::Any visitChar_functions(sqliParser::Char_functionsContext *context) = 0;

    virtual antlrcpp::Any visitTime_functions(sqliParser::Time_functionsContext *context) = 0;

    virtual antlrcpp::Any visitOther_functions(sqliParser::Other_functionsContext *context) = 0;

    virtual antlrcpp::Any visitGroup_functions(sqliParser::Group_functionsContext *context) = 0;

    virtual antlrcpp::Any visitSensitive_functions(sqliParser::Sensitive_functionsContext *context) = 0;

    virtual antlrcpp::Any visitSchema_name(sqliParser::Schema_nameContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_name(sqliParser::Database_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(sqliParser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitEngine_name(sqliParser::Engine_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name(sqliParser::Column_nameContext *context) = 0;

    virtual antlrcpp::Any visitValue_name(sqliParser::Value_nameContext *context) = 0;

    virtual antlrcpp::Any visitView_name(sqliParser::View_nameContext *context) = 0;

    virtual antlrcpp::Any visitParser_name(sqliParser::Parser_nameContext *context) = 0;

    virtual antlrcpp::Any visitIndex_name(sqliParser::Index_nameContext *context) = 0;

    virtual antlrcpp::Any visitPartition_name(sqliParser::Partition_nameContext *context) = 0;

    virtual antlrcpp::Any visitPartition_logical_name(sqliParser::Partition_logical_nameContext *context) = 0;

    virtual antlrcpp::Any visitConstraintbol_name(sqliParser::Constraintbol_nameContext *context) = 0;

    virtual antlrcpp::Any visitForeign_keybol_name(sqliParser::Foreign_keybol_nameContext *context) = 0;

    virtual antlrcpp::Any visitCollation_name(sqliParser::Collation_nameContext *context) = 0;

    virtual antlrcpp::Any visitEvent_name(sqliParser::Event_nameContext *context) = 0;

    virtual antlrcpp::Any visitUser_name(sqliParser::User_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(sqliParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_name(sqliParser::Procedure_nameContext *context) = 0;

    virtual antlrcpp::Any visitServer_name(sqliParser::Server_nameContext *context) = 0;

    virtual antlrcpp::Any visitWrapper_name(sqliParser::Wrapper_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlias(sqliParser::AliasContext *context) = 0;

    virtual antlrcpp::Any visitPassword(sqliParser::PasswordContext *context) = 0;

    virtual antlrcpp::Any visitServer_alias_name(sqliParser::Server_alias_nameContext *context) = 0;

    virtual antlrcpp::Any visitRole_name(sqliParser::Role_nameContext *context) = 0;

    virtual antlrcpp::Any visitGroup_name(sqliParser::Group_nameContext *context) = 0;

    virtual antlrcpp::Any visitPrincipal_name(sqliParser::Principal_nameContext *context) = 0;

    virtual antlrcpp::Any visitAny_name(sqliParser::Any_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlias_name(sqliParser::Alias_nameContext *context) = 0;

    virtual antlrcpp::Any visitPriv_type(sqliParser::Priv_typeContext *context) = 0;


};

