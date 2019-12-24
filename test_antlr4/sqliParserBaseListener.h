


// Generated from sqliParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sqliParserListener.h"


/**
 * This class provides an empty implementation of sqliParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  sqliParserBaseListener : public sqliParserListener {
public:

  virtual void enterRoot_statement(sqliParser::Root_statementContext * /*ctx*/) override { }
  virtual void exitRoot_statement(sqliParser::Root_statementContext * /*ctx*/) override { }

  virtual void enterData_manipulation_statements(sqliParser::Data_manipulation_statementsContext * /*ctx*/) override { }
  virtual void exitData_manipulation_statements(sqliParser::Data_manipulation_statementsContext * /*ctx*/) override { }

  virtual void enterData_definition_statements(sqliParser::Data_definition_statementsContext * /*ctx*/) override { }
  virtual void exitData_definition_statements(sqliParser::Data_definition_statementsContext * /*ctx*/) override { }

  virtual void enterCreate_statement(sqliParser::Create_statementContext * /*ctx*/) override { }
  virtual void exitCreate_statement(sqliParser::Create_statementContext * /*ctx*/) override { }

  virtual void enterCreate_statement_spec(sqliParser::Create_statement_specContext * /*ctx*/) override { }
  virtual void exitCreate_statement_spec(sqliParser::Create_statement_specContext * /*ctx*/) override { }

  virtual void enterDrop_statement(sqliParser::Drop_statementContext * /*ctx*/) override { }
  virtual void exitDrop_statement(sqliParser::Drop_statementContext * /*ctx*/) override { }

  virtual void enterPrivilege_alter_statement(sqliParser::Privilege_alter_statementContext * /*ctx*/) override { }
  virtual void exitPrivilege_alter_statement(sqliParser::Privilege_alter_statementContext * /*ctx*/) override { }

  virtual void enterSelect_statement(sqliParser::Select_statementContext * /*ctx*/) override { }
  virtual void exitSelect_statement(sqliParser::Select_statementContext * /*ctx*/) override { }

  virtual void enterSelect_statement_subquery(sqliParser::Select_statement_subqueryContext * /*ctx*/) override { }
  virtual void exitSelect_statement_subquery(sqliParser::Select_statement_subqueryContext * /*ctx*/) override { }

  virtual void enterSelect_expression(sqliParser::Select_expressionContext * /*ctx*/) override { }
  virtual void exitSelect_expression(sqliParser::Select_expressionContext * /*ctx*/) override { }

  virtual void enterSelect_expression_subquery(sqliParser::Select_expression_subqueryContext * /*ctx*/) override { }
  virtual void exitSelect_expression_subquery(sqliParser::Select_expression_subqueryContext * /*ctx*/) override { }

  virtual void enterWhere_clause(sqliParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(sqliParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterGroupby_clause(sqliParser::Groupby_clauseContext * /*ctx*/) override { }
  virtual void exitGroupby_clause(sqliParser::Groupby_clauseContext * /*ctx*/) override { }

  virtual void enterGroupby_item(sqliParser::Groupby_itemContext * /*ctx*/) override { }
  virtual void exitGroupby_item(sqliParser::Groupby_itemContext * /*ctx*/) override { }

  virtual void enterHaving_clause(sqliParser::Having_clauseContext * /*ctx*/) override { }
  virtual void exitHaving_clause(sqliParser::Having_clauseContext * /*ctx*/) override { }

  virtual void enterOrderby_clause(sqliParser::Orderby_clauseContext * /*ctx*/) override { }
  virtual void exitOrderby_clause(sqliParser::Orderby_clauseContext * /*ctx*/) override { }

  virtual void enterOrderby_item(sqliParser::Orderby_itemContext * /*ctx*/) override { }
  virtual void exitOrderby_item(sqliParser::Orderby_itemContext * /*ctx*/) override { }

  virtual void enterOrderby_column_spec(sqliParser::Orderby_column_specContext * /*ctx*/) override { }
  virtual void exitOrderby_column_spec(sqliParser::Orderby_column_specContext * /*ctx*/) override { }

  virtual void enterOrderby_column_name(sqliParser::Orderby_column_nameContext * /*ctx*/) override { }
  virtual void exitOrderby_column_name(sqliParser::Orderby_column_nameContext * /*ctx*/) override { }

  virtual void enterOrderby_any_name(sqliParser::Orderby_any_nameContext * /*ctx*/) override { }
  virtual void exitOrderby_any_name(sqliParser::Orderby_any_nameContext * /*ctx*/) override { }

  virtual void enterLimit_clause(sqliParser::Limit_clauseContext * /*ctx*/) override { }
  virtual void exitLimit_clause(sqliParser::Limit_clauseContext * /*ctx*/) override { }

  virtual void enterOffset(sqliParser::OffsetContext * /*ctx*/) override { }
  virtual void exitOffset(sqliParser::OffsetContext * /*ctx*/) override { }

  virtual void enterRow_count(sqliParser::Row_countContext * /*ctx*/) override { }
  virtual void exitRow_count(sqliParser::Row_countContext * /*ctx*/) override { }

  virtual void enterSelect_list(sqliParser::Select_listContext * /*ctx*/) override { }
  virtual void exitSelect_list(sqliParser::Select_listContext * /*ctx*/) override { }

  virtual void enterColumn_list(sqliParser::Column_listContext * /*ctx*/) override { }
  virtual void exitColumn_list(sqliParser::Column_listContext * /*ctx*/) override { }

  virtual void enterSubquery(sqliParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(sqliParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterTable_spec(sqliParser::Table_specContext * /*ctx*/) override { }
  virtual void exitTable_spec(sqliParser::Table_specContext * /*ctx*/) override { }

  virtual void enterDisplayed_column(sqliParser::Displayed_columnContext * /*ctx*/) override { }
  virtual void exitDisplayed_column(sqliParser::Displayed_columnContext * /*ctx*/) override { }

  virtual void enterInsert_statement(sqliParser::Insert_statementContext * /*ctx*/) override { }
  virtual void exitInsert_statement(sqliParser::Insert_statementContext * /*ctx*/) override { }

  virtual void enterInsert_header(sqliParser::Insert_headerContext * /*ctx*/) override { }
  virtual void exitInsert_header(sqliParser::Insert_headerContext * /*ctx*/) override { }

  virtual void enterValue_list_clause(sqliParser::Value_list_clauseContext * /*ctx*/) override { }
  virtual void exitValue_list_clause(sqliParser::Value_list_clauseContext * /*ctx*/) override { }

  virtual void enterValue_list(sqliParser::Value_listContext * /*ctx*/) override { }
  virtual void exitValue_list(sqliParser::Value_listContext * /*ctx*/) override { }

  virtual void enterColumn_value_list(sqliParser::Column_value_listContext * /*ctx*/) override { }
  virtual void exitColumn_value_list(sqliParser::Column_value_listContext * /*ctx*/) override { }

  virtual void enterSet_columns_cluase(sqliParser::Set_columns_cluaseContext * /*ctx*/) override { }
  virtual void exitSet_columns_cluase(sqliParser::Set_columns_cluaseContext * /*ctx*/) override { }

  virtual void enterSet_column_cluase(sqliParser::Set_column_cluaseContext * /*ctx*/) override { }
  virtual void exitSet_column_cluase(sqliParser::Set_column_cluaseContext * /*ctx*/) override { }

  virtual void enterCreate_database_statement(sqliParser::Create_database_statementContext * /*ctx*/) override { }
  virtual void exitCreate_database_statement(sqliParser::Create_database_statementContext * /*ctx*/) override { }

  virtual void enterCreate_table_statement(sqliParser::Create_table_statementContext * /*ctx*/) override { }
  virtual void exitCreate_table_statement(sqliParser::Create_table_statementContext * /*ctx*/) override { }

  virtual void enterCreate_table_spec(sqliParser::Create_table_specContext * /*ctx*/) override { }
  virtual void exitCreate_table_spec(sqliParser::Create_table_specContext * /*ctx*/) override { }

  virtual void enterCreate_definition(sqliParser::Create_definitionContext * /*ctx*/) override { }
  virtual void exitCreate_definition(sqliParser::Create_definitionContext * /*ctx*/) override { }

  virtual void enterColumn_definition(sqliParser::Column_definitionContext * /*ctx*/) override { }
  virtual void exitColumn_definition(sqliParser::Column_definitionContext * /*ctx*/) override { }

  virtual void enterNull_or_notnull(sqliParser::Null_or_notnullContext * /*ctx*/) override { }
  virtual void exitNull_or_notnull(sqliParser::Null_or_notnullContext * /*ctx*/) override { }

  virtual void enterColumn_data_type_header(sqliParser::Column_data_type_headerContext * /*ctx*/) override { }
  virtual void exitColumn_data_type_header(sqliParser::Column_data_type_headerContext * /*ctx*/) override { }

  virtual void enterIndex_column_name(sqliParser::Index_column_nameContext * /*ctx*/) override { }
  virtual void exitIndex_column_name(sqliParser::Index_column_nameContext * /*ctx*/) override { }

  virtual void enterLength(sqliParser::LengthContext * /*ctx*/) override { }
  virtual void exitLength(sqliParser::LengthContext * /*ctx*/) override { }

  virtual void enterVarchar_length(sqliParser::Varchar_lengthContext * /*ctx*/) override { }
  virtual void exitVarchar_length(sqliParser::Varchar_lengthContext * /*ctx*/) override { }

  virtual void enterBinary_length(sqliParser::Binary_lengthContext * /*ctx*/) override { }
  virtual void exitBinary_length(sqliParser::Binary_lengthContext * /*ctx*/) override { }

  virtual void enterAlter_table_statement(sqliParser::Alter_table_statementContext * /*ctx*/) override { }
  virtual void exitAlter_table_statement(sqliParser::Alter_table_statementContext * /*ctx*/) override { }

  virtual void enterAlter_table_specification(sqliParser::Alter_table_specificationContext * /*ctx*/) override { }
  virtual void exitAlter_table_specification(sqliParser::Alter_table_specificationContext * /*ctx*/) override { }

  virtual void enterIndex_column_names(sqliParser::Index_column_namesContext * /*ctx*/) override { }
  virtual void exitIndex_column_names(sqliParser::Index_column_namesContext * /*ctx*/) override { }

  virtual void enterIndex_type(sqliParser::Index_typeContext * /*ctx*/) override { }
  virtual void exitIndex_type(sqliParser::Index_typeContext * /*ctx*/) override { }

  virtual void enterIndex_option(sqliParser::Index_optionContext * /*ctx*/) override { }
  virtual void exitIndex_option(sqliParser::Index_optionContext * /*ctx*/) override { }

  virtual void enterColumn_definitions(sqliParser::Column_definitionsContext * /*ctx*/) override { }
  virtual void exitColumn_definitions(sqliParser::Column_definitionsContext * /*ctx*/) override { }

  virtual void enterRename_table_statement(sqliParser::Rename_table_statementContext * /*ctx*/) override { }
  virtual void exitRename_table_statement(sqliParser::Rename_table_statementContext * /*ctx*/) override { }

  virtual void enterDrop_database_statement(sqliParser::Drop_database_statementContext * /*ctx*/) override { }
  virtual void exitDrop_database_statement(sqliParser::Drop_database_statementContext * /*ctx*/) override { }

  virtual void enterDrop_table_statement(sqliParser::Drop_table_statementContext * /*ctx*/) override { }
  virtual void exitDrop_table_statement(sqliParser::Drop_table_statementContext * /*ctx*/) override { }

  virtual void enterDrop_view_statement(sqliParser::Drop_view_statementContext * /*ctx*/) override { }
  virtual void exitDrop_view_statement(sqliParser::Drop_view_statementContext * /*ctx*/) override { }

  virtual void enterDrop_user_statement(sqliParser::Drop_user_statementContext * /*ctx*/) override { }
  virtual void exitDrop_user_statement(sqliParser::Drop_user_statementContext * /*ctx*/) override { }

  virtual void enterCreate_view_statement(sqliParser::Create_view_statementContext * /*ctx*/) override { }
  virtual void exitCreate_view_statement(sqliParser::Create_view_statementContext * /*ctx*/) override { }

  virtual void enterCreate_view_body(sqliParser::Create_view_bodyContext * /*ctx*/) override { }
  virtual void exitCreate_view_body(sqliParser::Create_view_bodyContext * /*ctx*/) override { }

  virtual void enterAlter_view_statement(sqliParser::Alter_view_statementContext * /*ctx*/) override { }
  virtual void exitAlter_view_statement(sqliParser::Alter_view_statementContext * /*ctx*/) override { }

  virtual void enterCreate_user_statement(sqliParser::Create_user_statementContext * /*ctx*/) override { }
  virtual void exitCreate_user_statement(sqliParser::Create_user_statementContext * /*ctx*/) override { }

  virtual void enterGrant_privilege_statement(sqliParser::Grant_privilege_statementContext * /*ctx*/) override { }
  virtual void exitGrant_privilege_statement(sqliParser::Grant_privilege_statementContext * /*ctx*/) override { }

  virtual void enterPrincipal_specification(sqliParser::Principal_specificationContext * /*ctx*/) override { }
  virtual void exitPrincipal_specification(sqliParser::Principal_specificationContext * /*ctx*/) override { }

  virtual void enterRevoke_privilege_statement(sqliParser::Revoke_privilege_statementContext * /*ctx*/) override { }
  virtual void exitRevoke_privilege_statement(sqliParser::Revoke_privilege_statementContext * /*ctx*/) override { }

  virtual void enterShow_event_statement(sqliParser::Show_event_statementContext * /*ctx*/) override { }
  virtual void exitShow_event_statement(sqliParser::Show_event_statementContext * /*ctx*/) override { }

  virtual void enterShow_specification(sqliParser::Show_specificationContext * /*ctx*/) override { }
  virtual void exitShow_specification(sqliParser::Show_specificationContext * /*ctx*/) override { }

  virtual void enterSet_event_statement(sqliParser::Set_event_statementContext * /*ctx*/) override { }
  virtual void exitSet_event_statement(sqliParser::Set_event_statementContext * /*ctx*/) override { }

  virtual void enterUse_event_statement(sqliParser::Use_event_statementContext * /*ctx*/) override { }
  virtual void exitUse_event_statement(sqliParser::Use_event_statementContext * /*ctx*/) override { }

  virtual void enterServer_event_statement(sqliParser::Server_event_statementContext * /*ctx*/) override { }
  virtual void exitServer_event_statement(sqliParser::Server_event_statementContext * /*ctx*/) override { }

  virtual void enterUpdate_statements(sqliParser::Update_statementsContext * /*ctx*/) override { }
  virtual void exitUpdate_statements(sqliParser::Update_statementsContext * /*ctx*/) override { }

  virtual void enterDelete_statements(sqliParser::Delete_statementsContext * /*ctx*/) override { }
  virtual void exitDelete_statements(sqliParser::Delete_statementsContext * /*ctx*/) override { }

  virtual void enterExpression(sqliParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(sqliParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterExp_factor1(sqliParser::Exp_factor1Context * /*ctx*/) override { }
  virtual void exitExp_factor1(sqliParser::Exp_factor1Context * /*ctx*/) override { }

  virtual void enterBool_primary(sqliParser::Bool_primaryContext * /*ctx*/) override { }
  virtual void exitBool_primary(sqliParser::Bool_primaryContext * /*ctx*/) override { }

  virtual void enterPredicate_quote(sqliParser::Predicate_quoteContext * /*ctx*/) override { }
  virtual void exitPredicate_quote(sqliParser::Predicate_quoteContext * /*ctx*/) override { }

  virtual void enterPredicate_exp_quote(sqliParser::Predicate_exp_quoteContext * /*ctx*/) override { }
  virtual void exitPredicate_exp_quote(sqliParser::Predicate_exp_quoteContext * /*ctx*/) override { }

  virtual void enterBit_expr_quote(sqliParser::Bit_expr_quoteContext * /*ctx*/) override { }
  virtual void exitBit_expr_quote(sqliParser::Bit_expr_quoteContext * /*ctx*/) override { }

  virtual void enterFactor1_quote(sqliParser::Factor1_quoteContext * /*ctx*/) override { }
  virtual void exitFactor1_quote(sqliParser::Factor1_quoteContext * /*ctx*/) override { }

  virtual void enterFactor2_quote(sqliParser::Factor2_quoteContext * /*ctx*/) override { }
  virtual void exitFactor2_quote(sqliParser::Factor2_quoteContext * /*ctx*/) override { }

  virtual void enterSimple_expr_quote(sqliParser::Simple_expr_quoteContext * /*ctx*/) override { }
  virtual void exitSimple_expr_quote(sqliParser::Simple_expr_quoteContext * /*ctx*/) override { }

  virtual void enterColumn_spec_quote(sqliParser::Column_spec_quoteContext * /*ctx*/) override { }
  virtual void exitColumn_spec_quote(sqliParser::Column_spec_quoteContext * /*ctx*/) override { }

  virtual void enterColumn_name_quote(sqliParser::Column_name_quoteContext * /*ctx*/) override { }
  virtual void exitColumn_name_quote(sqliParser::Column_name_quoteContext * /*ctx*/) override { }

  virtual void enterAny_name_quote(sqliParser::Any_name_quoteContext * /*ctx*/) override { }
  virtual void exitAny_name_quote(sqliParser::Any_name_quoteContext * /*ctx*/) override { }

  virtual void enterPredicate(sqliParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(sqliParser::PredicateContext * /*ctx*/) override { }

  virtual void enterPredicate_exp(sqliParser::Predicate_expContext * /*ctx*/) override { }
  virtual void exitPredicate_exp(sqliParser::Predicate_expContext * /*ctx*/) override { }

  virtual void enterBit_expr(sqliParser::Bit_exprContext * /*ctx*/) override { }
  virtual void exitBit_expr(sqliParser::Bit_exprContext * /*ctx*/) override { }

  virtual void enterFactor1(sqliParser::Factor1Context * /*ctx*/) override { }
  virtual void exitFactor1(sqliParser::Factor1Context * /*ctx*/) override { }

  virtual void enterFactor2(sqliParser::Factor2Context * /*ctx*/) override { }
  virtual void exitFactor2(sqliParser::Factor2Context * /*ctx*/) override { }

  virtual void enterSimple_expr(sqliParser::Simple_exprContext * /*ctx*/) override { }
  virtual void exitSimple_expr(sqliParser::Simple_exprContext * /*ctx*/) override { }

  virtual void enterFunction_call(sqliParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(sqliParser::Function_callContext * /*ctx*/) override { }

  virtual void enterCase_when_statement(sqliParser::Case_when_statementContext * /*ctx*/) override { }
  virtual void exitCase_when_statement(sqliParser::Case_when_statementContext * /*ctx*/) override { }

  virtual void enterColumn_spec(sqliParser::Column_specContext * /*ctx*/) override { }
  virtual void exitColumn_spec(sqliParser::Column_specContext * /*ctx*/) override { }

  virtual void enterExpression_list(sqliParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(sqliParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterInterval_expr(sqliParser::Interval_exprContext * /*ctx*/) override { }
  virtual void exitInterval_expr(sqliParser::Interval_exprContext * /*ctx*/) override { }

  virtual void enterTable_references(sqliParser::Table_referencesContext * /*ctx*/) override { }
  virtual void exitTable_references(sqliParser::Table_referencesContext * /*ctx*/) override { }

  virtual void enterTable_reference(sqliParser::Table_referenceContext * /*ctx*/) override { }
  virtual void exitTable_reference(sqliParser::Table_referenceContext * /*ctx*/) override { }

  virtual void enterTable_atom(sqliParser::Table_atomContext * /*ctx*/) override { }
  virtual void exitTable_atom(sqliParser::Table_atomContext * /*ctx*/) override { }

  virtual void enterJoin_condition(sqliParser::Join_conditionContext * /*ctx*/) override { }
  virtual void exitJoin_condition(sqliParser::Join_conditionContext * /*ctx*/) override { }

  virtual void enterIndex_hint_list(sqliParser::Index_hint_listContext * /*ctx*/) override { }
  virtual void exitIndex_hint_list(sqliParser::Index_hint_listContext * /*ctx*/) override { }

  virtual void enterIndex_options(sqliParser::Index_optionsContext * /*ctx*/) override { }
  virtual void exitIndex_options(sqliParser::Index_optionsContext * /*ctx*/) override { }

  virtual void enterIndex_hint(sqliParser::Index_hintContext * /*ctx*/) override { }
  virtual void exitIndex_hint(sqliParser::Index_hintContext * /*ctx*/) override { }

  virtual void enterIndex_list(sqliParser::Index_listContext * /*ctx*/) override { }
  virtual void exitIndex_list(sqliParser::Index_listContext * /*ctx*/) override { }

  virtual void enterPartition_clause(sqliParser::Partition_clauseContext * /*ctx*/) override { }
  virtual void exitPartition_clause(sqliParser::Partition_clauseContext * /*ctx*/) override { }

  virtual void enterPartition_names(sqliParser::Partition_namesContext * /*ctx*/) override { }
  virtual void exitPartition_names(sqliParser::Partition_namesContext * /*ctx*/) override { }

  virtual void enterKeyword(sqliParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(sqliParser::KeywordContext * /*ctx*/) override { }

  virtual void enterDelimited_statement(sqliParser::Delimited_statementContext * /*ctx*/) override { }
  virtual void exitDelimited_statement(sqliParser::Delimited_statementContext * /*ctx*/) override { }

  virtual void enterInteger_types(sqliParser::Integer_typesContext * /*ctx*/) override { }
  virtual void exitInteger_types(sqliParser::Integer_typesContext * /*ctx*/) override { }

  virtual void enterRelational_op(sqliParser::Relational_opContext * /*ctx*/) override { }
  virtual void exitRelational_op(sqliParser::Relational_opContext * /*ctx*/) override { }

  virtual void enterCast_data_type(sqliParser::Cast_data_typeContext * /*ctx*/) override { }
  virtual void exitCast_data_type(sqliParser::Cast_data_typeContext * /*ctx*/) override { }

  virtual void enterInterval_unit(sqliParser::Interval_unitContext * /*ctx*/) override { }
  virtual void exitInterval_unit(sqliParser::Interval_unitContext * /*ctx*/) override { }

  virtual void enterString_literal(sqliParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(sqliParser::String_literalContext * /*ctx*/) override { }

  virtual void enterNumber_literal(sqliParser::Number_literalContext * /*ctx*/) override { }
  virtual void exitNumber_literal(sqliParser::Number_literalContext * /*ctx*/) override { }

  virtual void enterHex_literal(sqliParser::Hex_literalContext * /*ctx*/) override { }
  virtual void exitHex_literal(sqliParser::Hex_literalContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(sqliParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(sqliParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterLiteral_value(sqliParser::Literal_valueContext * /*ctx*/) override { }
  virtual void exitLiteral_value(sqliParser::Literal_valueContext * /*ctx*/) override { }

  virtual void enterFunctionList(sqliParser::FunctionListContext * /*ctx*/) override { }
  virtual void exitFunctionList(sqliParser::FunctionListContext * /*ctx*/) override { }

  virtual void enterNumber_functions(sqliParser::Number_functionsContext * /*ctx*/) override { }
  virtual void exitNumber_functions(sqliParser::Number_functionsContext * /*ctx*/) override { }

  virtual void enterChar_functions(sqliParser::Char_functionsContext * /*ctx*/) override { }
  virtual void exitChar_functions(sqliParser::Char_functionsContext * /*ctx*/) override { }

  virtual void enterTime_functions(sqliParser::Time_functionsContext * /*ctx*/) override { }
  virtual void exitTime_functions(sqliParser::Time_functionsContext * /*ctx*/) override { }

  virtual void enterOther_functions(sqliParser::Other_functionsContext * /*ctx*/) override { }
  virtual void exitOther_functions(sqliParser::Other_functionsContext * /*ctx*/) override { }

  virtual void enterGroup_functions(sqliParser::Group_functionsContext * /*ctx*/) override { }
  virtual void exitGroup_functions(sqliParser::Group_functionsContext * /*ctx*/) override { }

  virtual void enterSensitive_functions(sqliParser::Sensitive_functionsContext * /*ctx*/) override { }
  virtual void exitSensitive_functions(sqliParser::Sensitive_functionsContext * /*ctx*/) override { }

  virtual void enterSchema_name(sqliParser::Schema_nameContext * /*ctx*/) override { }
  virtual void exitSchema_name(sqliParser::Schema_nameContext * /*ctx*/) override { }

  virtual void enterDatabase_name(sqliParser::Database_nameContext * /*ctx*/) override { }
  virtual void exitDatabase_name(sqliParser::Database_nameContext * /*ctx*/) override { }

  virtual void enterTable_name(sqliParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(sqliParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterEngine_name(sqliParser::Engine_nameContext * /*ctx*/) override { }
  virtual void exitEngine_name(sqliParser::Engine_nameContext * /*ctx*/) override { }

  virtual void enterColumn_name(sqliParser::Column_nameContext * /*ctx*/) override { }
  virtual void exitColumn_name(sqliParser::Column_nameContext * /*ctx*/) override { }

  virtual void enterValue_name(sqliParser::Value_nameContext * /*ctx*/) override { }
  virtual void exitValue_name(sqliParser::Value_nameContext * /*ctx*/) override { }

  virtual void enterView_name(sqliParser::View_nameContext * /*ctx*/) override { }
  virtual void exitView_name(sqliParser::View_nameContext * /*ctx*/) override { }

  virtual void enterParser_name(sqliParser::Parser_nameContext * /*ctx*/) override { }
  virtual void exitParser_name(sqliParser::Parser_nameContext * /*ctx*/) override { }

  virtual void enterIndex_name(sqliParser::Index_nameContext * /*ctx*/) override { }
  virtual void exitIndex_name(sqliParser::Index_nameContext * /*ctx*/) override { }

  virtual void enterPartition_name(sqliParser::Partition_nameContext * /*ctx*/) override { }
  virtual void exitPartition_name(sqliParser::Partition_nameContext * /*ctx*/) override { }

  virtual void enterPartition_logical_name(sqliParser::Partition_logical_nameContext * /*ctx*/) override { }
  virtual void exitPartition_logical_name(sqliParser::Partition_logical_nameContext * /*ctx*/) override { }

  virtual void enterConstraintbol_name(sqliParser::Constraintbol_nameContext * /*ctx*/) override { }
  virtual void exitConstraintbol_name(sqliParser::Constraintbol_nameContext * /*ctx*/) override { }

  virtual void enterForeign_keybol_name(sqliParser::Foreign_keybol_nameContext * /*ctx*/) override { }
  virtual void exitForeign_keybol_name(sqliParser::Foreign_keybol_nameContext * /*ctx*/) override { }

  virtual void enterCollation_name(sqliParser::Collation_nameContext * /*ctx*/) override { }
  virtual void exitCollation_name(sqliParser::Collation_nameContext * /*ctx*/) override { }

  virtual void enterEvent_name(sqliParser::Event_nameContext * /*ctx*/) override { }
  virtual void exitEvent_name(sqliParser::Event_nameContext * /*ctx*/) override { }

  virtual void enterUser_name(sqliParser::User_nameContext * /*ctx*/) override { }
  virtual void exitUser_name(sqliParser::User_nameContext * /*ctx*/) override { }

  virtual void enterFunction_name(sqliParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(sqliParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterProcedure_name(sqliParser::Procedure_nameContext * /*ctx*/) override { }
  virtual void exitProcedure_name(sqliParser::Procedure_nameContext * /*ctx*/) override { }

  virtual void enterServer_name(sqliParser::Server_nameContext * /*ctx*/) override { }
  virtual void exitServer_name(sqliParser::Server_nameContext * /*ctx*/) override { }

  virtual void enterWrapper_name(sqliParser::Wrapper_nameContext * /*ctx*/) override { }
  virtual void exitWrapper_name(sqliParser::Wrapper_nameContext * /*ctx*/) override { }

  virtual void enterAlias(sqliParser::AliasContext * /*ctx*/) override { }
  virtual void exitAlias(sqliParser::AliasContext * /*ctx*/) override { }

  virtual void enterPassword(sqliParser::PasswordContext * /*ctx*/) override { }
  virtual void exitPassword(sqliParser::PasswordContext * /*ctx*/) override { }

  virtual void enterServer_alias_name(sqliParser::Server_alias_nameContext * /*ctx*/) override { }
  virtual void exitServer_alias_name(sqliParser::Server_alias_nameContext * /*ctx*/) override { }

  virtual void enterRole_name(sqliParser::Role_nameContext * /*ctx*/) override { }
  virtual void exitRole_name(sqliParser::Role_nameContext * /*ctx*/) override { }

  virtual void enterGroup_name(sqliParser::Group_nameContext * /*ctx*/) override { }
  virtual void exitGroup_name(sqliParser::Group_nameContext * /*ctx*/) override { }

  virtual void enterPrincipal_name(sqliParser::Principal_nameContext * /*ctx*/) override { }
  virtual void exitPrincipal_name(sqliParser::Principal_nameContext * /*ctx*/) override { }

  virtual void enterAny_name(sqliParser::Any_nameContext * /*ctx*/) override { }
  virtual void exitAny_name(sqliParser::Any_nameContext * /*ctx*/) override { }

  virtual void enterAlias_name(sqliParser::Alias_nameContext * /*ctx*/) override { }
  virtual void exitAlias_name(sqliParser::Alias_nameContext * /*ctx*/) override { }

  virtual void enterPriv_type(sqliParser::Priv_typeContext * /*ctx*/) override { }
  virtual void exitPriv_type(sqliParser::Priv_typeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/);
};

