


// Generated from sqliParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sqliParserVisitor.h"


/**
 * This class provides an empty implementation of sqliParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  sqliParserBaseVisitor : public sqliParserVisitor {
public:

  virtual antlrcpp::Any visitRoot_statement(sqliParser::Root_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_manipulation_statements(sqliParser::Data_manipulation_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_definition_statements(sqliParser::Data_definition_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_statement(sqliParser::Create_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_statement_spec(sqliParser::Create_statement_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_statement(sqliParser::Drop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege_alter_statement(sqliParser::Privilege_alter_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_statement(sqliParser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_statement_subquery(sqliParser::Select_statement_subqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_expression(sqliParser::Select_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_expression_subquery(sqliParser::Select_expression_subqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhere_clause(sqliParser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupby_clause(sqliParser::Groupby_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupby_item(sqliParser::Groupby_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHaving_clause(sqliParser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderby_clause(sqliParser::Orderby_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderby_item(sqliParser::Orderby_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderby_column_spec(sqliParser::Orderby_column_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderby_column_name(sqliParser::Orderby_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderby_any_name(sqliParser::Orderby_any_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimit_clause(sqliParser::Limit_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOffset(sqliParser::OffsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRow_count(sqliParser::Row_countContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list(sqliParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_list(sqliParser::Column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(sqliParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_spec(sqliParser::Table_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDisplayed_column(sqliParser::Displayed_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement(sqliParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_header(sqliParser::Insert_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_list_clause(sqliParser::Value_list_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_list(sqliParser::Value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_value_list(sqliParser::Column_value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_columns_cluase(sqliParser::Set_columns_cluaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_column_cluase(sqliParser::Set_column_cluaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_statement(sqliParser::Create_database_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_statement(sqliParser::Create_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_spec(sqliParser::Create_table_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_definition(sqliParser::Create_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_definition(sqliParser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_or_notnull(sqliParser::Null_or_notnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_data_type_header(sqliParser::Column_data_type_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_column_name(sqliParser::Index_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLength(sqliParser::LengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarchar_length(sqliParser::Varchar_lengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_length(sqliParser::Binary_lengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_statement(sqliParser::Alter_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_specification(sqliParser::Alter_table_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_column_names(sqliParser::Index_column_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_type(sqliParser::Index_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_option(sqliParser::Index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_definitions(sqliParser::Column_definitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRename_table_statement(sqliParser::Rename_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_database_statement(sqliParser::Drop_database_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_table_statement(sqliParser::Drop_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_view_statement(sqliParser::Drop_view_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_user_statement(sqliParser::Drop_user_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view_statement(sqliParser::Create_view_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view_body(sqliParser::Create_view_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_view_statement(sqliParser::Alter_view_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_user_statement(sqliParser::Create_user_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_privilege_statement(sqliParser::Grant_privilege_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrincipal_specification(sqliParser::Principal_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke_privilege_statement(sqliParser::Revoke_privilege_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_event_statement(sqliParser::Show_event_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_specification(sqliParser::Show_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_event_statement(sqliParser::Set_event_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_event_statement(sqliParser::Use_event_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServer_event_statement(sqliParser::Server_event_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_statements(sqliParser::Update_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statements(sqliParser::Delete_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(sqliParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExp_factor1(sqliParser::Exp_factor1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_primary(sqliParser::Bool_primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate_quote(sqliParser::Predicate_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate_exp_quote(sqliParser::Predicate_exp_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBit_expr_quote(sqliParser::Bit_expr_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor1_quote(sqliParser::Factor1_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor2_quote(sqliParser::Factor2_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_expr_quote(sqliParser::Simple_expr_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_spec_quote(sqliParser::Column_spec_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name_quote(sqliParser::Column_name_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAny_name_quote(sqliParser::Any_name_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate(sqliParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate_exp(sqliParser::Predicate_expContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBit_expr(sqliParser::Bit_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor1(sqliParser::Factor1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor2(sqliParser::Factor2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_expr(sqliParser::Simple_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(sqliParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_when_statement(sqliParser::Case_when_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_spec(sqliParser::Column_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_list(sqliParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expr(sqliParser::Interval_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_references(sqliParser::Table_referencesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_reference(sqliParser::Table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_atom(sqliParser::Table_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_condition(sqliParser::Join_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_hint_list(sqliParser::Index_hint_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_options(sqliParser::Index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_hint(sqliParser::Index_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_list(sqliParser::Index_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_clause(sqliParser::Partition_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_names(sqliParser::Partition_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(sqliParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelimited_statement(sqliParser::Delimited_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger_types(sqliParser::Integer_typesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_op(sqliParser::Relational_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCast_data_type(sqliParser::Cast_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_unit(sqliParser::Interval_unitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_literal(sqliParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber_literal(sqliParser::Number_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHex_literal(sqliParser::Hex_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean_literal(sqliParser::Boolean_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral_value(sqliParser::Literal_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionList(sqliParser::FunctionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber_functions(sqliParser::Number_functionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar_functions(sqliParser::Char_functionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTime_functions(sqliParser::Time_functionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOther_functions(sqliParser::Other_functionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_functions(sqliParser::Group_functionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSensitive_functions(sqliParser::Sensitive_functionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchema_name(sqliParser::Schema_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase_name(sqliParser::Database_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(sqliParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEngine_name(sqliParser::Engine_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name(sqliParser::Column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_name(sqliParser::Value_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitView_name(sqliParser::View_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParser_name(sqliParser::Parser_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_name(sqliParser::Index_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_name(sqliParser::Partition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_logical_name(sqliParser::Partition_logical_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintbol_name(sqliParser::Constraintbol_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeign_keybol_name(sqliParser::Foreign_keybol_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollation_name(sqliParser::Collation_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent_name(sqliParser::Event_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_name(sqliParser::User_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name(sqliParser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_name(sqliParser::Procedure_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServer_name(sqliParser::Server_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrapper_name(sqliParser::Wrapper_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlias(sqliParser::AliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPassword(sqliParser::PasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServer_alias_name(sqliParser::Server_alias_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRole_name(sqliParser::Role_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_name(sqliParser::Group_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrincipal_name(sqliParser::Principal_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAny_name(sqliParser::Any_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlias_name(sqliParser::Alias_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPriv_type(sqliParser::Priv_typeContext *ctx) override {
    return visitChildren(ctx);
  }


};

