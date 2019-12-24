


// Generated from sqliParser.g4 by ANTLR 4.7.2


#include "sqliParserListener.h"
#include "sqliParserVisitor.h"

#include "sqliParser.h"


using namespace antlrcpp;
using namespace antlr4;

sqliParser::sqliParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

sqliParser::~sqliParser() {
  delete _interpreter;
}

std::string sqliParser::getGrammarFileName() const {
  return "sqliParser.g4";
}

const std::vector<std::string>& sqliParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& sqliParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Root_statementContext ------------------------------------------------------------------

sqliParser::Root_statementContext::Root_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Data_manipulation_statementsContext* sqliParser::Root_statementContext::data_manipulation_statements() {
  return getRuleContext<sqliParser::Data_manipulation_statementsContext>(0);
}

sqliParser::Data_definition_statementsContext* sqliParser::Root_statementContext::data_definition_statements() {
  return getRuleContext<sqliParser::Data_definition_statementsContext>(0);
}

tree::TerminalNode* sqliParser::Root_statementContext::SEMI() {
  return getToken(sqliParser::SEMI, 0);
}


size_t sqliParser::Root_statementContext::getRuleIndex() const {
  return sqliParser::RuleRoot_statement;
}

void sqliParser::Root_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot_statement(this);
}

void sqliParser::Root_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot_statement(this);
}


antlrcpp::Any sqliParser::Root_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitRoot_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Root_statementContext* sqliParser::root_statement() {
  Root_statementContext *_localctx = _tracker.createInstance<Root_statementContext>(_ctx, getState());
  enterRule(_localctx, 0, sqliParser::RuleRoot_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::SELECT:
      case sqliParser::INSERT:
      case sqliParser::DELETE:
      case sqliParser::UPDATE:
      case sqliParser::SERVER:
      case sqliParser::LPAREN: {
        setState(302);
        data_manipulation_statements();
        break;
      }

      case sqliParser::SHOW:
      case sqliParser::CREATE:
      case sqliParser::ALTER:
      case sqliParser::DROP:
      case sqliParser::SET:
      case sqliParser::GRANT:
      case sqliParser::REVOKE:
      case sqliParser::USE:
      case sqliParser::TRUNCATE: {
        setState(303);
        data_definition_statements();
        break;
      }

    default:
      throw NoViableAltException(this);
    }

    setState(306);
    match(sqliParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Data_manipulation_statementsContext ------------------------------------------------------------------

sqliParser::Data_manipulation_statementsContext::Data_manipulation_statementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Select_statementContext* sqliParser::Data_manipulation_statementsContext::select_statement() {
  return getRuleContext<sqliParser::Select_statementContext>(0);
}

sqliParser::Insert_statementContext* sqliParser::Data_manipulation_statementsContext::insert_statement() {
  return getRuleContext<sqliParser::Insert_statementContext>(0);
}

sqliParser::Update_statementsContext* sqliParser::Data_manipulation_statementsContext::update_statements() {
  return getRuleContext<sqliParser::Update_statementsContext>(0);
}

sqliParser::Delete_statementsContext* sqliParser::Data_manipulation_statementsContext::delete_statements() {
  return getRuleContext<sqliParser::Delete_statementsContext>(0);
}

sqliParser::Server_event_statementContext* sqliParser::Data_manipulation_statementsContext::server_event_statement() {
  return getRuleContext<sqliParser::Server_event_statementContext>(0);
}


size_t sqliParser::Data_manipulation_statementsContext::getRuleIndex() const {
  return sqliParser::RuleData_manipulation_statements;
}

void sqliParser::Data_manipulation_statementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterData_manipulation_statements(this);
}

void sqliParser::Data_manipulation_statementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitData_manipulation_statements(this);
}


antlrcpp::Any sqliParser::Data_manipulation_statementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitData_manipulation_statements(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Data_manipulation_statementsContext* sqliParser::data_manipulation_statements() {
  Data_manipulation_statementsContext *_localctx = _tracker.createInstance<Data_manipulation_statementsContext>(_ctx, getState());
  enterRule(_localctx, 2, sqliParser::RuleData_manipulation_statements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(313);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::SELECT:
      case sqliParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(308);
        select_statement();
        break;
      }

      case sqliParser::INSERT: {
        enterOuterAlt(_localctx, 2);
        setState(309);
        insert_statement();
        break;
      }

      case sqliParser::UPDATE: {
        enterOuterAlt(_localctx, 3);
        setState(310);
        update_statements();
        break;
      }

      case sqliParser::DELETE: {
        enterOuterAlt(_localctx, 4);
        setState(311);
        delete_statements();
        break;
      }

      case sqliParser::SERVER: {
        enterOuterAlt(_localctx, 5);
        setState(312);
        server_event_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Data_definition_statementsContext ------------------------------------------------------------------

sqliParser::Data_definition_statementsContext::Data_definition_statementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Create_statementContext* sqliParser::Data_definition_statementsContext::create_statement() {
  return getRuleContext<sqliParser::Create_statementContext>(0);
}

sqliParser::Drop_statementContext* sqliParser::Data_definition_statementsContext::drop_statement() {
  return getRuleContext<sqliParser::Drop_statementContext>(0);
}

sqliParser::Privilege_alter_statementContext* sqliParser::Data_definition_statementsContext::privilege_alter_statement() {
  return getRuleContext<sqliParser::Privilege_alter_statementContext>(0);
}

sqliParser::Show_event_statementContext* sqliParser::Data_definition_statementsContext::show_event_statement() {
  return getRuleContext<sqliParser::Show_event_statementContext>(0);
}

sqliParser::Set_event_statementContext* sqliParser::Data_definition_statementsContext::set_event_statement() {
  return getRuleContext<sqliParser::Set_event_statementContext>(0);
}

sqliParser::Use_event_statementContext* sqliParser::Data_definition_statementsContext::use_event_statement() {
  return getRuleContext<sqliParser::Use_event_statementContext>(0);
}


size_t sqliParser::Data_definition_statementsContext::getRuleIndex() const {
  return sqliParser::RuleData_definition_statements;
}

void sqliParser::Data_definition_statementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterData_definition_statements(this);
}

void sqliParser::Data_definition_statementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitData_definition_statements(this);
}


antlrcpp::Any sqliParser::Data_definition_statementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitData_definition_statements(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Data_definition_statementsContext* sqliParser::data_definition_statements() {
  Data_definition_statementsContext *_localctx = _tracker.createInstance<Data_definition_statementsContext>(_ctx, getState());
  enterRule(_localctx, 4, sqliParser::RuleData_definition_statements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(321);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::CREATE: {
        enterOuterAlt(_localctx, 1);
        setState(315);
        create_statement();
        break;
      }

      case sqliParser::DROP:
      case sqliParser::TRUNCATE: {
        enterOuterAlt(_localctx, 2);
        setState(316);
        drop_statement();
        break;
      }

      case sqliParser::ALTER:
      case sqliParser::GRANT:
      case sqliParser::REVOKE: {
        enterOuterAlt(_localctx, 3);
        setState(317);
        privilege_alter_statement();
        break;
      }

      case sqliParser::SHOW: {
        enterOuterAlt(_localctx, 4);
        setState(318);
        show_event_statement();
        break;
      }

      case sqliParser::SET: {
        enterOuterAlt(_localctx, 5);
        setState(319);
        set_event_statement();
        break;
      }

      case sqliParser::USE: {
        enterOuterAlt(_localctx, 6);
        setState(320);
        use_event_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_statementContext ------------------------------------------------------------------

sqliParser::Create_statementContext::Create_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Create_statementContext::CREATE() {
  return getToken(sqliParser::CREATE, 0);
}

sqliParser::Create_statement_specContext* sqliParser::Create_statementContext::create_statement_spec() {
  return getRuleContext<sqliParser::Create_statement_specContext>(0);
}


size_t sqliParser::Create_statementContext::getRuleIndex() const {
  return sqliParser::RuleCreate_statement;
}

void sqliParser::Create_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_statement(this);
}

void sqliParser::Create_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_statement(this);
}


antlrcpp::Any sqliParser::Create_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_statementContext* sqliParser::create_statement() {
  Create_statementContext *_localctx = _tracker.createInstance<Create_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, sqliParser::RuleCreate_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(sqliParser::CREATE);
    setState(324);
    create_statement_spec();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_statement_specContext ------------------------------------------------------------------

sqliParser::Create_statement_specContext::Create_statement_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Create_database_statementContext* sqliParser::Create_statement_specContext::create_database_statement() {
  return getRuleContext<sqliParser::Create_database_statementContext>(0);
}

sqliParser::Create_user_statementContext* sqliParser::Create_statement_specContext::create_user_statement() {
  return getRuleContext<sqliParser::Create_user_statementContext>(0);
}

sqliParser::Create_table_statementContext* sqliParser::Create_statement_specContext::create_table_statement() {
  return getRuleContext<sqliParser::Create_table_statementContext>(0);
}


size_t sqliParser::Create_statement_specContext::getRuleIndex() const {
  return sqliParser::RuleCreate_statement_spec;
}

void sqliParser::Create_statement_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_statement_spec(this);
}

void sqliParser::Create_statement_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_statement_spec(this);
}


antlrcpp::Any sqliParser::Create_statement_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_statement_spec(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_statement_specContext* sqliParser::create_statement_spec() {
  Create_statement_specContext *_localctx = _tracker.createInstance<Create_statement_specContext>(_ctx, getState());
  enterRule(_localctx, 8, sqliParser::RuleCreate_statement_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(329);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::DATABASE:
      case sqliParser::SCHEMA: {
        enterOuterAlt(_localctx, 1);
        setState(326);
        create_database_statement();
        break;
      }

      case sqliParser::USER: {
        enterOuterAlt(_localctx, 2);
        setState(327);
        create_user_statement();
        break;
      }

      case sqliParser::TABLE:
      case sqliParser::EXTERNAL:
      case sqliParser::TEMPORARY:
      case sqliParser::VIEW: {
        enterOuterAlt(_localctx, 3);
        setState(328);
        create_table_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_statementContext ------------------------------------------------------------------

sqliParser::Drop_statementContext::Drop_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Drop_database_statementContext* sqliParser::Drop_statementContext::drop_database_statement() {
  return getRuleContext<sqliParser::Drop_database_statementContext>(0);
}

sqliParser::Drop_user_statementContext* sqliParser::Drop_statementContext::drop_user_statement() {
  return getRuleContext<sqliParser::Drop_user_statementContext>(0);
}

sqliParser::Drop_table_statementContext* sqliParser::Drop_statementContext::drop_table_statement() {
  return getRuleContext<sqliParser::Drop_table_statementContext>(0);
}


size_t sqliParser::Drop_statementContext::getRuleIndex() const {
  return sqliParser::RuleDrop_statement;
}

void sqliParser::Drop_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDrop_statement(this);
}

void sqliParser::Drop_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDrop_statement(this);
}


antlrcpp::Any sqliParser::Drop_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDrop_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Drop_statementContext* sqliParser::drop_statement() {
  Drop_statementContext *_localctx = _tracker.createInstance<Drop_statementContext>(_ctx, getState());
  enterRule(_localctx, 10, sqliParser::RuleDrop_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(331);
      drop_database_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(332);
      drop_user_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(333);
      drop_table_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Privilege_alter_statementContext ------------------------------------------------------------------

sqliParser::Privilege_alter_statementContext::Privilege_alter_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Grant_privilege_statementContext* sqliParser::Privilege_alter_statementContext::grant_privilege_statement() {
  return getRuleContext<sqliParser::Grant_privilege_statementContext>(0);
}

sqliParser::Revoke_privilege_statementContext* sqliParser::Privilege_alter_statementContext::revoke_privilege_statement() {
  return getRuleContext<sqliParser::Revoke_privilege_statementContext>(0);
}

sqliParser::Alter_table_statementContext* sqliParser::Privilege_alter_statementContext::alter_table_statement() {
  return getRuleContext<sqliParser::Alter_table_statementContext>(0);
}

sqliParser::Alter_view_statementContext* sqliParser::Privilege_alter_statementContext::alter_view_statement() {
  return getRuleContext<sqliParser::Alter_view_statementContext>(0);
}


size_t sqliParser::Privilege_alter_statementContext::getRuleIndex() const {
  return sqliParser::RulePrivilege_alter_statement;
}

void sqliParser::Privilege_alter_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrivilege_alter_statement(this);
}

void sqliParser::Privilege_alter_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrivilege_alter_statement(this);
}


antlrcpp::Any sqliParser::Privilege_alter_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPrivilege_alter_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Privilege_alter_statementContext* sqliParser::privilege_alter_statement() {
  Privilege_alter_statementContext *_localctx = _tracker.createInstance<Privilege_alter_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, sqliParser::RulePrivilege_alter_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(340);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(336);
      grant_privilege_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(337);
      revoke_privilege_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(338);
      alter_table_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(339);
      alter_view_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_statementContext ------------------------------------------------------------------

sqliParser::Select_statementContext::Select_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Select_expressionContext* sqliParser::Select_statementContext::select_expression() {
  return getRuleContext<sqliParser::Select_expressionContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statementContext::LPAREN() {
  return getTokens(sqliParser::LPAREN);
}

tree::TerminalNode* sqliParser::Select_statementContext::LPAREN(size_t i) {
  return getToken(sqliParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statementContext::RPAREN() {
  return getTokens(sqliParser::RPAREN);
}

tree::TerminalNode* sqliParser::Select_statementContext::RPAREN(size_t i) {
  return getToken(sqliParser::RPAREN, i);
}

std::vector<sqliParser::Select_expression_subqueryContext *> sqliParser::Select_statementContext::select_expression_subquery() {
  return getRuleContexts<sqliParser::Select_expression_subqueryContext>();
}

sqliParser::Select_expression_subqueryContext* sqliParser::Select_statementContext::select_expression_subquery(size_t i) {
  return getRuleContext<sqliParser::Select_expression_subqueryContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statementContext::UNION() {
  return getTokens(sqliParser::UNION);
}

tree::TerminalNode* sqliParser::Select_statementContext::UNION(size_t i) {
  return getToken(sqliParser::UNION, i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statementContext::ALL() {
  return getTokens(sqliParser::ALL);
}

tree::TerminalNode* sqliParser::Select_statementContext::ALL(size_t i) {
  return getToken(sqliParser::ALL, i);
}


size_t sqliParser::Select_statementContext::getRuleIndex() const {
  return sqliParser::RuleSelect_statement;
}

void sqliParser::Select_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_statement(this);
}

void sqliParser::Select_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_statement(this);
}


antlrcpp::Any sqliParser::Select_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSelect_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Select_statementContext* sqliParser::select_statement() {
  Select_statementContext *_localctx = _tracker.createInstance<Select_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, sqliParser::RuleSelect_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::LPAREN) {
      setState(342);
      match(sqliParser::LPAREN);
    }
    setState(345);
    select_expression();
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::RPAREN) {
      setState(346);
      match(sqliParser::RPAREN);
    }
    setState(362);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::UNION) {
      setState(349);
      match(sqliParser::UNION);
      setState(351);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::ALL) {
        setState(350);
        match(sqliParser::ALL);
      }
      setState(354);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::LPAREN) {
        setState(353);
        match(sqliParser::LPAREN);
      }
      setState(356);
      select_expression_subquery();
      setState(358);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::RPAREN) {
        setState(357);
        match(sqliParser::RPAREN);
      }
      setState(364);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_statement_subqueryContext ------------------------------------------------------------------

sqliParser::Select_statement_subqueryContext::Select_statement_subqueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Select_expression_subqueryContext *> sqliParser::Select_statement_subqueryContext::select_expression_subquery() {
  return getRuleContexts<sqliParser::Select_expression_subqueryContext>();
}

sqliParser::Select_expression_subqueryContext* sqliParser::Select_statement_subqueryContext::select_expression_subquery(size_t i) {
  return getRuleContext<sqliParser::Select_expression_subqueryContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statement_subqueryContext::LPAREN() {
  return getTokens(sqliParser::LPAREN);
}

tree::TerminalNode* sqliParser::Select_statement_subqueryContext::LPAREN(size_t i) {
  return getToken(sqliParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statement_subqueryContext::RPAREN() {
  return getTokens(sqliParser::RPAREN);
}

tree::TerminalNode* sqliParser::Select_statement_subqueryContext::RPAREN(size_t i) {
  return getToken(sqliParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statement_subqueryContext::UNION() {
  return getTokens(sqliParser::UNION);
}

tree::TerminalNode* sqliParser::Select_statement_subqueryContext::UNION(size_t i) {
  return getToken(sqliParser::UNION, i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_statement_subqueryContext::ALL() {
  return getTokens(sqliParser::ALL);
}

tree::TerminalNode* sqliParser::Select_statement_subqueryContext::ALL(size_t i) {
  return getToken(sqliParser::ALL, i);
}


size_t sqliParser::Select_statement_subqueryContext::getRuleIndex() const {
  return sqliParser::RuleSelect_statement_subquery;
}

void sqliParser::Select_statement_subqueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_statement_subquery(this);
}

void sqliParser::Select_statement_subqueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_statement_subquery(this);
}


antlrcpp::Any sqliParser::Select_statement_subqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSelect_statement_subquery(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Select_statement_subqueryContext* sqliParser::select_statement_subquery() {
  Select_statement_subqueryContext *_localctx = _tracker.createInstance<Select_statement_subqueryContext>(_ctx, getState());
  enterRule(_localctx, 16, sqliParser::RuleSelect_statement_subquery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::LPAREN) {
      setState(365);
      match(sqliParser::LPAREN);
    }
    setState(368);
    select_expression_subquery();
    setState(370);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(369);
      match(sqliParser::RPAREN);
      break;
    }

    }
    setState(385);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(372);
        match(sqliParser::UNION);
        setState(374);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::ALL) {
          setState(373);
          match(sqliParser::ALL);
        }
        setState(377);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(376);
          match(sqliParser::LPAREN);
        }
        setState(379);
        select_expression_subquery();
        setState(381);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(380);
          match(sqliParser::RPAREN);
          break;
        }

        } 
      }
      setState(387);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_expressionContext ------------------------------------------------------------------

sqliParser::Select_expressionContext::Select_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Select_expressionContext::SELECT() {
  return getToken(sqliParser::SELECT, 0);
}

sqliParser::Select_listContext* sqliParser::Select_expressionContext::select_list() {
  return getRuleContext<sqliParser::Select_listContext>(0);
}

tree::TerminalNode* sqliParser::Select_expressionContext::FROM() {
  return getToken(sqliParser::FROM, 0);
}

sqliParser::Table_referencesContext* sqliParser::Select_expressionContext::table_references() {
  return getRuleContext<sqliParser::Table_referencesContext>(0);
}

sqliParser::Where_clauseContext* sqliParser::Select_expressionContext::where_clause() {
  return getRuleContext<sqliParser::Where_clauseContext>(0);
}

sqliParser::Orderby_clauseContext* sqliParser::Select_expressionContext::orderby_clause() {
  return getRuleContext<sqliParser::Orderby_clauseContext>(0);
}

sqliParser::Limit_clauseContext* sqliParser::Select_expressionContext::limit_clause() {
  return getRuleContext<sqliParser::Limit_clauseContext>(0);
}

tree::TerminalNode* sqliParser::Select_expressionContext::ALL() {
  return getToken(sqliParser::ALL, 0);
}

tree::TerminalNode* sqliParser::Select_expressionContext::DISTINCT() {
  return getToken(sqliParser::DISTINCT, 0);
}

sqliParser::Groupby_clauseContext* sqliParser::Select_expressionContext::groupby_clause() {
  return getRuleContext<sqliParser::Groupby_clauseContext>(0);
}

sqliParser::Having_clauseContext* sqliParser::Select_expressionContext::having_clause() {
  return getRuleContext<sqliParser::Having_clauseContext>(0);
}


size_t sqliParser::Select_expressionContext::getRuleIndex() const {
  return sqliParser::RuleSelect_expression;
}

void sqliParser::Select_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_expression(this);
}

void sqliParser::Select_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_expression(this);
}


antlrcpp::Any sqliParser::Select_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSelect_expression(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Select_expressionContext* sqliParser::select_expression() {
  Select_expressionContext *_localctx = _tracker.createInstance<Select_expressionContext>(_ctx, getState());
  enterRule(_localctx, 18, sqliParser::RuleSelect_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(sqliParser::SELECT);
    setState(390);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(389);
      _la = _input->LA(1);
      if (!(_la == sqliParser::ALL

      || _la == sqliParser::DISTINCT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
    setState(392);
    select_list();

    setState(393);
    match(sqliParser::FROM);
    setState(394);
    table_references();
    setState(395);
    where_clause();
    setState(397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::GROUP) {
      setState(396);
      groupby_clause();
    }
    setState(400);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::HAVING) {
      setState(399);
      having_clause();
    }
    setState(403);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::ORDER) {
      setState(402);
      orderby_clause();
    }
    setState(406);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::LIMIT) {
      setState(405);
      limit_clause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_expression_subqueryContext ------------------------------------------------------------------

sqliParser::Select_expression_subqueryContext::Select_expression_subqueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Select_expression_subqueryContext::SELECT() {
  return getToken(sqliParser::SELECT, 0);
}

sqliParser::Select_listContext* sqliParser::Select_expression_subqueryContext::select_list() {
  return getRuleContext<sqliParser::Select_listContext>(0);
}

tree::TerminalNode* sqliParser::Select_expression_subqueryContext::FROM() {
  return getToken(sqliParser::FROM, 0);
}

sqliParser::Table_referencesContext* sqliParser::Select_expression_subqueryContext::table_references() {
  return getRuleContext<sqliParser::Table_referencesContext>(0);
}

sqliParser::Orderby_clauseContext* sqliParser::Select_expression_subqueryContext::orderby_clause() {
  return getRuleContext<sqliParser::Orderby_clauseContext>(0);
}

sqliParser::Limit_clauseContext* sqliParser::Select_expression_subqueryContext::limit_clause() {
  return getRuleContext<sqliParser::Limit_clauseContext>(0);
}

tree::TerminalNode* sqliParser::Select_expression_subqueryContext::ALL() {
  return getToken(sqliParser::ALL, 0);
}

tree::TerminalNode* sqliParser::Select_expression_subqueryContext::DISTINCT() {
  return getToken(sqliParser::DISTINCT, 0);
}

sqliParser::Where_clauseContext* sqliParser::Select_expression_subqueryContext::where_clause() {
  return getRuleContext<sqliParser::Where_clauseContext>(0);
}

sqliParser::Groupby_clauseContext* sqliParser::Select_expression_subqueryContext::groupby_clause() {
  return getRuleContext<sqliParser::Groupby_clauseContext>(0);
}

sqliParser::Having_clauseContext* sqliParser::Select_expression_subqueryContext::having_clause() {
  return getRuleContext<sqliParser::Having_clauseContext>(0);
}


size_t sqliParser::Select_expression_subqueryContext::getRuleIndex() const {
  return sqliParser::RuleSelect_expression_subquery;
}

void sqliParser::Select_expression_subqueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_expression_subquery(this);
}

void sqliParser::Select_expression_subqueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_expression_subquery(this);
}


antlrcpp::Any sqliParser::Select_expression_subqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSelect_expression_subquery(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Select_expression_subqueryContext* sqliParser::select_expression_subquery() {
  Select_expression_subqueryContext *_localctx = _tracker.createInstance<Select_expression_subqueryContext>(_ctx, getState());
  enterRule(_localctx, 20, sqliParser::RuleSelect_expression_subquery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    match(sqliParser::SELECT);
    setState(410);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(409);
      _la = _input->LA(1);
      if (!(_la == sqliParser::ALL

      || _la == sqliParser::DISTINCT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
    setState(412);
    select_list();
    setState(424);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(413);
      match(sqliParser::FROM);
      setState(414);
      table_references();
      setState(416);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(415);
        where_clause();
        break;
      }

      }
      setState(419);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(418);
        groupby_clause();
        break;
      }

      }
      setState(422);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(421);
        having_clause();
        break;
      }

      }
      break;
    }

    }
    setState(427);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(426);
      orderby_clause();
      break;
    }

    }
    setState(430);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(429);
      limit_clause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Where_clauseContext ------------------------------------------------------------------

sqliParser::Where_clauseContext::Where_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Where_clauseContext::WHERE() {
  return getToken(sqliParser::WHERE, 0);
}

sqliParser::ExpressionContext* sqliParser::Where_clauseContext::expression() {
  return getRuleContext<sqliParser::ExpressionContext>(0);
}


size_t sqliParser::Where_clauseContext::getRuleIndex() const {
  return sqliParser::RuleWhere_clause;
}

void sqliParser::Where_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhere_clause(this);
}

void sqliParser::Where_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhere_clause(this);
}


antlrcpp::Any sqliParser::Where_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitWhere_clause(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Where_clauseContext* sqliParser::where_clause() {
  Where_clauseContext *_localctx = _tracker.createInstance<Where_clauseContext>(_ctx, getState());
  enterRule(_localctx, 22, sqliParser::RuleWhere_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    match(sqliParser::WHERE);
    setState(433);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Groupby_clauseContext ------------------------------------------------------------------

sqliParser::Groupby_clauseContext::Groupby_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Groupby_clauseContext::GROUP() {
  return getToken(sqliParser::GROUP, 0);
}

tree::TerminalNode* sqliParser::Groupby_clauseContext::BY() {
  return getToken(sqliParser::BY, 0);
}

std::vector<sqliParser::Groupby_itemContext *> sqliParser::Groupby_clauseContext::groupby_item() {
  return getRuleContexts<sqliParser::Groupby_itemContext>();
}

sqliParser::Groupby_itemContext* sqliParser::Groupby_clauseContext::groupby_item(size_t i) {
  return getRuleContext<sqliParser::Groupby_itemContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Groupby_clauseContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Groupby_clauseContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Groupby_clauseContext::getRuleIndex() const {
  return sqliParser::RuleGroupby_clause;
}

void sqliParser::Groupby_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupby_clause(this);
}

void sqliParser::Groupby_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupby_clause(this);
}


antlrcpp::Any sqliParser::Groupby_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitGroupby_clause(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Groupby_clauseContext* sqliParser::groupby_clause() {
  Groupby_clauseContext *_localctx = _tracker.createInstance<Groupby_clauseContext>(_ctx, getState());
  enterRule(_localctx, 24, sqliParser::RuleGroupby_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(sqliParser::GROUP);
    setState(436);
    match(sqliParser::BY);
    setState(437);
    groupby_item();
    setState(442);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(438);
        match(sqliParser::COMMA);
        setState(439);
        groupby_item(); 
      }
      setState(444);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Groupby_itemContext ------------------------------------------------------------------

sqliParser::Groupby_itemContext::Groupby_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_specContext* sqliParser::Groupby_itemContext::column_spec() {
  return getRuleContext<sqliParser::Column_specContext>(0);
}

sqliParser::Simple_exprContext* sqliParser::Groupby_itemContext::simple_expr() {
  return getRuleContext<sqliParser::Simple_exprContext>(0);
}


size_t sqliParser::Groupby_itemContext::getRuleIndex() const {
  return sqliParser::RuleGroupby_item;
}

void sqliParser::Groupby_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupby_item(this);
}

void sqliParser::Groupby_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupby_item(this);
}


antlrcpp::Any sqliParser::Groupby_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitGroupby_item(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Groupby_itemContext* sqliParser::groupby_item() {
  Groupby_itemContext *_localctx = _tracker.createInstance<Groupby_itemContext>(_ctx, getState());
  enterRule(_localctx, 26, sqliParser::RuleGroupby_item);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(445);
      column_spec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(446);
      simple_expr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Having_clauseContext ------------------------------------------------------------------

sqliParser::Having_clauseContext::Having_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Having_clauseContext::HAVING() {
  return getToken(sqliParser::HAVING, 0);
}

sqliParser::ExpressionContext* sqliParser::Having_clauseContext::expression() {
  return getRuleContext<sqliParser::ExpressionContext>(0);
}


size_t sqliParser::Having_clauseContext::getRuleIndex() const {
  return sqliParser::RuleHaving_clause;
}

void sqliParser::Having_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHaving_clause(this);
}

void sqliParser::Having_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHaving_clause(this);
}


antlrcpp::Any sqliParser::Having_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitHaving_clause(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Having_clauseContext* sqliParser::having_clause() {
  Having_clauseContext *_localctx = _tracker.createInstance<Having_clauseContext>(_ctx, getState());
  enterRule(_localctx, 28, sqliParser::RuleHaving_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(sqliParser::HAVING);
    setState(450);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Orderby_clauseContext ------------------------------------------------------------------

sqliParser::Orderby_clauseContext::Orderby_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Orderby_clauseContext::ORDER() {
  return getToken(sqliParser::ORDER, 0);
}

tree::TerminalNode* sqliParser::Orderby_clauseContext::BY() {
  return getToken(sqliParser::BY, 0);
}

std::vector<sqliParser::Orderby_itemContext *> sqliParser::Orderby_clauseContext::orderby_item() {
  return getRuleContexts<sqliParser::Orderby_itemContext>();
}

sqliParser::Orderby_itemContext* sqliParser::Orderby_clauseContext::orderby_item(size_t i) {
  return getRuleContext<sqliParser::Orderby_itemContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Orderby_clauseContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Orderby_clauseContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Orderby_clauseContext::getRuleIndex() const {
  return sqliParser::RuleOrderby_clause;
}

void sqliParser::Orderby_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderby_clause(this);
}

void sqliParser::Orderby_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderby_clause(this);
}


antlrcpp::Any sqliParser::Orderby_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitOrderby_clause(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Orderby_clauseContext* sqliParser::orderby_clause() {
  Orderby_clauseContext *_localctx = _tracker.createInstance<Orderby_clauseContext>(_ctx, getState());
  enterRule(_localctx, 30, sqliParser::RuleOrderby_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(sqliParser::ORDER);
    setState(453);
    match(sqliParser::BY);
    setState(454);
    orderby_item();
    setState(459);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(455);
        match(sqliParser::COMMA);
        setState(456);
        orderby_item(); 
      }
      setState(461);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Orderby_itemContext ------------------------------------------------------------------

sqliParser::Orderby_itemContext::Orderby_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Orderby_column_specContext* sqliParser::Orderby_itemContext::orderby_column_spec() {
  return getRuleContext<sqliParser::Orderby_column_specContext>(0);
}

tree::TerminalNode* sqliParser::Orderby_itemContext::ASC() {
  return getToken(sqliParser::ASC, 0);
}

tree::TerminalNode* sqliParser::Orderby_itemContext::DESC() {
  return getToken(sqliParser::DESC, 0);
}


size_t sqliParser::Orderby_itemContext::getRuleIndex() const {
  return sqliParser::RuleOrderby_item;
}

void sqliParser::Orderby_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderby_item(this);
}

void sqliParser::Orderby_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderby_item(this);
}


antlrcpp::Any sqliParser::Orderby_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitOrderby_item(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Orderby_itemContext* sqliParser::orderby_item() {
  Orderby_itemContext *_localctx = _tracker.createInstance<Orderby_itemContext>(_ctx, getState());
  enterRule(_localctx, 32, sqliParser::RuleOrderby_item);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    orderby_column_spec();
    setState(464);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(463);
      _la = _input->LA(1);
      if (!(_la == sqliParser::ASC

      || _la == sqliParser::DESC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Orderby_column_specContext ------------------------------------------------------------------

sqliParser::Orderby_column_specContext::Orderby_column_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Orderby_column_nameContext* sqliParser::Orderby_column_specContext::orderby_column_name() {
  return getRuleContext<sqliParser::Orderby_column_nameContext>(0);
}

sqliParser::Table_specContext* sqliParser::Orderby_column_specContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Orderby_column_specContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}


size_t sqliParser::Orderby_column_specContext::getRuleIndex() const {
  return sqliParser::RuleOrderby_column_spec;
}

void sqliParser::Orderby_column_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderby_column_spec(this);
}

void sqliParser::Orderby_column_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderby_column_spec(this);
}


antlrcpp::Any sqliParser::Orderby_column_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitOrderby_column_spec(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Orderby_column_specContext* sqliParser::orderby_column_spec() {
  Orderby_column_specContext *_localctx = _tracker.createInstance<Orderby_column_specContext>(_ctx, getState());
  enterRule(_localctx, 34, sqliParser::RuleOrderby_column_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(466);
      table_spec();
      setState(467);
      match(sqliParser::DOT);
      break;
    }

    }
    setState(471);
    orderby_column_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Orderby_column_nameContext ------------------------------------------------------------------

sqliParser::Orderby_column_nameContext::Orderby_column_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Orderby_any_nameContext* sqliParser::Orderby_column_nameContext::orderby_any_name() {
  return getRuleContext<sqliParser::Orderby_any_nameContext>(0);
}


size_t sqliParser::Orderby_column_nameContext::getRuleIndex() const {
  return sqliParser::RuleOrderby_column_name;
}

void sqliParser::Orderby_column_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderby_column_name(this);
}

void sqliParser::Orderby_column_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderby_column_name(this);
}


antlrcpp::Any sqliParser::Orderby_column_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitOrderby_column_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Orderby_column_nameContext* sqliParser::orderby_column_name() {
  Orderby_column_nameContext *_localctx = _tracker.createInstance<Orderby_column_nameContext>(_ctx, getState());
  enterRule(_localctx, 36, sqliParser::RuleOrderby_column_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    orderby_any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Orderby_any_nameContext ------------------------------------------------------------------

sqliParser::Orderby_any_nameContext::Orderby_any_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Orderby_any_nameContext::ID() {
  return getToken(sqliParser::ID, 0);
}

sqliParser::Number_literalContext* sqliParser::Orderby_any_nameContext::number_literal() {
  return getRuleContext<sqliParser::Number_literalContext>(0);
}

sqliParser::Function_callContext* sqliParser::Orderby_any_nameContext::function_call() {
  return getRuleContext<sqliParser::Function_callContext>(0);
}

sqliParser::SubqueryContext* sqliParser::Orderby_any_nameContext::subquery() {
  return getRuleContext<sqliParser::SubqueryContext>(0);
}


size_t sqliParser::Orderby_any_nameContext::getRuleIndex() const {
  return sqliParser::RuleOrderby_any_name;
}

void sqliParser::Orderby_any_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderby_any_name(this);
}

void sqliParser::Orderby_any_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderby_any_name(this);
}


antlrcpp::Any sqliParser::Orderby_any_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitOrderby_any_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Orderby_any_nameContext* sqliParser::orderby_any_name() {
  Orderby_any_nameContext *_localctx = _tracker.createInstance<Orderby_any_nameContext>(_ctx, getState());
  enterRule(_localctx, 38, sqliParser::RuleOrderby_any_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(479);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(475);
        match(sqliParser::ID);
        break;
      }

      case sqliParser::PLUS:
      case sqliParser::MINUS:
      case sqliParser::INTEGER_NUM:
      case sqliParser::REAL_NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(476);
        number_literal();
        break;
      }

      case sqliParser::IF:
      case sqliParser::CAST:
      case sqliParser::DATABASE:
      case sqliParser::SCHEMA:
      case sqliParser::PROCEDURE:
      case sqliParser::USER:
      case sqliParser::CHAR:
      case sqliParser::ABS:
      case sqliParser::ACOS:
      case sqliParser::ASIN:
      case sqliParser::ATAN:
      case sqliParser::CEIL:
      case sqliParser::COS:
      case sqliParser::COT:
      case sqliParser::EXP:
      case sqliParser::FLOOR:
      case sqliParser::LN:
      case sqliParser::POW:
      case sqliParser::RAND:
      case sqliParser::ROUND:
      case sqliParser::SIN:
      case sqliParser::SQRT:
      case sqliParser::TAN:
      case sqliParser::LCASE:
      case sqliParser::LOWER:
      case sqliParser::LTRIM:
      case sqliParser::RTRIM:
      case sqliParser::CONCAT:
      case sqliParser::SUBSTR:
      case sqliParser::TRIM:
      case sqliParser::UCASE:
      case sqliParser::UPPER:
      case sqliParser::TO_DATE:
      case sqliParser::DAY:
      case sqliParser::HOUR:
      case sqliParser::MINUTE:
      case sqliParser::MONTH:
      case sqliParser::SECOND:
      case sqliParser::FROM_UNIXTIME:
      case sqliParser::YEAR:
      case sqliParser::DATE_ADD:
      case sqliParser::DATE_SUB:
      case sqliParser::AVG:
      case sqliParser::COUNT:
      case sqliParser::MAX:
      case sqliParser::MIN:
      case sqliParser::SUM:
      case sqliParser::COALESCE:
      case sqliParser::TO_CHAR:
      case sqliParser::DATE_FORMAT:
      case sqliParser::LENGTH:
      case sqliParser::REVERSE:
      case sqliParser::IFNULL:
      case sqliParser::HEX:
      case sqliParser::CONV:
      case sqliParser::SLEEP:
      case sqliParser::BENCHMARK:
      case sqliParser::UPDATEXML:
      case sqliParser::EXTRACTVALUE:
      case sqliParser::LOAD_FILE:
      case sqliParser::SYSTEM_USER:
      case sqliParser::SESSION_USER:
      case sqliParser::CURRENT_USER:
      case sqliParser::MD5:
      case sqliParser::ASCII:
      case sqliParser::MID:
      case sqliParser::VERSION:
      case sqliParser::NOW:
      case sqliParser::SYSDATE:
      case sqliParser::ORD:
      case sqliParser::INSTR:
      case sqliParser::CONCAT_WS:
      case sqliParser::GROUP_CONCAT:
      case sqliParser::UNHEX:
      case sqliParser::SUBSTRING:
      case sqliParser::LOCATE:
      case sqliParser::NULLIF:
      case sqliParser::ISNULL:
      case sqliParser::UNQUOTE: {
        enterOuterAlt(_localctx, 3);
        setState(477);
        function_call();
        break;
      }

      case sqliParser::SELECT:
      case sqliParser::LPAREN: {
        enterOuterAlt(_localctx, 4);
        setState(478);
        subquery();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Limit_clauseContext ------------------------------------------------------------------

sqliParser::Limit_clauseContext::Limit_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Limit_clauseContext::LIMIT() {
  return getToken(sqliParser::LIMIT, 0);
}

sqliParser::Row_countContext* sqliParser::Limit_clauseContext::row_count() {
  return getRuleContext<sqliParser::Row_countContext>(0);
}

sqliParser::Function_callContext* sqliParser::Limit_clauseContext::function_call() {
  return getRuleContext<sqliParser::Function_callContext>(0);
}

sqliParser::OffsetContext* sqliParser::Limit_clauseContext::offset() {
  return getRuleContext<sqliParser::OffsetContext>(0);
}

tree::TerminalNode* sqliParser::Limit_clauseContext::COMMA() {
  return getToken(sqliParser::COMMA, 0);
}


size_t sqliParser::Limit_clauseContext::getRuleIndex() const {
  return sqliParser::RuleLimit_clause;
}

void sqliParser::Limit_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimit_clause(this);
}

void sqliParser::Limit_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimit_clause(this);
}


antlrcpp::Any sqliParser::Limit_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitLimit_clause(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Limit_clauseContext* sqliParser::limit_clause() {
  Limit_clauseContext *_localctx = _tracker.createInstance<Limit_clauseContext>(_ctx, getState());
  enterRule(_localctx, 40, sqliParser::RuleLimit_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    match(sqliParser::LIMIT);

    setState(485);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(482);
      offset();
      setState(483);
      match(sqliParser::COMMA);
      break;
    }

    }
    setState(487);
    row_count();
    setState(490);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(489);
      function_call();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OffsetContext ------------------------------------------------------------------

sqliParser::OffsetContext::OffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::OffsetContext::INTEGER_NUM() {
  return getToken(sqliParser::INTEGER_NUM, 0);
}


size_t sqliParser::OffsetContext::getRuleIndex() const {
  return sqliParser::RuleOffset;
}

void sqliParser::OffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOffset(this);
}

void sqliParser::OffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOffset(this);
}


antlrcpp::Any sqliParser::OffsetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitOffset(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::OffsetContext* sqliParser::offset() {
  OffsetContext *_localctx = _tracker.createInstance<OffsetContext>(_ctx, getState());
  enterRule(_localctx, 42, sqliParser::RuleOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    match(sqliParser::INTEGER_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Row_countContext ------------------------------------------------------------------

sqliParser::Row_countContext::Row_countContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Row_countContext::INTEGER_NUM() {
  return getToken(sqliParser::INTEGER_NUM, 0);
}


size_t sqliParser::Row_countContext::getRuleIndex() const {
  return sqliParser::RuleRow_count;
}

void sqliParser::Row_countContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRow_count(this);
}

void sqliParser::Row_countContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRow_count(this);
}


antlrcpp::Any sqliParser::Row_countContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitRow_count(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Row_countContext* sqliParser::row_count() {
  Row_countContext *_localctx = _tracker.createInstance<Row_countContext>(_ctx, getState());
  enterRule(_localctx, 44, sqliParser::RuleRow_count);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    match(sqliParser::INTEGER_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_listContext ------------------------------------------------------------------

sqliParser::Select_listContext::Select_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Displayed_columnContext *> sqliParser::Select_listContext::displayed_column() {
  return getRuleContexts<sqliParser::Displayed_columnContext>();
}

sqliParser::Displayed_columnContext* sqliParser::Select_listContext::displayed_column(size_t i) {
  return getRuleContext<sqliParser::Displayed_columnContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Select_listContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Select_listContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Select_listContext::getRuleIndex() const {
  return sqliParser::RuleSelect_list;
}

void sqliParser::Select_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_list(this);
}

void sqliParser::Select_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_list(this);
}


antlrcpp::Any sqliParser::Select_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSelect_list(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Select_listContext* sqliParser::select_list() {
  Select_listContext *_localctx = _tracker.createInstance<Select_listContext>(_ctx, getState());
  enterRule(_localctx, 46, sqliParser::RuleSelect_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(496);
    displayed_column();
    setState(501);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(497);
        match(sqliParser::COMMA);
        setState(498);
        displayed_column(); 
      }
      setState(503);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_listContext ------------------------------------------------------------------

sqliParser::Column_listContext::Column_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Column_listContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

std::vector<sqliParser::Column_specContext *> sqliParser::Column_listContext::column_spec() {
  return getRuleContexts<sqliParser::Column_specContext>();
}

sqliParser::Column_specContext* sqliParser::Column_listContext::column_spec(size_t i) {
  return getRuleContext<sqliParser::Column_specContext>(i);
}

tree::TerminalNode* sqliParser::Column_listContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Column_listContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Column_listContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Column_listContext::getRuleIndex() const {
  return sqliParser::RuleColumn_list;
}

void sqliParser::Column_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_list(this);
}

void sqliParser::Column_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_list(this);
}


antlrcpp::Any sqliParser::Column_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_list(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_listContext* sqliParser::column_list() {
  Column_listContext *_localctx = _tracker.createInstance<Column_listContext>(_ctx, getState());
  enterRule(_localctx, 48, sqliParser::RuleColumn_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(sqliParser::LPAREN);
    setState(505);
    column_spec();
    setState(510);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(506);
      match(sqliParser::COMMA);
      setState(507);
      column_spec();
      setState(512);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(513);
    match(sqliParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubqueryContext ------------------------------------------------------------------

sqliParser::SubqueryContext::SubqueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Select_statement_subqueryContext* sqliParser::SubqueryContext::select_statement_subquery() {
  return getRuleContext<sqliParser::Select_statement_subqueryContext>(0);
}

tree::TerminalNode* sqliParser::SubqueryContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

tree::TerminalNode* sqliParser::SubqueryContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}


size_t sqliParser::SubqueryContext::getRuleIndex() const {
  return sqliParser::RuleSubquery;
}

void sqliParser::SubqueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubquery(this);
}

void sqliParser::SubqueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubquery(this);
}


antlrcpp::Any sqliParser::SubqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSubquery(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::SubqueryContext* sqliParser::subquery() {
  SubqueryContext *_localctx = _tracker.createInstance<SubqueryContext>(_ctx, getState());
  enterRule(_localctx, 50, sqliParser::RuleSubquery);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(515);
      match(sqliParser::LPAREN);
      break;
    }

    }
    setState(518);
    select_statement_subquery();
    setState(520);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(519);
      match(sqliParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_specContext ------------------------------------------------------------------

sqliParser::Table_specContext::Table_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Table_nameContext* sqliParser::Table_specContext::table_name() {
  return getRuleContext<sqliParser::Table_nameContext>(0);
}

sqliParser::Database_nameContext* sqliParser::Table_specContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}

tree::TerminalNode* sqliParser::Table_specContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}


size_t sqliParser::Table_specContext::getRuleIndex() const {
  return sqliParser::RuleTable_spec;
}

void sqliParser::Table_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_spec(this);
}

void sqliParser::Table_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_spec(this);
}


antlrcpp::Any sqliParser::Table_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitTable_spec(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Table_specContext* sqliParser::table_spec() {
  Table_specContext *_localctx = _tracker.createInstance<Table_specContext>(_ctx, getState());
  enterRule(_localctx, 52, sqliParser::RuleTable_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(522);
      database_name();
      setState(523);
      match(sqliParser::DOT);
      break;
    }

    }
    setState(527);
    table_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Displayed_columnContext ------------------------------------------------------------------

sqliParser::Displayed_columnContext::Displayed_columnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Displayed_columnContext::ASTERISK() {
  return getToken(sqliParser::ASTERISK, 0);
}

sqliParser::Column_specContext* sqliParser::Displayed_columnContext::column_spec() {
  return getRuleContext<sqliParser::Column_specContext>(0);
}

sqliParser::AliasContext* sqliParser::Displayed_columnContext::alias() {
  return getRuleContext<sqliParser::AliasContext>(0);
}

sqliParser::ExpressionContext* sqliParser::Displayed_columnContext::expression() {
  return getRuleContext<sqliParser::ExpressionContext>(0);
}


size_t sqliParser::Displayed_columnContext::getRuleIndex() const {
  return sqliParser::RuleDisplayed_column;
}

void sqliParser::Displayed_columnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisplayed_column(this);
}

void sqliParser::Displayed_columnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisplayed_column(this);
}


antlrcpp::Any sqliParser::Displayed_columnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDisplayed_column(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Displayed_columnContext* sqliParser::displayed_column() {
  Displayed_columnContext *_localctx = _tracker.createInstance<Displayed_columnContext>(_ctx, getState());
  enterRule(_localctx, 54, sqliParser::RuleDisplayed_column);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(538);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(529);
      match(sqliParser::ASTERISK);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(530);
      column_spec();
      setState(532);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
      case 1: {
        setState(531);
        alias();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(534);
      expression();
      setState(536);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
      case 1: {
        setState(535);
        alias();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Insert_statementContext ------------------------------------------------------------------

sqliParser::Insert_statementContext::Insert_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Insert_headerContext* sqliParser::Insert_statementContext::insert_header() {
  return getRuleContext<sqliParser::Insert_headerContext>(0);
}

sqliParser::Select_expressionContext* sqliParser::Insert_statementContext::select_expression() {
  return getRuleContext<sqliParser::Select_expressionContext>(0);
}

sqliParser::Value_list_clauseContext* sqliParser::Insert_statementContext::value_list_clause() {
  return getRuleContext<sqliParser::Value_list_clauseContext>(0);
}

sqliParser::Column_listContext* sqliParser::Insert_statementContext::column_list() {
  return getRuleContext<sqliParser::Column_listContext>(0);
}


size_t sqliParser::Insert_statementContext::getRuleIndex() const {
  return sqliParser::RuleInsert_statement;
}

void sqliParser::Insert_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsert_statement(this);
}

void sqliParser::Insert_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsert_statement(this);
}


antlrcpp::Any sqliParser::Insert_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitInsert_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Insert_statementContext* sqliParser::insert_statement() {
  Insert_statementContext *_localctx = _tracker.createInstance<Insert_statementContext>(_ctx, getState());
  enterRule(_localctx, 56, sqliParser::RuleInsert_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    insert_header();
    setState(542);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::LPAREN) {
      setState(541);
      column_list();
    }
    setState(546);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::SELECT: {
        setState(544);
        select_expression();
        break;
      }

      case sqliParser::VALUES:
      case sqliParser::VALUE: {
        setState(545);
        value_list_clause();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Insert_headerContext ------------------------------------------------------------------

sqliParser::Insert_headerContext::Insert_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Insert_headerContext::INSERT() {
  return getToken(sqliParser::INSERT, 0);
}

sqliParser::Table_specContext* sqliParser::Insert_headerContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Insert_headerContext::INTO() {
  return getToken(sqliParser::INTO, 0);
}


size_t sqliParser::Insert_headerContext::getRuleIndex() const {
  return sqliParser::RuleInsert_header;
}

void sqliParser::Insert_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsert_header(this);
}

void sqliParser::Insert_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsert_header(this);
}


antlrcpp::Any sqliParser::Insert_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitInsert_header(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Insert_headerContext* sqliParser::insert_header() {
  Insert_headerContext *_localctx = _tracker.createInstance<Insert_headerContext>(_ctx, getState());
  enterRule(_localctx, 58, sqliParser::RuleInsert_header);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    match(sqliParser::INSERT);
    setState(550);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(549);
      match(sqliParser::INTO);
      break;
    }

    }
    setState(552);
    table_spec();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_list_clauseContext ------------------------------------------------------------------

sqliParser::Value_list_clauseContext::Value_list_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Value_listContext* sqliParser::Value_list_clauseContext::value_list() {
  return getRuleContext<sqliParser::Value_listContext>(0);
}

tree::TerminalNode* sqliParser::Value_list_clauseContext::VALUES() {
  return getToken(sqliParser::VALUES, 0);
}

tree::TerminalNode* sqliParser::Value_list_clauseContext::VALUE() {
  return getToken(sqliParser::VALUE, 0);
}


size_t sqliParser::Value_list_clauseContext::getRuleIndex() const {
  return sqliParser::RuleValue_list_clause;
}

void sqliParser::Value_list_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue_list_clause(this);
}

void sqliParser::Value_list_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue_list_clause(this);
}


antlrcpp::Any sqliParser::Value_list_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitValue_list_clause(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Value_list_clauseContext* sqliParser::value_list_clause() {
  Value_list_clauseContext *_localctx = _tracker.createInstance<Value_list_clauseContext>(_ctx, getState());
  enterRule(_localctx, 60, sqliParser::RuleValue_list_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    _la = _input->LA(1);
    if (!(_la == sqliParser::VALUES

    || _la == sqliParser::VALUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(555);
    value_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_listContext ------------------------------------------------------------------

sqliParser::Value_listContext::Value_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Value_listContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

std::vector<sqliParser::Value_nameContext *> sqliParser::Value_listContext::value_name() {
  return getRuleContexts<sqliParser::Value_nameContext>();
}

sqliParser::Value_nameContext* sqliParser::Value_listContext::value_name(size_t i) {
  return getRuleContext<sqliParser::Value_nameContext>(i);
}

tree::TerminalNode* sqliParser::Value_listContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Value_listContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Value_listContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Value_listContext::getRuleIndex() const {
  return sqliParser::RuleValue_list;
}

void sqliParser::Value_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue_list(this);
}

void sqliParser::Value_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue_list(this);
}


antlrcpp::Any sqliParser::Value_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitValue_list(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Value_listContext* sqliParser::value_list() {
  Value_listContext *_localctx = _tracker.createInstance<Value_listContext>(_ctx, getState());
  enterRule(_localctx, 62, sqliParser::RuleValue_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(sqliParser::LPAREN);
    setState(558);
    value_name();
    setState(563);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(559);
      match(sqliParser::COMMA);
      setState(560);
      value_name();
      setState(565);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(566);
    match(sqliParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_value_listContext ------------------------------------------------------------------

sqliParser::Column_value_listContext::Column_value_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Column_value_listContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

std::vector<sqliParser::Bit_exprContext *> sqliParser::Column_value_listContext::bit_expr() {
  return getRuleContexts<sqliParser::Bit_exprContext>();
}

sqliParser::Bit_exprContext* sqliParser::Column_value_listContext::bit_expr(size_t i) {
  return getRuleContext<sqliParser::Bit_exprContext>(i);
}

tree::TerminalNode* sqliParser::Column_value_listContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Column_value_listContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Column_value_listContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Column_value_listContext::getRuleIndex() const {
  return sqliParser::RuleColumn_value_list;
}

void sqliParser::Column_value_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_value_list(this);
}

void sqliParser::Column_value_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_value_list(this);
}


antlrcpp::Any sqliParser::Column_value_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_value_list(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_value_listContext* sqliParser::column_value_list() {
  Column_value_listContext *_localctx = _tracker.createInstance<Column_value_listContext>(_ctx, getState());
  enterRule(_localctx, 64, sqliParser::RuleColumn_value_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(568);
    match(sqliParser::LPAREN);
    setState(569);
    bit_expr();
    setState(574);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(570);
      match(sqliParser::COMMA);
      setState(571);
      bit_expr();
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(577);
    match(sqliParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_columns_cluaseContext ------------------------------------------------------------------

sqliParser::Set_columns_cluaseContext::Set_columns_cluaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Set_columns_cluaseContext::SET() {
  return getToken(sqliParser::SET, 0);
}

std::vector<sqliParser::Set_column_cluaseContext *> sqliParser::Set_columns_cluaseContext::set_column_cluase() {
  return getRuleContexts<sqliParser::Set_column_cluaseContext>();
}

sqliParser::Set_column_cluaseContext* sqliParser::Set_columns_cluaseContext::set_column_cluase(size_t i) {
  return getRuleContext<sqliParser::Set_column_cluaseContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Set_columns_cluaseContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Set_columns_cluaseContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Set_columns_cluaseContext::getRuleIndex() const {
  return sqliParser::RuleSet_columns_cluase;
}

void sqliParser::Set_columns_cluaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_columns_cluase(this);
}

void sqliParser::Set_columns_cluaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_columns_cluase(this);
}


antlrcpp::Any sqliParser::Set_columns_cluaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSet_columns_cluase(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Set_columns_cluaseContext* sqliParser::set_columns_cluase() {
  Set_columns_cluaseContext *_localctx = _tracker.createInstance<Set_columns_cluaseContext>(_ctx, getState());
  enterRule(_localctx, 66, sqliParser::RuleSet_columns_cluase);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    match(sqliParser::SET);
    setState(580);
    set_column_cluase();
    setState(585);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(581);
      match(sqliParser::COMMA);
      setState(582);
      set_column_cluase();
      setState(587);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_column_cluaseContext ------------------------------------------------------------------

sqliParser::Set_column_cluaseContext::Set_column_cluaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_specContext* sqliParser::Set_column_cluaseContext::column_spec() {
  return getRuleContext<sqliParser::Column_specContext>(0);
}

tree::TerminalNode* sqliParser::Set_column_cluaseContext::EQ() {
  return getToken(sqliParser::EQ, 0);
}

sqliParser::ExpressionContext* sqliParser::Set_column_cluaseContext::expression() {
  return getRuleContext<sqliParser::ExpressionContext>(0);
}


size_t sqliParser::Set_column_cluaseContext::getRuleIndex() const {
  return sqliParser::RuleSet_column_cluase;
}

void sqliParser::Set_column_cluaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_column_cluase(this);
}

void sqliParser::Set_column_cluaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_column_cluase(this);
}


antlrcpp::Any sqliParser::Set_column_cluaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSet_column_cluase(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Set_column_cluaseContext* sqliParser::set_column_cluase() {
  Set_column_cluaseContext *_localctx = _tracker.createInstance<Set_column_cluaseContext>(_ctx, getState());
  enterRule(_localctx, 68, sqliParser::RuleSet_column_cluase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    column_spec();
    setState(589);
    match(sqliParser::EQ);
    setState(590);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_database_statementContext ------------------------------------------------------------------

sqliParser::Create_database_statementContext::Create_database_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Database_nameContext* sqliParser::Create_database_statementContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}

tree::TerminalNode* sqliParser::Create_database_statementContext::DATABASE() {
  return getToken(sqliParser::DATABASE, 0);
}

tree::TerminalNode* sqliParser::Create_database_statementContext::SCHEMA() {
  return getToken(sqliParser::SCHEMA, 0);
}

tree::TerminalNode* sqliParser::Create_database_statementContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::Create_database_statementContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

tree::TerminalNode* sqliParser::Create_database_statementContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}

tree::TerminalNode* sqliParser::Create_database_statementContext::SERVER() {
  return getToken(sqliParser::SERVER, 0);
}

tree::TerminalNode* sqliParser::Create_database_statementContext::ALIAS() {
  return getToken(sqliParser::ALIAS, 0);
}

sqliParser::Server_alias_nameContext* sqliParser::Create_database_statementContext::server_alias_name() {
  return getRuleContext<sqliParser::Server_alias_nameContext>(0);
}


size_t sqliParser::Create_database_statementContext::getRuleIndex() const {
  return sqliParser::RuleCreate_database_statement;
}

void sqliParser::Create_database_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_database_statement(this);
}

void sqliParser::Create_database_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_database_statement(this);
}


antlrcpp::Any sqliParser::Create_database_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_database_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_database_statementContext* sqliParser::create_database_statement() {
  Create_database_statementContext *_localctx = _tracker.createInstance<Create_database_statementContext>(_ctx, getState());
  enterRule(_localctx, 70, sqliParser::RuleCreate_database_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    _la = _input->LA(1);
    if (!(_la == sqliParser::DATABASE

    || _la == sqliParser::SCHEMA)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(596);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      setState(593);
      match(sqliParser::IF);
      setState(594);
      match(sqliParser::NOT);
      setState(595);
      match(sqliParser::EXISTS);
      break;
    }

    }
    setState(598);
    database_name();
    setState(602);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::SERVER) {
      setState(599);
      match(sqliParser::SERVER);
      setState(600);
      match(sqliParser::ALIAS);
      setState(601);
      server_alias_name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_table_statementContext ------------------------------------------------------------------

sqliParser::Create_table_statementContext::Create_table_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Table_specContext* sqliParser::Create_table_statementContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Create_table_statementContext::TABLE() {
  return getToken(sqliParser::TABLE, 0);
}

tree::TerminalNode* sqliParser::Create_table_statementContext::VIEW() {
  return getToken(sqliParser::VIEW, 0);
}

tree::TerminalNode* sqliParser::Create_table_statementContext::TEMPORARY() {
  return getToken(sqliParser::TEMPORARY, 0);
}

tree::TerminalNode* sqliParser::Create_table_statementContext::EXTERNAL() {
  return getToken(sqliParser::EXTERNAL, 0);
}

tree::TerminalNode* sqliParser::Create_table_statementContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::Create_table_statementContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

tree::TerminalNode* sqliParser::Create_table_statementContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}

sqliParser::Create_table_specContext* sqliParser::Create_table_statementContext::create_table_spec() {
  return getRuleContext<sqliParser::Create_table_specContext>(0);
}


size_t sqliParser::Create_table_statementContext::getRuleIndex() const {
  return sqliParser::RuleCreate_table_statement;
}

void sqliParser::Create_table_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_table_statement(this);
}

void sqliParser::Create_table_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_table_statement(this);
}


antlrcpp::Any sqliParser::Create_table_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_table_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_table_statementContext* sqliParser::create_table_statement() {
  Create_table_statementContext *_localctx = _tracker.createInstance<Create_table_statementContext>(_ctx, getState());
  enterRule(_localctx, 72, sqliParser::RuleCreate_table_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::TEMPORARY) {
      setState(604);
      match(sqliParser::TEMPORARY);
    }
    setState(608);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::EXTERNAL) {
      setState(607);
      match(sqliParser::EXTERNAL);
    }
    setState(610);
    _la = _input->LA(1);
    if (!(_la == sqliParser::TABLE || _la == sqliParser::VIEW)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(614);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(611);
      match(sqliParser::IF);
      setState(612);
      match(sqliParser::NOT);
      setState(613);
      match(sqliParser::EXISTS);
      break;
    }

    }
    setState(616);
    table_spec();
    setState(618);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::LIKE

    || _la == sqliParser::AS || _la == sqliParser::LPAREN) {
      setState(617);
      create_table_spec();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_table_specContext ------------------------------------------------------------------

sqliParser::Create_table_specContext::Create_table_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Create_table_specContext::AS() {
  return getToken(sqliParser::AS, 0);
}

sqliParser::Select_statementContext* sqliParser::Create_table_specContext::select_statement() {
  return getRuleContext<sqliParser::Select_statementContext>(0);
}

tree::TerminalNode* sqliParser::Create_table_specContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

std::vector<sqliParser::Create_definitionContext *> sqliParser::Create_table_specContext::create_definition() {
  return getRuleContexts<sqliParser::Create_definitionContext>();
}

sqliParser::Create_definitionContext* sqliParser::Create_table_specContext::create_definition(size_t i) {
  return getRuleContext<sqliParser::Create_definitionContext>(i);
}

tree::TerminalNode* sqliParser::Create_table_specContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Create_table_specContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Create_table_specContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}

tree::TerminalNode* sqliParser::Create_table_specContext::COMMENT() {
  return getToken(sqliParser::COMMENT, 0);
}

tree::TerminalNode* sqliParser::Create_table_specContext::TEXT_STRING() {
  return getToken(sqliParser::TEXT_STRING, 0);
}

tree::TerminalNode* sqliParser::Create_table_specContext::LIKE() {
  return getToken(sqliParser::LIKE, 0);
}

sqliParser::Table_specContext* sqliParser::Create_table_specContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}


size_t sqliParser::Create_table_specContext::getRuleIndex() const {
  return sqliParser::RuleCreate_table_spec;
}

void sqliParser::Create_table_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_table_spec(this);
}

void sqliParser::Create_table_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_table_spec(this);
}


antlrcpp::Any sqliParser::Create_table_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_table_spec(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_table_specContext* sqliParser::create_table_spec() {
  Create_table_specContext *_localctx = _tracker.createInstance<Create_table_specContext>(_ctx, getState());
  enterRule(_localctx, 74, sqliParser::RuleCreate_table_spec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(648);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(620);
      match(sqliParser::AS);
      setState(621);
      select_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(622);
      match(sqliParser::LPAREN);
      setState(623);
      create_definition();
      setState(628);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sqliParser::COMMA) {
        setState(624);
        match(sqliParser::COMMA);
        setState(625);
        create_definition();
        setState(630);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(631);
      match(sqliParser::RPAREN);
      setState(634);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::COMMENT) {
        setState(632);
        match(sqliParser::COMMENT);
        setState(633);
        match(sqliParser::TEXT_STRING);
      }
      setState(638);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::AS) {
        setState(636);
        match(sqliParser::AS);
        setState(637);
        select_statement();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(641);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::LPAREN) {
        setState(640);
        match(sqliParser::LPAREN);
      }
      setState(643);
      match(sqliParser::LIKE);
      setState(644);
      table_spec();
      setState(646);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::RPAREN) {
        setState(645);
        match(sqliParser::RPAREN);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_definitionContext ------------------------------------------------------------------

sqliParser::Create_definitionContext::Create_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_nameContext* sqliParser::Create_definitionContext::column_name() {
  return getRuleContext<sqliParser::Column_nameContext>(0);
}

sqliParser::Column_definitionContext* sqliParser::Create_definitionContext::column_definition() {
  return getRuleContext<sqliParser::Column_definitionContext>(0);
}


size_t sqliParser::Create_definitionContext::getRuleIndex() const {
  return sqliParser::RuleCreate_definition;
}

void sqliParser::Create_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_definition(this);
}

void sqliParser::Create_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_definition(this);
}


antlrcpp::Any sqliParser::Create_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_definition(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_definitionContext* sqliParser::create_definition() {
  Create_definitionContext *_localctx = _tracker.createInstance<Create_definitionContext>(_ctx, getState());
  enterRule(_localctx, 76, sqliParser::RuleCreate_definition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(650);
    column_name();
    setState(651);
    column_definition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_definitionContext ------------------------------------------------------------------

sqliParser::Column_definitionContext::Column_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_data_type_headerContext* sqliParser::Column_definitionContext::column_data_type_header() {
  return getRuleContext<sqliParser::Column_data_type_headerContext>(0);
}

tree::TerminalNode* sqliParser::Column_definitionContext::COMMENT() {
  return getToken(sqliParser::COMMENT, 0);
}

tree::TerminalNode* sqliParser::Column_definitionContext::TEXT_STRING() {
  return getToken(sqliParser::TEXT_STRING, 0);
}


size_t sqliParser::Column_definitionContext::getRuleIndex() const {
  return sqliParser::RuleColumn_definition;
}

void sqliParser::Column_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_definition(this);
}

void sqliParser::Column_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_definition(this);
}


antlrcpp::Any sqliParser::Column_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_definition(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_definitionContext* sqliParser::column_definition() {
  Column_definitionContext *_localctx = _tracker.createInstance<Column_definitionContext>(_ctx, getState());
  enterRule(_localctx, 78, sqliParser::RuleColumn_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(653);
    column_data_type_header();
    setState(656);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::COMMENT) {
      setState(654);
      match(sqliParser::COMMENT);
      setState(655);
      match(sqliParser::TEXT_STRING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Null_or_notnullContext ------------------------------------------------------------------

sqliParser::Null_or_notnullContext::Null_or_notnullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Null_or_notnullContext::CNULL() {
  return getToken(sqliParser::CNULL, 0);
}

tree::TerminalNode* sqliParser::Null_or_notnullContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}


size_t sqliParser::Null_or_notnullContext::getRuleIndex() const {
  return sqliParser::RuleNull_or_notnull;
}

void sqliParser::Null_or_notnullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNull_or_notnull(this);
}

void sqliParser::Null_or_notnullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNull_or_notnull(this);
}


antlrcpp::Any sqliParser::Null_or_notnullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitNull_or_notnull(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Null_or_notnullContext* sqliParser::null_or_notnull() {
  Null_or_notnullContext *_localctx = _tracker.createInstance<Null_or_notnullContext>(_ctx, getState());
  enterRule(_localctx, 80, sqliParser::RuleNull_or_notnull);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(661);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::CNULL: {
        enterOuterAlt(_localctx, 1);
        setState(658);
        match(sqliParser::CNULL);
        break;
      }

      case sqliParser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(659);
        match(sqliParser::NOT);
        setState(660);
        match(sqliParser::CNULL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_data_type_headerContext ------------------------------------------------------------------

sqliParser::Column_data_type_headerContext::Column_data_type_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::TINYINT() {
  return getToken(sqliParser::TINYINT, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

sqliParser::LengthContext* sqliParser::Column_data_type_headerContext::length() {
  return getRuleContext<sqliParser::LengthContext>(0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

sqliParser::Null_or_notnullContext* sqliParser::Column_data_type_headerContext::null_or_notnull() {
  return getRuleContext<sqliParser::Null_or_notnullContext>(0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::SMALLINT() {
  return getToken(sqliParser::SMALLINT, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::INT() {
  return getToken(sqliParser::INT, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::BIGINT() {
  return getToken(sqliParser::BIGINT, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::DOUBLE() {
  return getToken(sqliParser::DOUBLE, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::COMMA() {
  return getToken(sqliParser::COMMA, 0);
}

sqliParser::Number_literalContext* sqliParser::Column_data_type_headerContext::number_literal() {
  return getRuleContext<sqliParser::Number_literalContext>(0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::FLOAT() {
  return getToken(sqliParser::FLOAT, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::DECIMAL() {
  return getToken(sqliParser::DECIMAL, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::DATE() {
  return getToken(sqliParser::DATE, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::TIMESTAMP() {
  return getToken(sqliParser::TIMESTAMP, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::DATETIME() {
  return getToken(sqliParser::DATETIME, 0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::VARCHAR() {
  return getToken(sqliParser::VARCHAR, 0);
}

sqliParser::Varchar_lengthContext* sqliParser::Column_data_type_headerContext::varchar_length() {
  return getRuleContext<sqliParser::Varchar_lengthContext>(0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::BINARY() {
  return getToken(sqliParser::BINARY, 0);
}

sqliParser::Binary_lengthContext* sqliParser::Column_data_type_headerContext::binary_length() {
  return getRuleContext<sqliParser::Binary_lengthContext>(0);
}

tree::TerminalNode* sqliParser::Column_data_type_headerContext::BOOLEAN() {
  return getToken(sqliParser::BOOLEAN, 0);
}


size_t sqliParser::Column_data_type_headerContext::getRuleIndex() const {
  return sqliParser::RuleColumn_data_type_header;
}

void sqliParser::Column_data_type_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_data_type_header(this);
}

void sqliParser::Column_data_type_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_data_type_header(this);
}


antlrcpp::Any sqliParser::Column_data_type_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_data_type_header(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_data_type_headerContext* sqliParser::column_data_type_header() {
  Column_data_type_headerContext *_localctx = _tracker.createInstance<Column_data_type_headerContext>(_ctx, getState());
  enterRule(_localctx, 82, sqliParser::RuleColumn_data_type_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(774);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::TINYINT: {
        enterOuterAlt(_localctx, 1);
        setState(663);
        match(sqliParser::TINYINT);
        setState(668);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(664);
          match(sqliParser::LPAREN);
          setState(665);
          length();
          setState(666);
          match(sqliParser::RPAREN);
        }
        setState(671);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(670);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::SMALLINT: {
        enterOuterAlt(_localctx, 2);
        setState(673);
        match(sqliParser::SMALLINT);
        setState(678);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(674);
          match(sqliParser::LPAREN);
          setState(675);
          length();
          setState(676);
          match(sqliParser::RPAREN);
        }
        setState(681);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(680);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::INT: {
        enterOuterAlt(_localctx, 3);
        setState(683);
        match(sqliParser::INT);
        setState(688);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(684);
          match(sqliParser::LPAREN);
          setState(685);
          length();
          setState(686);
          match(sqliParser::RPAREN);
        }
        setState(691);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(690);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::BIGINT: {
        enterOuterAlt(_localctx, 4);
        setState(693);
        match(sqliParser::BIGINT);
        setState(698);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(694);
          match(sqliParser::LPAREN);
          setState(695);
          length();
          setState(696);
          match(sqliParser::RPAREN);
        }
        setState(701);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(700);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::DOUBLE: {
        enterOuterAlt(_localctx, 5);
        setState(703);
        match(sqliParser::DOUBLE);
        setState(710);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(704);
          match(sqliParser::LPAREN);
          setState(705);
          length();
          setState(706);
          match(sqliParser::COMMA);
          setState(707);
          number_literal();
          setState(708);
          match(sqliParser::RPAREN);
        }
        setState(713);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(712);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::FLOAT: {
        enterOuterAlt(_localctx, 6);
        setState(715);
        match(sqliParser::FLOAT);
        setState(722);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(716);
          match(sqliParser::LPAREN);
          setState(717);
          length();
          setState(718);
          match(sqliParser::COMMA);
          setState(719);
          number_literal();
          setState(720);
          match(sqliParser::RPAREN);
        }
        setState(725);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(724);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::DECIMAL: {
        enterOuterAlt(_localctx, 7);
        setState(727);
        match(sqliParser::DECIMAL);
        setState(736);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(728);
          match(sqliParser::LPAREN);
          setState(729);
          length();
          setState(732);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == sqliParser::COMMA) {
            setState(730);
            match(sqliParser::COMMA);
            setState(731);
            number_literal();
          }
          setState(734);
          match(sqliParser::RPAREN);
        }
        setState(739);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(738);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::DATE: {
        enterOuterAlt(_localctx, 8);
        setState(741);
        match(sqliParser::DATE);
        setState(743);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(742);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::TIMESTAMP: {
        enterOuterAlt(_localctx, 9);
        setState(745);
        match(sqliParser::TIMESTAMP);
        setState(747);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(746);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::DATETIME: {
        enterOuterAlt(_localctx, 10);
        setState(749);
        match(sqliParser::DATETIME);
        setState(751);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(750);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::VARCHAR: {
        enterOuterAlt(_localctx, 11);
        setState(753);
        match(sqliParser::VARCHAR);
        setState(754);
        match(sqliParser::LPAREN);
        setState(755);
        varchar_length();
        setState(756);
        match(sqliParser::RPAREN);
        setState(758);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(757);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::BINARY: {
        enterOuterAlt(_localctx, 12);
        setState(760);
        match(sqliParser::BINARY);
        setState(765);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(761);
          match(sqliParser::LPAREN);
          setState(762);
          binary_length();
          setState(763);
          match(sqliParser::RPAREN);
        }
        setState(768);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(767);
          null_or_notnull();
        }
        break;
      }

      case sqliParser::BOOLEAN: {
        enterOuterAlt(_localctx, 13);
        setState(770);
        match(sqliParser::BOOLEAN);
        setState(772);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT

        || _la == sqliParser::CNULL) {
          setState(771);
          null_or_notnull();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_column_nameContext ------------------------------------------------------------------

sqliParser::Index_column_nameContext::Index_column_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_nameContext* sqliParser::Index_column_nameContext::column_name() {
  return getRuleContext<sqliParser::Column_nameContext>(0);
}

tree::TerminalNode* sqliParser::Index_column_nameContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

tree::TerminalNode* sqliParser::Index_column_nameContext::INTEGER_NUM() {
  return getToken(sqliParser::INTEGER_NUM, 0);
}

tree::TerminalNode* sqliParser::Index_column_nameContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

tree::TerminalNode* sqliParser::Index_column_nameContext::ASC() {
  return getToken(sqliParser::ASC, 0);
}

tree::TerminalNode* sqliParser::Index_column_nameContext::DESC() {
  return getToken(sqliParser::DESC, 0);
}


size_t sqliParser::Index_column_nameContext::getRuleIndex() const {
  return sqliParser::RuleIndex_column_name;
}

void sqliParser::Index_column_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_column_name(this);
}

void sqliParser::Index_column_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_column_name(this);
}


antlrcpp::Any sqliParser::Index_column_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_column_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_column_nameContext* sqliParser::index_column_name() {
  Index_column_nameContext *_localctx = _tracker.createInstance<Index_column_nameContext>(_ctx, getState());
  enterRule(_localctx, 84, sqliParser::RuleIndex_column_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(776);
    column_name();
    setState(780);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::LPAREN) {
      setState(777);
      match(sqliParser::LPAREN);
      setState(778);
      match(sqliParser::INTEGER_NUM);
      setState(779);
      match(sqliParser::RPAREN);
    }
    setState(783);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::ASC

    || _la == sqliParser::DESC) {
      setState(782);
      _la = _input->LA(1);
      if (!(_la == sqliParser::ASC

      || _la == sqliParser::DESC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LengthContext ------------------------------------------------------------------

sqliParser::LengthContext::LengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::LengthContext::INTEGER_NUM() {
  return getToken(sqliParser::INTEGER_NUM, 0);
}


size_t sqliParser::LengthContext::getRuleIndex() const {
  return sqliParser::RuleLength;
}

void sqliParser::LengthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLength(this);
}

void sqliParser::LengthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLength(this);
}


antlrcpp::Any sqliParser::LengthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitLength(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::LengthContext* sqliParser::length() {
  LengthContext *_localctx = _tracker.createInstance<LengthContext>(_ctx, getState());
  enterRule(_localctx, 86, sqliParser::RuleLength);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(785);
    match(sqliParser::INTEGER_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Varchar_lengthContext ------------------------------------------------------------------

sqliParser::Varchar_lengthContext::Varchar_lengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Varchar_lengthContext::INTEGER_NUM() {
  return getToken(sqliParser::INTEGER_NUM, 0);
}


size_t sqliParser::Varchar_lengthContext::getRuleIndex() const {
  return sqliParser::RuleVarchar_length;
}

void sqliParser::Varchar_lengthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarchar_length(this);
}

void sqliParser::Varchar_lengthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarchar_length(this);
}


antlrcpp::Any sqliParser::Varchar_lengthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitVarchar_length(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Varchar_lengthContext* sqliParser::varchar_length() {
  Varchar_lengthContext *_localctx = _tracker.createInstance<Varchar_lengthContext>(_ctx, getState());
  enterRule(_localctx, 88, sqliParser::RuleVarchar_length);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(787);
    match(sqliParser::INTEGER_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_lengthContext ------------------------------------------------------------------

sqliParser::Binary_lengthContext::Binary_lengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Binary_lengthContext::INTEGER_NUM() {
  return getToken(sqliParser::INTEGER_NUM, 0);
}


size_t sqliParser::Binary_lengthContext::getRuleIndex() const {
  return sqliParser::RuleBinary_length;
}

void sqliParser::Binary_lengthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_length(this);
}

void sqliParser::Binary_lengthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_length(this);
}


antlrcpp::Any sqliParser::Binary_lengthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitBinary_length(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Binary_lengthContext* sqliParser::binary_length() {
  Binary_lengthContext *_localctx = _tracker.createInstance<Binary_lengthContext>(_ctx, getState());
  enterRule(_localctx, 90, sqliParser::RuleBinary_length);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(789);
    match(sqliParser::INTEGER_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alter_table_statementContext ------------------------------------------------------------------

sqliParser::Alter_table_statementContext::Alter_table_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Alter_table_statementContext::ALTER() {
  return getToken(sqliParser::ALTER, 0);
}

tree::TerminalNode* sqliParser::Alter_table_statementContext::TABLE() {
  return getToken(sqliParser::TABLE, 0);
}

sqliParser::Table_specContext* sqliParser::Alter_table_statementContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

std::vector<sqliParser::Alter_table_specificationContext *> sqliParser::Alter_table_statementContext::alter_table_specification() {
  return getRuleContexts<sqliParser::Alter_table_specificationContext>();
}

sqliParser::Alter_table_specificationContext* sqliParser::Alter_table_statementContext::alter_table_specification(size_t i) {
  return getRuleContext<sqliParser::Alter_table_specificationContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Alter_table_statementContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Alter_table_statementContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Alter_table_statementContext::getRuleIndex() const {
  return sqliParser::RuleAlter_table_statement;
}

void sqliParser::Alter_table_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter_table_statement(this);
}

void sqliParser::Alter_table_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter_table_statement(this);
}


antlrcpp::Any sqliParser::Alter_table_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitAlter_table_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Alter_table_statementContext* sqliParser::alter_table_statement() {
  Alter_table_statementContext *_localctx = _tracker.createInstance<Alter_table_statementContext>(_ctx, getState());
  enterRule(_localctx, 92, sqliParser::RuleAlter_table_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(791);
    match(sqliParser::ALTER);
    setState(792);
    match(sqliParser::TABLE);
    setState(793);
    table_spec();
    setState(802);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::CHANGE

    || _la == sqliParser::RENAME) {
      setState(794);
      alter_table_specification();
      setState(799);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sqliParser::COMMA) {
        setState(795);
        match(sqliParser::COMMA);
        setState(796);
        alter_table_specification();
        setState(801);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alter_table_specificationContext ------------------------------------------------------------------

sqliParser::Alter_table_specificationContext::Alter_table_specificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Alter_table_specificationContext::RENAME() {
  return getToken(sqliParser::RENAME, 0);
}

tree::TerminalNode* sqliParser::Alter_table_specificationContext::TO() {
  return getToken(sqliParser::TO, 0);
}

sqliParser::Table_specContext* sqliParser::Alter_table_specificationContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Alter_table_specificationContext::CHANGE() {
  return getToken(sqliParser::CHANGE, 0);
}

std::vector<sqliParser::Column_nameContext *> sqliParser::Alter_table_specificationContext::column_name() {
  return getRuleContexts<sqliParser::Column_nameContext>();
}

sqliParser::Column_nameContext* sqliParser::Alter_table_specificationContext::column_name(size_t i) {
  return getRuleContext<sqliParser::Column_nameContext>(i);
}

tree::TerminalNode* sqliParser::Alter_table_specificationContext::COLUMN() {
  return getToken(sqliParser::COLUMN, 0);
}


size_t sqliParser::Alter_table_specificationContext::getRuleIndex() const {
  return sqliParser::RuleAlter_table_specification;
}

void sqliParser::Alter_table_specificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter_table_specification(this);
}

void sqliParser::Alter_table_specificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter_table_specification(this);
}


antlrcpp::Any sqliParser::Alter_table_specificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitAlter_table_specification(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Alter_table_specificationContext* sqliParser::alter_table_specification() {
  Alter_table_specificationContext *_localctx = _tracker.createInstance<Alter_table_specificationContext>(_ctx, getState());
  enterRule(_localctx, 94, sqliParser::RuleAlter_table_specification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(814);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::RENAME: {
        enterOuterAlt(_localctx, 1);
        setState(804);
        match(sqliParser::RENAME);
        setState(805);
        match(sqliParser::TO);
        setState(806);
        table_spec();
        break;
      }

      case sqliParser::CHANGE: {
        enterOuterAlt(_localctx, 2);
        setState(807);
        match(sqliParser::CHANGE);
        setState(809);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
        case 1: {
          setState(808);
          match(sqliParser::COLUMN);
          break;
        }

        }
        setState(811);
        column_name();
        setState(812);
        column_name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_column_namesContext ------------------------------------------------------------------

sqliParser::Index_column_namesContext::Index_column_namesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Index_column_nameContext *> sqliParser::Index_column_namesContext::index_column_name() {
  return getRuleContexts<sqliParser::Index_column_nameContext>();
}

sqliParser::Index_column_nameContext* sqliParser::Index_column_namesContext::index_column_name(size_t i) {
  return getRuleContext<sqliParser::Index_column_nameContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Index_column_namesContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Index_column_namesContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Index_column_namesContext::getRuleIndex() const {
  return sqliParser::RuleIndex_column_names;
}

void sqliParser::Index_column_namesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_column_names(this);
}

void sqliParser::Index_column_namesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_column_names(this);
}


antlrcpp::Any sqliParser::Index_column_namesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_column_names(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_column_namesContext* sqliParser::index_column_names() {
  Index_column_namesContext *_localctx = _tracker.createInstance<Index_column_namesContext>(_ctx, getState());
  enterRule(_localctx, 96, sqliParser::RuleIndex_column_names);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(816);
    index_column_name();
    setState(821);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(817);
      match(sqliParser::COMMA);
      setState(818);
      index_column_name();
      setState(823);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_typeContext ------------------------------------------------------------------

sqliParser::Index_typeContext::Index_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Index_typeContext::USING() {
  return getToken(sqliParser::USING, 0);
}

tree::TerminalNode* sqliParser::Index_typeContext::HASH() {
  return getToken(sqliParser::HASH, 0);
}


size_t sqliParser::Index_typeContext::getRuleIndex() const {
  return sqliParser::RuleIndex_type;
}

void sqliParser::Index_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_type(this);
}

void sqliParser::Index_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_type(this);
}


antlrcpp::Any sqliParser::Index_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_type(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_typeContext* sqliParser::index_type() {
  Index_typeContext *_localctx = _tracker.createInstance<Index_typeContext>(_ctx, getState());
  enterRule(_localctx, 98, sqliParser::RuleIndex_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(824);
    match(sqliParser::USING);

    setState(825);
    match(sqliParser::HASH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_optionContext ------------------------------------------------------------------

sqliParser::Index_optionContext::Index_optionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Index_typeContext* sqliParser::Index_optionContext::index_type() {
  return getRuleContext<sqliParser::Index_typeContext>(0);
}

tree::TerminalNode* sqliParser::Index_optionContext::COMMENT() {
  return getToken(sqliParser::COMMENT, 0);
}

tree::TerminalNode* sqliParser::Index_optionContext::TEXT_STRING() {
  return getToken(sqliParser::TEXT_STRING, 0);
}


size_t sqliParser::Index_optionContext::getRuleIndex() const {
  return sqliParser::RuleIndex_option;
}

void sqliParser::Index_optionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_option(this);
}

void sqliParser::Index_optionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_option(this);
}


antlrcpp::Any sqliParser::Index_optionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_option(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_optionContext* sqliParser::index_option() {
  Index_optionContext *_localctx = _tracker.createInstance<Index_optionContext>(_ctx, getState());
  enterRule(_localctx, 100, sqliParser::RuleIndex_option);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(830);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::USING: {
        enterOuterAlt(_localctx, 1);
        setState(827);
        index_type();
        break;
      }

      case sqliParser::COMMENT: {
        enterOuterAlt(_localctx, 2);
        setState(828);
        match(sqliParser::COMMENT);
        setState(829);
        match(sqliParser::TEXT_STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_definitionsContext ------------------------------------------------------------------

sqliParser::Column_definitionsContext::Column_definitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Column_nameContext *> sqliParser::Column_definitionsContext::column_name() {
  return getRuleContexts<sqliParser::Column_nameContext>();
}

sqliParser::Column_nameContext* sqliParser::Column_definitionsContext::column_name(size_t i) {
  return getRuleContext<sqliParser::Column_nameContext>(i);
}

std::vector<sqliParser::Column_definitionContext *> sqliParser::Column_definitionsContext::column_definition() {
  return getRuleContexts<sqliParser::Column_definitionContext>();
}

sqliParser::Column_definitionContext* sqliParser::Column_definitionsContext::column_definition(size_t i) {
  return getRuleContext<sqliParser::Column_definitionContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Column_definitionsContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Column_definitionsContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Column_definitionsContext::getRuleIndex() const {
  return sqliParser::RuleColumn_definitions;
}

void sqliParser::Column_definitionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_definitions(this);
}

void sqliParser::Column_definitionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_definitions(this);
}


antlrcpp::Any sqliParser::Column_definitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_definitions(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_definitionsContext* sqliParser::column_definitions() {
  Column_definitionsContext *_localctx = _tracker.createInstance<Column_definitionsContext>(_ctx, getState());
  enterRule(_localctx, 102, sqliParser::RuleColumn_definitions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    column_name();
    setState(833);
    column_definition();
    setState(840);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(834);
      match(sqliParser::COMMA);
      setState(835);
      column_name();
      setState(836);
      column_definition();
      setState(842);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rename_table_statementContext ------------------------------------------------------------------

sqliParser::Rename_table_statementContext::Rename_table_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Rename_table_statementContext::RENAME() {
  return getToken(sqliParser::RENAME, 0);
}

tree::TerminalNode* sqliParser::Rename_table_statementContext::TABLE() {
  return getToken(sqliParser::TABLE, 0);
}

std::vector<sqliParser::Table_specContext *> sqliParser::Rename_table_statementContext::table_spec() {
  return getRuleContexts<sqliParser::Table_specContext>();
}

sqliParser::Table_specContext* sqliParser::Rename_table_statementContext::table_spec(size_t i) {
  return getRuleContext<sqliParser::Table_specContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Rename_table_statementContext::TO() {
  return getTokens(sqliParser::TO);
}

tree::TerminalNode* sqliParser::Rename_table_statementContext::TO(size_t i) {
  return getToken(sqliParser::TO, i);
}

std::vector<tree::TerminalNode *> sqliParser::Rename_table_statementContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Rename_table_statementContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Rename_table_statementContext::getRuleIndex() const {
  return sqliParser::RuleRename_table_statement;
}

void sqliParser::Rename_table_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRename_table_statement(this);
}

void sqliParser::Rename_table_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRename_table_statement(this);
}


antlrcpp::Any sqliParser::Rename_table_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitRename_table_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Rename_table_statementContext* sqliParser::rename_table_statement() {
  Rename_table_statementContext *_localctx = _tracker.createInstance<Rename_table_statementContext>(_ctx, getState());
  enterRule(_localctx, 104, sqliParser::RuleRename_table_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(843);
    match(sqliParser::RENAME);
    setState(844);
    match(sqliParser::TABLE);
    setState(845);
    table_spec();
    setState(846);
    match(sqliParser::TO);
    setState(847);
    table_spec();
    setState(855);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(848);
      match(sqliParser::COMMA);
      setState(849);
      table_spec();
      setState(850);
      match(sqliParser::TO);
      setState(851);
      table_spec();
      setState(857);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_database_statementContext ------------------------------------------------------------------

sqliParser::Drop_database_statementContext::Drop_database_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Drop_database_statementContext::DROP() {
  return getToken(sqliParser::DROP, 0);
}

sqliParser::Database_nameContext* sqliParser::Drop_database_statementContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}

tree::TerminalNode* sqliParser::Drop_database_statementContext::DATABASE() {
  return getToken(sqliParser::DATABASE, 0);
}

tree::TerminalNode* sqliParser::Drop_database_statementContext::SCHEMA() {
  return getToken(sqliParser::SCHEMA, 0);
}

tree::TerminalNode* sqliParser::Drop_database_statementContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::Drop_database_statementContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}


size_t sqliParser::Drop_database_statementContext::getRuleIndex() const {
  return sqliParser::RuleDrop_database_statement;
}

void sqliParser::Drop_database_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDrop_database_statement(this);
}

void sqliParser::Drop_database_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDrop_database_statement(this);
}


antlrcpp::Any sqliParser::Drop_database_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDrop_database_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Drop_database_statementContext* sqliParser::drop_database_statement() {
  Drop_database_statementContext *_localctx = _tracker.createInstance<Drop_database_statementContext>(_ctx, getState());
  enterRule(_localctx, 106, sqliParser::RuleDrop_database_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(858);
    match(sqliParser::DROP);
    setState(859);
    _la = _input->LA(1);
    if (!(_la == sqliParser::DATABASE

    || _la == sqliParser::SCHEMA)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(862);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      setState(860);
      match(sqliParser::IF);
      setState(861);
      match(sqliParser::EXISTS);
      break;
    }

    }
    setState(864);
    database_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_table_statementContext ------------------------------------------------------------------

sqliParser::Drop_table_statementContext::Drop_table_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Drop_table_statementContext::DROP() {
  return getToken(sqliParser::DROP, 0);
}

sqliParser::Table_specContext* sqliParser::Drop_table_statementContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Drop_table_statementContext::TABLE() {
  return getToken(sqliParser::TABLE, 0);
}

tree::TerminalNode* sqliParser::Drop_table_statementContext::VIEW() {
  return getToken(sqliParser::VIEW, 0);
}

tree::TerminalNode* sqliParser::Drop_table_statementContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::Drop_table_statementContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}

tree::TerminalNode* sqliParser::Drop_table_statementContext::TRUNCATE() {
  return getToken(sqliParser::TRUNCATE, 0);
}


size_t sqliParser::Drop_table_statementContext::getRuleIndex() const {
  return sqliParser::RuleDrop_table_statement;
}

void sqliParser::Drop_table_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDrop_table_statement(this);
}

void sqliParser::Drop_table_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDrop_table_statement(this);
}


antlrcpp::Any sqliParser::Drop_table_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDrop_table_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Drop_table_statementContext* sqliParser::drop_table_statement() {
  Drop_table_statementContext *_localctx = _tracker.createInstance<Drop_table_statementContext>(_ctx, getState());
  enterRule(_localctx, 108, sqliParser::RuleDrop_table_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(876);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::DROP: {
        enterOuterAlt(_localctx, 1);
        setState(866);
        match(sqliParser::DROP);
        setState(867);
        _la = _input->LA(1);
        if (!(_la == sqliParser::TABLE || _la == sqliParser::VIEW)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(870);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
        case 1: {
          setState(868);
          match(sqliParser::IF);
          setState(869);
          match(sqliParser::EXISTS);
          break;
        }

        }
        setState(872);
        table_spec();
        break;
      }

      case sqliParser::TRUNCATE: {
        enterOuterAlt(_localctx, 2);
        setState(873);
        match(sqliParser::TRUNCATE);
        setState(874);
        match(sqliParser::TABLE);
        setState(875);
        table_spec();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_view_statementContext ------------------------------------------------------------------

sqliParser::Drop_view_statementContext::Drop_view_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Drop_view_statementContext::DROP() {
  return getToken(sqliParser::DROP, 0);
}

tree::TerminalNode* sqliParser::Drop_view_statementContext::VIEW() {
  return getToken(sqliParser::VIEW, 0);
}

sqliParser::Table_specContext* sqliParser::Drop_view_statementContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Drop_view_statementContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::Drop_view_statementContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}


size_t sqliParser::Drop_view_statementContext::getRuleIndex() const {
  return sqliParser::RuleDrop_view_statement;
}

void sqliParser::Drop_view_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDrop_view_statement(this);
}

void sqliParser::Drop_view_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDrop_view_statement(this);
}


antlrcpp::Any sqliParser::Drop_view_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDrop_view_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Drop_view_statementContext* sqliParser::drop_view_statement() {
  Drop_view_statementContext *_localctx = _tracker.createInstance<Drop_view_statementContext>(_ctx, getState());
  enterRule(_localctx, 110, sqliParser::RuleDrop_view_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(878);
    match(sqliParser::DROP);
    setState(879);
    match(sqliParser::VIEW);
    setState(882);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(880);
      match(sqliParser::IF);
      setState(881);
      match(sqliParser::EXISTS);
      break;
    }

    }
    setState(884);
    table_spec();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_user_statementContext ------------------------------------------------------------------

sqliParser::Drop_user_statementContext::Drop_user_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Drop_user_statementContext::DROP() {
  return getToken(sqliParser::DROP, 0);
}

tree::TerminalNode* sqliParser::Drop_user_statementContext::USER() {
  return getToken(sqliParser::USER, 0);
}

sqliParser::User_nameContext* sqliParser::Drop_user_statementContext::user_name() {
  return getRuleContext<sqliParser::User_nameContext>(0);
}


size_t sqliParser::Drop_user_statementContext::getRuleIndex() const {
  return sqliParser::RuleDrop_user_statement;
}

void sqliParser::Drop_user_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDrop_user_statement(this);
}

void sqliParser::Drop_user_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDrop_user_statement(this);
}


antlrcpp::Any sqliParser::Drop_user_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDrop_user_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Drop_user_statementContext* sqliParser::drop_user_statement() {
  Drop_user_statementContext *_localctx = _tracker.createInstance<Drop_user_statementContext>(_ctx, getState());
  enterRule(_localctx, 112, sqliParser::RuleDrop_user_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(886);
    match(sqliParser::DROP);
    setState(887);
    match(sqliParser::USER);
    setState(888);
    user_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_view_statementContext ------------------------------------------------------------------

sqliParser::Create_view_statementContext::Create_view_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Create_view_statementContext::CREATE() {
  return getToken(sqliParser::CREATE, 0);
}

sqliParser::Create_view_bodyContext* sqliParser::Create_view_statementContext::create_view_body() {
  return getRuleContext<sqliParser::Create_view_bodyContext>(0);
}


size_t sqliParser::Create_view_statementContext::getRuleIndex() const {
  return sqliParser::RuleCreate_view_statement;
}

void sqliParser::Create_view_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_view_statement(this);
}

void sqliParser::Create_view_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_view_statement(this);
}


antlrcpp::Any sqliParser::Create_view_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_view_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_view_statementContext* sqliParser::create_view_statement() {
  Create_view_statementContext *_localctx = _tracker.createInstance<Create_view_statementContext>(_ctx, getState());
  enterRule(_localctx, 114, sqliParser::RuleCreate_view_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(890);
    match(sqliParser::CREATE);
    setState(891);
    create_view_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_view_bodyContext ------------------------------------------------------------------

sqliParser::Create_view_bodyContext::Create_view_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Create_view_bodyContext::VIEW() {
  return getToken(sqliParser::VIEW, 0);
}

sqliParser::View_nameContext* sqliParser::Create_view_bodyContext::view_name() {
  return getRuleContext<sqliParser::View_nameContext>(0);
}

tree::TerminalNode* sqliParser::Create_view_bodyContext::AS() {
  return getToken(sqliParser::AS, 0);
}

sqliParser::Select_statementContext* sqliParser::Create_view_bodyContext::select_statement() {
  return getRuleContext<sqliParser::Select_statementContext>(0);
}

sqliParser::Database_nameContext* sqliParser::Create_view_bodyContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}

tree::TerminalNode* sqliParser::Create_view_bodyContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}

tree::TerminalNode* sqliParser::Create_view_bodyContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::Create_view_bodyContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

tree::TerminalNode* sqliParser::Create_view_bodyContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}

sqliParser::Column_listContext* sqliParser::Create_view_bodyContext::column_list() {
  return getRuleContext<sqliParser::Column_listContext>(0);
}


size_t sqliParser::Create_view_bodyContext::getRuleIndex() const {
  return sqliParser::RuleCreate_view_body;
}

void sqliParser::Create_view_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_view_body(this);
}

void sqliParser::Create_view_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_view_body(this);
}


antlrcpp::Any sqliParser::Create_view_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_view_body(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_view_bodyContext* sqliParser::create_view_body() {
  Create_view_bodyContext *_localctx = _tracker.createInstance<Create_view_bodyContext>(_ctx, getState());
  enterRule(_localctx, 116, sqliParser::RuleCreate_view_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(893);
    match(sqliParser::VIEW);
    setState(897);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      setState(894);
      database_name();
      setState(895);
      match(sqliParser::DOT);
      break;
    }

    }
    setState(899);
    view_name();
    setState(903);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::IF) {
      setState(900);
      match(sqliParser::IF);
      setState(901);
      match(sqliParser::NOT);
      setState(902);
      match(sqliParser::EXISTS);
    }
    setState(906);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::LPAREN) {
      setState(905);
      column_list();
    }
    setState(908);
    match(sqliParser::AS);
    setState(909);
    select_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alter_view_statementContext ------------------------------------------------------------------

sqliParser::Alter_view_statementContext::Alter_view_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Alter_view_statementContext::ALTER() {
  return getToken(sqliParser::ALTER, 0);
}

sqliParser::Create_view_bodyContext* sqliParser::Alter_view_statementContext::create_view_body() {
  return getRuleContext<sqliParser::Create_view_bodyContext>(0);
}


size_t sqliParser::Alter_view_statementContext::getRuleIndex() const {
  return sqliParser::RuleAlter_view_statement;
}

void sqliParser::Alter_view_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter_view_statement(this);
}

void sqliParser::Alter_view_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter_view_statement(this);
}


antlrcpp::Any sqliParser::Alter_view_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitAlter_view_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Alter_view_statementContext* sqliParser::alter_view_statement() {
  Alter_view_statementContext *_localctx = _tracker.createInstance<Alter_view_statementContext>(_ctx, getState());
  enterRule(_localctx, 118, sqliParser::RuleAlter_view_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(911);
    match(sqliParser::ALTER);
    setState(912);
    create_view_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_user_statementContext ------------------------------------------------------------------

sqliParser::Create_user_statementContext::Create_user_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Create_user_statementContext::USER() {
  return getToken(sqliParser::USER, 0);
}

sqliParser::User_nameContext* sqliParser::Create_user_statementContext::user_name() {
  return getRuleContext<sqliParser::User_nameContext>(0);
}

tree::TerminalNode* sqliParser::Create_user_statementContext::IDENTIFIED() {
  return getToken(sqliParser::IDENTIFIED, 0);
}

tree::TerminalNode* sqliParser::Create_user_statementContext::BY() {
  return getToken(sqliParser::BY, 0);
}

tree::TerminalNode* sqliParser::Create_user_statementContext::TEXT_STRING() {
  return getToken(sqliParser::TEXT_STRING, 0);
}


size_t sqliParser::Create_user_statementContext::getRuleIndex() const {
  return sqliParser::RuleCreate_user_statement;
}

void sqliParser::Create_user_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_user_statement(this);
}

void sqliParser::Create_user_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_user_statement(this);
}


antlrcpp::Any sqliParser::Create_user_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCreate_user_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Create_user_statementContext* sqliParser::create_user_statement() {
  Create_user_statementContext *_localctx = _tracker.createInstance<Create_user_statementContext>(_ctx, getState());
  enterRule(_localctx, 120, sqliParser::RuleCreate_user_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(914);
    match(sqliParser::USER);
    setState(915);
    user_name();
    setState(916);
    match(sqliParser::IDENTIFIED);
    setState(917);
    match(sqliParser::BY);
    setState(918);
    match(sqliParser::TEXT_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Grant_privilege_statementContext ------------------------------------------------------------------

sqliParser::Grant_privilege_statementContext::Grant_privilege_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> sqliParser::Grant_privilege_statementContext::GRANT() {
  return getTokens(sqliParser::GRANT);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::GRANT(size_t i) {
  return getToken(sqliParser::GRANT, i);
}

std::vector<sqliParser::Priv_typeContext *> sqliParser::Grant_privilege_statementContext::priv_type() {
  return getRuleContexts<sqliParser::Priv_typeContext>();
}

sqliParser::Priv_typeContext* sqliParser::Grant_privilege_statementContext::priv_type(size_t i) {
  return getRuleContext<sqliParser::Priv_typeContext>(i);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::ON() {
  return getToken(sqliParser::ON, 0);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::TO() {
  return getToken(sqliParser::TO, 0);
}

std::vector<sqliParser::Principal_specificationContext *> sqliParser::Grant_privilege_statementContext::principal_specification() {
  return getRuleContexts<sqliParser::Principal_specificationContext>();
}

sqliParser::Principal_specificationContext* sqliParser::Grant_privilege_statementContext::principal_specification(size_t i) {
  return getRuleContext<sqliParser::Principal_specificationContext>(i);
}

sqliParser::Database_nameContext* sqliParser::Grant_privilege_statementContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Grant_privilege_statementContext::ASTERISK() {
  return getTokens(sqliParser::ASTERISK);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::ASTERISK(size_t i) {
  return getToken(sqliParser::ASTERISK, i);
}

std::vector<tree::TerminalNode *> sqliParser::Grant_privilege_statementContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::WITH() {
  return getToken(sqliParser::WITH, 0);
}

tree::TerminalNode* sqliParser::Grant_privilege_statementContext::OPTION() {
  return getToken(sqliParser::OPTION, 0);
}

sqliParser::Table_nameContext* sqliParser::Grant_privilege_statementContext::table_name() {
  return getRuleContext<sqliParser::Table_nameContext>(0);
}


size_t sqliParser::Grant_privilege_statementContext::getRuleIndex() const {
  return sqliParser::RuleGrant_privilege_statement;
}

void sqliParser::Grant_privilege_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrant_privilege_statement(this);
}

void sqliParser::Grant_privilege_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrant_privilege_statement(this);
}


antlrcpp::Any sqliParser::Grant_privilege_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitGrant_privilege_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Grant_privilege_statementContext* sqliParser::grant_privilege_statement() {
  Grant_privilege_statementContext *_localctx = _tracker.createInstance<Grant_privilege_statementContext>(_ctx, getState());
  enterRule(_localctx, 122, sqliParser::RuleGrant_privilege_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(920);
    match(sqliParser::GRANT);
    setState(921);
    priv_type();
    setState(926);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(922);
      match(sqliParser::COMMA);
      setState(923);
      priv_type();
      setState(928);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(929);
    match(sqliParser::ON);
    setState(932);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::TRUE:
      case sqliParser::FALSE:
      case sqliParser::ALL:
      case sqliParser::NOT:
      case sqliParser::LIKE:
      case sqliParser::CHARACTER:
      case sqliParser::IF:
      case sqliParser::EXISTS:
      case sqliParser::ASC:
      case sqliParser::DESC:
      case sqliParser::BY:
      case sqliParser::HAVING:
      case sqliParser::WHERE:
      case sqliParser::AS:
      case sqliParser::SELECT:
      case sqliParser::DISTINCT:
      case sqliParser::INSERT:
      case sqliParser::OVERWRITE:
      case sqliParser::OUTER:
      case sqliParser::UNIQUEJOIN:
      case sqliParser::PRESERVE:
      case sqliParser::JOIN:
      case sqliParser::LEFT:
      case sqliParser::RIGHT:
      case sqliParser::FULL:
      case sqliParser::ON:
      case sqliParser::PARTITION:
      case sqliParser::PARTITIONS:
      case sqliParser::TABLE:
      case sqliParser::TABLES:
      case sqliParser::COLUMNS:
      case sqliParser::INDEX:
      case sqliParser::INDEXES:
      case sqliParser::REBUILD:
      case sqliParser::FUNCTIONS:
      case sqliParser::SHOW:
      case sqliParser::MSCK:
      case sqliParser::REPAIR:
      case sqliParser::DIRECTORY:
      case sqliParser::LOCAL:
      case sqliParser::TRANSFORM:
      case sqliParser::USING:
      case sqliParser::CLUSTER:
      case sqliParser::DISTRIBUTE:
      case sqliParser::SORT:
      case sqliParser::UNION:
      case sqliParser::LOAD:
      case sqliParser::EXPORT:
      case sqliParser::IMPORT:
      case sqliParser::DATA:
      case sqliParser::INPATH:
      case sqliParser::IS:
      case sqliParser::CNULL:
      case sqliParser::CREATE:
      case sqliParser::EXTERNAL:
      case sqliParser::ALTER:
      case sqliParser::CHANGE:
      case sqliParser::COLUMN:
      case sqliParser::FIRST:
      case sqliParser::AFTER:
      case sqliParser::DESCRIBE:
      case sqliParser::DROP:
      case sqliParser::RENAME:
      case sqliParser::IGNORE:
      case sqliParser::PROTECTION:
      case sqliParser::TO:
      case sqliParser::COMMENT:
      case sqliParser::BOOLEAN:
      case sqliParser::TINYINT:
      case sqliParser::SMALLINT:
      case sqliParser::INT:
      case sqliParser::BIGINT:
      case sqliParser::FLOAT:
      case sqliParser::DOUBLE:
      case sqliParser::DATE:
      case sqliParser::DATETIME:
      case sqliParser::TIMESTAMP:
      case sqliParser::DECIMAL:
      case sqliParser::STRING:
      case sqliParser::VARCHAR:
      case sqliParser::ARRAY:
      case sqliParser::STRUCT:
      case sqliParser::MAP:
      case sqliParser::UNIONTYPE:
      case sqliParser::REDUCE:
      case sqliParser::PARTITIONED:
      case sqliParser::CLUSTERED:
      case sqliParser::SORTED:
      case sqliParser::INTO:
      case sqliParser::BUCKETS:
      case sqliParser::ROW:
      case sqliParser::ROWS:
      case sqliParser::FORMAT:
      case sqliParser::DELIMITED:
      case sqliParser::FIELDS:
      case sqliParser::TERMINATED:
      case sqliParser::ESCAPED:
      case sqliParser::COLLECTION:
      case sqliParser::ITEMS:
      case sqliParser::KEYS:
      case sqliParser::KEY:
      case sqliParser::LINES:
      case sqliParser::STORED:
      case sqliParser::FILEFORMAT:
      case sqliParser::SEQUENCEFILE:
      case sqliParser::TEXTFILE:
      case sqliParser::RCFILE:
      case sqliParser::ORCFILE:
      case sqliParser::INPUTFORMAT:
      case sqliParser::OUTPUTFORMAT:
      case sqliParser::INPUTDRIVER:
      case sqliParser::OUTPUTDRIVER:
      case sqliParser::OFFLINE:
      case sqliParser::ENABLE:
      case sqliParser::DEFAULT:
      case sqliParser::DISABLE:
      case sqliParser::READONLY:
      case sqliParser::LOCATION:
      case sqliParser::TABLESAMPLE:
      case sqliParser::BUCKET:
      case sqliParser::OUT:
      case sqliParser::OF:
      case sqliParser::PERCENT:
      case sqliParser::CAST:
      case sqliParser::ADD:
      case sqliParser::REPLACE:
      case sqliParser::RLIKE:
      case sqliParser::REGEXP:
      case sqliParser::TEMPORARY:
      case sqliParser::FUNCTION:
      case sqliParser::MACRO:
      case sqliParser::EXPLAIN:
      case sqliParser::EXTENDED:
      case sqliParser::FORMATTED:
      case sqliParser::PRETTY:
      case sqliParser::DEPENDENCY:
      case sqliParser::LOGICAL:
      case sqliParser::SERDE:
      case sqliParser::WITH:
      case sqliParser::DEFERRED:
      case sqliParser::SERDEPROPERTIES:
      case sqliParser::DBPROPERTIES:
      case sqliParser::LIMIT:
      case sqliParser::SET:
      case sqliParser::UNSET:
      case sqliParser::TBLPROPERTIES:
      case sqliParser::IDXPROPERTIES:
      case sqliParser::CASCADED:
      case sqliParser::CASE:
      case sqliParser::WHEN:
      case sqliParser::THEN:
      case sqliParser::ELSE:
      case sqliParser::END:
      case sqliParser::MAPJOIN:
      case sqliParser::STREAMTABLE:
      case sqliParser::CLUSTERSTATUS:
      case sqliParser::UTC:
      case sqliParser::LONG:
      case sqliParser::DELETE:
      case sqliParser::FETCH:
      case sqliParser::INTERSECT:
      case sqliParser::VIEW:
      case sqliParser::IN:
      case sqliParser::DATABASE:
      case sqliParser::DATABASES:
      case sqliParser::MATERIALIZED:
      case sqliParser::SCHEMA:
      case sqliParser::SCHEMAS:
      case sqliParser::GRANT:
      case sqliParser::REVOKE:
      case sqliParser::SSL:
      case sqliParser::UNDO:
      case sqliParser::LOCK:
      case sqliParser::LOCKS:
      case sqliParser::UNLOCK:
      case sqliParser::SHARED:
      case sqliParser::EXCLUSIVE:
      case sqliParser::PROCEDURE:
      case sqliParser::UNSIGNED:
      case sqliParser::WHILE:
      case sqliParser::READ:
      case sqliParser::READS:
      case sqliParser::PURGE:
      case sqliParser::RANGE:
      case sqliParser::ANALYZE:
      case sqliParser::BEFORE:
      case sqliParser::BETWEEN:
      case sqliParser::BOTH:
      case sqliParser::BINARY:
      case sqliParser::CROSS:
      case sqliParser::CONTINUE:
      case sqliParser::CURSOR:
      case sqliParser::TRIGGER:
      case sqliParser::RECORDREADER:
      case sqliParser::RECORDWRITER:
      case sqliParser::LATERAL:
      case sqliParser::TOUCH:
      case sqliParser::ARCHIVE:
      case sqliParser::UNARCHIVE:
      case sqliParser::COMPUTE:
      case sqliParser::STATISTICS:
      case sqliParser::USE:
      case sqliParser::OPTION:
      case sqliParser::CONCATENATE:
      case sqliParser::UPDATE:
      case sqliParser::RESTRICT:
      case sqliParser::CASCADE:
      case sqliParser::SKEWED:
      case sqliParser::ROLLUP:
      case sqliParser::CUBE:
      case sqliParser::DIRECTORIES:
      case sqliParser::FOR:
      case sqliParser::WINDOW:
      case sqliParser::UNBOUNDED:
      case sqliParser::PRECEDING:
      case sqliParser::FOLLOWING:
      case sqliParser::CURRENT:
      case sqliParser::LESS:
      case sqliParser::OVER:
      case sqliParser::GROUPING:
      case sqliParser::SETS:
      case sqliParser::TRUNCATE:
      case sqliParser::NOSCAN:
      case sqliParser::PARTIALSCAN:
      case sqliParser::USER:
      case sqliParser::ROLE:
      case sqliParser::INNER:
      case sqliParser::EXCHANGE:
      case sqliParser::IDENTIFIED:
      case sqliParser::CHAR:
      case sqliParser::ABS:
      case sqliParser::ACOS:
      case sqliParser::ASIN:
      case sqliParser::ATAN:
      case sqliParser::CEIL:
      case sqliParser::COS:
      case sqliParser::COT:
      case sqliParser::EXP:
      case sqliParser::FLOOR:
      case sqliParser::LN:
      case sqliParser::POW:
      case sqliParser::RAND:
      case sqliParser::ROUND:
      case sqliParser::SIN:
      case sqliParser::SQRT:
      case sqliParser::TAN:
      case sqliParser::LCASE:
      case sqliParser::LOWER:
      case sqliParser::LTRIM:
      case sqliParser::RTRIM:
      case sqliParser::CONCAT:
      case sqliParser::SUBSTR:
      case sqliParser::TRIM:
      case sqliParser::UCASE:
      case sqliParser::UPPER:
      case sqliParser::INTERVAL:
      case sqliParser::TO_DATE:
      case sqliParser::DAY:
      case sqliParser::HOUR:
      case sqliParser::MINUTE:
      case sqliParser::MONTH:
      case sqliParser::SECOND:
      case sqliParser::FROM_UNIXTIME:
      case sqliParser::YEAR:
      case sqliParser::DATE_ADD:
      case sqliParser::DATE_SUB:
      case sqliParser::COLLATE:
      case sqliParser::AVG:
      case sqliParser::COUNT:
      case sqliParser::MAX:
      case sqliParser::MIN:
      case sqliParser::SUM:
      case sqliParser::COALESCE:
      case sqliParser::DUPLICATE:
      case sqliParser::SERVER:
      case sqliParser::ALIASES:
      case sqliParser::ALIAS:
      case sqliParser::VALUES:
      case sqliParser::VALUE:
      case sqliParser::LOW_PRIORITY:
      case sqliParser::HIGH_PRIORITY:
      case sqliParser::HASH:
      case sqliParser::REFERENCES:
      case sqliParser::TO_CHAR:
      case sqliParser::DATE_FORMAT:
      case sqliParser::SIGNED:
      case sqliParser::INTEGER:
      case sqliParser::LENGTH:
      case sqliParser::REVERSE:
      case sqliParser::IFNULL:
      case sqliParser::HEX:
      case sqliParser::CONV:
      case sqliParser::SLEEP:
      case sqliParser::BENCHMARK:
      case sqliParser::UPDATEXML:
      case sqliParser::EXTRACTVALUE:
      case sqliParser::LOAD_FILE:
      case sqliParser::SYSTEM_USER:
      case sqliParser::SESSION_USER:
      case sqliParser::CURRENT_USER:
      case sqliParser::MD5:
      case sqliParser::ASCII:
      case sqliParser::MID:
      case sqliParser::VERSION:
      case sqliParser::NOW:
      case sqliParser::SYSDATE:
      case sqliParser::ORD:
      case sqliParser::INSTR:
      case sqliParser::CONCAT_WS:
      case sqliParser::GROUP_CONCAT:
      case sqliParser::UNHEX:
      case sqliParser::SUBSTRING:
      case sqliParser::LOCATE:
      case sqliParser::NULLIF:
      case sqliParser::ISNULL:
      case sqliParser::DIVIDE:
      case sqliParser::MOD:
      case sqliParser::OR:
      case sqliParser::AND:
      case sqliParser::XOR:
      case sqliParser::ARROW:
      case sqliParser::EQ:
      case sqliParser::NOT_EQ:
      case sqliParser::LET:
      case sqliParser::GET:
      case sqliParser::SET_VAR:
      case sqliParser::SHIFT_LEFT:
      case sqliParser::SHIFT_RIGHT:
      case sqliParser::PLUS:
      case sqliParser::MINUS:
      case sqliParser::UNQUOTE:
      case sqliParser::INTEGER_NUM:
      case sqliParser::HEX_DIGIT:
      case sqliParser::REAL_NUMBER:
      case sqliParser::TEXT_STRING:
      case sqliParser::ID:
      case sqliParser::SYSTEM_VAR:
      case sqliParser::MORE: {
        setState(930);
        database_name();
        break;
      }

      case sqliParser::ASTERISK: {
        setState(931);
        match(sqliParser::ASTERISK);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(939);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::DOT) {
      setState(934);
      match(sqliParser::DOT);
      setState(937);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case sqliParser::TRUE:
        case sqliParser::FALSE:
        case sqliParser::ALL:
        case sqliParser::NOT:
        case sqliParser::LIKE:
        case sqliParser::CHARACTER:
        case sqliParser::IF:
        case sqliParser::EXISTS:
        case sqliParser::ASC:
        case sqliParser::DESC:
        case sqliParser::BY:
        case sqliParser::HAVING:
        case sqliParser::WHERE:
        case sqliParser::AS:
        case sqliParser::SELECT:
        case sqliParser::DISTINCT:
        case sqliParser::INSERT:
        case sqliParser::OVERWRITE:
        case sqliParser::OUTER:
        case sqliParser::UNIQUEJOIN:
        case sqliParser::PRESERVE:
        case sqliParser::JOIN:
        case sqliParser::LEFT:
        case sqliParser::RIGHT:
        case sqliParser::FULL:
        case sqliParser::ON:
        case sqliParser::PARTITION:
        case sqliParser::PARTITIONS:
        case sqliParser::TABLE:
        case sqliParser::TABLES:
        case sqliParser::COLUMNS:
        case sqliParser::INDEX:
        case sqliParser::INDEXES:
        case sqliParser::REBUILD:
        case sqliParser::FUNCTIONS:
        case sqliParser::SHOW:
        case sqliParser::MSCK:
        case sqliParser::REPAIR:
        case sqliParser::DIRECTORY:
        case sqliParser::LOCAL:
        case sqliParser::TRANSFORM:
        case sqliParser::USING:
        case sqliParser::CLUSTER:
        case sqliParser::DISTRIBUTE:
        case sqliParser::SORT:
        case sqliParser::UNION:
        case sqliParser::LOAD:
        case sqliParser::EXPORT:
        case sqliParser::IMPORT:
        case sqliParser::DATA:
        case sqliParser::INPATH:
        case sqliParser::IS:
        case sqliParser::CNULL:
        case sqliParser::CREATE:
        case sqliParser::EXTERNAL:
        case sqliParser::ALTER:
        case sqliParser::CHANGE:
        case sqliParser::COLUMN:
        case sqliParser::FIRST:
        case sqliParser::AFTER:
        case sqliParser::DESCRIBE:
        case sqliParser::DROP:
        case sqliParser::RENAME:
        case sqliParser::IGNORE:
        case sqliParser::PROTECTION:
        case sqliParser::TO:
        case sqliParser::COMMENT:
        case sqliParser::BOOLEAN:
        case sqliParser::TINYINT:
        case sqliParser::SMALLINT:
        case sqliParser::INT:
        case sqliParser::BIGINT:
        case sqliParser::FLOAT:
        case sqliParser::DOUBLE:
        case sqliParser::DATE:
        case sqliParser::DATETIME:
        case sqliParser::TIMESTAMP:
        case sqliParser::DECIMAL:
        case sqliParser::STRING:
        case sqliParser::VARCHAR:
        case sqliParser::ARRAY:
        case sqliParser::STRUCT:
        case sqliParser::MAP:
        case sqliParser::UNIONTYPE:
        case sqliParser::REDUCE:
        case sqliParser::PARTITIONED:
        case sqliParser::CLUSTERED:
        case sqliParser::SORTED:
        case sqliParser::INTO:
        case sqliParser::BUCKETS:
        case sqliParser::ROW:
        case sqliParser::ROWS:
        case sqliParser::FORMAT:
        case sqliParser::DELIMITED:
        case sqliParser::FIELDS:
        case sqliParser::TERMINATED:
        case sqliParser::ESCAPED:
        case sqliParser::COLLECTION:
        case sqliParser::ITEMS:
        case sqliParser::KEYS:
        case sqliParser::KEY:
        case sqliParser::LINES:
        case sqliParser::STORED:
        case sqliParser::FILEFORMAT:
        case sqliParser::SEQUENCEFILE:
        case sqliParser::TEXTFILE:
        case sqliParser::RCFILE:
        case sqliParser::ORCFILE:
        case sqliParser::INPUTFORMAT:
        case sqliParser::OUTPUTFORMAT:
        case sqliParser::INPUTDRIVER:
        case sqliParser::OUTPUTDRIVER:
        case sqliParser::OFFLINE:
        case sqliParser::ENABLE:
        case sqliParser::DEFAULT:
        case sqliParser::DISABLE:
        case sqliParser::READONLY:
        case sqliParser::LOCATION:
        case sqliParser::TABLESAMPLE:
        case sqliParser::BUCKET:
        case sqliParser::OUT:
        case sqliParser::OF:
        case sqliParser::PERCENT:
        case sqliParser::CAST:
        case sqliParser::ADD:
        case sqliParser::REPLACE:
        case sqliParser::RLIKE:
        case sqliParser::REGEXP:
        case sqliParser::TEMPORARY:
        case sqliParser::FUNCTION:
        case sqliParser::MACRO:
        case sqliParser::EXPLAIN:
        case sqliParser::EXTENDED:
        case sqliParser::FORMATTED:
        case sqliParser::PRETTY:
        case sqliParser::DEPENDENCY:
        case sqliParser::LOGICAL:
        case sqliParser::SERDE:
        case sqliParser::WITH:
        case sqliParser::DEFERRED:
        case sqliParser::SERDEPROPERTIES:
        case sqliParser::DBPROPERTIES:
        case sqliParser::LIMIT:
        case sqliParser::SET:
        case sqliParser::UNSET:
        case sqliParser::TBLPROPERTIES:
        case sqliParser::IDXPROPERTIES:
        case sqliParser::CASCADED:
        case sqliParser::CASE:
        case sqliParser::WHEN:
        case sqliParser::THEN:
        case sqliParser::ELSE:
        case sqliParser::END:
        case sqliParser::MAPJOIN:
        case sqliParser::STREAMTABLE:
        case sqliParser::CLUSTERSTATUS:
        case sqliParser::UTC:
        case sqliParser::LONG:
        case sqliParser::DELETE:
        case sqliParser::FETCH:
        case sqliParser::INTERSECT:
        case sqliParser::VIEW:
        case sqliParser::IN:
        case sqliParser::DATABASE:
        case sqliParser::DATABASES:
        case sqliParser::MATERIALIZED:
        case sqliParser::SCHEMA:
        case sqliParser::SCHEMAS:
        case sqliParser::GRANT:
        case sqliParser::REVOKE:
        case sqliParser::SSL:
        case sqliParser::UNDO:
        case sqliParser::LOCK:
        case sqliParser::LOCKS:
        case sqliParser::UNLOCK:
        case sqliParser::SHARED:
        case sqliParser::EXCLUSIVE:
        case sqliParser::PROCEDURE:
        case sqliParser::UNSIGNED:
        case sqliParser::WHILE:
        case sqliParser::READ:
        case sqliParser::READS:
        case sqliParser::PURGE:
        case sqliParser::RANGE:
        case sqliParser::ANALYZE:
        case sqliParser::BEFORE:
        case sqliParser::BETWEEN:
        case sqliParser::BOTH:
        case sqliParser::BINARY:
        case sqliParser::CROSS:
        case sqliParser::CONTINUE:
        case sqliParser::CURSOR:
        case sqliParser::TRIGGER:
        case sqliParser::RECORDREADER:
        case sqliParser::RECORDWRITER:
        case sqliParser::LATERAL:
        case sqliParser::TOUCH:
        case sqliParser::ARCHIVE:
        case sqliParser::UNARCHIVE:
        case sqliParser::COMPUTE:
        case sqliParser::STATISTICS:
        case sqliParser::USE:
        case sqliParser::OPTION:
        case sqliParser::CONCATENATE:
        case sqliParser::UPDATE:
        case sqliParser::RESTRICT:
        case sqliParser::CASCADE:
        case sqliParser::SKEWED:
        case sqliParser::ROLLUP:
        case sqliParser::CUBE:
        case sqliParser::DIRECTORIES:
        case sqliParser::FOR:
        case sqliParser::WINDOW:
        case sqliParser::UNBOUNDED:
        case sqliParser::PRECEDING:
        case sqliParser::FOLLOWING:
        case sqliParser::CURRENT:
        case sqliParser::LESS:
        case sqliParser::OVER:
        case sqliParser::GROUPING:
        case sqliParser::SETS:
        case sqliParser::TRUNCATE:
        case sqliParser::NOSCAN:
        case sqliParser::PARTIALSCAN:
        case sqliParser::USER:
        case sqliParser::ROLE:
        case sqliParser::INNER:
        case sqliParser::EXCHANGE:
        case sqliParser::IDENTIFIED:
        case sqliParser::CHAR:
        case sqliParser::ABS:
        case sqliParser::ACOS:
        case sqliParser::ASIN:
        case sqliParser::ATAN:
        case sqliParser::CEIL:
        case sqliParser::COS:
        case sqliParser::COT:
        case sqliParser::EXP:
        case sqliParser::FLOOR:
        case sqliParser::LN:
        case sqliParser::POW:
        case sqliParser::RAND:
        case sqliParser::ROUND:
        case sqliParser::SIN:
        case sqliParser::SQRT:
        case sqliParser::TAN:
        case sqliParser::LCASE:
        case sqliParser::LOWER:
        case sqliParser::LTRIM:
        case sqliParser::RTRIM:
        case sqliParser::CONCAT:
        case sqliParser::SUBSTR:
        case sqliParser::TRIM:
        case sqliParser::UCASE:
        case sqliParser::UPPER:
        case sqliParser::INTERVAL:
        case sqliParser::TO_DATE:
        case sqliParser::DAY:
        case sqliParser::HOUR:
        case sqliParser::MINUTE:
        case sqliParser::MONTH:
        case sqliParser::SECOND:
        case sqliParser::FROM_UNIXTIME:
        case sqliParser::YEAR:
        case sqliParser::DATE_ADD:
        case sqliParser::DATE_SUB:
        case sqliParser::COLLATE:
        case sqliParser::AVG:
        case sqliParser::COUNT:
        case sqliParser::MAX:
        case sqliParser::MIN:
        case sqliParser::SUM:
        case sqliParser::COALESCE:
        case sqliParser::DUPLICATE:
        case sqliParser::SERVER:
        case sqliParser::ALIASES:
        case sqliParser::ALIAS:
        case sqliParser::VALUES:
        case sqliParser::VALUE:
        case sqliParser::LOW_PRIORITY:
        case sqliParser::HIGH_PRIORITY:
        case sqliParser::HASH:
        case sqliParser::REFERENCES:
        case sqliParser::TO_CHAR:
        case sqliParser::DATE_FORMAT:
        case sqliParser::SIGNED:
        case sqliParser::INTEGER:
        case sqliParser::LENGTH:
        case sqliParser::REVERSE:
        case sqliParser::IFNULL:
        case sqliParser::HEX:
        case sqliParser::CONV:
        case sqliParser::SLEEP:
        case sqliParser::BENCHMARK:
        case sqliParser::UPDATEXML:
        case sqliParser::EXTRACTVALUE:
        case sqliParser::LOAD_FILE:
        case sqliParser::SYSTEM_USER:
        case sqliParser::SESSION_USER:
        case sqliParser::CURRENT_USER:
        case sqliParser::MD5:
        case sqliParser::ASCII:
        case sqliParser::MID:
        case sqliParser::VERSION:
        case sqliParser::NOW:
        case sqliParser::SYSDATE:
        case sqliParser::ORD:
        case sqliParser::INSTR:
        case sqliParser::CONCAT_WS:
        case sqliParser::GROUP_CONCAT:
        case sqliParser::UNHEX:
        case sqliParser::SUBSTRING:
        case sqliParser::LOCATE:
        case sqliParser::NULLIF:
        case sqliParser::ISNULL:
        case sqliParser::DIVIDE:
        case sqliParser::MOD:
        case sqliParser::OR:
        case sqliParser::AND:
        case sqliParser::XOR:
        case sqliParser::ARROW:
        case sqliParser::EQ:
        case sqliParser::NOT_EQ:
        case sqliParser::LET:
        case sqliParser::GET:
        case sqliParser::SET_VAR:
        case sqliParser::SHIFT_LEFT:
        case sqliParser::SHIFT_RIGHT:
        case sqliParser::PLUS:
        case sqliParser::MINUS:
        case sqliParser::UNQUOTE:
        case sqliParser::INTEGER_NUM:
        case sqliParser::HEX_DIGIT:
        case sqliParser::REAL_NUMBER:
        case sqliParser::TEXT_STRING:
        case sqliParser::ID:
        case sqliParser::SYSTEM_VAR:
        case sqliParser::MORE: {
          setState(935);
          table_name();
          break;
        }

        case sqliParser::ASTERISK: {
          setState(936);
          match(sqliParser::ASTERISK);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
    setState(941);
    match(sqliParser::TO);
    setState(942);
    principal_specification();
    setState(947);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(943);
      match(sqliParser::COMMA);
      setState(944);
      principal_specification();
      setState(949);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(953);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::WITH) {
      setState(950);
      match(sqliParser::WITH);
      setState(951);
      match(sqliParser::GRANT);
      setState(952);
      match(sqliParser::OPTION);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Principal_specificationContext ------------------------------------------------------------------

sqliParser::Principal_specificationContext::Principal_specificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::User_nameContext* sqliParser::Principal_specificationContext::user_name() {
  return getRuleContext<sqliParser::User_nameContext>(0);
}

tree::TerminalNode* sqliParser::Principal_specificationContext::USER() {
  return getToken(sqliParser::USER, 0);
}


size_t sqliParser::Principal_specificationContext::getRuleIndex() const {
  return sqliParser::RulePrincipal_specification;
}

void sqliParser::Principal_specificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrincipal_specification(this);
}

void sqliParser::Principal_specificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrincipal_specification(this);
}


antlrcpp::Any sqliParser::Principal_specificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPrincipal_specification(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Principal_specificationContext* sqliParser::principal_specification() {
  Principal_specificationContext *_localctx = _tracker.createInstance<Principal_specificationContext>(_ctx, getState());
  enterRule(_localctx, 124, sqliParser::RulePrincipal_specification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(956);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      setState(955);
      match(sqliParser::USER);
      break;
    }

    }
    setState(958);
    user_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Revoke_privilege_statementContext ------------------------------------------------------------------

sqliParser::Revoke_privilege_statementContext::Revoke_privilege_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::REVOKE() {
  return getToken(sqliParser::REVOKE, 0);
}

std::vector<sqliParser::Priv_typeContext *> sqliParser::Revoke_privilege_statementContext::priv_type() {
  return getRuleContexts<sqliParser::Priv_typeContext>();
}

sqliParser::Priv_typeContext* sqliParser::Revoke_privilege_statementContext::priv_type(size_t i) {
  return getRuleContext<sqliParser::Priv_typeContext>(i);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::ON() {
  return getToken(sqliParser::ON, 0);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::FROM() {
  return getToken(sqliParser::FROM, 0);
}

std::vector<sqliParser::Principal_specificationContext *> sqliParser::Revoke_privilege_statementContext::principal_specification() {
  return getRuleContexts<sqliParser::Principal_specificationContext>();
}

sqliParser::Principal_specificationContext* sqliParser::Revoke_privilege_statementContext::principal_specification(size_t i) {
  return getRuleContext<sqliParser::Principal_specificationContext>(i);
}

sqliParser::Database_nameContext* sqliParser::Revoke_privilege_statementContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Revoke_privilege_statementContext::ASTERISK() {
  return getTokens(sqliParser::ASTERISK);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::ASTERISK(size_t i) {
  return getToken(sqliParser::ASTERISK, i);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::GRANT() {
  return getToken(sqliParser::GRANT, 0);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::OPTION() {
  return getToken(sqliParser::OPTION, 0);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::FOR() {
  return getToken(sqliParser::FOR, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Revoke_privilege_statementContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}

tree::TerminalNode* sqliParser::Revoke_privilege_statementContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}

sqliParser::Table_nameContext* sqliParser::Revoke_privilege_statementContext::table_name() {
  return getRuleContext<sqliParser::Table_nameContext>(0);
}


size_t sqliParser::Revoke_privilege_statementContext::getRuleIndex() const {
  return sqliParser::RuleRevoke_privilege_statement;
}

void sqliParser::Revoke_privilege_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRevoke_privilege_statement(this);
}

void sqliParser::Revoke_privilege_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRevoke_privilege_statement(this);
}


antlrcpp::Any sqliParser::Revoke_privilege_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitRevoke_privilege_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Revoke_privilege_statementContext* sqliParser::revoke_privilege_statement() {
  Revoke_privilege_statementContext *_localctx = _tracker.createInstance<Revoke_privilege_statementContext>(_ctx, getState());
  enterRule(_localctx, 126, sqliParser::RuleRevoke_privilege_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(960);
    match(sqliParser::REVOKE);
    setState(964);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::GRANT) {
      setState(961);
      match(sqliParser::GRANT);
      setState(962);
      match(sqliParser::OPTION);
      setState(963);
      match(sqliParser::FOR);
    }
    setState(966);
    priv_type();
    setState(971);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(967);
      match(sqliParser::COMMA);
      setState(968);
      priv_type();
      setState(973);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(974);
    match(sqliParser::ON);
    setState(977);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::TRUE:
      case sqliParser::FALSE:
      case sqliParser::ALL:
      case sqliParser::NOT:
      case sqliParser::LIKE:
      case sqliParser::CHARACTER:
      case sqliParser::IF:
      case sqliParser::EXISTS:
      case sqliParser::ASC:
      case sqliParser::DESC:
      case sqliParser::BY:
      case sqliParser::HAVING:
      case sqliParser::WHERE:
      case sqliParser::AS:
      case sqliParser::SELECT:
      case sqliParser::DISTINCT:
      case sqliParser::INSERT:
      case sqliParser::OVERWRITE:
      case sqliParser::OUTER:
      case sqliParser::UNIQUEJOIN:
      case sqliParser::PRESERVE:
      case sqliParser::JOIN:
      case sqliParser::LEFT:
      case sqliParser::RIGHT:
      case sqliParser::FULL:
      case sqliParser::ON:
      case sqliParser::PARTITION:
      case sqliParser::PARTITIONS:
      case sqliParser::TABLE:
      case sqliParser::TABLES:
      case sqliParser::COLUMNS:
      case sqliParser::INDEX:
      case sqliParser::INDEXES:
      case sqliParser::REBUILD:
      case sqliParser::FUNCTIONS:
      case sqliParser::SHOW:
      case sqliParser::MSCK:
      case sqliParser::REPAIR:
      case sqliParser::DIRECTORY:
      case sqliParser::LOCAL:
      case sqliParser::TRANSFORM:
      case sqliParser::USING:
      case sqliParser::CLUSTER:
      case sqliParser::DISTRIBUTE:
      case sqliParser::SORT:
      case sqliParser::UNION:
      case sqliParser::LOAD:
      case sqliParser::EXPORT:
      case sqliParser::IMPORT:
      case sqliParser::DATA:
      case sqliParser::INPATH:
      case sqliParser::IS:
      case sqliParser::CNULL:
      case sqliParser::CREATE:
      case sqliParser::EXTERNAL:
      case sqliParser::ALTER:
      case sqliParser::CHANGE:
      case sqliParser::COLUMN:
      case sqliParser::FIRST:
      case sqliParser::AFTER:
      case sqliParser::DESCRIBE:
      case sqliParser::DROP:
      case sqliParser::RENAME:
      case sqliParser::IGNORE:
      case sqliParser::PROTECTION:
      case sqliParser::TO:
      case sqliParser::COMMENT:
      case sqliParser::BOOLEAN:
      case sqliParser::TINYINT:
      case sqliParser::SMALLINT:
      case sqliParser::INT:
      case sqliParser::BIGINT:
      case sqliParser::FLOAT:
      case sqliParser::DOUBLE:
      case sqliParser::DATE:
      case sqliParser::DATETIME:
      case sqliParser::TIMESTAMP:
      case sqliParser::DECIMAL:
      case sqliParser::STRING:
      case sqliParser::VARCHAR:
      case sqliParser::ARRAY:
      case sqliParser::STRUCT:
      case sqliParser::MAP:
      case sqliParser::UNIONTYPE:
      case sqliParser::REDUCE:
      case sqliParser::PARTITIONED:
      case sqliParser::CLUSTERED:
      case sqliParser::SORTED:
      case sqliParser::INTO:
      case sqliParser::BUCKETS:
      case sqliParser::ROW:
      case sqliParser::ROWS:
      case sqliParser::FORMAT:
      case sqliParser::DELIMITED:
      case sqliParser::FIELDS:
      case sqliParser::TERMINATED:
      case sqliParser::ESCAPED:
      case sqliParser::COLLECTION:
      case sqliParser::ITEMS:
      case sqliParser::KEYS:
      case sqliParser::KEY:
      case sqliParser::LINES:
      case sqliParser::STORED:
      case sqliParser::FILEFORMAT:
      case sqliParser::SEQUENCEFILE:
      case sqliParser::TEXTFILE:
      case sqliParser::RCFILE:
      case sqliParser::ORCFILE:
      case sqliParser::INPUTFORMAT:
      case sqliParser::OUTPUTFORMAT:
      case sqliParser::INPUTDRIVER:
      case sqliParser::OUTPUTDRIVER:
      case sqliParser::OFFLINE:
      case sqliParser::ENABLE:
      case sqliParser::DEFAULT:
      case sqliParser::DISABLE:
      case sqliParser::READONLY:
      case sqliParser::LOCATION:
      case sqliParser::TABLESAMPLE:
      case sqliParser::BUCKET:
      case sqliParser::OUT:
      case sqliParser::OF:
      case sqliParser::PERCENT:
      case sqliParser::CAST:
      case sqliParser::ADD:
      case sqliParser::REPLACE:
      case sqliParser::RLIKE:
      case sqliParser::REGEXP:
      case sqliParser::TEMPORARY:
      case sqliParser::FUNCTION:
      case sqliParser::MACRO:
      case sqliParser::EXPLAIN:
      case sqliParser::EXTENDED:
      case sqliParser::FORMATTED:
      case sqliParser::PRETTY:
      case sqliParser::DEPENDENCY:
      case sqliParser::LOGICAL:
      case sqliParser::SERDE:
      case sqliParser::WITH:
      case sqliParser::DEFERRED:
      case sqliParser::SERDEPROPERTIES:
      case sqliParser::DBPROPERTIES:
      case sqliParser::LIMIT:
      case sqliParser::SET:
      case sqliParser::UNSET:
      case sqliParser::TBLPROPERTIES:
      case sqliParser::IDXPROPERTIES:
      case sqliParser::CASCADED:
      case sqliParser::CASE:
      case sqliParser::WHEN:
      case sqliParser::THEN:
      case sqliParser::ELSE:
      case sqliParser::END:
      case sqliParser::MAPJOIN:
      case sqliParser::STREAMTABLE:
      case sqliParser::CLUSTERSTATUS:
      case sqliParser::UTC:
      case sqliParser::LONG:
      case sqliParser::DELETE:
      case sqliParser::FETCH:
      case sqliParser::INTERSECT:
      case sqliParser::VIEW:
      case sqliParser::IN:
      case sqliParser::DATABASE:
      case sqliParser::DATABASES:
      case sqliParser::MATERIALIZED:
      case sqliParser::SCHEMA:
      case sqliParser::SCHEMAS:
      case sqliParser::GRANT:
      case sqliParser::REVOKE:
      case sqliParser::SSL:
      case sqliParser::UNDO:
      case sqliParser::LOCK:
      case sqliParser::LOCKS:
      case sqliParser::UNLOCK:
      case sqliParser::SHARED:
      case sqliParser::EXCLUSIVE:
      case sqliParser::PROCEDURE:
      case sqliParser::UNSIGNED:
      case sqliParser::WHILE:
      case sqliParser::READ:
      case sqliParser::READS:
      case sqliParser::PURGE:
      case sqliParser::RANGE:
      case sqliParser::ANALYZE:
      case sqliParser::BEFORE:
      case sqliParser::BETWEEN:
      case sqliParser::BOTH:
      case sqliParser::BINARY:
      case sqliParser::CROSS:
      case sqliParser::CONTINUE:
      case sqliParser::CURSOR:
      case sqliParser::TRIGGER:
      case sqliParser::RECORDREADER:
      case sqliParser::RECORDWRITER:
      case sqliParser::LATERAL:
      case sqliParser::TOUCH:
      case sqliParser::ARCHIVE:
      case sqliParser::UNARCHIVE:
      case sqliParser::COMPUTE:
      case sqliParser::STATISTICS:
      case sqliParser::USE:
      case sqliParser::OPTION:
      case sqliParser::CONCATENATE:
      case sqliParser::UPDATE:
      case sqliParser::RESTRICT:
      case sqliParser::CASCADE:
      case sqliParser::SKEWED:
      case sqliParser::ROLLUP:
      case sqliParser::CUBE:
      case sqliParser::DIRECTORIES:
      case sqliParser::FOR:
      case sqliParser::WINDOW:
      case sqliParser::UNBOUNDED:
      case sqliParser::PRECEDING:
      case sqliParser::FOLLOWING:
      case sqliParser::CURRENT:
      case sqliParser::LESS:
      case sqliParser::OVER:
      case sqliParser::GROUPING:
      case sqliParser::SETS:
      case sqliParser::TRUNCATE:
      case sqliParser::NOSCAN:
      case sqliParser::PARTIALSCAN:
      case sqliParser::USER:
      case sqliParser::ROLE:
      case sqliParser::INNER:
      case sqliParser::EXCHANGE:
      case sqliParser::IDENTIFIED:
      case sqliParser::CHAR:
      case sqliParser::ABS:
      case sqliParser::ACOS:
      case sqliParser::ASIN:
      case sqliParser::ATAN:
      case sqliParser::CEIL:
      case sqliParser::COS:
      case sqliParser::COT:
      case sqliParser::EXP:
      case sqliParser::FLOOR:
      case sqliParser::LN:
      case sqliParser::POW:
      case sqliParser::RAND:
      case sqliParser::ROUND:
      case sqliParser::SIN:
      case sqliParser::SQRT:
      case sqliParser::TAN:
      case sqliParser::LCASE:
      case sqliParser::LOWER:
      case sqliParser::LTRIM:
      case sqliParser::RTRIM:
      case sqliParser::CONCAT:
      case sqliParser::SUBSTR:
      case sqliParser::TRIM:
      case sqliParser::UCASE:
      case sqliParser::UPPER:
      case sqliParser::INTERVAL:
      case sqliParser::TO_DATE:
      case sqliParser::DAY:
      case sqliParser::HOUR:
      case sqliParser::MINUTE:
      case sqliParser::MONTH:
      case sqliParser::SECOND:
      case sqliParser::FROM_UNIXTIME:
      case sqliParser::YEAR:
      case sqliParser::DATE_ADD:
      case sqliParser::DATE_SUB:
      case sqliParser::COLLATE:
      case sqliParser::AVG:
      case sqliParser::COUNT:
      case sqliParser::MAX:
      case sqliParser::MIN:
      case sqliParser::SUM:
      case sqliParser::COALESCE:
      case sqliParser::DUPLICATE:
      case sqliParser::SERVER:
      case sqliParser::ALIASES:
      case sqliParser::ALIAS:
      case sqliParser::VALUES:
      case sqliParser::VALUE:
      case sqliParser::LOW_PRIORITY:
      case sqliParser::HIGH_PRIORITY:
      case sqliParser::HASH:
      case sqliParser::REFERENCES:
      case sqliParser::TO_CHAR:
      case sqliParser::DATE_FORMAT:
      case sqliParser::SIGNED:
      case sqliParser::INTEGER:
      case sqliParser::LENGTH:
      case sqliParser::REVERSE:
      case sqliParser::IFNULL:
      case sqliParser::HEX:
      case sqliParser::CONV:
      case sqliParser::SLEEP:
      case sqliParser::BENCHMARK:
      case sqliParser::UPDATEXML:
      case sqliParser::EXTRACTVALUE:
      case sqliParser::LOAD_FILE:
      case sqliParser::SYSTEM_USER:
      case sqliParser::SESSION_USER:
      case sqliParser::CURRENT_USER:
      case sqliParser::MD5:
      case sqliParser::ASCII:
      case sqliParser::MID:
      case sqliParser::VERSION:
      case sqliParser::NOW:
      case sqliParser::SYSDATE:
      case sqliParser::ORD:
      case sqliParser::INSTR:
      case sqliParser::CONCAT_WS:
      case sqliParser::GROUP_CONCAT:
      case sqliParser::UNHEX:
      case sqliParser::SUBSTRING:
      case sqliParser::LOCATE:
      case sqliParser::NULLIF:
      case sqliParser::ISNULL:
      case sqliParser::DIVIDE:
      case sqliParser::MOD:
      case sqliParser::OR:
      case sqliParser::AND:
      case sqliParser::XOR:
      case sqliParser::ARROW:
      case sqliParser::EQ:
      case sqliParser::NOT_EQ:
      case sqliParser::LET:
      case sqliParser::GET:
      case sqliParser::SET_VAR:
      case sqliParser::SHIFT_LEFT:
      case sqliParser::SHIFT_RIGHT:
      case sqliParser::PLUS:
      case sqliParser::MINUS:
      case sqliParser::UNQUOTE:
      case sqliParser::INTEGER_NUM:
      case sqliParser::HEX_DIGIT:
      case sqliParser::REAL_NUMBER:
      case sqliParser::TEXT_STRING:
      case sqliParser::ID:
      case sqliParser::SYSTEM_VAR:
      case sqliParser::MORE: {
        setState(975);
        database_name();
        break;
      }

      case sqliParser::ASTERISK: {
        setState(976);
        match(sqliParser::ASTERISK);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(984);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::DOT) {
      setState(979);
      match(sqliParser::DOT);
      setState(982);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case sqliParser::TRUE:
        case sqliParser::FALSE:
        case sqliParser::ALL:
        case sqliParser::NOT:
        case sqliParser::LIKE:
        case sqliParser::CHARACTER:
        case sqliParser::IF:
        case sqliParser::EXISTS:
        case sqliParser::ASC:
        case sqliParser::DESC:
        case sqliParser::BY:
        case sqliParser::HAVING:
        case sqliParser::WHERE:
        case sqliParser::AS:
        case sqliParser::SELECT:
        case sqliParser::DISTINCT:
        case sqliParser::INSERT:
        case sqliParser::OVERWRITE:
        case sqliParser::OUTER:
        case sqliParser::UNIQUEJOIN:
        case sqliParser::PRESERVE:
        case sqliParser::JOIN:
        case sqliParser::LEFT:
        case sqliParser::RIGHT:
        case sqliParser::FULL:
        case sqliParser::ON:
        case sqliParser::PARTITION:
        case sqliParser::PARTITIONS:
        case sqliParser::TABLE:
        case sqliParser::TABLES:
        case sqliParser::COLUMNS:
        case sqliParser::INDEX:
        case sqliParser::INDEXES:
        case sqliParser::REBUILD:
        case sqliParser::FUNCTIONS:
        case sqliParser::SHOW:
        case sqliParser::MSCK:
        case sqliParser::REPAIR:
        case sqliParser::DIRECTORY:
        case sqliParser::LOCAL:
        case sqliParser::TRANSFORM:
        case sqliParser::USING:
        case sqliParser::CLUSTER:
        case sqliParser::DISTRIBUTE:
        case sqliParser::SORT:
        case sqliParser::UNION:
        case sqliParser::LOAD:
        case sqliParser::EXPORT:
        case sqliParser::IMPORT:
        case sqliParser::DATA:
        case sqliParser::INPATH:
        case sqliParser::IS:
        case sqliParser::CNULL:
        case sqliParser::CREATE:
        case sqliParser::EXTERNAL:
        case sqliParser::ALTER:
        case sqliParser::CHANGE:
        case sqliParser::COLUMN:
        case sqliParser::FIRST:
        case sqliParser::AFTER:
        case sqliParser::DESCRIBE:
        case sqliParser::DROP:
        case sqliParser::RENAME:
        case sqliParser::IGNORE:
        case sqliParser::PROTECTION:
        case sqliParser::TO:
        case sqliParser::COMMENT:
        case sqliParser::BOOLEAN:
        case sqliParser::TINYINT:
        case sqliParser::SMALLINT:
        case sqliParser::INT:
        case sqliParser::BIGINT:
        case sqliParser::FLOAT:
        case sqliParser::DOUBLE:
        case sqliParser::DATE:
        case sqliParser::DATETIME:
        case sqliParser::TIMESTAMP:
        case sqliParser::DECIMAL:
        case sqliParser::STRING:
        case sqliParser::VARCHAR:
        case sqliParser::ARRAY:
        case sqliParser::STRUCT:
        case sqliParser::MAP:
        case sqliParser::UNIONTYPE:
        case sqliParser::REDUCE:
        case sqliParser::PARTITIONED:
        case sqliParser::CLUSTERED:
        case sqliParser::SORTED:
        case sqliParser::INTO:
        case sqliParser::BUCKETS:
        case sqliParser::ROW:
        case sqliParser::ROWS:
        case sqliParser::FORMAT:
        case sqliParser::DELIMITED:
        case sqliParser::FIELDS:
        case sqliParser::TERMINATED:
        case sqliParser::ESCAPED:
        case sqliParser::COLLECTION:
        case sqliParser::ITEMS:
        case sqliParser::KEYS:
        case sqliParser::KEY:
        case sqliParser::LINES:
        case sqliParser::STORED:
        case sqliParser::FILEFORMAT:
        case sqliParser::SEQUENCEFILE:
        case sqliParser::TEXTFILE:
        case sqliParser::RCFILE:
        case sqliParser::ORCFILE:
        case sqliParser::INPUTFORMAT:
        case sqliParser::OUTPUTFORMAT:
        case sqliParser::INPUTDRIVER:
        case sqliParser::OUTPUTDRIVER:
        case sqliParser::OFFLINE:
        case sqliParser::ENABLE:
        case sqliParser::DEFAULT:
        case sqliParser::DISABLE:
        case sqliParser::READONLY:
        case sqliParser::LOCATION:
        case sqliParser::TABLESAMPLE:
        case sqliParser::BUCKET:
        case sqliParser::OUT:
        case sqliParser::OF:
        case sqliParser::PERCENT:
        case sqliParser::CAST:
        case sqliParser::ADD:
        case sqliParser::REPLACE:
        case sqliParser::RLIKE:
        case sqliParser::REGEXP:
        case sqliParser::TEMPORARY:
        case sqliParser::FUNCTION:
        case sqliParser::MACRO:
        case sqliParser::EXPLAIN:
        case sqliParser::EXTENDED:
        case sqliParser::FORMATTED:
        case sqliParser::PRETTY:
        case sqliParser::DEPENDENCY:
        case sqliParser::LOGICAL:
        case sqliParser::SERDE:
        case sqliParser::WITH:
        case sqliParser::DEFERRED:
        case sqliParser::SERDEPROPERTIES:
        case sqliParser::DBPROPERTIES:
        case sqliParser::LIMIT:
        case sqliParser::SET:
        case sqliParser::UNSET:
        case sqliParser::TBLPROPERTIES:
        case sqliParser::IDXPROPERTIES:
        case sqliParser::CASCADED:
        case sqliParser::CASE:
        case sqliParser::WHEN:
        case sqliParser::THEN:
        case sqliParser::ELSE:
        case sqliParser::END:
        case sqliParser::MAPJOIN:
        case sqliParser::STREAMTABLE:
        case sqliParser::CLUSTERSTATUS:
        case sqliParser::UTC:
        case sqliParser::LONG:
        case sqliParser::DELETE:
        case sqliParser::FETCH:
        case sqliParser::INTERSECT:
        case sqliParser::VIEW:
        case sqliParser::IN:
        case sqliParser::DATABASE:
        case sqliParser::DATABASES:
        case sqliParser::MATERIALIZED:
        case sqliParser::SCHEMA:
        case sqliParser::SCHEMAS:
        case sqliParser::GRANT:
        case sqliParser::REVOKE:
        case sqliParser::SSL:
        case sqliParser::UNDO:
        case sqliParser::LOCK:
        case sqliParser::LOCKS:
        case sqliParser::UNLOCK:
        case sqliParser::SHARED:
        case sqliParser::EXCLUSIVE:
        case sqliParser::PROCEDURE:
        case sqliParser::UNSIGNED:
        case sqliParser::WHILE:
        case sqliParser::READ:
        case sqliParser::READS:
        case sqliParser::PURGE:
        case sqliParser::RANGE:
        case sqliParser::ANALYZE:
        case sqliParser::BEFORE:
        case sqliParser::BETWEEN:
        case sqliParser::BOTH:
        case sqliParser::BINARY:
        case sqliParser::CROSS:
        case sqliParser::CONTINUE:
        case sqliParser::CURSOR:
        case sqliParser::TRIGGER:
        case sqliParser::RECORDREADER:
        case sqliParser::RECORDWRITER:
        case sqliParser::LATERAL:
        case sqliParser::TOUCH:
        case sqliParser::ARCHIVE:
        case sqliParser::UNARCHIVE:
        case sqliParser::COMPUTE:
        case sqliParser::STATISTICS:
        case sqliParser::USE:
        case sqliParser::OPTION:
        case sqliParser::CONCATENATE:
        case sqliParser::UPDATE:
        case sqliParser::RESTRICT:
        case sqliParser::CASCADE:
        case sqliParser::SKEWED:
        case sqliParser::ROLLUP:
        case sqliParser::CUBE:
        case sqliParser::DIRECTORIES:
        case sqliParser::FOR:
        case sqliParser::WINDOW:
        case sqliParser::UNBOUNDED:
        case sqliParser::PRECEDING:
        case sqliParser::FOLLOWING:
        case sqliParser::CURRENT:
        case sqliParser::LESS:
        case sqliParser::OVER:
        case sqliParser::GROUPING:
        case sqliParser::SETS:
        case sqliParser::TRUNCATE:
        case sqliParser::NOSCAN:
        case sqliParser::PARTIALSCAN:
        case sqliParser::USER:
        case sqliParser::ROLE:
        case sqliParser::INNER:
        case sqliParser::EXCHANGE:
        case sqliParser::IDENTIFIED:
        case sqliParser::CHAR:
        case sqliParser::ABS:
        case sqliParser::ACOS:
        case sqliParser::ASIN:
        case sqliParser::ATAN:
        case sqliParser::CEIL:
        case sqliParser::COS:
        case sqliParser::COT:
        case sqliParser::EXP:
        case sqliParser::FLOOR:
        case sqliParser::LN:
        case sqliParser::POW:
        case sqliParser::RAND:
        case sqliParser::ROUND:
        case sqliParser::SIN:
        case sqliParser::SQRT:
        case sqliParser::TAN:
        case sqliParser::LCASE:
        case sqliParser::LOWER:
        case sqliParser::LTRIM:
        case sqliParser::RTRIM:
        case sqliParser::CONCAT:
        case sqliParser::SUBSTR:
        case sqliParser::TRIM:
        case sqliParser::UCASE:
        case sqliParser::UPPER:
        case sqliParser::INTERVAL:
        case sqliParser::TO_DATE:
        case sqliParser::DAY:
        case sqliParser::HOUR:
        case sqliParser::MINUTE:
        case sqliParser::MONTH:
        case sqliParser::SECOND:
        case sqliParser::FROM_UNIXTIME:
        case sqliParser::YEAR:
        case sqliParser::DATE_ADD:
        case sqliParser::DATE_SUB:
        case sqliParser::COLLATE:
        case sqliParser::AVG:
        case sqliParser::COUNT:
        case sqliParser::MAX:
        case sqliParser::MIN:
        case sqliParser::SUM:
        case sqliParser::COALESCE:
        case sqliParser::DUPLICATE:
        case sqliParser::SERVER:
        case sqliParser::ALIASES:
        case sqliParser::ALIAS:
        case sqliParser::VALUES:
        case sqliParser::VALUE:
        case sqliParser::LOW_PRIORITY:
        case sqliParser::HIGH_PRIORITY:
        case sqliParser::HASH:
        case sqliParser::REFERENCES:
        case sqliParser::TO_CHAR:
        case sqliParser::DATE_FORMAT:
        case sqliParser::SIGNED:
        case sqliParser::INTEGER:
        case sqliParser::LENGTH:
        case sqliParser::REVERSE:
        case sqliParser::IFNULL:
        case sqliParser::HEX:
        case sqliParser::CONV:
        case sqliParser::SLEEP:
        case sqliParser::BENCHMARK:
        case sqliParser::UPDATEXML:
        case sqliParser::EXTRACTVALUE:
        case sqliParser::LOAD_FILE:
        case sqliParser::SYSTEM_USER:
        case sqliParser::SESSION_USER:
        case sqliParser::CURRENT_USER:
        case sqliParser::MD5:
        case sqliParser::ASCII:
        case sqliParser::MID:
        case sqliParser::VERSION:
        case sqliParser::NOW:
        case sqliParser::SYSDATE:
        case sqliParser::ORD:
        case sqliParser::INSTR:
        case sqliParser::CONCAT_WS:
        case sqliParser::GROUP_CONCAT:
        case sqliParser::UNHEX:
        case sqliParser::SUBSTRING:
        case sqliParser::LOCATE:
        case sqliParser::NULLIF:
        case sqliParser::ISNULL:
        case sqliParser::DIVIDE:
        case sqliParser::MOD:
        case sqliParser::OR:
        case sqliParser::AND:
        case sqliParser::XOR:
        case sqliParser::ARROW:
        case sqliParser::EQ:
        case sqliParser::NOT_EQ:
        case sqliParser::LET:
        case sqliParser::GET:
        case sqliParser::SET_VAR:
        case sqliParser::SHIFT_LEFT:
        case sqliParser::SHIFT_RIGHT:
        case sqliParser::PLUS:
        case sqliParser::MINUS:
        case sqliParser::UNQUOTE:
        case sqliParser::INTEGER_NUM:
        case sqliParser::HEX_DIGIT:
        case sqliParser::REAL_NUMBER:
        case sqliParser::TEXT_STRING:
        case sqliParser::ID:
        case sqliParser::SYSTEM_VAR:
        case sqliParser::MORE: {
          setState(980);
          table_name();
          break;
        }

        case sqliParser::ASTERISK: {
          setState(981);
          match(sqliParser::ASTERISK);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
    setState(986);
    match(sqliParser::FROM);
    setState(987);
    principal_specification();
    setState(992);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(988);
      match(sqliParser::COMMA);
      setState(989);
      principal_specification();
      setState(994);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Show_event_statementContext ------------------------------------------------------------------

sqliParser::Show_event_statementContext::Show_event_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Show_event_statementContext::SHOW() {
  return getToken(sqliParser::SHOW, 0);
}

sqliParser::Show_specificationContext* sqliParser::Show_event_statementContext::show_specification() {
  return getRuleContext<sqliParser::Show_specificationContext>(0);
}


size_t sqliParser::Show_event_statementContext::getRuleIndex() const {
  return sqliParser::RuleShow_event_statement;
}

void sqliParser::Show_event_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShow_event_statement(this);
}

void sqliParser::Show_event_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShow_event_statement(this);
}


antlrcpp::Any sqliParser::Show_event_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitShow_event_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Show_event_statementContext* sqliParser::show_event_statement() {
  Show_event_statementContext *_localctx = _tracker.createInstance<Show_event_statementContext>(_ctx, getState());
  enterRule(_localctx, 128, sqliParser::RuleShow_event_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(995);
    match(sqliParser::SHOW);
    setState(996);
    show_specification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Show_specificationContext ------------------------------------------------------------------

sqliParser::Show_specificationContext::Show_specificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Show_specificationContext::CREATE() {
  return getToken(sqliParser::CREATE, 0);
}

sqliParser::Table_specContext* sqliParser::Show_specificationContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::TABLE() {
  return getToken(sqliParser::TABLE, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::VIEW() {
  return getToken(sqliParser::VIEW, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::COLUMNS() {
  return getToken(sqliParser::COLUMNS, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::FROM() {
  return getToken(sqliParser::FROM, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::DATABASES() {
  return getToken(sqliParser::DATABASES, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::SCHEMAS() {
  return getToken(sqliParser::SCHEMAS, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::LIKE() {
  return getToken(sqliParser::LIKE, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::TEXT_STRING() {
  return getToken(sqliParser::TEXT_STRING, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::TABLES() {
  return getToken(sqliParser::TABLES, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::IN() {
  return getToken(sqliParser::IN, 0);
}

sqliParser::Database_nameContext* sqliParser::Show_specificationContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::GRANT() {
  return getToken(sqliParser::GRANT, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::ON() {
  return getToken(sqliParser::ON, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::ALL() {
  return getToken(sqliParser::ALL, 0);
}

sqliParser::Principal_nameContext* sqliParser::Show_specificationContext::principal_name() {
  return getRuleContext<sqliParser::Principal_nameContext>(0);
}

sqliParser::Principal_specificationContext* sqliParser::Show_specificationContext::principal_specification() {
  return getRuleContext<sqliParser::Principal_specificationContext>(0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::SERVER() {
  return getToken(sqliParser::SERVER, 0);
}

tree::TerminalNode* sqliParser::Show_specificationContext::ALIASES() {
  return getToken(sqliParser::ALIASES, 0);
}


size_t sqliParser::Show_specificationContext::getRuleIndex() const {
  return sqliParser::RuleShow_specification;
}

void sqliParser::Show_specificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShow_specification(this);
}

void sqliParser::Show_specificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShow_specification(this);
}


antlrcpp::Any sqliParser::Show_specificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitShow_specification(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Show_specificationContext* sqliParser::show_specification() {
  Show_specificationContext *_localctx = _tracker.createInstance<Show_specificationContext>(_ctx, getState());
  enterRule(_localctx, 130, sqliParser::RuleShow_specification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1032);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::CREATE: {
        enterOuterAlt(_localctx, 1);
        setState(998);
        match(sqliParser::CREATE);
        setState(999);
        _la = _input->LA(1);
        if (!(_la == sqliParser::TABLE || _la == sqliParser::VIEW)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1000);
        table_spec();
        break;
      }

      case sqliParser::COLUMNS: {
        enterOuterAlt(_localctx, 2);
        setState(1001);
        match(sqliParser::COLUMNS);
        setState(1002);
        match(sqliParser::FROM);
        setState(1003);
        table_spec();
        break;
      }

      case sqliParser::DATABASES:
      case sqliParser::SCHEMAS: {
        enterOuterAlt(_localctx, 3);
        setState(1004);
        _la = _input->LA(1);
        if (!(_la == sqliParser::DATABASES

        || _la == sqliParser::SCHEMAS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1007);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LIKE) {
          setState(1005);
          match(sqliParser::LIKE);
          setState(1006);
          match(sqliParser::TEXT_STRING);
        }
        break;
      }

      case sqliParser::TABLES: {
        enterOuterAlt(_localctx, 4);
        setState(1009);
        match(sqliParser::TABLES);
        setState(1012);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::IN) {
          setState(1010);
          match(sqliParser::IN);
          setState(1011);
          database_name();
        }
        setState(1015);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::TEXT_STRING) {
          setState(1014);
          match(sqliParser::TEXT_STRING);
        }
        break;
      }

      case sqliParser::GRANT: {
        enterOuterAlt(_localctx, 5);
        setState(1017);
        match(sqliParser::GRANT);
        setState(1020);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
        case 1: {
          setState(1018);
          principal_name();
          break;
        }

        case 2: {
          setState(1019);
          principal_specification();
          break;
        }

        }
        setState(1022);
        match(sqliParser::ON);
        setState(1028);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
        case 1: {
          setState(1023);
          match(sqliParser::ALL);
          break;
        }

        case 2: {
          setState(1025);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
          case 1: {
            setState(1024);
            match(sqliParser::TABLE);
            break;
          }

          }
          setState(1027);
          table_spec();
          break;
        }

        }
        break;
      }

      case sqliParser::SERVER: {
        enterOuterAlt(_localctx, 6);
        setState(1030);
        match(sqliParser::SERVER);
        setState(1031);
        match(sqliParser::ALIASES);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_event_statementContext ------------------------------------------------------------------

sqliParser::Set_event_statementContext::Set_event_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Set_event_statementContext::SET() {
  return getToken(sqliParser::SET, 0);
}

tree::TerminalNode* sqliParser::Set_event_statementContext::TABLE() {
  return getToken(sqliParser::TABLE, 0);
}

sqliParser::Table_specContext* sqliParser::Set_event_statementContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Set_event_statementContext::TO() {
  return getToken(sqliParser::TO, 0);
}

sqliParser::Server_alias_nameContext* sqliParser::Set_event_statementContext::server_alias_name() {
  return getRuleContext<sqliParser::Server_alias_nameContext>(0);
}

tree::TerminalNode* sqliParser::Set_event_statementContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}

sqliParser::Database_nameContext* sqliParser::Set_event_statementContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}


size_t sqliParser::Set_event_statementContext::getRuleIndex() const {
  return sqliParser::RuleSet_event_statement;
}

void sqliParser::Set_event_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_event_statement(this);
}

void sqliParser::Set_event_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_event_statement(this);
}


antlrcpp::Any sqliParser::Set_event_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSet_event_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Set_event_statementContext* sqliParser::set_event_statement() {
  Set_event_statementContext *_localctx = _tracker.createInstance<Set_event_statementContext>(_ctx, getState());
  enterRule(_localctx, 132, sqliParser::RuleSet_event_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1034);
    match(sqliParser::SET);
    setState(1035);
    match(sqliParser::TABLE);
    setState(1036);
    table_spec();
    setState(1037);
    match(sqliParser::TO);
    setState(1038);
    server_alias_name();
    setState(1039);
    match(sqliParser::DOT);
    setState(1040);
    database_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Use_event_statementContext ------------------------------------------------------------------

sqliParser::Use_event_statementContext::Use_event_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Use_event_statementContext::USE() {
  return getToken(sqliParser::USE, 0);
}

sqliParser::Database_nameContext* sqliParser::Use_event_statementContext::database_name() {
  return getRuleContext<sqliParser::Database_nameContext>(0);
}


size_t sqliParser::Use_event_statementContext::getRuleIndex() const {
  return sqliParser::RuleUse_event_statement;
}

void sqliParser::Use_event_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUse_event_statement(this);
}

void sqliParser::Use_event_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUse_event_statement(this);
}


antlrcpp::Any sqliParser::Use_event_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitUse_event_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Use_event_statementContext* sqliParser::use_event_statement() {
  Use_event_statementContext *_localctx = _tracker.createInstance<Use_event_statementContext>(_ctx, getState());
  enterRule(_localctx, 134, sqliParser::RuleUse_event_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1042);
    match(sqliParser::USE);
    setState(1043);
    database_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Server_event_statementContext ------------------------------------------------------------------

sqliParser::Server_event_statementContext::Server_event_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Server_event_statementContext::SERVER() {
  return getToken(sqliParser::SERVER, 0);
}

tree::TerminalNode* sqliParser::Server_event_statementContext::ALIAS() {
  return getToken(sqliParser::ALIAS, 0);
}

sqliParser::Server_alias_nameContext* sqliParser::Server_event_statementContext::server_alias_name() {
  return getRuleContext<sqliParser::Server_alias_nameContext>(0);
}


size_t sqliParser::Server_event_statementContext::getRuleIndex() const {
  return sqliParser::RuleServer_event_statement;
}

void sqliParser::Server_event_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterServer_event_statement(this);
}

void sqliParser::Server_event_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitServer_event_statement(this);
}


antlrcpp::Any sqliParser::Server_event_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitServer_event_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Server_event_statementContext* sqliParser::server_event_statement() {
  Server_event_statementContext *_localctx = _tracker.createInstance<Server_event_statementContext>(_ctx, getState());
  enterRule(_localctx, 136, sqliParser::RuleServer_event_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1045);
    match(sqliParser::SERVER);
    setState(1046);
    match(sqliParser::ALIAS);
    setState(1047);
    server_alias_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Update_statementsContext ------------------------------------------------------------------

sqliParser::Update_statementsContext::Update_statementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Update_statementsContext::UPDATE() {
  return getToken(sqliParser::UPDATE, 0);
}

sqliParser::Table_specContext* sqliParser::Update_statementsContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

sqliParser::Set_columns_cluaseContext* sqliParser::Update_statementsContext::set_columns_cluase() {
  return getRuleContext<sqliParser::Set_columns_cluaseContext>(0);
}

sqliParser::Where_clauseContext* sqliParser::Update_statementsContext::where_clause() {
  return getRuleContext<sqliParser::Where_clauseContext>(0);
}


size_t sqliParser::Update_statementsContext::getRuleIndex() const {
  return sqliParser::RuleUpdate_statements;
}

void sqliParser::Update_statementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdate_statements(this);
}

void sqliParser::Update_statementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdate_statements(this);
}


antlrcpp::Any sqliParser::Update_statementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitUpdate_statements(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Update_statementsContext* sqliParser::update_statements() {
  Update_statementsContext *_localctx = _tracker.createInstance<Update_statementsContext>(_ctx, getState());
  enterRule(_localctx, 138, sqliParser::RuleUpdate_statements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1049);
    match(sqliParser::UPDATE);
    setState(1050);
    table_spec();
    setState(1051);
    set_columns_cluase();
    setState(1052);
    where_clause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delete_statementsContext ------------------------------------------------------------------

sqliParser::Delete_statementsContext::Delete_statementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Delete_statementsContext::DELETE() {
  return getToken(sqliParser::DELETE, 0);
}

tree::TerminalNode* sqliParser::Delete_statementsContext::FROM() {
  return getToken(sqliParser::FROM, 0);
}

sqliParser::Table_specContext* sqliParser::Delete_statementsContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

sqliParser::Where_clauseContext* sqliParser::Delete_statementsContext::where_clause() {
  return getRuleContext<sqliParser::Where_clauseContext>(0);
}


size_t sqliParser::Delete_statementsContext::getRuleIndex() const {
  return sqliParser::RuleDelete_statements;
}

void sqliParser::Delete_statementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelete_statements(this);
}

void sqliParser::Delete_statementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelete_statements(this);
}


antlrcpp::Any sqliParser::Delete_statementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDelete_statements(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Delete_statementsContext* sqliParser::delete_statements() {
  Delete_statementsContext *_localctx = _tracker.createInstance<Delete_statementsContext>(_ctx, getState());
  enterRule(_localctx, 140, sqliParser::RuleDelete_statements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1054);
    match(sqliParser::DELETE);
    setState(1055);
    match(sqliParser::FROM);
    setState(1056);
    table_spec();
    setState(1058);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::WHERE) {
      setState(1057);
      where_clause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

sqliParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Exp_factor1Context *> sqliParser::ExpressionContext::exp_factor1() {
  return getRuleContexts<sqliParser::Exp_factor1Context>();
}

sqliParser::Exp_factor1Context* sqliParser::ExpressionContext::exp_factor1(size_t i) {
  return getRuleContext<sqliParser::Exp_factor1Context>(i);
}

tree::TerminalNode* sqliParser::ExpressionContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

std::vector<tree::TerminalNode *> sqliParser::ExpressionContext::OR() {
  return getTokens(sqliParser::OR);
}

tree::TerminalNode* sqliParser::ExpressionContext::OR(size_t i) {
  return getToken(sqliParser::OR, i);
}

std::vector<tree::TerminalNode *> sqliParser::ExpressionContext::XOR() {
  return getTokens(sqliParser::XOR);
}

tree::TerminalNode* sqliParser::ExpressionContext::XOR(size_t i) {
  return getToken(sqliParser::XOR, i);
}

std::vector<tree::TerminalNode *> sqliParser::ExpressionContext::AND() {
  return getTokens(sqliParser::AND);
}

tree::TerminalNode* sqliParser::ExpressionContext::AND(size_t i) {
  return getToken(sqliParser::AND, i);
}


size_t sqliParser::ExpressionContext::getRuleIndex() const {
  return sqliParser::RuleExpression;
}

void sqliParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void sqliParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any sqliParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::ExpressionContext* sqliParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 142, sqliParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1061);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      setState(1060);
      match(sqliParser::NOT);
      break;
    }

    }
    setState(1063);
    exp_factor1();
    setState(1068);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1064);
        _la = _input->LA(1);
        if (!(((((_la - 322) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 322)) & ((1ULL << (sqliParser::OR - 322))
          | (1ULL << (sqliParser::AND - 322))
          | (1ULL << (sqliParser::XOR - 322)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1065);
        exp_factor1(); 
      }
      setState(1070);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exp_factor1Context ------------------------------------------------------------------

sqliParser::Exp_factor1Context::Exp_factor1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Bool_primaryContext* sqliParser::Exp_factor1Context::bool_primary() {
  return getRuleContext<sqliParser::Bool_primaryContext>(0);
}

tree::TerminalNode* sqliParser::Exp_factor1Context::IS() {
  return getToken(sqliParser::IS, 0);
}

sqliParser::Boolean_literalContext* sqliParser::Exp_factor1Context::boolean_literal() {
  return getRuleContext<sqliParser::Boolean_literalContext>(0);
}

sqliParser::Null_or_notnullContext* sqliParser::Exp_factor1Context::null_or_notnull() {
  return getRuleContext<sqliParser::Null_or_notnullContext>(0);
}


size_t sqliParser::Exp_factor1Context::getRuleIndex() const {
  return sqliParser::RuleExp_factor1;
}

void sqliParser::Exp_factor1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp_factor1(this);
}

void sqliParser::Exp_factor1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp_factor1(this);
}


antlrcpp::Any sqliParser::Exp_factor1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitExp_factor1(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Exp_factor1Context* sqliParser::exp_factor1() {
  Exp_factor1Context *_localctx = _tracker.createInstance<Exp_factor1Context>(_ctx, getState());
  enterRule(_localctx, 144, sqliParser::RuleExp_factor1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1071);
    bool_primary();
    setState(1077);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      setState(1072);
      match(sqliParser::IS);
      setState(1075);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case sqliParser::TRUE:
        case sqliParser::FALSE: {
          setState(1073);
          boolean_literal();
          break;
        }

        case sqliParser::NOT:
        case sqliParser::CNULL: {
          setState(1074);
          null_or_notnull();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_primaryContext ------------------------------------------------------------------

sqliParser::Bool_primaryContext::Bool_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::PredicateContext* sqliParser::Bool_primaryContext::predicate() {
  return getRuleContext<sqliParser::PredicateContext>(0);
}

sqliParser::Relational_opContext* sqliParser::Bool_primaryContext::relational_op() {
  return getRuleContext<sqliParser::Relational_opContext>(0);
}

sqliParser::Predicate_quoteContext* sqliParser::Bool_primaryContext::predicate_quote() {
  return getRuleContext<sqliParser::Predicate_quoteContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Bool_primaryContext::LPAREN() {
  return getTokens(sqliParser::LPAREN);
}

tree::TerminalNode* sqliParser::Bool_primaryContext::LPAREN(size_t i) {
  return getToken(sqliParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Bool_primaryContext::RPAREN() {
  return getTokens(sqliParser::RPAREN);
}

tree::TerminalNode* sqliParser::Bool_primaryContext::RPAREN(size_t i) {
  return getToken(sqliParser::RPAREN, i);
}

sqliParser::Predicate_expContext* sqliParser::Bool_primaryContext::predicate_exp() {
  return getRuleContext<sqliParser::Predicate_expContext>(0);
}


size_t sqliParser::Bool_primaryContext::getRuleIndex() const {
  return sqliParser::RuleBool_primary;
}

void sqliParser::Bool_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_primary(this);
}

void sqliParser::Bool_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_primary(this);
}


antlrcpp::Any sqliParser::Bool_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitBool_primary(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Bool_primaryContext* sqliParser::bool_primary() {
  Bool_primaryContext *_localctx = _tracker.createInstance<Bool_primaryContext>(_ctx, getState());
  enterRule(_localctx, 146, sqliParser::RuleBool_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1079);
      predicate();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1083);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1080);
          match(sqliParser::LPAREN); 
        }
        setState(1085);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx);
      }
      setState(1086);
      predicate();
      setState(1087);
      relational_op();
      setState(1088);
      predicate_quote();
      setState(1092);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1089);
          match(sqliParser::RPAREN); 
        }
        setState(1094);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1098);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1095);
          match(sqliParser::LPAREN); 
        }
        setState(1100);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx);
      }
      setState(1101);
      predicate();
      setState(1102);
      predicate_exp();
      setState(1106);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1103);
          match(sqliParser::RPAREN); 
        }
        setState(1108);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Predicate_quoteContext ------------------------------------------------------------------

sqliParser::Predicate_quoteContext::Predicate_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Bit_expr_quoteContext* sqliParser::Predicate_quoteContext::bit_expr_quote() {
  return getRuleContext<sqliParser::Bit_expr_quoteContext>(0);
}

sqliParser::Predicate_exp_quoteContext* sqliParser::Predicate_quoteContext::predicate_exp_quote() {
  return getRuleContext<sqliParser::Predicate_exp_quoteContext>(0);
}


size_t sqliParser::Predicate_quoteContext::getRuleIndex() const {
  return sqliParser::RulePredicate_quote;
}

void sqliParser::Predicate_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicate_quote(this);
}

void sqliParser::Predicate_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicate_quote(this);
}


antlrcpp::Any sqliParser::Predicate_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPredicate_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Predicate_quoteContext* sqliParser::predicate_quote() {
  Predicate_quoteContext *_localctx = _tracker.createInstance<Predicate_quoteContext>(_ctx, getState());
  enterRule(_localctx, 148, sqliParser::RulePredicate_quote);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1111);
    bit_expr_quote();
    setState(1113);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      setState(1112);
      predicate_exp_quote();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Predicate_exp_quoteContext ------------------------------------------------------------------

sqliParser::Predicate_exp_quoteContext::Predicate_exp_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::IN() {
  return getToken(sqliParser::IN, 0);
}

sqliParser::SubqueryContext* sqliParser::Predicate_exp_quoteContext::subquery() {
  return getRuleContext<sqliParser::SubqueryContext>(0);
}

sqliParser::Column_value_listContext* sqliParser::Predicate_exp_quoteContext::column_value_list() {
  return getRuleContext<sqliParser::Column_value_listContext>(0);
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::BETWEEN() {
  return getToken(sqliParser::BETWEEN, 0);
}

std::vector<sqliParser::Bit_exprContext *> sqliParser::Predicate_exp_quoteContext::bit_expr() {
  return getRuleContexts<sqliParser::Bit_exprContext>();
}

sqliParser::Bit_exprContext* sqliParser::Predicate_exp_quoteContext::bit_expr(size_t i) {
  return getRuleContext<sqliParser::Bit_exprContext>(i);
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::AND() {
  return getToken(sqliParser::AND, 0);
}

sqliParser::Simple_expr_quoteContext* sqliParser::Predicate_exp_quoteContext::simple_expr_quote() {
  return getRuleContext<sqliParser::Simple_expr_quoteContext>(0);
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::LIKE() {
  return getToken(sqliParser::LIKE, 0);
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::RLIKE() {
  return getToken(sqliParser::RLIKE, 0);
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Predicate_exp_quoteContext::LPAREN() {
  return getTokens(sqliParser::LPAREN);
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::LPAREN(size_t i) {
  return getToken(sqliParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Predicate_exp_quoteContext::RPAREN() {
  return getTokens(sqliParser::RPAREN);
}

tree::TerminalNode* sqliParser::Predicate_exp_quoteContext::RPAREN(size_t i) {
  return getToken(sqliParser::RPAREN, i);
}


size_t sqliParser::Predicate_exp_quoteContext::getRuleIndex() const {
  return sqliParser::RulePredicate_exp_quote;
}

void sqliParser::Predicate_exp_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicate_exp_quote(this);
}

void sqliParser::Predicate_exp_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicate_exp_quote(this);
}


antlrcpp::Any sqliParser::Predicate_exp_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPredicate_exp_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Predicate_exp_quoteContext* sqliParser::predicate_exp_quote() {
  Predicate_exp_quoteContext *_localctx = _tracker.createInstance<Predicate_exp_quoteContext>(_ctx, getState());
  enterRule(_localctx, 150, sqliParser::RulePredicate_exp_quote);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::IN: {
        enterOuterAlt(_localctx, 1);
        setState(1115);
        match(sqliParser::IN);
        setState(1118);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
        case 1: {
          setState(1116);
          subquery();
          break;
        }

        case 2: {
          setState(1117);
          column_value_list();
          break;
        }

        }
        break;
      }

      case sqliParser::BETWEEN: {
        enterOuterAlt(_localctx, 2);
        setState(1120);
        match(sqliParser::BETWEEN);
        setState(1121);
        bit_expr();
        setState(1122);
        match(sqliParser::AND);
        setState(1123);
        bit_expr();
        break;
      }

      case sqliParser::NOT:
      case sqliParser::LIKE:
      case sqliParser::RLIKE: {
        enterOuterAlt(_localctx, 3);
        setState(1126);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT) {
          setState(1125);
          match(sqliParser::NOT);
        }
        setState(1128);
        _la = _input->LA(1);
        if (!(_la == sqliParser::LIKE || _la == sqliParser::RLIKE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1132);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1129);
            match(sqliParser::LPAREN); 
          }
          setState(1134);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
        }
        setState(1135);
        simple_expr_quote();
        setState(1139);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1136);
            match(sqliParser::RPAREN); 
          }
          setState(1141);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bit_expr_quoteContext ------------------------------------------------------------------

sqliParser::Bit_expr_quoteContext::Bit_expr_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Factor1_quoteContext *> sqliParser::Bit_expr_quoteContext::factor1_quote() {
  return getRuleContexts<sqliParser::Factor1_quoteContext>();
}

sqliParser::Factor1_quoteContext* sqliParser::Bit_expr_quoteContext::factor1_quote(size_t i) {
  return getRuleContext<sqliParser::Factor1_quoteContext>(i);
}

tree::TerminalNode* sqliParser::Bit_expr_quoteContext::VERTBAR() {
  return getToken(sqliParser::VERTBAR, 0);
}

tree::TerminalNode* sqliParser::Bit_expr_quoteContext::BITAND() {
  return getToken(sqliParser::BITAND, 0);
}

tree::TerminalNode* sqliParser::Bit_expr_quoteContext::PLUS() {
  return getToken(sqliParser::PLUS, 0);
}

tree::TerminalNode* sqliParser::Bit_expr_quoteContext::MINUS() {
  return getToken(sqliParser::MINUS, 0);
}

sqliParser::Interval_exprContext* sqliParser::Bit_expr_quoteContext::interval_expr() {
  return getRuleContext<sqliParser::Interval_exprContext>(0);
}


size_t sqliParser::Bit_expr_quoteContext::getRuleIndex() const {
  return sqliParser::RuleBit_expr_quote;
}

void sqliParser::Bit_expr_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBit_expr_quote(this);
}

void sqliParser::Bit_expr_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBit_expr_quote(this);
}


antlrcpp::Any sqliParser::Bit_expr_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitBit_expr_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Bit_expr_quoteContext* sqliParser::bit_expr_quote() {
  Bit_expr_quoteContext *_localctx = _tracker.createInstance<Bit_expr_quoteContext>(_ctx, getState());
  enterRule(_localctx, 152, sqliParser::RuleBit_expr_quote);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1144);
    factor1_quote();
    setState(1150);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx)) {
    case 1: {
      setState(1145);
      _la = _input->LA(1);
      if (!(((((_la - 342) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 342)) & ((1ULL << (sqliParser::PLUS - 342))
        | (1ULL << (sqliParser::MINUS - 342))
        | (1ULL << (sqliParser::VERTBAR - 342))
        | (1ULL << (sqliParser::BITAND - 342)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1148);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
      case 1: {
        setState(1146);
        factor1_quote();
        break;
      }

      case 2: {
        setState(1147);
        interval_expr();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Factor1_quoteContext ------------------------------------------------------------------

sqliParser::Factor1_quoteContext::Factor1_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Factor2_quoteContext *> sqliParser::Factor1_quoteContext::factor2_quote() {
  return getRuleContexts<sqliParser::Factor2_quoteContext>();
}

sqliParser::Factor2_quoteContext* sqliParser::Factor1_quoteContext::factor2_quote(size_t i) {
  return getRuleContext<sqliParser::Factor2_quoteContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1_quoteContext::PLUS() {
  return getTokens(sqliParser::PLUS);
}

tree::TerminalNode* sqliParser::Factor1_quoteContext::PLUS(size_t i) {
  return getToken(sqliParser::PLUS, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1_quoteContext::MINUS() {
  return getTokens(sqliParser::MINUS);
}

tree::TerminalNode* sqliParser::Factor1_quoteContext::MINUS(size_t i) {
  return getToken(sqliParser::MINUS, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1_quoteContext::ASTERISK() {
  return getTokens(sqliParser::ASTERISK);
}

tree::TerminalNode* sqliParser::Factor1_quoteContext::ASTERISK(size_t i) {
  return getToken(sqliParser::ASTERISK, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1_quoteContext::DIVIDE() {
  return getTokens(sqliParser::DIVIDE);
}

tree::TerminalNode* sqliParser::Factor1_quoteContext::DIVIDE(size_t i) {
  return getToken(sqliParser::DIVIDE, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1_quoteContext::MOD() {
  return getTokens(sqliParser::MOD);
}

tree::TerminalNode* sqliParser::Factor1_quoteContext::MOD(size_t i) {
  return getToken(sqliParser::MOD, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1_quoteContext::POWER_OP() {
  return getTokens(sqliParser::POWER_OP);
}

tree::TerminalNode* sqliParser::Factor1_quoteContext::POWER_OP(size_t i) {
  return getToken(sqliParser::POWER_OP, i);
}


size_t sqliParser::Factor1_quoteContext::getRuleIndex() const {
  return sqliParser::RuleFactor1_quote;
}

void sqliParser::Factor1_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor1_quote(this);
}

void sqliParser::Factor1_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor1_quote(this);
}


antlrcpp::Any sqliParser::Factor1_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitFactor1_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Factor1_quoteContext* sqliParser::factor1_quote() {
  Factor1_quoteContext *_localctx = _tracker.createInstance<Factor1_quoteContext>(_ctx, getState());
  enterRule(_localctx, 154, sqliParser::RuleFactor1_quote);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1152);
    factor2_quote();
    setState(1157);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1153);
        _la = _input->LA(1);
        if (!(((((_la - 320) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 320)) & ((1ULL << (sqliParser::DIVIDE - 320))
          | (1ULL << (sqliParser::MOD - 320))
          | (1ULL << (sqliParser::ASTERISK - 320))
          | (1ULL << (sqliParser::PLUS - 320))
          | (1ULL << (sqliParser::MINUS - 320))
          | (1ULL << (sqliParser::POWER_OP - 320)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1154);
        factor2_quote(); 
      }
      setState(1159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Factor2_quoteContext ------------------------------------------------------------------

sqliParser::Factor2_quoteContext::Factor2_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Simple_expr_quoteContext* sqliParser::Factor2_quoteContext::simple_expr_quote() {
  return getRuleContext<sqliParser::Simple_expr_quoteContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Factor2_quoteContext::LPAREN() {
  return getTokens(sqliParser::LPAREN);
}

tree::TerminalNode* sqliParser::Factor2_quoteContext::LPAREN(size_t i) {
  return getToken(sqliParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor2_quoteContext::RPAREN() {
  return getTokens(sqliParser::RPAREN);
}

tree::TerminalNode* sqliParser::Factor2_quoteContext::RPAREN(size_t i) {
  return getToken(sqliParser::RPAREN, i);
}


size_t sqliParser::Factor2_quoteContext::getRuleIndex() const {
  return sqliParser::RuleFactor2_quote;
}

void sqliParser::Factor2_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor2_quote(this);
}

void sqliParser::Factor2_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor2_quote(this);
}


antlrcpp::Any sqliParser::Factor2_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitFactor2_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Factor2_quoteContext* sqliParser::factor2_quote() {
  Factor2_quoteContext *_localctx = _tracker.createInstance<Factor2_quoteContext>(_ctx, getState());
  enterRule(_localctx, 156, sqliParser::RuleFactor2_quote);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1163);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1160);
        match(sqliParser::LPAREN); 
      }
      setState(1165);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
    }
    setState(1166);
    simple_expr_quote();
    setState(1170);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1167);
        match(sqliParser::RPAREN); 
      }
      setState(1172);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_expr_quoteContext ------------------------------------------------------------------

sqliParser::Simple_expr_quoteContext::Simple_expr_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_spec_quoteContext* sqliParser::Simple_expr_quoteContext::column_spec_quote() {
  return getRuleContext<sqliParser::Column_spec_quoteContext>(0);
}

sqliParser::Function_callContext* sqliParser::Simple_expr_quoteContext::function_call() {
  return getRuleContext<sqliParser::Function_callContext>(0);
}

sqliParser::Case_when_statementContext* sqliParser::Simple_expr_quoteContext::case_when_statement() {
  return getRuleContext<sqliParser::Case_when_statementContext>(0);
}

sqliParser::SubqueryContext* sqliParser::Simple_expr_quoteContext::subquery() {
  return getRuleContext<sqliParser::SubqueryContext>(0);
}

tree::TerminalNode* sqliParser::Simple_expr_quoteContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

tree::TerminalNode* sqliParser::Simple_expr_quoteContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}


size_t sqliParser::Simple_expr_quoteContext::getRuleIndex() const {
  return sqliParser::RuleSimple_expr_quote;
}

void sqliParser::Simple_expr_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_expr_quote(this);
}

void sqliParser::Simple_expr_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_expr_quote(this);
}


antlrcpp::Any sqliParser::Simple_expr_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSimple_expr_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Simple_expr_quoteContext* sqliParser::simple_expr_quote() {
  Simple_expr_quoteContext *_localctx = _tracker.createInstance<Simple_expr_quoteContext>(_ctx, getState());
  enterRule(_localctx, 158, sqliParser::RuleSimple_expr_quote);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1173);
      column_spec_quote();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1174);
      function_call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1175);
      case_when_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1177);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::NOT) {
        setState(1176);
        match(sqliParser::NOT);
      }
      setState(1180);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::EXISTS) {
        setState(1179);
        match(sqliParser::EXISTS);
      }
      setState(1182);
      subquery();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_spec_quoteContext ------------------------------------------------------------------

sqliParser::Column_spec_quoteContext::Column_spec_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_name_quoteContext* sqliParser::Column_spec_quoteContext::column_name_quote() {
  return getRuleContext<sqliParser::Column_name_quoteContext>(0);
}

sqliParser::Table_specContext* sqliParser::Column_spec_quoteContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Column_spec_quoteContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}


size_t sqliParser::Column_spec_quoteContext::getRuleIndex() const {
  return sqliParser::RuleColumn_spec_quote;
}

void sqliParser::Column_spec_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_spec_quote(this);
}

void sqliParser::Column_spec_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_spec_quote(this);
}


antlrcpp::Any sqliParser::Column_spec_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_spec_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_spec_quoteContext* sqliParser::column_spec_quote() {
  Column_spec_quoteContext *_localctx = _tracker.createInstance<Column_spec_quoteContext>(_ctx, getState());
  enterRule(_localctx, 160, sqliParser::RuleColumn_spec_quote);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1188);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
    case 1: {
      setState(1185);
      table_spec();
      setState(1186);
      match(sqliParser::DOT);
      break;
    }

    }

    setState(1190);
    column_name_quote();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_name_quoteContext ------------------------------------------------------------------

sqliParser::Column_name_quoteContext::Column_name_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_name_quoteContext* sqliParser::Column_name_quoteContext::any_name_quote() {
  return getRuleContext<sqliParser::Any_name_quoteContext>(0);
}


size_t sqliParser::Column_name_quoteContext::getRuleIndex() const {
  return sqliParser::RuleColumn_name_quote;
}

void sqliParser::Column_name_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_name_quote(this);
}

void sqliParser::Column_name_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_name_quote(this);
}


antlrcpp::Any sqliParser::Column_name_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_name_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_name_quoteContext* sqliParser::column_name_quote() {
  Column_name_quoteContext *_localctx = _tracker.createInstance<Column_name_quoteContext>(_ctx, getState());
  enterRule(_localctx, 162, sqliParser::RuleColumn_name_quote);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1192);
    any_name_quote();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Any_name_quoteContext ------------------------------------------------------------------

sqliParser::Any_name_quoteContext::Any_name_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Number_literalContext* sqliParser::Any_name_quoteContext::number_literal() {
  return getRuleContext<sqliParser::Number_literalContext>(0);
}

sqliParser::String_literalContext* sqliParser::Any_name_quoteContext::string_literal() {
  return getRuleContext<sqliParser::String_literalContext>(0);
}

sqliParser::Function_callContext* sqliParser::Any_name_quoteContext::function_call() {
  return getRuleContext<sqliParser::Function_callContext>(0);
}

tree::TerminalNode* sqliParser::Any_name_quoteContext::HEX_DIGIT() {
  return getToken(sqliParser::HEX_DIGIT, 0);
}


size_t sqliParser::Any_name_quoteContext::getRuleIndex() const {
  return sqliParser::RuleAny_name_quote;
}

void sqliParser::Any_name_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAny_name_quote(this);
}

void sqliParser::Any_name_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAny_name_quote(this);
}


antlrcpp::Any sqliParser::Any_name_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitAny_name_quote(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Any_name_quoteContext* sqliParser::any_name_quote() {
  Any_name_quoteContext *_localctx = _tracker.createInstance<Any_name_quoteContext>(_ctx, getState());
  enterRule(_localctx, 164, sqliParser::RuleAny_name_quote);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1195);
      number_literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1196);
      string_literal();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1197);
      function_call();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1198);
      match(sqliParser::HEX_DIGIT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

sqliParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Bit_exprContext* sqliParser::PredicateContext::bit_expr() {
  return getRuleContext<sqliParser::Bit_exprContext>(0);
}

sqliParser::Predicate_expContext* sqliParser::PredicateContext::predicate_exp() {
  return getRuleContext<sqliParser::Predicate_expContext>(0);
}


size_t sqliParser::PredicateContext::getRuleIndex() const {
  return sqliParser::RulePredicate;
}

void sqliParser::PredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicate(this);
}

void sqliParser::PredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicate(this);
}


antlrcpp::Any sqliParser::PredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPredicate(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::PredicateContext* sqliParser::predicate() {
  PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, getState());
  enterRule(_localctx, 166, sqliParser::RulePredicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1201);
    bit_expr();
    setState(1203);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx)) {
    case 1: {
      setState(1202);
      predicate_exp();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Predicate_expContext ------------------------------------------------------------------

sqliParser::Predicate_expContext::Predicate_expContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Predicate_expContext::IN() {
  return getToken(sqliParser::IN, 0);
}

sqliParser::SubqueryContext* sqliParser::Predicate_expContext::subquery() {
  return getRuleContext<sqliParser::SubqueryContext>(0);
}

sqliParser::Column_value_listContext* sqliParser::Predicate_expContext::column_value_list() {
  return getRuleContext<sqliParser::Column_value_listContext>(0);
}

tree::TerminalNode* sqliParser::Predicate_expContext::BETWEEN() {
  return getToken(sqliParser::BETWEEN, 0);
}

std::vector<sqliParser::Bit_exprContext *> sqliParser::Predicate_expContext::bit_expr() {
  return getRuleContexts<sqliParser::Bit_exprContext>();
}

sqliParser::Bit_exprContext* sqliParser::Predicate_expContext::bit_expr(size_t i) {
  return getRuleContext<sqliParser::Bit_exprContext>(i);
}

tree::TerminalNode* sqliParser::Predicate_expContext::AND() {
  return getToken(sqliParser::AND, 0);
}

sqliParser::Simple_exprContext* sqliParser::Predicate_expContext::simple_expr() {
  return getRuleContext<sqliParser::Simple_exprContext>(0);
}

tree::TerminalNode* sqliParser::Predicate_expContext::LIKE() {
  return getToken(sqliParser::LIKE, 0);
}

tree::TerminalNode* sqliParser::Predicate_expContext::RLIKE() {
  return getToken(sqliParser::RLIKE, 0);
}

tree::TerminalNode* sqliParser::Predicate_expContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Predicate_expContext::LPAREN() {
  return getTokens(sqliParser::LPAREN);
}

tree::TerminalNode* sqliParser::Predicate_expContext::LPAREN(size_t i) {
  return getToken(sqliParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Predicate_expContext::RPAREN() {
  return getTokens(sqliParser::RPAREN);
}

tree::TerminalNode* sqliParser::Predicate_expContext::RPAREN(size_t i) {
  return getToken(sqliParser::RPAREN, i);
}


size_t sqliParser::Predicate_expContext::getRuleIndex() const {
  return sqliParser::RulePredicate_exp;
}

void sqliParser::Predicate_expContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicate_exp(this);
}

void sqliParser::Predicate_expContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicate_exp(this);
}


antlrcpp::Any sqliParser::Predicate_expContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPredicate_exp(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Predicate_expContext* sqliParser::predicate_exp() {
  Predicate_expContext *_localctx = _tracker.createInstance<Predicate_expContext>(_ctx, getState());
  enterRule(_localctx, 168, sqliParser::RulePredicate_exp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1232);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::IN: {
        enterOuterAlt(_localctx, 1);
        setState(1205);
        match(sqliParser::IN);
        setState(1208);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
        case 1: {
          setState(1206);
          subquery();
          break;
        }

        case 2: {
          setState(1207);
          column_value_list();
          break;
        }

        }
        break;
      }

      case sqliParser::BETWEEN: {
        enterOuterAlt(_localctx, 2);
        setState(1210);
        match(sqliParser::BETWEEN);
        setState(1211);
        bit_expr();
        setState(1212);
        match(sqliParser::AND);
        setState(1213);
        bit_expr();
        break;
      }

      case sqliParser::NOT:
      case sqliParser::LIKE:
      case sqliParser::RLIKE: {
        enterOuterAlt(_localctx, 3);
        setState(1216);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::NOT) {
          setState(1215);
          match(sqliParser::NOT);
        }
        setState(1218);
        _la = _input->LA(1);
        if (!(_la == sqliParser::LIKE || _la == sqliParser::RLIKE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1222);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1219);
            match(sqliParser::LPAREN); 
          }
          setState(1224);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx);
        }
        setState(1225);
        simple_expr();
        setState(1229);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1226);
            match(sqliParser::RPAREN); 
          }
          setState(1231);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bit_exprContext ------------------------------------------------------------------

sqliParser::Bit_exprContext::Bit_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Factor1Context *> sqliParser::Bit_exprContext::factor1() {
  return getRuleContexts<sqliParser::Factor1Context>();
}

sqliParser::Factor1Context* sqliParser::Bit_exprContext::factor1(size_t i) {
  return getRuleContext<sqliParser::Factor1Context>(i);
}

tree::TerminalNode* sqliParser::Bit_exprContext::VERTBAR() {
  return getToken(sqliParser::VERTBAR, 0);
}

tree::TerminalNode* sqliParser::Bit_exprContext::BITAND() {
  return getToken(sqliParser::BITAND, 0);
}

tree::TerminalNode* sqliParser::Bit_exprContext::PLUS() {
  return getToken(sqliParser::PLUS, 0);
}

tree::TerminalNode* sqliParser::Bit_exprContext::MINUS() {
  return getToken(sqliParser::MINUS, 0);
}

sqliParser::Interval_exprContext* sqliParser::Bit_exprContext::interval_expr() {
  return getRuleContext<sqliParser::Interval_exprContext>(0);
}


size_t sqliParser::Bit_exprContext::getRuleIndex() const {
  return sqliParser::RuleBit_expr;
}

void sqliParser::Bit_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBit_expr(this);
}

void sqliParser::Bit_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBit_expr(this);
}


antlrcpp::Any sqliParser::Bit_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitBit_expr(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Bit_exprContext* sqliParser::bit_expr() {
  Bit_exprContext *_localctx = _tracker.createInstance<Bit_exprContext>(_ctx, getState());
  enterRule(_localctx, 170, sqliParser::RuleBit_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1234);
    factor1();
    setState(1240);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1235);
      _la = _input->LA(1);
      if (!(((((_la - 342) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 342)) & ((1ULL << (sqliParser::PLUS - 342))
        | (1ULL << (sqliParser::MINUS - 342))
        | (1ULL << (sqliParser::VERTBAR - 342))
        | (1ULL << (sqliParser::BITAND - 342)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1238);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
      case 1: {
        setState(1236);
        factor1();
        break;
      }

      case 2: {
        setState(1237);
        interval_expr();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Factor1Context ------------------------------------------------------------------

sqliParser::Factor1Context::Factor1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Factor2Context *> sqliParser::Factor1Context::factor2() {
  return getRuleContexts<sqliParser::Factor2Context>();
}

sqliParser::Factor2Context* sqliParser::Factor1Context::factor2(size_t i) {
  return getRuleContext<sqliParser::Factor2Context>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1Context::PLUS() {
  return getTokens(sqliParser::PLUS);
}

tree::TerminalNode* sqliParser::Factor1Context::PLUS(size_t i) {
  return getToken(sqliParser::PLUS, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1Context::MINUS() {
  return getTokens(sqliParser::MINUS);
}

tree::TerminalNode* sqliParser::Factor1Context::MINUS(size_t i) {
  return getToken(sqliParser::MINUS, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1Context::ASTERISK() {
  return getTokens(sqliParser::ASTERISK);
}

tree::TerminalNode* sqliParser::Factor1Context::ASTERISK(size_t i) {
  return getToken(sqliParser::ASTERISK, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1Context::DIVIDE() {
  return getTokens(sqliParser::DIVIDE);
}

tree::TerminalNode* sqliParser::Factor1Context::DIVIDE(size_t i) {
  return getToken(sqliParser::DIVIDE, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1Context::MOD() {
  return getTokens(sqliParser::MOD);
}

tree::TerminalNode* sqliParser::Factor1Context::MOD(size_t i) {
  return getToken(sqliParser::MOD, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor1Context::POWER_OP() {
  return getTokens(sqliParser::POWER_OP);
}

tree::TerminalNode* sqliParser::Factor1Context::POWER_OP(size_t i) {
  return getToken(sqliParser::POWER_OP, i);
}


size_t sqliParser::Factor1Context::getRuleIndex() const {
  return sqliParser::RuleFactor1;
}

void sqliParser::Factor1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor1(this);
}

void sqliParser::Factor1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor1(this);
}


antlrcpp::Any sqliParser::Factor1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitFactor1(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Factor1Context* sqliParser::factor1() {
  Factor1Context *_localctx = _tracker.createInstance<Factor1Context>(_ctx, getState());
  enterRule(_localctx, 172, sqliParser::RuleFactor1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1242);
    factor2();
    setState(1247);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1243);
        _la = _input->LA(1);
        if (!(((((_la - 320) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 320)) & ((1ULL << (sqliParser::DIVIDE - 320))
          | (1ULL << (sqliParser::MOD - 320))
          | (1ULL << (sqliParser::ASTERISK - 320))
          | (1ULL << (sqliParser::PLUS - 320))
          | (1ULL << (sqliParser::MINUS - 320))
          | (1ULL << (sqliParser::POWER_OP - 320)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1244);
        factor2(); 
      }
      setState(1249);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Factor2Context ------------------------------------------------------------------

sqliParser::Factor2Context::Factor2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Simple_exprContext* sqliParser::Factor2Context::simple_expr() {
  return getRuleContext<sqliParser::Simple_exprContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Factor2Context::LPAREN() {
  return getTokens(sqliParser::LPAREN);
}

tree::TerminalNode* sqliParser::Factor2Context::LPAREN(size_t i) {
  return getToken(sqliParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Factor2Context::RPAREN() {
  return getTokens(sqliParser::RPAREN);
}

tree::TerminalNode* sqliParser::Factor2Context::RPAREN(size_t i) {
  return getToken(sqliParser::RPAREN, i);
}


size_t sqliParser::Factor2Context::getRuleIndex() const {
  return sqliParser::RuleFactor2;
}

void sqliParser::Factor2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor2(this);
}

void sqliParser::Factor2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor2(this);
}


antlrcpp::Any sqliParser::Factor2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitFactor2(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Factor2Context* sqliParser::factor2() {
  Factor2Context *_localctx = _tracker.createInstance<Factor2Context>(_ctx, getState());
  enterRule(_localctx, 174, sqliParser::RuleFactor2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1253);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1250);
        match(sqliParser::LPAREN); 
      }
      setState(1255);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx);
    }
    setState(1256);
    simple_expr();
    setState(1260);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1257);
        match(sqliParser::RPAREN); 
      }
      setState(1262);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_exprContext ------------------------------------------------------------------

sqliParser::Simple_exprContext::Simple_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Column_specContext* sqliParser::Simple_exprContext::column_spec() {
  return getRuleContext<sqliParser::Column_specContext>(0);
}

sqliParser::Function_callContext* sqliParser::Simple_exprContext::function_call() {
  return getRuleContext<sqliParser::Function_callContext>(0);
}

sqliParser::Case_when_statementContext* sqliParser::Simple_exprContext::case_when_statement() {
  return getRuleContext<sqliParser::Case_when_statementContext>(0);
}

sqliParser::Expression_listContext* sqliParser::Simple_exprContext::expression_list() {
  return getRuleContext<sqliParser::Expression_listContext>(0);
}

sqliParser::SubqueryContext* sqliParser::Simple_exprContext::subquery() {
  return getRuleContext<sqliParser::SubqueryContext>(0);
}

tree::TerminalNode* sqliParser::Simple_exprContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

tree::TerminalNode* sqliParser::Simple_exprContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}

sqliParser::Interval_exprContext* sqliParser::Simple_exprContext::interval_expr() {
  return getRuleContext<sqliParser::Interval_exprContext>(0);
}


size_t sqliParser::Simple_exprContext::getRuleIndex() const {
  return sqliParser::RuleSimple_expr;
}

void sqliParser::Simple_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_expr(this);
}

void sqliParser::Simple_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_expr(this);
}


antlrcpp::Any sqliParser::Simple_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSimple_expr(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Simple_exprContext* sqliParser::simple_expr() {
  Simple_exprContext *_localctx = _tracker.createInstance<Simple_exprContext>(_ctx, getState());
  enterRule(_localctx, 176, sqliParser::RuleSimple_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1263);
      column_spec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1264);
      function_call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1265);
      case_when_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1266);
      expression_list();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1268);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::NOT) {
        setState(1267);
        match(sqliParser::NOT);
      }
      setState(1271);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::EXISTS) {
        setState(1270);
        match(sqliParser::EXISTS);
      }
      setState(1273);
      subquery();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1274);
      interval_expr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

sqliParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::FunctionListContext* sqliParser::Function_callContext::functionList() {
  return getRuleContext<sqliParser::FunctionListContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Function_callContext::UNQUOTE() {
  return getTokens(sqliParser::UNQUOTE);
}

tree::TerminalNode* sqliParser::Function_callContext::UNQUOTE(size_t i) {
  return getToken(sqliParser::UNQUOTE, i);
}

tree::TerminalNode* sqliParser::Function_callContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

tree::TerminalNode* sqliParser::Function_callContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

sqliParser::Relational_opContext* sqliParser::Function_callContext::relational_op() {
  return getRuleContext<sqliParser::Relational_opContext>(0);
}

sqliParser::Number_literalContext* sqliParser::Function_callContext::number_literal() {
  return getRuleContext<sqliParser::Number_literalContext>(0);
}

std::vector<sqliParser::ExpressionContext *> sqliParser::Function_callContext::expression() {
  return getRuleContexts<sqliParser::ExpressionContext>();
}

sqliParser::ExpressionContext* sqliParser::Function_callContext::expression(size_t i) {
  return getRuleContext<sqliParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Function_callContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Function_callContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}

tree::TerminalNode* sqliParser::Function_callContext::CAST() {
  return getToken(sqliParser::CAST, 0);
}

tree::TerminalNode* sqliParser::Function_callContext::AS() {
  return getToken(sqliParser::AS, 0);
}

sqliParser::Cast_data_typeContext* sqliParser::Function_callContext::cast_data_type() {
  return getRuleContext<sqliParser::Cast_data_typeContext>(0);
}

sqliParser::Group_functionsContext* sqliParser::Function_callContext::group_functions() {
  return getRuleContext<sqliParser::Group_functionsContext>(0);
}

tree::TerminalNode* sqliParser::Function_callContext::ASTERISK() {
  return getToken(sqliParser::ASTERISK, 0);
}

sqliParser::Bit_exprContext* sqliParser::Function_callContext::bit_expr() {
  return getRuleContext<sqliParser::Bit_exprContext>(0);
}

tree::TerminalNode* sqliParser::Function_callContext::ALL() {
  return getToken(sqliParser::ALL, 0);
}

tree::TerminalNode* sqliParser::Function_callContext::DISTINCT() {
  return getToken(sqliParser::DISTINCT, 0);
}


size_t sqliParser::Function_callContext::getRuleIndex() const {
  return sqliParser::RuleFunction_call;
}

void sqliParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void sqliParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


antlrcpp::Any sqliParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Function_callContext* sqliParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 178, sqliParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1321);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1278);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::UNQUOTE) {
        setState(1277);
        match(sqliParser::UNQUOTE);
      }
      setState(1280);
      functionList();
      setState(1282);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
      case 1: {
        setState(1281);
        match(sqliParser::UNQUOTE);
        break;
      }

      }
      setState(1296);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
      case 1: {
        setState(1284);
        match(sqliParser::LPAREN);
        setState(1293);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << sqliParser::TRUE)
          | (1ULL << sqliParser::FALSE)
          | (1ULL << sqliParser::ALL)
          | (1ULL << sqliParser::NOT)
          | (1ULL << sqliParser::LIKE)
          | (1ULL << sqliParser::CHARACTER)
          | (1ULL << sqliParser::IF)
          | (1ULL << sqliParser::EXISTS)
          | (1ULL << sqliParser::ASC)
          | (1ULL << sqliParser::DESC)
          | (1ULL << sqliParser::BY)
          | (1ULL << sqliParser::HAVING)
          | (1ULL << sqliParser::WHERE)
          | (1ULL << sqliParser::AS)
          | (1ULL << sqliParser::SELECT)
          | (1ULL << sqliParser::DISTINCT)
          | (1ULL << sqliParser::INSERT)
          | (1ULL << sqliParser::OVERWRITE)
          | (1ULL << sqliParser::OUTER)
          | (1ULL << sqliParser::UNIQUEJOIN)
          | (1ULL << sqliParser::PRESERVE)
          | (1ULL << sqliParser::JOIN)
          | (1ULL << sqliParser::LEFT)
          | (1ULL << sqliParser::RIGHT)
          | (1ULL << sqliParser::FULL)
          | (1ULL << sqliParser::ON)
          | (1ULL << sqliParser::PARTITION)
          | (1ULL << sqliParser::PARTITIONS)
          | (1ULL << sqliParser::TABLE)
          | (1ULL << sqliParser::TABLES)
          | (1ULL << sqliParser::COLUMNS)
          | (1ULL << sqliParser::INDEX)
          | (1ULL << sqliParser::INDEXES)
          | (1ULL << sqliParser::REBUILD)
          | (1ULL << sqliParser::FUNCTIONS)
          | (1ULL << sqliParser::SHOW)
          | (1ULL << sqliParser::MSCK)
          | (1ULL << sqliParser::REPAIR)
          | (1ULL << sqliParser::DIRECTORY)
          | (1ULL << sqliParser::LOCAL)
          | (1ULL << sqliParser::TRANSFORM)
          | (1ULL << sqliParser::USING)
          | (1ULL << sqliParser::CLUSTER)
          | (1ULL << sqliParser::DISTRIBUTE)
          | (1ULL << sqliParser::SORT)
          | (1ULL << sqliParser::UNION)
          | (1ULL << sqliParser::LOAD)
          | (1ULL << sqliParser::EXPORT)
          | (1ULL << sqliParser::IMPORT)
          | (1ULL << sqliParser::DATA)
          | (1ULL << sqliParser::INPATH)
          | (1ULL << sqliParser::IS)
          | (1ULL << sqliParser::CNULL)
          | (1ULL << sqliParser::CREATE)
          | (1ULL << sqliParser::EXTERNAL)
          | (1ULL << sqliParser::ALTER)
          | (1ULL << sqliParser::CHANGE)
          | (1ULL << sqliParser::COLUMN)
          | (1ULL << sqliParser::FIRST)
          | (1ULL << sqliParser::AFTER))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (sqliParser::DESCRIBE - 64))
          | (1ULL << (sqliParser::DROP - 64))
          | (1ULL << (sqliParser::RENAME - 64))
          | (1ULL << (sqliParser::IGNORE - 64))
          | (1ULL << (sqliParser::PROTECTION - 64))
          | (1ULL << (sqliParser::TO - 64))
          | (1ULL << (sqliParser::COMMENT - 64))
          | (1ULL << (sqliParser::BOOLEAN - 64))
          | (1ULL << (sqliParser::TINYINT - 64))
          | (1ULL << (sqliParser::SMALLINT - 64))
          | (1ULL << (sqliParser::INT - 64))
          | (1ULL << (sqliParser::BIGINT - 64))
          | (1ULL << (sqliParser::FLOAT - 64))
          | (1ULL << (sqliParser::DOUBLE - 64))
          | (1ULL << (sqliParser::DATE - 64))
          | (1ULL << (sqliParser::DATETIME - 64))
          | (1ULL << (sqliParser::TIMESTAMP - 64))
          | (1ULL << (sqliParser::DECIMAL - 64))
          | (1ULL << (sqliParser::STRING - 64))
          | (1ULL << (sqliParser::VARCHAR - 64))
          | (1ULL << (sqliParser::ARRAY - 64))
          | (1ULL << (sqliParser::STRUCT - 64))
          | (1ULL << (sqliParser::MAP - 64))
          | (1ULL << (sqliParser::UNIONTYPE - 64))
          | (1ULL << (sqliParser::REDUCE - 64))
          | (1ULL << (sqliParser::PARTITIONED - 64))
          | (1ULL << (sqliParser::CLUSTERED - 64))
          | (1ULL << (sqliParser::SORTED - 64))
          | (1ULL << (sqliParser::INTO - 64))
          | (1ULL << (sqliParser::BUCKETS - 64))
          | (1ULL << (sqliParser::ROW - 64))
          | (1ULL << (sqliParser::ROWS - 64))
          | (1ULL << (sqliParser::FORMAT - 64))
          | (1ULL << (sqliParser::DELIMITED - 64))
          | (1ULL << (sqliParser::FIELDS - 64))
          | (1ULL << (sqliParser::TERMINATED - 64))
          | (1ULL << (sqliParser::ESCAPED - 64))
          | (1ULL << (sqliParser::COLLECTION - 64))
          | (1ULL << (sqliParser::ITEMS - 64))
          | (1ULL << (sqliParser::KEYS - 64))
          | (1ULL << (sqliParser::KEY - 64))
          | (1ULL << (sqliParser::LINES - 64))
          | (1ULL << (sqliParser::STORED - 64))
          | (1ULL << (sqliParser::FILEFORMAT - 64))
          | (1ULL << (sqliParser::SEQUENCEFILE - 64))
          | (1ULL << (sqliParser::TEXTFILE - 64))
          | (1ULL << (sqliParser::RCFILE - 64))
          | (1ULL << (sqliParser::ORCFILE - 64))
          | (1ULL << (sqliParser::INPUTFORMAT - 64))
          | (1ULL << (sqliParser::OUTPUTFORMAT - 64))
          | (1ULL << (sqliParser::INPUTDRIVER - 64))
          | (1ULL << (sqliParser::OUTPUTDRIVER - 64))
          | (1ULL << (sqliParser::OFFLINE - 64))
          | (1ULL << (sqliParser::ENABLE - 64))
          | (1ULL << (sqliParser::DEFAULT - 64))
          | (1ULL << (sqliParser::DISABLE - 64))
          | (1ULL << (sqliParser::READONLY - 64))
          | (1ULL << (sqliParser::LOCATION - 64))
          | (1ULL << (sqliParser::TABLESAMPLE - 64))
          | (1ULL << (sqliParser::BUCKET - 64))
          | (1ULL << (sqliParser::OUT - 64))
          | (1ULL << (sqliParser::OF - 64))
          | (1ULL << (sqliParser::PERCENT - 64))
          | (1ULL << (sqliParser::CAST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (sqliParser::ADD - 128))
          | (1ULL << (sqliParser::REPLACE - 128))
          | (1ULL << (sqliParser::RLIKE - 128))
          | (1ULL << (sqliParser::REGEXP - 128))
          | (1ULL << (sqliParser::TEMPORARY - 128))
          | (1ULL << (sqliParser::FUNCTION - 128))
          | (1ULL << (sqliParser::MACRO - 128))
          | (1ULL << (sqliParser::EXPLAIN - 128))
          | (1ULL << (sqliParser::EXTENDED - 128))
          | (1ULL << (sqliParser::FORMATTED - 128))
          | (1ULL << (sqliParser::PRETTY - 128))
          | (1ULL << (sqliParser::DEPENDENCY - 128))
          | (1ULL << (sqliParser::LOGICAL - 128))
          | (1ULL << (sqliParser::SERDE - 128))
          | (1ULL << (sqliParser::WITH - 128))
          | (1ULL << (sqliParser::DEFERRED - 128))
          | (1ULL << (sqliParser::SERDEPROPERTIES - 128))
          | (1ULL << (sqliParser::DBPROPERTIES - 128))
          | (1ULL << (sqliParser::LIMIT - 128))
          | (1ULL << (sqliParser::SET - 128))
          | (1ULL << (sqliParser::UNSET - 128))
          | (1ULL << (sqliParser::TBLPROPERTIES - 128))
          | (1ULL << (sqliParser::IDXPROPERTIES - 128))
          | (1ULL << (sqliParser::CASCADED - 128))
          | (1ULL << (sqliParser::CASE - 128))
          | (1ULL << (sqliParser::WHEN - 128))
          | (1ULL << (sqliParser::THEN - 128))
          | (1ULL << (sqliParser::ELSE - 128))
          | (1ULL << (sqliParser::END - 128))
          | (1ULL << (sqliParser::MAPJOIN - 128))
          | (1ULL << (sqliParser::STREAMTABLE - 128))
          | (1ULL << (sqliParser::CLUSTERSTATUS - 128))
          | (1ULL << (sqliParser::UTC - 128))
          | (1ULL << (sqliParser::LONG - 128))
          | (1ULL << (sqliParser::DELETE - 128))
          | (1ULL << (sqliParser::FETCH - 128))
          | (1ULL << (sqliParser::INTERSECT - 128))
          | (1ULL << (sqliParser::VIEW - 128))
          | (1ULL << (sqliParser::IN - 128))
          | (1ULL << (sqliParser::DATABASE - 128))
          | (1ULL << (sqliParser::DATABASES - 128))
          | (1ULL << (sqliParser::MATERIALIZED - 128))
          | (1ULL << (sqliParser::SCHEMA - 128))
          | (1ULL << (sqliParser::SCHEMAS - 128))
          | (1ULL << (sqliParser::GRANT - 128))
          | (1ULL << (sqliParser::REVOKE - 128))
          | (1ULL << (sqliParser::SSL - 128))
          | (1ULL << (sqliParser::UNDO - 128))
          | (1ULL << (sqliParser::LOCK - 128))
          | (1ULL << (sqliParser::LOCKS - 128))
          | (1ULL << (sqliParser::UNLOCK - 128))
          | (1ULL << (sqliParser::SHARED - 128))
          | (1ULL << (sqliParser::EXCLUSIVE - 128))
          | (1ULL << (sqliParser::PROCEDURE - 128))
          | (1ULL << (sqliParser::UNSIGNED - 128))
          | (1ULL << (sqliParser::WHILE - 128))
          | (1ULL << (sqliParser::READ - 128))
          | (1ULL << (sqliParser::READS - 128))
          | (1ULL << (sqliParser::PURGE - 128))
          | (1ULL << (sqliParser::RANGE - 128))
          | (1ULL << (sqliParser::ANALYZE - 128))
          | (1ULL << (sqliParser::BEFORE - 128))
          | (1ULL << (sqliParser::BETWEEN - 128))
          | (1ULL << (sqliParser::BOTH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 192)) & ((1ULL << (sqliParser::BINARY - 192))
          | (1ULL << (sqliParser::CROSS - 192))
          | (1ULL << (sqliParser::CONTINUE - 192))
          | (1ULL << (sqliParser::CURSOR - 192))
          | (1ULL << (sqliParser::TRIGGER - 192))
          | (1ULL << (sqliParser::RECORDREADER - 192))
          | (1ULL << (sqliParser::RECORDWRITER - 192))
          | (1ULL << (sqliParser::LATERAL - 192))
          | (1ULL << (sqliParser::TOUCH - 192))
          | (1ULL << (sqliParser::ARCHIVE - 192))
          | (1ULL << (sqliParser::UNARCHIVE - 192))
          | (1ULL << (sqliParser::COMPUTE - 192))
          | (1ULL << (sqliParser::STATISTICS - 192))
          | (1ULL << (sqliParser::USE - 192))
          | (1ULL << (sqliParser::OPTION - 192))
          | (1ULL << (sqliParser::CONCATENATE - 192))
          | (1ULL << (sqliParser::UPDATE - 192))
          | (1ULL << (sqliParser::RESTRICT - 192))
          | (1ULL << (sqliParser::CASCADE - 192))
          | (1ULL << (sqliParser::SKEWED - 192))
          | (1ULL << (sqliParser::ROLLUP - 192))
          | (1ULL << (sqliParser::CUBE - 192))
          | (1ULL << (sqliParser::DIRECTORIES - 192))
          | (1ULL << (sqliParser::FOR - 192))
          | (1ULL << (sqliParser::WINDOW - 192))
          | (1ULL << (sqliParser::UNBOUNDED - 192))
          | (1ULL << (sqliParser::PRECEDING - 192))
          | (1ULL << (sqliParser::FOLLOWING - 192))
          | (1ULL << (sqliParser::CURRENT - 192))
          | (1ULL << (sqliParser::LESS - 192))
          | (1ULL << (sqliParser::OVER - 192))
          | (1ULL << (sqliParser::GROUPING - 192))
          | (1ULL << (sqliParser::SETS - 192))
          | (1ULL << (sqliParser::TRUNCATE - 192))
          | (1ULL << (sqliParser::NOSCAN - 192))
          | (1ULL << (sqliParser::PARTIALSCAN - 192))
          | (1ULL << (sqliParser::USER - 192))
          | (1ULL << (sqliParser::ROLE - 192))
          | (1ULL << (sqliParser::INNER - 192))
          | (1ULL << (sqliParser::EXCHANGE - 192))
          | (1ULL << (sqliParser::IDENTIFIED - 192))
          | (1ULL << (sqliParser::CHAR - 192))
          | (1ULL << (sqliParser::ABS - 192))
          | (1ULL << (sqliParser::ACOS - 192))
          | (1ULL << (sqliParser::ASIN - 192))
          | (1ULL << (sqliParser::ATAN - 192))
          | (1ULL << (sqliParser::CEIL - 192))
          | (1ULL << (sqliParser::COS - 192))
          | (1ULL << (sqliParser::COT - 192))
          | (1ULL << (sqliParser::EXP - 192))
          | (1ULL << (sqliParser::FLOOR - 192))
          | (1ULL << (sqliParser::LN - 192))
          | (1ULL << (sqliParser::POW - 192))
          | (1ULL << (sqliParser::RAND - 192))
          | (1ULL << (sqliParser::ROUND - 192))
          | (1ULL << (sqliParser::SIN - 192))
          | (1ULL << (sqliParser::SQRT - 192))
          | (1ULL << (sqliParser::TAN - 192))
          | (1ULL << (sqliParser::LCASE - 192))
          | (1ULL << (sqliParser::LOWER - 192))
          | (1ULL << (sqliParser::LTRIM - 192))
          | (1ULL << (sqliParser::RTRIM - 192))
          | (1ULL << (sqliParser::CONCAT - 192))
          | (1ULL << (sqliParser::SUBSTR - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 256)) & ((1ULL << (sqliParser::TRIM - 256))
          | (1ULL << (sqliParser::UCASE - 256))
          | (1ULL << (sqliParser::UPPER - 256))
          | (1ULL << (sqliParser::INTERVAL - 256))
          | (1ULL << (sqliParser::TO_DATE - 256))
          | (1ULL << (sqliParser::DAY - 256))
          | (1ULL << (sqliParser::HOUR - 256))
          | (1ULL << (sqliParser::MINUTE - 256))
          | (1ULL << (sqliParser::MONTH - 256))
          | (1ULL << (sqliParser::SECOND - 256))
          | (1ULL << (sqliParser::FROM_UNIXTIME - 256))
          | (1ULL << (sqliParser::YEAR - 256))
          | (1ULL << (sqliParser::DATE_ADD - 256))
          | (1ULL << (sqliParser::DATE_SUB - 256))
          | (1ULL << (sqliParser::COLLATE - 256))
          | (1ULL << (sqliParser::AVG - 256))
          | (1ULL << (sqliParser::COUNT - 256))
          | (1ULL << (sqliParser::MAX - 256))
          | (1ULL << (sqliParser::MIN - 256))
          | (1ULL << (sqliParser::SUM - 256))
          | (1ULL << (sqliParser::COALESCE - 256))
          | (1ULL << (sqliParser::DUPLICATE - 256))
          | (1ULL << (sqliParser::SERVER - 256))
          | (1ULL << (sqliParser::ALIASES - 256))
          | (1ULL << (sqliParser::ALIAS - 256))
          | (1ULL << (sqliParser::VALUES - 256))
          | (1ULL << (sqliParser::VALUE - 256))
          | (1ULL << (sqliParser::LOW_PRIORITY - 256))
          | (1ULL << (sqliParser::HIGH_PRIORITY - 256))
          | (1ULL << (sqliParser::HASH - 256))
          | (1ULL << (sqliParser::REFERENCES - 256))
          | (1ULL << (sqliParser::TO_CHAR - 256))
          | (1ULL << (sqliParser::DATE_FORMAT - 256))
          | (1ULL << (sqliParser::SIGNED - 256))
          | (1ULL << (sqliParser::INTEGER - 256))
          | (1ULL << (sqliParser::LENGTH - 256))
          | (1ULL << (sqliParser::REVERSE - 256))
          | (1ULL << (sqliParser::IFNULL - 256))
          | (1ULL << (sqliParser::HEX - 256))
          | (1ULL << (sqliParser::CONV - 256))
          | (1ULL << (sqliParser::SLEEP - 256))
          | (1ULL << (sqliParser::BENCHMARK - 256))
          | (1ULL << (sqliParser::UPDATEXML - 256))
          | (1ULL << (sqliParser::EXTRACTVALUE - 256))
          | (1ULL << (sqliParser::LOAD_FILE - 256))
          | (1ULL << (sqliParser::SYSTEM_USER - 256))
          | (1ULL << (sqliParser::SESSION_USER - 256))
          | (1ULL << (sqliParser::CURRENT_USER - 256))
          | (1ULL << (sqliParser::MD5 - 256))
          | (1ULL << (sqliParser::ASCII - 256))
          | (1ULL << (sqliParser::MID - 256))
          | (1ULL << (sqliParser::VERSION - 256))
          | (1ULL << (sqliParser::NOW - 256))
          | (1ULL << (sqliParser::SYSDATE - 256))
          | (1ULL << (sqliParser::ORD - 256))
          | (1ULL << (sqliParser::INSTR - 256))
          | (1ULL << (sqliParser::CONCAT_WS - 256))
          | (1ULL << (sqliParser::GROUP_CONCAT - 256))
          | (1ULL << (sqliParser::UNHEX - 256))
          | (1ULL << (sqliParser::SUBSTRING - 256))
          | (1ULL << (sqliParser::LOCATE - 256))
          | (1ULL << (sqliParser::NULLIF - 256))
          | (1ULL << (sqliParser::ISNULL - 256)))) != 0) || ((((_la - 320) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 320)) & ((1ULL << (sqliParser::DIVIDE - 320))
          | (1ULL << (sqliParser::MOD - 320))
          | (1ULL << (sqliParser::OR - 320))
          | (1ULL << (sqliParser::AND - 320))
          | (1ULL << (sqliParser::XOR - 320))
          | (1ULL << (sqliParser::ARROW - 320))
          | (1ULL << (sqliParser::EQ - 320))
          | (1ULL << (sqliParser::NOT_EQ - 320))
          | (1ULL << (sqliParser::LET - 320))
          | (1ULL << (sqliParser::GET - 320))
          | (1ULL << (sqliParser::SET_VAR - 320))
          | (1ULL << (sqliParser::SHIFT_LEFT - 320))
          | (1ULL << (sqliParser::SHIFT_RIGHT - 320))
          | (1ULL << (sqliParser::ASTERISK - 320))
          | (1ULL << (sqliParser::LPAREN - 320))
          | (1ULL << (sqliParser::PLUS - 320))
          | (1ULL << (sqliParser::MINUS - 320))
          | (1ULL << (sqliParser::UNQUOTE - 320))
          | (1ULL << (sqliParser::INTEGER_NUM - 320))
          | (1ULL << (sqliParser::HEX_DIGIT - 320))
          | (1ULL << (sqliParser::REAL_NUMBER - 320))
          | (1ULL << (sqliParser::TEXT_STRING - 320))
          | (1ULL << (sqliParser::ID - 320))
          | (1ULL << (sqliParser::SYSTEM_VAR - 320))
          | (1ULL << (sqliParser::MORE - 320)))) != 0)) {
          setState(1285);
          expression();
          setState(1290);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sqliParser::COMMA) {
            setState(1286);
            match(sqliParser::COMMA);
            setState(1287);
            expression();
            setState(1292);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(1295);
        match(sqliParser::RPAREN);
        break;
      }

      }
      setState(1301);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
      case 1: {
        setState(1298);
        relational_op();
        setState(1299);
        number_literal();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1303);
      match(sqliParser::CAST);
      setState(1304);
      match(sqliParser::LPAREN);
      setState(1305);
      expression();
      setState(1306);
      match(sqliParser::AS);
      setState(1307);
      cast_data_type();
      setState(1308);
      match(sqliParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1310);
      group_functions();
      setState(1311);
      match(sqliParser::LPAREN);
      setState(1313);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
      case 1: {
        setState(1312);
        _la = _input->LA(1);
        if (!(_la == sqliParser::ALL

        || _la == sqliParser::DISTINCT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      }
      setState(1317);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
      case 1: {
        setState(1315);
        match(sqliParser::ASTERISK);
        break;
      }

      case 2: {
        setState(1316);
        bit_expr();
        break;
      }

      }
      setState(1319);
      match(sqliParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_when_statementContext ------------------------------------------------------------------

sqliParser::Case_when_statementContext::Case_when_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Case_when_statementContext::CASE() {
  return getToken(sqliParser::CASE, 0);
}

tree::TerminalNode* sqliParser::Case_when_statementContext::END() {
  return getToken(sqliParser::END, 0);
}

sqliParser::Column_nameContext* sqliParser::Case_when_statementContext::column_name() {
  return getRuleContext<sqliParser::Column_nameContext>(0);
}

std::vector<tree::TerminalNode *> sqliParser::Case_when_statementContext::WHEN() {
  return getTokens(sqliParser::WHEN);
}

tree::TerminalNode* sqliParser::Case_when_statementContext::WHEN(size_t i) {
  return getToken(sqliParser::WHEN, i);
}

std::vector<sqliParser::ExpressionContext *> sqliParser::Case_when_statementContext::expression() {
  return getRuleContexts<sqliParser::ExpressionContext>();
}

sqliParser::ExpressionContext* sqliParser::Case_when_statementContext::expression(size_t i) {
  return getRuleContext<sqliParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Case_when_statementContext::THEN() {
  return getTokens(sqliParser::THEN);
}

tree::TerminalNode* sqliParser::Case_when_statementContext::THEN(size_t i) {
  return getToken(sqliParser::THEN, i);
}

std::vector<sqliParser::Simple_exprContext *> sqliParser::Case_when_statementContext::simple_expr() {
  return getRuleContexts<sqliParser::Simple_exprContext>();
}

sqliParser::Simple_exprContext* sqliParser::Case_when_statementContext::simple_expr(size_t i) {
  return getRuleContext<sqliParser::Simple_exprContext>(i);
}

tree::TerminalNode* sqliParser::Case_when_statementContext::ELSE() {
  return getToken(sqliParser::ELSE, 0);
}

sqliParser::AliasContext* sqliParser::Case_when_statementContext::alias() {
  return getRuleContext<sqliParser::AliasContext>(0);
}


size_t sqliParser::Case_when_statementContext::getRuleIndex() const {
  return sqliParser::RuleCase_when_statement;
}

void sqliParser::Case_when_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_when_statement(this);
}

void sqliParser::Case_when_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_when_statement(this);
}


antlrcpp::Any sqliParser::Case_when_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCase_when_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Case_when_statementContext* sqliParser::case_when_statement() {
  Case_when_statementContext *_localctx = _tracker.createInstance<Case_when_statementContext>(_ctx, getState());
  enterRule(_localctx, 180, sqliParser::RuleCase_when_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1323);
    match(sqliParser::CASE);
    setState(1325);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
    case 1: {
      setState(1324);
      column_name();
      break;
    }

    }
    setState(1332); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1327);
      match(sqliParser::WHEN);
      setState(1328);
      expression();
      setState(1329);
      match(sqliParser::THEN);
      setState(1330);
      simple_expr();
      setState(1334); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sqliParser::WHEN);
    setState(1338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::ELSE) {
      setState(1336);
      match(sqliParser::ELSE);
      setState(1337);
      expression();
    }
    setState(1340);
    match(sqliParser::END);
    setState(1342);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
    case 1: {
      setState(1341);
      alias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_specContext ------------------------------------------------------------------

sqliParser::Column_specContext::Column_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Column_specContext::ASTERISK() {
  return getToken(sqliParser::ASTERISK, 0);
}

sqliParser::Column_nameContext* sqliParser::Column_specContext::column_name() {
  return getRuleContext<sqliParser::Column_nameContext>(0);
}

sqliParser::Table_specContext* sqliParser::Column_specContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

tree::TerminalNode* sqliParser::Column_specContext::DOT() {
  return getToken(sqliParser::DOT, 0);
}


size_t sqliParser::Column_specContext::getRuleIndex() const {
  return sqliParser::RuleColumn_spec;
}

void sqliParser::Column_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_spec(this);
}

void sqliParser::Column_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_spec(this);
}


antlrcpp::Any sqliParser::Column_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_spec(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_specContext* sqliParser::column_spec() {
  Column_specContext *_localctx = _tracker.createInstance<Column_specContext>(_ctx, getState());
  enterRule(_localctx, 182, sqliParser::RuleColumn_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1347);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      setState(1344);
      table_spec();
      setState(1345);
      match(sqliParser::DOT);
      break;
    }

    }
    setState(1351);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::ASTERISK: {
        setState(1349);
        match(sqliParser::ASTERISK);
        break;
      }

      case sqliParser::TRUE:
      case sqliParser::FALSE:
      case sqliParser::ALL:
      case sqliParser::NOT:
      case sqliParser::LIKE:
      case sqliParser::CHARACTER:
      case sqliParser::IF:
      case sqliParser::EXISTS:
      case sqliParser::ASC:
      case sqliParser::DESC:
      case sqliParser::BY:
      case sqliParser::HAVING:
      case sqliParser::WHERE:
      case sqliParser::AS:
      case sqliParser::SELECT:
      case sqliParser::DISTINCT:
      case sqliParser::INSERT:
      case sqliParser::OVERWRITE:
      case sqliParser::OUTER:
      case sqliParser::UNIQUEJOIN:
      case sqliParser::PRESERVE:
      case sqliParser::JOIN:
      case sqliParser::LEFT:
      case sqliParser::RIGHT:
      case sqliParser::FULL:
      case sqliParser::ON:
      case sqliParser::PARTITION:
      case sqliParser::PARTITIONS:
      case sqliParser::TABLE:
      case sqliParser::TABLES:
      case sqliParser::COLUMNS:
      case sqliParser::INDEX:
      case sqliParser::INDEXES:
      case sqliParser::REBUILD:
      case sqliParser::FUNCTIONS:
      case sqliParser::SHOW:
      case sqliParser::MSCK:
      case sqliParser::REPAIR:
      case sqliParser::DIRECTORY:
      case sqliParser::LOCAL:
      case sqliParser::TRANSFORM:
      case sqliParser::USING:
      case sqliParser::CLUSTER:
      case sqliParser::DISTRIBUTE:
      case sqliParser::SORT:
      case sqliParser::UNION:
      case sqliParser::LOAD:
      case sqliParser::EXPORT:
      case sqliParser::IMPORT:
      case sqliParser::DATA:
      case sqliParser::INPATH:
      case sqliParser::IS:
      case sqliParser::CNULL:
      case sqliParser::CREATE:
      case sqliParser::EXTERNAL:
      case sqliParser::ALTER:
      case sqliParser::CHANGE:
      case sqliParser::COLUMN:
      case sqliParser::FIRST:
      case sqliParser::AFTER:
      case sqliParser::DESCRIBE:
      case sqliParser::DROP:
      case sqliParser::RENAME:
      case sqliParser::IGNORE:
      case sqliParser::PROTECTION:
      case sqliParser::TO:
      case sqliParser::COMMENT:
      case sqliParser::BOOLEAN:
      case sqliParser::TINYINT:
      case sqliParser::SMALLINT:
      case sqliParser::INT:
      case sqliParser::BIGINT:
      case sqliParser::FLOAT:
      case sqliParser::DOUBLE:
      case sqliParser::DATE:
      case sqliParser::DATETIME:
      case sqliParser::TIMESTAMP:
      case sqliParser::DECIMAL:
      case sqliParser::STRING:
      case sqliParser::VARCHAR:
      case sqliParser::ARRAY:
      case sqliParser::STRUCT:
      case sqliParser::MAP:
      case sqliParser::UNIONTYPE:
      case sqliParser::REDUCE:
      case sqliParser::PARTITIONED:
      case sqliParser::CLUSTERED:
      case sqliParser::SORTED:
      case sqliParser::INTO:
      case sqliParser::BUCKETS:
      case sqliParser::ROW:
      case sqliParser::ROWS:
      case sqliParser::FORMAT:
      case sqliParser::DELIMITED:
      case sqliParser::FIELDS:
      case sqliParser::TERMINATED:
      case sqliParser::ESCAPED:
      case sqliParser::COLLECTION:
      case sqliParser::ITEMS:
      case sqliParser::KEYS:
      case sqliParser::KEY:
      case sqliParser::LINES:
      case sqliParser::STORED:
      case sqliParser::FILEFORMAT:
      case sqliParser::SEQUENCEFILE:
      case sqliParser::TEXTFILE:
      case sqliParser::RCFILE:
      case sqliParser::ORCFILE:
      case sqliParser::INPUTFORMAT:
      case sqliParser::OUTPUTFORMAT:
      case sqliParser::INPUTDRIVER:
      case sqliParser::OUTPUTDRIVER:
      case sqliParser::OFFLINE:
      case sqliParser::ENABLE:
      case sqliParser::DEFAULT:
      case sqliParser::DISABLE:
      case sqliParser::READONLY:
      case sqliParser::LOCATION:
      case sqliParser::TABLESAMPLE:
      case sqliParser::BUCKET:
      case sqliParser::OUT:
      case sqliParser::OF:
      case sqliParser::PERCENT:
      case sqliParser::CAST:
      case sqliParser::ADD:
      case sqliParser::REPLACE:
      case sqliParser::RLIKE:
      case sqliParser::REGEXP:
      case sqliParser::TEMPORARY:
      case sqliParser::FUNCTION:
      case sqliParser::MACRO:
      case sqliParser::EXPLAIN:
      case sqliParser::EXTENDED:
      case sqliParser::FORMATTED:
      case sqliParser::PRETTY:
      case sqliParser::DEPENDENCY:
      case sqliParser::LOGICAL:
      case sqliParser::SERDE:
      case sqliParser::WITH:
      case sqliParser::DEFERRED:
      case sqliParser::SERDEPROPERTIES:
      case sqliParser::DBPROPERTIES:
      case sqliParser::LIMIT:
      case sqliParser::SET:
      case sqliParser::UNSET:
      case sqliParser::TBLPROPERTIES:
      case sqliParser::IDXPROPERTIES:
      case sqliParser::CASCADED:
      case sqliParser::CASE:
      case sqliParser::WHEN:
      case sqliParser::THEN:
      case sqliParser::ELSE:
      case sqliParser::END:
      case sqliParser::MAPJOIN:
      case sqliParser::STREAMTABLE:
      case sqliParser::CLUSTERSTATUS:
      case sqliParser::UTC:
      case sqliParser::LONG:
      case sqliParser::DELETE:
      case sqliParser::FETCH:
      case sqliParser::INTERSECT:
      case sqliParser::VIEW:
      case sqliParser::IN:
      case sqliParser::DATABASE:
      case sqliParser::DATABASES:
      case sqliParser::MATERIALIZED:
      case sqliParser::SCHEMA:
      case sqliParser::SCHEMAS:
      case sqliParser::GRANT:
      case sqliParser::REVOKE:
      case sqliParser::SSL:
      case sqliParser::UNDO:
      case sqliParser::LOCK:
      case sqliParser::LOCKS:
      case sqliParser::UNLOCK:
      case sqliParser::SHARED:
      case sqliParser::EXCLUSIVE:
      case sqliParser::PROCEDURE:
      case sqliParser::UNSIGNED:
      case sqliParser::WHILE:
      case sqliParser::READ:
      case sqliParser::READS:
      case sqliParser::PURGE:
      case sqliParser::RANGE:
      case sqliParser::ANALYZE:
      case sqliParser::BEFORE:
      case sqliParser::BETWEEN:
      case sqliParser::BOTH:
      case sqliParser::BINARY:
      case sqliParser::CROSS:
      case sqliParser::CONTINUE:
      case sqliParser::CURSOR:
      case sqliParser::TRIGGER:
      case sqliParser::RECORDREADER:
      case sqliParser::RECORDWRITER:
      case sqliParser::LATERAL:
      case sqliParser::TOUCH:
      case sqliParser::ARCHIVE:
      case sqliParser::UNARCHIVE:
      case sqliParser::COMPUTE:
      case sqliParser::STATISTICS:
      case sqliParser::USE:
      case sqliParser::OPTION:
      case sqliParser::CONCATENATE:
      case sqliParser::UPDATE:
      case sqliParser::RESTRICT:
      case sqliParser::CASCADE:
      case sqliParser::SKEWED:
      case sqliParser::ROLLUP:
      case sqliParser::CUBE:
      case sqliParser::DIRECTORIES:
      case sqliParser::FOR:
      case sqliParser::WINDOW:
      case sqliParser::UNBOUNDED:
      case sqliParser::PRECEDING:
      case sqliParser::FOLLOWING:
      case sqliParser::CURRENT:
      case sqliParser::LESS:
      case sqliParser::OVER:
      case sqliParser::GROUPING:
      case sqliParser::SETS:
      case sqliParser::TRUNCATE:
      case sqliParser::NOSCAN:
      case sqliParser::PARTIALSCAN:
      case sqliParser::USER:
      case sqliParser::ROLE:
      case sqliParser::INNER:
      case sqliParser::EXCHANGE:
      case sqliParser::IDENTIFIED:
      case sqliParser::CHAR:
      case sqliParser::ABS:
      case sqliParser::ACOS:
      case sqliParser::ASIN:
      case sqliParser::ATAN:
      case sqliParser::CEIL:
      case sqliParser::COS:
      case sqliParser::COT:
      case sqliParser::EXP:
      case sqliParser::FLOOR:
      case sqliParser::LN:
      case sqliParser::POW:
      case sqliParser::RAND:
      case sqliParser::ROUND:
      case sqliParser::SIN:
      case sqliParser::SQRT:
      case sqliParser::TAN:
      case sqliParser::LCASE:
      case sqliParser::LOWER:
      case sqliParser::LTRIM:
      case sqliParser::RTRIM:
      case sqliParser::CONCAT:
      case sqliParser::SUBSTR:
      case sqliParser::TRIM:
      case sqliParser::UCASE:
      case sqliParser::UPPER:
      case sqliParser::INTERVAL:
      case sqliParser::TO_DATE:
      case sqliParser::DAY:
      case sqliParser::HOUR:
      case sqliParser::MINUTE:
      case sqliParser::MONTH:
      case sqliParser::SECOND:
      case sqliParser::FROM_UNIXTIME:
      case sqliParser::YEAR:
      case sqliParser::DATE_ADD:
      case sqliParser::DATE_SUB:
      case sqliParser::COLLATE:
      case sqliParser::AVG:
      case sqliParser::COUNT:
      case sqliParser::MAX:
      case sqliParser::MIN:
      case sqliParser::SUM:
      case sqliParser::COALESCE:
      case sqliParser::DUPLICATE:
      case sqliParser::SERVER:
      case sqliParser::ALIASES:
      case sqliParser::ALIAS:
      case sqliParser::VALUES:
      case sqliParser::VALUE:
      case sqliParser::LOW_PRIORITY:
      case sqliParser::HIGH_PRIORITY:
      case sqliParser::HASH:
      case sqliParser::REFERENCES:
      case sqliParser::TO_CHAR:
      case sqliParser::DATE_FORMAT:
      case sqliParser::SIGNED:
      case sqliParser::INTEGER:
      case sqliParser::LENGTH:
      case sqliParser::REVERSE:
      case sqliParser::IFNULL:
      case sqliParser::HEX:
      case sqliParser::CONV:
      case sqliParser::SLEEP:
      case sqliParser::BENCHMARK:
      case sqliParser::UPDATEXML:
      case sqliParser::EXTRACTVALUE:
      case sqliParser::LOAD_FILE:
      case sqliParser::SYSTEM_USER:
      case sqliParser::SESSION_USER:
      case sqliParser::CURRENT_USER:
      case sqliParser::MD5:
      case sqliParser::ASCII:
      case sqliParser::MID:
      case sqliParser::VERSION:
      case sqliParser::NOW:
      case sqliParser::SYSDATE:
      case sqliParser::ORD:
      case sqliParser::INSTR:
      case sqliParser::CONCAT_WS:
      case sqliParser::GROUP_CONCAT:
      case sqliParser::UNHEX:
      case sqliParser::SUBSTRING:
      case sqliParser::LOCATE:
      case sqliParser::NULLIF:
      case sqliParser::ISNULL:
      case sqliParser::DIVIDE:
      case sqliParser::MOD:
      case sqliParser::OR:
      case sqliParser::AND:
      case sqliParser::XOR:
      case sqliParser::ARROW:
      case sqliParser::EQ:
      case sqliParser::NOT_EQ:
      case sqliParser::LET:
      case sqliParser::GET:
      case sqliParser::SET_VAR:
      case sqliParser::SHIFT_LEFT:
      case sqliParser::SHIFT_RIGHT:
      case sqliParser::PLUS:
      case sqliParser::MINUS:
      case sqliParser::UNQUOTE:
      case sqliParser::INTEGER_NUM:
      case sqliParser::HEX_DIGIT:
      case sqliParser::REAL_NUMBER:
      case sqliParser::TEXT_STRING:
      case sqliParser::ID:
      case sqliParser::SYSTEM_VAR:
      case sqliParser::MORE: {
        setState(1350);
        column_name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

sqliParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Expression_listContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

std::vector<sqliParser::ExpressionContext *> sqliParser::Expression_listContext::expression() {
  return getRuleContexts<sqliParser::ExpressionContext>();
}

sqliParser::ExpressionContext* sqliParser::Expression_listContext::expression(size_t i) {
  return getRuleContext<sqliParser::ExpressionContext>(i);
}

tree::TerminalNode* sqliParser::Expression_listContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Expression_listContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Expression_listContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Expression_listContext::getRuleIndex() const {
  return sqliParser::RuleExpression_list;
}

void sqliParser::Expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_list(this);
}

void sqliParser::Expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_list(this);
}


antlrcpp::Any sqliParser::Expression_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitExpression_list(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Expression_listContext* sqliParser::expression_list() {
  Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, getState());
  enterRule(_localctx, 184, sqliParser::RuleExpression_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1353);
    match(sqliParser::LPAREN);
    setState(1354);
    expression();
    setState(1359);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(1355);
      match(sqliParser::COMMA);
      setState(1356);
      expression();
      setState(1361);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1362);
    match(sqliParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interval_exprContext ------------------------------------------------------------------

sqliParser::Interval_exprContext::Interval_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Interval_exprContext::INTERVAL() {
  return getToken(sqliParser::INTERVAL, 0);
}

sqliParser::ExpressionContext* sqliParser::Interval_exprContext::expression() {
  return getRuleContext<sqliParser::ExpressionContext>(0);
}

sqliParser::Interval_unitContext* sqliParser::Interval_exprContext::interval_unit() {
  return getRuleContext<sqliParser::Interval_unitContext>(0);
}


size_t sqliParser::Interval_exprContext::getRuleIndex() const {
  return sqliParser::RuleInterval_expr;
}

void sqliParser::Interval_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterval_expr(this);
}

void sqliParser::Interval_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterval_expr(this);
}


antlrcpp::Any sqliParser::Interval_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitInterval_expr(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Interval_exprContext* sqliParser::interval_expr() {
  Interval_exprContext *_localctx = _tracker.createInstance<Interval_exprContext>(_ctx, getState());
  enterRule(_localctx, 186, sqliParser::RuleInterval_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1364);
    match(sqliParser::INTERVAL);
    setState(1365);
    expression();
    setState(1366);
    interval_unit();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_referencesContext ------------------------------------------------------------------

sqliParser::Table_referencesContext::Table_referencesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Table_referenceContext *> sqliParser::Table_referencesContext::table_reference() {
  return getRuleContexts<sqliParser::Table_referenceContext>();
}

sqliParser::Table_referenceContext* sqliParser::Table_referencesContext::table_reference(size_t i) {
  return getRuleContext<sqliParser::Table_referenceContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referencesContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Table_referencesContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Table_referencesContext::getRuleIndex() const {
  return sqliParser::RuleTable_references;
}

void sqliParser::Table_referencesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_references(this);
}

void sqliParser::Table_referencesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_references(this);
}


antlrcpp::Any sqliParser::Table_referencesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitTable_references(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Table_referencesContext* sqliParser::table_references() {
  Table_referencesContext *_localctx = _tracker.createInstance<Table_referencesContext>(_ctx, getState());
  enterRule(_localctx, 188, sqliParser::RuleTable_references);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1368);
    table_reference();
    setState(1373);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1369);
        match(sqliParser::COMMA);
        setState(1370);
        table_reference(); 
      }
      setState(1375);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_referenceContext ------------------------------------------------------------------

sqliParser::Table_referenceContext::Table_referenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Table_atomContext *> sqliParser::Table_referenceContext::table_atom() {
  return getRuleContexts<sqliParser::Table_atomContext>();
}

sqliParser::Table_atomContext* sqliParser::Table_referenceContext::table_atom(size_t i) {
  return getRuleContext<sqliParser::Table_atomContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referenceContext::JOIN() {
  return getTokens(sqliParser::JOIN);
}

tree::TerminalNode* sqliParser::Table_referenceContext::JOIN(size_t i) {
  return getToken(sqliParser::JOIN, i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referenceContext::OUTER() {
  return getTokens(sqliParser::OUTER);
}

tree::TerminalNode* sqliParser::Table_referenceContext::OUTER(size_t i) {
  return getToken(sqliParser::OUTER, i);
}

std::vector<sqliParser::Join_conditionContext *> sqliParser::Table_referenceContext::join_condition() {
  return getRuleContexts<sqliParser::Join_conditionContext>();
}

sqliParser::Join_conditionContext* sqliParser::Table_referenceContext::join_condition(size_t i) {
  return getRuleContext<sqliParser::Join_conditionContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referenceContext::CROSS() {
  return getTokens(sqliParser::CROSS);
}

tree::TerminalNode* sqliParser::Table_referenceContext::CROSS(size_t i) {
  return getToken(sqliParser::CROSS, i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referenceContext::INNER() {
  return getTokens(sqliParser::INNER);
}

tree::TerminalNode* sqliParser::Table_referenceContext::INNER(size_t i) {
  return getToken(sqliParser::INNER, i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referenceContext::LEFT() {
  return getTokens(sqliParser::LEFT);
}

tree::TerminalNode* sqliParser::Table_referenceContext::LEFT(size_t i) {
  return getToken(sqliParser::LEFT, i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referenceContext::RIGHT() {
  return getTokens(sqliParser::RIGHT);
}

tree::TerminalNode* sqliParser::Table_referenceContext::RIGHT(size_t i) {
  return getToken(sqliParser::RIGHT, i);
}

std::vector<tree::TerminalNode *> sqliParser::Table_referenceContext::FULL() {
  return getTokens(sqliParser::FULL);
}

tree::TerminalNode* sqliParser::Table_referenceContext::FULL(size_t i) {
  return getToken(sqliParser::FULL, i);
}


size_t sqliParser::Table_referenceContext::getRuleIndex() const {
  return sqliParser::RuleTable_reference;
}

void sqliParser::Table_referenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_reference(this);
}

void sqliParser::Table_referenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_reference(this);
}


antlrcpp::Any sqliParser::Table_referenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitTable_reference(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Table_referenceContext* sqliParser::table_reference() {
  Table_referenceContext *_localctx = _tracker.createInstance<Table_referenceContext>(_ctx, getState());
  enterRule(_localctx, 190, sqliParser::RuleTable_reference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1376);
    table_atom();
    setState(1390);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1378);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << sqliParser::LEFT)
          | (1ULL << sqliParser::RIGHT)
          | (1ULL << sqliParser::FULL))) != 0) || _la == sqliParser::CROSS

        || _la == sqliParser::INNER) {
          setState(1377);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << sqliParser::LEFT)
            | (1ULL << sqliParser::RIGHT)
            | (1ULL << sqliParser::FULL))) != 0) || _la == sqliParser::CROSS

          || _la == sqliParser::INNER)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(1381);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::OUTER) {
          setState(1380);
          match(sqliParser::OUTER);
        }
        setState(1383);
        match(sqliParser::JOIN);
        setState(1384);
        table_atom();
        setState(1386);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
        case 1: {
          setState(1385);
          join_condition();
          break;
        }

        } 
      }
      setState(1392);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_atomContext ------------------------------------------------------------------

sqliParser::Table_atomContext::Table_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Table_specContext* sqliParser::Table_atomContext::table_spec() {
  return getRuleContext<sqliParser::Table_specContext>(0);
}

std::vector<sqliParser::AliasContext *> sqliParser::Table_atomContext::alias() {
  return getRuleContexts<sqliParser::AliasContext>();
}

sqliParser::AliasContext* sqliParser::Table_atomContext::alias(size_t i) {
  return getRuleContext<sqliParser::AliasContext>(i);
}

tree::TerminalNode* sqliParser::Table_atomContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

sqliParser::SubqueryContext* sqliParser::Table_atomContext::subquery() {
  return getRuleContext<sqliParser::SubqueryContext>(0);
}

tree::TerminalNode* sqliParser::Table_atomContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

sqliParser::Where_clauseContext* sqliParser::Table_atomContext::where_clause() {
  return getRuleContext<sqliParser::Where_clauseContext>(0);
}

sqliParser::Groupby_clauseContext* sqliParser::Table_atomContext::groupby_clause() {
  return getRuleContext<sqliParser::Groupby_clauseContext>(0);
}

sqliParser::Having_clauseContext* sqliParser::Table_atomContext::having_clause() {
  return getRuleContext<sqliParser::Having_clauseContext>(0);
}


size_t sqliParser::Table_atomContext::getRuleIndex() const {
  return sqliParser::RuleTable_atom;
}

void sqliParser::Table_atomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_atom(this);
}

void sqliParser::Table_atomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_atom(this);
}


antlrcpp::Any sqliParser::Table_atomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitTable_atom(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Table_atomContext* sqliParser::table_atom() {
  Table_atomContext *_localctx = _tracker.createInstance<Table_atomContext>(_ctx, getState());
  enterRule(_localctx, 192, sqliParser::RuleTable_atom);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1416);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::TRUE:
      case sqliParser::FALSE:
      case sqliParser::ALL:
      case sqliParser::NOT:
      case sqliParser::LIKE:
      case sqliParser::CHARACTER:
      case sqliParser::IF:
      case sqliParser::EXISTS:
      case sqliParser::ASC:
      case sqliParser::DESC:
      case sqliParser::BY:
      case sqliParser::HAVING:
      case sqliParser::WHERE:
      case sqliParser::AS:
      case sqliParser::SELECT:
      case sqliParser::DISTINCT:
      case sqliParser::INSERT:
      case sqliParser::OVERWRITE:
      case sqliParser::OUTER:
      case sqliParser::UNIQUEJOIN:
      case sqliParser::PRESERVE:
      case sqliParser::JOIN:
      case sqliParser::LEFT:
      case sqliParser::RIGHT:
      case sqliParser::FULL:
      case sqliParser::ON:
      case sqliParser::PARTITION:
      case sqliParser::PARTITIONS:
      case sqliParser::TABLE:
      case sqliParser::TABLES:
      case sqliParser::COLUMNS:
      case sqliParser::INDEX:
      case sqliParser::INDEXES:
      case sqliParser::REBUILD:
      case sqliParser::FUNCTIONS:
      case sqliParser::SHOW:
      case sqliParser::MSCK:
      case sqliParser::REPAIR:
      case sqliParser::DIRECTORY:
      case sqliParser::LOCAL:
      case sqliParser::TRANSFORM:
      case sqliParser::USING:
      case sqliParser::CLUSTER:
      case sqliParser::DISTRIBUTE:
      case sqliParser::SORT:
      case sqliParser::UNION:
      case sqliParser::LOAD:
      case sqliParser::EXPORT:
      case sqliParser::IMPORT:
      case sqliParser::DATA:
      case sqliParser::INPATH:
      case sqliParser::IS:
      case sqliParser::CNULL:
      case sqliParser::CREATE:
      case sqliParser::EXTERNAL:
      case sqliParser::ALTER:
      case sqliParser::CHANGE:
      case sqliParser::COLUMN:
      case sqliParser::FIRST:
      case sqliParser::AFTER:
      case sqliParser::DESCRIBE:
      case sqliParser::DROP:
      case sqliParser::RENAME:
      case sqliParser::IGNORE:
      case sqliParser::PROTECTION:
      case sqliParser::TO:
      case sqliParser::COMMENT:
      case sqliParser::BOOLEAN:
      case sqliParser::TINYINT:
      case sqliParser::SMALLINT:
      case sqliParser::INT:
      case sqliParser::BIGINT:
      case sqliParser::FLOAT:
      case sqliParser::DOUBLE:
      case sqliParser::DATE:
      case sqliParser::DATETIME:
      case sqliParser::TIMESTAMP:
      case sqliParser::DECIMAL:
      case sqliParser::STRING:
      case sqliParser::VARCHAR:
      case sqliParser::ARRAY:
      case sqliParser::STRUCT:
      case sqliParser::MAP:
      case sqliParser::UNIONTYPE:
      case sqliParser::REDUCE:
      case sqliParser::PARTITIONED:
      case sqliParser::CLUSTERED:
      case sqliParser::SORTED:
      case sqliParser::INTO:
      case sqliParser::BUCKETS:
      case sqliParser::ROW:
      case sqliParser::ROWS:
      case sqliParser::FORMAT:
      case sqliParser::DELIMITED:
      case sqliParser::FIELDS:
      case sqliParser::TERMINATED:
      case sqliParser::ESCAPED:
      case sqliParser::COLLECTION:
      case sqliParser::ITEMS:
      case sqliParser::KEYS:
      case sqliParser::KEY:
      case sqliParser::LINES:
      case sqliParser::STORED:
      case sqliParser::FILEFORMAT:
      case sqliParser::SEQUENCEFILE:
      case sqliParser::TEXTFILE:
      case sqliParser::RCFILE:
      case sqliParser::ORCFILE:
      case sqliParser::INPUTFORMAT:
      case sqliParser::OUTPUTFORMAT:
      case sqliParser::INPUTDRIVER:
      case sqliParser::OUTPUTDRIVER:
      case sqliParser::OFFLINE:
      case sqliParser::ENABLE:
      case sqliParser::DEFAULT:
      case sqliParser::DISABLE:
      case sqliParser::READONLY:
      case sqliParser::LOCATION:
      case sqliParser::TABLESAMPLE:
      case sqliParser::BUCKET:
      case sqliParser::OUT:
      case sqliParser::OF:
      case sqliParser::PERCENT:
      case sqliParser::CAST:
      case sqliParser::ADD:
      case sqliParser::REPLACE:
      case sqliParser::RLIKE:
      case sqliParser::REGEXP:
      case sqliParser::TEMPORARY:
      case sqliParser::FUNCTION:
      case sqliParser::MACRO:
      case sqliParser::EXPLAIN:
      case sqliParser::EXTENDED:
      case sqliParser::FORMATTED:
      case sqliParser::PRETTY:
      case sqliParser::DEPENDENCY:
      case sqliParser::LOGICAL:
      case sqliParser::SERDE:
      case sqliParser::WITH:
      case sqliParser::DEFERRED:
      case sqliParser::SERDEPROPERTIES:
      case sqliParser::DBPROPERTIES:
      case sqliParser::LIMIT:
      case sqliParser::SET:
      case sqliParser::UNSET:
      case sqliParser::TBLPROPERTIES:
      case sqliParser::IDXPROPERTIES:
      case sqliParser::CASCADED:
      case sqliParser::CASE:
      case sqliParser::WHEN:
      case sqliParser::THEN:
      case sqliParser::ELSE:
      case sqliParser::END:
      case sqliParser::MAPJOIN:
      case sqliParser::STREAMTABLE:
      case sqliParser::CLUSTERSTATUS:
      case sqliParser::UTC:
      case sqliParser::LONG:
      case sqliParser::DELETE:
      case sqliParser::FETCH:
      case sqliParser::INTERSECT:
      case sqliParser::VIEW:
      case sqliParser::IN:
      case sqliParser::DATABASE:
      case sqliParser::DATABASES:
      case sqliParser::MATERIALIZED:
      case sqliParser::SCHEMA:
      case sqliParser::SCHEMAS:
      case sqliParser::GRANT:
      case sqliParser::REVOKE:
      case sqliParser::SSL:
      case sqliParser::UNDO:
      case sqliParser::LOCK:
      case sqliParser::LOCKS:
      case sqliParser::UNLOCK:
      case sqliParser::SHARED:
      case sqliParser::EXCLUSIVE:
      case sqliParser::PROCEDURE:
      case sqliParser::UNSIGNED:
      case sqliParser::WHILE:
      case sqliParser::READ:
      case sqliParser::READS:
      case sqliParser::PURGE:
      case sqliParser::RANGE:
      case sqliParser::ANALYZE:
      case sqliParser::BEFORE:
      case sqliParser::BETWEEN:
      case sqliParser::BOTH:
      case sqliParser::BINARY:
      case sqliParser::CROSS:
      case sqliParser::CONTINUE:
      case sqliParser::CURSOR:
      case sqliParser::TRIGGER:
      case sqliParser::RECORDREADER:
      case sqliParser::RECORDWRITER:
      case sqliParser::LATERAL:
      case sqliParser::TOUCH:
      case sqliParser::ARCHIVE:
      case sqliParser::UNARCHIVE:
      case sqliParser::COMPUTE:
      case sqliParser::STATISTICS:
      case sqliParser::USE:
      case sqliParser::OPTION:
      case sqliParser::CONCATENATE:
      case sqliParser::UPDATE:
      case sqliParser::RESTRICT:
      case sqliParser::CASCADE:
      case sqliParser::SKEWED:
      case sqliParser::ROLLUP:
      case sqliParser::CUBE:
      case sqliParser::DIRECTORIES:
      case sqliParser::FOR:
      case sqliParser::WINDOW:
      case sqliParser::UNBOUNDED:
      case sqliParser::PRECEDING:
      case sqliParser::FOLLOWING:
      case sqliParser::CURRENT:
      case sqliParser::LESS:
      case sqliParser::OVER:
      case sqliParser::GROUPING:
      case sqliParser::SETS:
      case sqliParser::TRUNCATE:
      case sqliParser::NOSCAN:
      case sqliParser::PARTIALSCAN:
      case sqliParser::USER:
      case sqliParser::ROLE:
      case sqliParser::INNER:
      case sqliParser::EXCHANGE:
      case sqliParser::IDENTIFIED:
      case sqliParser::CHAR:
      case sqliParser::ABS:
      case sqliParser::ACOS:
      case sqliParser::ASIN:
      case sqliParser::ATAN:
      case sqliParser::CEIL:
      case sqliParser::COS:
      case sqliParser::COT:
      case sqliParser::EXP:
      case sqliParser::FLOOR:
      case sqliParser::LN:
      case sqliParser::POW:
      case sqliParser::RAND:
      case sqliParser::ROUND:
      case sqliParser::SIN:
      case sqliParser::SQRT:
      case sqliParser::TAN:
      case sqliParser::LCASE:
      case sqliParser::LOWER:
      case sqliParser::LTRIM:
      case sqliParser::RTRIM:
      case sqliParser::CONCAT:
      case sqliParser::SUBSTR:
      case sqliParser::TRIM:
      case sqliParser::UCASE:
      case sqliParser::UPPER:
      case sqliParser::INTERVAL:
      case sqliParser::TO_DATE:
      case sqliParser::DAY:
      case sqliParser::HOUR:
      case sqliParser::MINUTE:
      case sqliParser::MONTH:
      case sqliParser::SECOND:
      case sqliParser::FROM_UNIXTIME:
      case sqliParser::YEAR:
      case sqliParser::DATE_ADD:
      case sqliParser::DATE_SUB:
      case sqliParser::COLLATE:
      case sqliParser::AVG:
      case sqliParser::COUNT:
      case sqliParser::MAX:
      case sqliParser::MIN:
      case sqliParser::SUM:
      case sqliParser::COALESCE:
      case sqliParser::DUPLICATE:
      case sqliParser::SERVER:
      case sqliParser::ALIASES:
      case sqliParser::ALIAS:
      case sqliParser::VALUES:
      case sqliParser::VALUE:
      case sqliParser::LOW_PRIORITY:
      case sqliParser::HIGH_PRIORITY:
      case sqliParser::HASH:
      case sqliParser::REFERENCES:
      case sqliParser::TO_CHAR:
      case sqliParser::DATE_FORMAT:
      case sqliParser::SIGNED:
      case sqliParser::INTEGER:
      case sqliParser::LENGTH:
      case sqliParser::REVERSE:
      case sqliParser::IFNULL:
      case sqliParser::HEX:
      case sqliParser::CONV:
      case sqliParser::SLEEP:
      case sqliParser::BENCHMARK:
      case sqliParser::UPDATEXML:
      case sqliParser::EXTRACTVALUE:
      case sqliParser::LOAD_FILE:
      case sqliParser::SYSTEM_USER:
      case sqliParser::SESSION_USER:
      case sqliParser::CURRENT_USER:
      case sqliParser::MD5:
      case sqliParser::ASCII:
      case sqliParser::MID:
      case sqliParser::VERSION:
      case sqliParser::NOW:
      case sqliParser::SYSDATE:
      case sqliParser::ORD:
      case sqliParser::INSTR:
      case sqliParser::CONCAT_WS:
      case sqliParser::GROUP_CONCAT:
      case sqliParser::UNHEX:
      case sqliParser::SUBSTRING:
      case sqliParser::LOCATE:
      case sqliParser::NULLIF:
      case sqliParser::ISNULL:
      case sqliParser::DIVIDE:
      case sqliParser::MOD:
      case sqliParser::OR:
      case sqliParser::AND:
      case sqliParser::XOR:
      case sqliParser::ARROW:
      case sqliParser::EQ:
      case sqliParser::NOT_EQ:
      case sqliParser::LET:
      case sqliParser::GET:
      case sqliParser::SET_VAR:
      case sqliParser::SHIFT_LEFT:
      case sqliParser::SHIFT_RIGHT:
      case sqliParser::PLUS:
      case sqliParser::MINUS:
      case sqliParser::UNQUOTE:
      case sqliParser::INTEGER_NUM:
      case sqliParser::HEX_DIGIT:
      case sqliParser::REAL_NUMBER:
      case sqliParser::TEXT_STRING:
      case sqliParser::ID:
      case sqliParser::SYSTEM_VAR:
      case sqliParser::MORE: {
        enterOuterAlt(_localctx, 1);
        setState(1393);
        table_spec();
        setState(1395);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
        case 1: {
          setState(1394);
          alias();
          break;
        }

        }
        break;
      }

      case sqliParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(1397);
        match(sqliParser::LPAREN);
        setState(1398);
        subquery();
        setState(1400);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
        case 1: {
          setState(1399);
          alias();
          break;
        }

        }
        setState(1403);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::WHERE) {
          setState(1402);
          where_clause();
        }
        setState(1406);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::GROUP) {
          setState(1405);
          groupby_clause();
        }
        setState(1409);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::HAVING) {
          setState(1408);
          having_clause();
        }
        setState(1411);
        match(sqliParser::RPAREN);
        setState(1414);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
        case 1: {
          setState(1413);
          alias();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_conditionContext ------------------------------------------------------------------

sqliParser::Join_conditionContext::Join_conditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Join_conditionContext::ON() {
  return getToken(sqliParser::ON, 0);
}

sqliParser::ExpressionContext* sqliParser::Join_conditionContext::expression() {
  return getRuleContext<sqliParser::ExpressionContext>(0);
}


size_t sqliParser::Join_conditionContext::getRuleIndex() const {
  return sqliParser::RuleJoin_condition;
}

void sqliParser::Join_conditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoin_condition(this);
}

void sqliParser::Join_conditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoin_condition(this);
}


antlrcpp::Any sqliParser::Join_conditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitJoin_condition(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Join_conditionContext* sqliParser::join_condition() {
  Join_conditionContext *_localctx = _tracker.createInstance<Join_conditionContext>(_ctx, getState());
  enterRule(_localctx, 194, sqliParser::RuleJoin_condition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1418);
    match(sqliParser::ON);
    setState(1419);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_hint_listContext ------------------------------------------------------------------

sqliParser::Index_hint_listContext::Index_hint_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Index_hintContext *> sqliParser::Index_hint_listContext::index_hint() {
  return getRuleContexts<sqliParser::Index_hintContext>();
}

sqliParser::Index_hintContext* sqliParser::Index_hint_listContext::index_hint(size_t i) {
  return getRuleContext<sqliParser::Index_hintContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Index_hint_listContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Index_hint_listContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Index_hint_listContext::getRuleIndex() const {
  return sqliParser::RuleIndex_hint_list;
}

void sqliParser::Index_hint_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_hint_list(this);
}

void sqliParser::Index_hint_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_hint_list(this);
}


antlrcpp::Any sqliParser::Index_hint_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_hint_list(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_hint_listContext* sqliParser::index_hint_list() {
  Index_hint_listContext *_localctx = _tracker.createInstance<Index_hint_listContext>(_ctx, getState());
  enterRule(_localctx, 196, sqliParser::RuleIndex_hint_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1421);
    index_hint();
    setState(1426);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(1422);
      match(sqliParser::COMMA);
      setState(1423);
      index_hint();
      setState(1428);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_optionsContext ------------------------------------------------------------------

sqliParser::Index_optionsContext::Index_optionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Index_optionsContext::INDEX() {
  return getToken(sqliParser::INDEX, 0);
}

tree::TerminalNode* sqliParser::Index_optionsContext::KEY() {
  return getToken(sqliParser::KEY, 0);
}

tree::TerminalNode* sqliParser::Index_optionsContext::FOR() {
  return getToken(sqliParser::FOR, 0);
}

tree::TerminalNode* sqliParser::Index_optionsContext::JOIN() {
  return getToken(sqliParser::JOIN, 0);
}

tree::TerminalNode* sqliParser::Index_optionsContext::ORDER() {
  return getToken(sqliParser::ORDER, 0);
}

tree::TerminalNode* sqliParser::Index_optionsContext::BY() {
  return getToken(sqliParser::BY, 0);
}

tree::TerminalNode* sqliParser::Index_optionsContext::GROUP() {
  return getToken(sqliParser::GROUP, 0);
}


size_t sqliParser::Index_optionsContext::getRuleIndex() const {
  return sqliParser::RuleIndex_options;
}

void sqliParser::Index_optionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_options(this);
}

void sqliParser::Index_optionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_options(this);
}


antlrcpp::Any sqliParser::Index_optionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_options(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_optionsContext* sqliParser::index_options() {
  Index_optionsContext *_localctx = _tracker.createInstance<Index_optionsContext>(_ctx, getState());
  enterRule(_localctx, 198, sqliParser::RuleIndex_options);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1429);
    _la = _input->LA(1);
    if (!(_la == sqliParser::INDEX || _la == sqliParser::KEY)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1438);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::FOR) {
      setState(1430);
      match(sqliParser::FOR);
      setState(1436);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case sqliParser::JOIN: {
          setState(1431);
          match(sqliParser::JOIN);
          break;
        }

        case sqliParser::ORDER: {
          setState(1432);
          match(sqliParser::ORDER);
          setState(1433);
          match(sqliParser::BY);
          break;
        }

        case sqliParser::GROUP: {
          setState(1434);
          match(sqliParser::GROUP);
          setState(1435);
          match(sqliParser::BY);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_hintContext ------------------------------------------------------------------

sqliParser::Index_hintContext::Index_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Index_hintContext::USE() {
  return getToken(sqliParser::USE, 0);
}

sqliParser::Index_optionsContext* sqliParser::Index_hintContext::index_options() {
  return getRuleContext<sqliParser::Index_optionsContext>(0);
}

tree::TerminalNode* sqliParser::Index_hintContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

tree::TerminalNode* sqliParser::Index_hintContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

sqliParser::Index_listContext* sqliParser::Index_hintContext::index_list() {
  return getRuleContext<sqliParser::Index_listContext>(0);
}

tree::TerminalNode* sqliParser::Index_hintContext::IGNORE() {
  return getToken(sqliParser::IGNORE, 0);
}


size_t sqliParser::Index_hintContext::getRuleIndex() const {
  return sqliParser::RuleIndex_hint;
}

void sqliParser::Index_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_hint(this);
}

void sqliParser::Index_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_hint(this);
}


antlrcpp::Any sqliParser::Index_hintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_hint(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_hintContext* sqliParser::index_hint() {
  Index_hintContext *_localctx = _tracker.createInstance<Index_hintContext>(_ctx, getState());
  enterRule(_localctx, 200, sqliParser::RuleIndex_hint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1454);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::USE: {
        enterOuterAlt(_localctx, 1);
        setState(1440);
        match(sqliParser::USE);
        setState(1441);
        index_options();
        setState(1442);
        match(sqliParser::LPAREN);
        setState(1444);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << sqliParser::TRUE)
          | (1ULL << sqliParser::FALSE)
          | (1ULL << sqliParser::ALL)
          | (1ULL << sqliParser::NOT)
          | (1ULL << sqliParser::LIKE)
          | (1ULL << sqliParser::CHARACTER)
          | (1ULL << sqliParser::IF)
          | (1ULL << sqliParser::EXISTS)
          | (1ULL << sqliParser::ASC)
          | (1ULL << sqliParser::DESC)
          | (1ULL << sqliParser::BY)
          | (1ULL << sqliParser::HAVING)
          | (1ULL << sqliParser::WHERE)
          | (1ULL << sqliParser::AS)
          | (1ULL << sqliParser::SELECT)
          | (1ULL << sqliParser::DISTINCT)
          | (1ULL << sqliParser::INSERT)
          | (1ULL << sqliParser::OVERWRITE)
          | (1ULL << sqliParser::OUTER)
          | (1ULL << sqliParser::UNIQUEJOIN)
          | (1ULL << sqliParser::PRESERVE)
          | (1ULL << sqliParser::JOIN)
          | (1ULL << sqliParser::LEFT)
          | (1ULL << sqliParser::RIGHT)
          | (1ULL << sqliParser::FULL)
          | (1ULL << sqliParser::ON)
          | (1ULL << sqliParser::PARTITION)
          | (1ULL << sqliParser::PARTITIONS)
          | (1ULL << sqliParser::TABLE)
          | (1ULL << sqliParser::TABLES)
          | (1ULL << sqliParser::COLUMNS)
          | (1ULL << sqliParser::INDEX)
          | (1ULL << sqliParser::INDEXES)
          | (1ULL << sqliParser::REBUILD)
          | (1ULL << sqliParser::FUNCTIONS)
          | (1ULL << sqliParser::SHOW)
          | (1ULL << sqliParser::MSCK)
          | (1ULL << sqliParser::REPAIR)
          | (1ULL << sqliParser::DIRECTORY)
          | (1ULL << sqliParser::LOCAL)
          | (1ULL << sqliParser::TRANSFORM)
          | (1ULL << sqliParser::USING)
          | (1ULL << sqliParser::CLUSTER)
          | (1ULL << sqliParser::DISTRIBUTE)
          | (1ULL << sqliParser::SORT)
          | (1ULL << sqliParser::UNION)
          | (1ULL << sqliParser::LOAD)
          | (1ULL << sqliParser::EXPORT)
          | (1ULL << sqliParser::IMPORT)
          | (1ULL << sqliParser::DATA)
          | (1ULL << sqliParser::INPATH)
          | (1ULL << sqliParser::IS)
          | (1ULL << sqliParser::CNULL)
          | (1ULL << sqliParser::CREATE)
          | (1ULL << sqliParser::EXTERNAL)
          | (1ULL << sqliParser::ALTER)
          | (1ULL << sqliParser::CHANGE)
          | (1ULL << sqliParser::COLUMN)
          | (1ULL << sqliParser::FIRST)
          | (1ULL << sqliParser::AFTER))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (sqliParser::DESCRIBE - 64))
          | (1ULL << (sqliParser::DROP - 64))
          | (1ULL << (sqliParser::RENAME - 64))
          | (1ULL << (sqliParser::IGNORE - 64))
          | (1ULL << (sqliParser::PROTECTION - 64))
          | (1ULL << (sqliParser::TO - 64))
          | (1ULL << (sqliParser::COMMENT - 64))
          | (1ULL << (sqliParser::BOOLEAN - 64))
          | (1ULL << (sqliParser::TINYINT - 64))
          | (1ULL << (sqliParser::SMALLINT - 64))
          | (1ULL << (sqliParser::INT - 64))
          | (1ULL << (sqliParser::BIGINT - 64))
          | (1ULL << (sqliParser::FLOAT - 64))
          | (1ULL << (sqliParser::DOUBLE - 64))
          | (1ULL << (sqliParser::DATE - 64))
          | (1ULL << (sqliParser::DATETIME - 64))
          | (1ULL << (sqliParser::TIMESTAMP - 64))
          | (1ULL << (sqliParser::DECIMAL - 64))
          | (1ULL << (sqliParser::STRING - 64))
          | (1ULL << (sqliParser::VARCHAR - 64))
          | (1ULL << (sqliParser::ARRAY - 64))
          | (1ULL << (sqliParser::STRUCT - 64))
          | (1ULL << (sqliParser::MAP - 64))
          | (1ULL << (sqliParser::UNIONTYPE - 64))
          | (1ULL << (sqliParser::REDUCE - 64))
          | (1ULL << (sqliParser::PARTITIONED - 64))
          | (1ULL << (sqliParser::CLUSTERED - 64))
          | (1ULL << (sqliParser::SORTED - 64))
          | (1ULL << (sqliParser::INTO - 64))
          | (1ULL << (sqliParser::BUCKETS - 64))
          | (1ULL << (sqliParser::ROW - 64))
          | (1ULL << (sqliParser::ROWS - 64))
          | (1ULL << (sqliParser::FORMAT - 64))
          | (1ULL << (sqliParser::DELIMITED - 64))
          | (1ULL << (sqliParser::FIELDS - 64))
          | (1ULL << (sqliParser::TERMINATED - 64))
          | (1ULL << (sqliParser::ESCAPED - 64))
          | (1ULL << (sqliParser::COLLECTION - 64))
          | (1ULL << (sqliParser::ITEMS - 64))
          | (1ULL << (sqliParser::KEYS - 64))
          | (1ULL << (sqliParser::KEY - 64))
          | (1ULL << (sqliParser::LINES - 64))
          | (1ULL << (sqliParser::STORED - 64))
          | (1ULL << (sqliParser::FILEFORMAT - 64))
          | (1ULL << (sqliParser::SEQUENCEFILE - 64))
          | (1ULL << (sqliParser::TEXTFILE - 64))
          | (1ULL << (sqliParser::RCFILE - 64))
          | (1ULL << (sqliParser::ORCFILE - 64))
          | (1ULL << (sqliParser::INPUTFORMAT - 64))
          | (1ULL << (sqliParser::OUTPUTFORMAT - 64))
          | (1ULL << (sqliParser::INPUTDRIVER - 64))
          | (1ULL << (sqliParser::OUTPUTDRIVER - 64))
          | (1ULL << (sqliParser::OFFLINE - 64))
          | (1ULL << (sqliParser::ENABLE - 64))
          | (1ULL << (sqliParser::DEFAULT - 64))
          | (1ULL << (sqliParser::DISABLE - 64))
          | (1ULL << (sqliParser::READONLY - 64))
          | (1ULL << (sqliParser::LOCATION - 64))
          | (1ULL << (sqliParser::TABLESAMPLE - 64))
          | (1ULL << (sqliParser::BUCKET - 64))
          | (1ULL << (sqliParser::OUT - 64))
          | (1ULL << (sqliParser::OF - 64))
          | (1ULL << (sqliParser::PERCENT - 64))
          | (1ULL << (sqliParser::CAST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (sqliParser::ADD - 128))
          | (1ULL << (sqliParser::REPLACE - 128))
          | (1ULL << (sqliParser::RLIKE - 128))
          | (1ULL << (sqliParser::REGEXP - 128))
          | (1ULL << (sqliParser::TEMPORARY - 128))
          | (1ULL << (sqliParser::FUNCTION - 128))
          | (1ULL << (sqliParser::MACRO - 128))
          | (1ULL << (sqliParser::EXPLAIN - 128))
          | (1ULL << (sqliParser::EXTENDED - 128))
          | (1ULL << (sqliParser::FORMATTED - 128))
          | (1ULL << (sqliParser::PRETTY - 128))
          | (1ULL << (sqliParser::DEPENDENCY - 128))
          | (1ULL << (sqliParser::LOGICAL - 128))
          | (1ULL << (sqliParser::SERDE - 128))
          | (1ULL << (sqliParser::WITH - 128))
          | (1ULL << (sqliParser::DEFERRED - 128))
          | (1ULL << (sqliParser::SERDEPROPERTIES - 128))
          | (1ULL << (sqliParser::DBPROPERTIES - 128))
          | (1ULL << (sqliParser::LIMIT - 128))
          | (1ULL << (sqliParser::SET - 128))
          | (1ULL << (sqliParser::UNSET - 128))
          | (1ULL << (sqliParser::TBLPROPERTIES - 128))
          | (1ULL << (sqliParser::IDXPROPERTIES - 128))
          | (1ULL << (sqliParser::CASCADED - 128))
          | (1ULL << (sqliParser::CASE - 128))
          | (1ULL << (sqliParser::WHEN - 128))
          | (1ULL << (sqliParser::THEN - 128))
          | (1ULL << (sqliParser::ELSE - 128))
          | (1ULL << (sqliParser::END - 128))
          | (1ULL << (sqliParser::MAPJOIN - 128))
          | (1ULL << (sqliParser::STREAMTABLE - 128))
          | (1ULL << (sqliParser::CLUSTERSTATUS - 128))
          | (1ULL << (sqliParser::UTC - 128))
          | (1ULL << (sqliParser::LONG - 128))
          | (1ULL << (sqliParser::DELETE - 128))
          | (1ULL << (sqliParser::FETCH - 128))
          | (1ULL << (sqliParser::INTERSECT - 128))
          | (1ULL << (sqliParser::VIEW - 128))
          | (1ULL << (sqliParser::IN - 128))
          | (1ULL << (sqliParser::DATABASE - 128))
          | (1ULL << (sqliParser::DATABASES - 128))
          | (1ULL << (sqliParser::MATERIALIZED - 128))
          | (1ULL << (sqliParser::SCHEMA - 128))
          | (1ULL << (sqliParser::SCHEMAS - 128))
          | (1ULL << (sqliParser::GRANT - 128))
          | (1ULL << (sqliParser::REVOKE - 128))
          | (1ULL << (sqliParser::SSL - 128))
          | (1ULL << (sqliParser::UNDO - 128))
          | (1ULL << (sqliParser::LOCK - 128))
          | (1ULL << (sqliParser::LOCKS - 128))
          | (1ULL << (sqliParser::UNLOCK - 128))
          | (1ULL << (sqliParser::SHARED - 128))
          | (1ULL << (sqliParser::EXCLUSIVE - 128))
          | (1ULL << (sqliParser::PROCEDURE - 128))
          | (1ULL << (sqliParser::UNSIGNED - 128))
          | (1ULL << (sqliParser::WHILE - 128))
          | (1ULL << (sqliParser::READ - 128))
          | (1ULL << (sqliParser::READS - 128))
          | (1ULL << (sqliParser::PURGE - 128))
          | (1ULL << (sqliParser::RANGE - 128))
          | (1ULL << (sqliParser::ANALYZE - 128))
          | (1ULL << (sqliParser::BEFORE - 128))
          | (1ULL << (sqliParser::BETWEEN - 128))
          | (1ULL << (sqliParser::BOTH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 192)) & ((1ULL << (sqliParser::BINARY - 192))
          | (1ULL << (sqliParser::CROSS - 192))
          | (1ULL << (sqliParser::CONTINUE - 192))
          | (1ULL << (sqliParser::CURSOR - 192))
          | (1ULL << (sqliParser::TRIGGER - 192))
          | (1ULL << (sqliParser::RECORDREADER - 192))
          | (1ULL << (sqliParser::RECORDWRITER - 192))
          | (1ULL << (sqliParser::LATERAL - 192))
          | (1ULL << (sqliParser::TOUCH - 192))
          | (1ULL << (sqliParser::ARCHIVE - 192))
          | (1ULL << (sqliParser::UNARCHIVE - 192))
          | (1ULL << (sqliParser::COMPUTE - 192))
          | (1ULL << (sqliParser::STATISTICS - 192))
          | (1ULL << (sqliParser::USE - 192))
          | (1ULL << (sqliParser::OPTION - 192))
          | (1ULL << (sqliParser::CONCATENATE - 192))
          | (1ULL << (sqliParser::UPDATE - 192))
          | (1ULL << (sqliParser::RESTRICT - 192))
          | (1ULL << (sqliParser::CASCADE - 192))
          | (1ULL << (sqliParser::SKEWED - 192))
          | (1ULL << (sqliParser::ROLLUP - 192))
          | (1ULL << (sqliParser::CUBE - 192))
          | (1ULL << (sqliParser::DIRECTORIES - 192))
          | (1ULL << (sqliParser::FOR - 192))
          | (1ULL << (sqliParser::WINDOW - 192))
          | (1ULL << (sqliParser::UNBOUNDED - 192))
          | (1ULL << (sqliParser::PRECEDING - 192))
          | (1ULL << (sqliParser::FOLLOWING - 192))
          | (1ULL << (sqliParser::CURRENT - 192))
          | (1ULL << (sqliParser::LESS - 192))
          | (1ULL << (sqliParser::OVER - 192))
          | (1ULL << (sqliParser::GROUPING - 192))
          | (1ULL << (sqliParser::SETS - 192))
          | (1ULL << (sqliParser::TRUNCATE - 192))
          | (1ULL << (sqliParser::NOSCAN - 192))
          | (1ULL << (sqliParser::PARTIALSCAN - 192))
          | (1ULL << (sqliParser::USER - 192))
          | (1ULL << (sqliParser::ROLE - 192))
          | (1ULL << (sqliParser::INNER - 192))
          | (1ULL << (sqliParser::EXCHANGE - 192))
          | (1ULL << (sqliParser::IDENTIFIED - 192))
          | (1ULL << (sqliParser::CHAR - 192))
          | (1ULL << (sqliParser::ABS - 192))
          | (1ULL << (sqliParser::ACOS - 192))
          | (1ULL << (sqliParser::ASIN - 192))
          | (1ULL << (sqliParser::ATAN - 192))
          | (1ULL << (sqliParser::CEIL - 192))
          | (1ULL << (sqliParser::COS - 192))
          | (1ULL << (sqliParser::COT - 192))
          | (1ULL << (sqliParser::EXP - 192))
          | (1ULL << (sqliParser::FLOOR - 192))
          | (1ULL << (sqliParser::LN - 192))
          | (1ULL << (sqliParser::POW - 192))
          | (1ULL << (sqliParser::RAND - 192))
          | (1ULL << (sqliParser::ROUND - 192))
          | (1ULL << (sqliParser::SIN - 192))
          | (1ULL << (sqliParser::SQRT - 192))
          | (1ULL << (sqliParser::TAN - 192))
          | (1ULL << (sqliParser::LCASE - 192))
          | (1ULL << (sqliParser::LOWER - 192))
          | (1ULL << (sqliParser::LTRIM - 192))
          | (1ULL << (sqliParser::RTRIM - 192))
          | (1ULL << (sqliParser::CONCAT - 192))
          | (1ULL << (sqliParser::SUBSTR - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 256)) & ((1ULL << (sqliParser::TRIM - 256))
          | (1ULL << (sqliParser::UCASE - 256))
          | (1ULL << (sqliParser::UPPER - 256))
          | (1ULL << (sqliParser::INTERVAL - 256))
          | (1ULL << (sqliParser::TO_DATE - 256))
          | (1ULL << (sqliParser::DAY - 256))
          | (1ULL << (sqliParser::HOUR - 256))
          | (1ULL << (sqliParser::MINUTE - 256))
          | (1ULL << (sqliParser::MONTH - 256))
          | (1ULL << (sqliParser::SECOND - 256))
          | (1ULL << (sqliParser::FROM_UNIXTIME - 256))
          | (1ULL << (sqliParser::YEAR - 256))
          | (1ULL << (sqliParser::DATE_ADD - 256))
          | (1ULL << (sqliParser::DATE_SUB - 256))
          | (1ULL << (sqliParser::COLLATE - 256))
          | (1ULL << (sqliParser::AVG - 256))
          | (1ULL << (sqliParser::COUNT - 256))
          | (1ULL << (sqliParser::MAX - 256))
          | (1ULL << (sqliParser::MIN - 256))
          | (1ULL << (sqliParser::SUM - 256))
          | (1ULL << (sqliParser::COALESCE - 256))
          | (1ULL << (sqliParser::DUPLICATE - 256))
          | (1ULL << (sqliParser::SERVER - 256))
          | (1ULL << (sqliParser::ALIASES - 256))
          | (1ULL << (sqliParser::ALIAS - 256))
          | (1ULL << (sqliParser::VALUES - 256))
          | (1ULL << (sqliParser::VALUE - 256))
          | (1ULL << (sqliParser::LOW_PRIORITY - 256))
          | (1ULL << (sqliParser::HIGH_PRIORITY - 256))
          | (1ULL << (sqliParser::HASH - 256))
          | (1ULL << (sqliParser::REFERENCES - 256))
          | (1ULL << (sqliParser::TO_CHAR - 256))
          | (1ULL << (sqliParser::DATE_FORMAT - 256))
          | (1ULL << (sqliParser::SIGNED - 256))
          | (1ULL << (sqliParser::INTEGER - 256))
          | (1ULL << (sqliParser::LENGTH - 256))
          | (1ULL << (sqliParser::REVERSE - 256))
          | (1ULL << (sqliParser::IFNULL - 256))
          | (1ULL << (sqliParser::HEX - 256))
          | (1ULL << (sqliParser::CONV - 256))
          | (1ULL << (sqliParser::SLEEP - 256))
          | (1ULL << (sqliParser::BENCHMARK - 256))
          | (1ULL << (sqliParser::UPDATEXML - 256))
          | (1ULL << (sqliParser::EXTRACTVALUE - 256))
          | (1ULL << (sqliParser::LOAD_FILE - 256))
          | (1ULL << (sqliParser::SYSTEM_USER - 256))
          | (1ULL << (sqliParser::SESSION_USER - 256))
          | (1ULL << (sqliParser::CURRENT_USER - 256))
          | (1ULL << (sqliParser::MD5 - 256))
          | (1ULL << (sqliParser::ASCII - 256))
          | (1ULL << (sqliParser::MID - 256))
          | (1ULL << (sqliParser::VERSION - 256))
          | (1ULL << (sqliParser::NOW - 256))
          | (1ULL << (sqliParser::SYSDATE - 256))
          | (1ULL << (sqliParser::ORD - 256))
          | (1ULL << (sqliParser::INSTR - 256))
          | (1ULL << (sqliParser::CONCAT_WS - 256))
          | (1ULL << (sqliParser::GROUP_CONCAT - 256))
          | (1ULL << (sqliParser::UNHEX - 256))
          | (1ULL << (sqliParser::SUBSTRING - 256))
          | (1ULL << (sqliParser::LOCATE - 256))
          | (1ULL << (sqliParser::NULLIF - 256))
          | (1ULL << (sqliParser::ISNULL - 256)))) != 0) || ((((_la - 320) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 320)) & ((1ULL << (sqliParser::DIVIDE - 320))
          | (1ULL << (sqliParser::MOD - 320))
          | (1ULL << (sqliParser::OR - 320))
          | (1ULL << (sqliParser::AND - 320))
          | (1ULL << (sqliParser::XOR - 320))
          | (1ULL << (sqliParser::ARROW - 320))
          | (1ULL << (sqliParser::EQ - 320))
          | (1ULL << (sqliParser::NOT_EQ - 320))
          | (1ULL << (sqliParser::LET - 320))
          | (1ULL << (sqliParser::GET - 320))
          | (1ULL << (sqliParser::SET_VAR - 320))
          | (1ULL << (sqliParser::SHIFT_LEFT - 320))
          | (1ULL << (sqliParser::SHIFT_RIGHT - 320))
          | (1ULL << (sqliParser::PLUS - 320))
          | (1ULL << (sqliParser::MINUS - 320))
          | (1ULL << (sqliParser::UNQUOTE - 320))
          | (1ULL << (sqliParser::INTEGER_NUM - 320))
          | (1ULL << (sqliParser::HEX_DIGIT - 320))
          | (1ULL << (sqliParser::REAL_NUMBER - 320))
          | (1ULL << (sqliParser::TEXT_STRING - 320))
          | (1ULL << (sqliParser::ID - 320))
          | (1ULL << (sqliParser::SYSTEM_VAR - 320))
          | (1ULL << (sqliParser::MORE - 320)))) != 0)) {
          setState(1443);
          index_list();
        }
        setState(1446);
        match(sqliParser::RPAREN);
        break;
      }

      case sqliParser::IGNORE: {
        enterOuterAlt(_localctx, 2);
        setState(1448);
        match(sqliParser::IGNORE);
        setState(1449);
        index_options();
        setState(1450);
        match(sqliParser::LPAREN);
        setState(1451);
        index_list();
        setState(1452);
        match(sqliParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_listContext ------------------------------------------------------------------

sqliParser::Index_listContext::Index_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Index_nameContext *> sqliParser::Index_listContext::index_name() {
  return getRuleContexts<sqliParser::Index_nameContext>();
}

sqliParser::Index_nameContext* sqliParser::Index_listContext::index_name(size_t i) {
  return getRuleContext<sqliParser::Index_nameContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Index_listContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Index_listContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Index_listContext::getRuleIndex() const {
  return sqliParser::RuleIndex_list;
}

void sqliParser::Index_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_list(this);
}

void sqliParser::Index_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_list(this);
}


antlrcpp::Any sqliParser::Index_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_list(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_listContext* sqliParser::index_list() {
  Index_listContext *_localctx = _tracker.createInstance<Index_listContext>(_ctx, getState());
  enterRule(_localctx, 202, sqliParser::RuleIndex_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1456);
    index_name();
    setState(1461);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(1457);
      match(sqliParser::COMMA);
      setState(1458);
      index_name();
      setState(1463);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Partition_clauseContext ------------------------------------------------------------------

sqliParser::Partition_clauseContext::Partition_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Partition_clauseContext::PARTITION() {
  return getToken(sqliParser::PARTITION, 0);
}

tree::TerminalNode* sqliParser::Partition_clauseContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

sqliParser::Partition_namesContext* sqliParser::Partition_clauseContext::partition_names() {
  return getRuleContext<sqliParser::Partition_namesContext>(0);
}

tree::TerminalNode* sqliParser::Partition_clauseContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}


size_t sqliParser::Partition_clauseContext::getRuleIndex() const {
  return sqliParser::RulePartition_clause;
}

void sqliParser::Partition_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPartition_clause(this);
}

void sqliParser::Partition_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPartition_clause(this);
}


antlrcpp::Any sqliParser::Partition_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPartition_clause(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Partition_clauseContext* sqliParser::partition_clause() {
  Partition_clauseContext *_localctx = _tracker.createInstance<Partition_clauseContext>(_ctx, getState());
  enterRule(_localctx, 204, sqliParser::RulePartition_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1464);
    match(sqliParser::PARTITION);
    setState(1465);
    match(sqliParser::LPAREN);
    setState(1466);
    partition_names();
    setState(1467);
    match(sqliParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Partition_namesContext ------------------------------------------------------------------

sqliParser::Partition_namesContext::Partition_namesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sqliParser::Partition_nameContext *> sqliParser::Partition_namesContext::partition_name() {
  return getRuleContexts<sqliParser::Partition_nameContext>();
}

sqliParser::Partition_nameContext* sqliParser::Partition_namesContext::partition_name(size_t i) {
  return getRuleContext<sqliParser::Partition_nameContext>(i);
}

std::vector<tree::TerminalNode *> sqliParser::Partition_namesContext::COMMA() {
  return getTokens(sqliParser::COMMA);
}

tree::TerminalNode* sqliParser::Partition_namesContext::COMMA(size_t i) {
  return getToken(sqliParser::COMMA, i);
}


size_t sqliParser::Partition_namesContext::getRuleIndex() const {
  return sqliParser::RulePartition_names;
}

void sqliParser::Partition_namesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPartition_names(this);
}

void sqliParser::Partition_namesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPartition_names(this);
}


antlrcpp::Any sqliParser::Partition_namesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPartition_names(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Partition_namesContext* sqliParser::partition_names() {
  Partition_namesContext *_localctx = _tracker.createInstance<Partition_namesContext>(_ctx, getState());
  enterRule(_localctx, 206, sqliParser::RulePartition_names);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1469);
    partition_name();
    setState(1474);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sqliParser::COMMA) {
      setState(1470);
      match(sqliParser::COMMA);
      setState(1471);
      partition_name();
      setState(1476);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

sqliParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::KeywordContext::TRUE() {
  return getToken(sqliParser::TRUE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FALSE() {
  return getToken(sqliParser::FALSE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ALL() {
  return getToken(sqliParser::ALL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::NOT() {
  return getToken(sqliParser::NOT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LIKE() {
  return getToken(sqliParser::LIKE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXISTS() {
  return getToken(sqliParser::EXISTS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ASC() {
  return getToken(sqliParser::ASC, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DESC() {
  return getToken(sqliParser::DESC, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BY() {
  return getToken(sqliParser::BY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::HAVING() {
  return getToken(sqliParser::HAVING, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::WHERE() {
  return getToken(sqliParser::WHERE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::AS() {
  return getToken(sqliParser::AS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SELECT() {
  return getToken(sqliParser::SELECT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DISTINCT() {
  return getToken(sqliParser::DISTINCT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INSERT() {
  return getToken(sqliParser::INSERT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OVERWRITE() {
  return getToken(sqliParser::OVERWRITE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OUTER() {
  return getToken(sqliParser::OUTER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNIQUEJOIN() {
  return getToken(sqliParser::UNIQUEJOIN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PRESERVE() {
  return getToken(sqliParser::PRESERVE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::JOIN() {
  return getToken(sqliParser::JOIN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LEFT() {
  return getToken(sqliParser::LEFT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RIGHT() {
  return getToken(sqliParser::RIGHT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FULL() {
  return getToken(sqliParser::FULL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ON() {
  return getToken(sqliParser::ON, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PARTITION() {
  return getToken(sqliParser::PARTITION, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PARTITIONS() {
  return getToken(sqliParser::PARTITIONS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TABLE() {
  return getToken(sqliParser::TABLE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TABLES() {
  return getToken(sqliParser::TABLES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COLUMNS() {
  return getToken(sqliParser::COLUMNS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INDEX() {
  return getToken(sqliParser::INDEX, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INDEXES() {
  return getToken(sqliParser::INDEXES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REBUILD() {
  return getToken(sqliParser::REBUILD, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FUNCTIONS() {
  return getToken(sqliParser::FUNCTIONS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SHOW() {
  return getToken(sqliParser::SHOW, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MSCK() {
  return getToken(sqliParser::MSCK, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REPAIR() {
  return getToken(sqliParser::REPAIR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DIRECTORY() {
  return getToken(sqliParser::DIRECTORY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOCAL() {
  return getToken(sqliParser::LOCAL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TRANSFORM() {
  return getToken(sqliParser::TRANSFORM, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::USING() {
  return getToken(sqliParser::USING, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CLUSTER() {
  return getToken(sqliParser::CLUSTER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DISTRIBUTE() {
  return getToken(sqliParser::DISTRIBUTE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SORT() {
  return getToken(sqliParser::SORT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNION() {
  return getToken(sqliParser::UNION, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOAD() {
  return getToken(sqliParser::LOAD, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXPORT() {
  return getToken(sqliParser::EXPORT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IMPORT() {
  return getToken(sqliParser::IMPORT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATA() {
  return getToken(sqliParser::DATA, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INPATH() {
  return getToken(sqliParser::INPATH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IS() {
  return getToken(sqliParser::IS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CNULL() {
  return getToken(sqliParser::CNULL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CREATE() {
  return getToken(sqliParser::CREATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXTERNAL() {
  return getToken(sqliParser::EXTERNAL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ALTER() {
  return getToken(sqliParser::ALTER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CHANGE() {
  return getToken(sqliParser::CHANGE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COLUMN() {
  return getToken(sqliParser::COLUMN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FIRST() {
  return getToken(sqliParser::FIRST, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::AFTER() {
  return getToken(sqliParser::AFTER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DESCRIBE() {
  return getToken(sqliParser::DESCRIBE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DROP() {
  return getToken(sqliParser::DROP, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RENAME() {
  return getToken(sqliParser::RENAME, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IGNORE() {
  return getToken(sqliParser::IGNORE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PROTECTION() {
  return getToken(sqliParser::PROTECTION, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TO() {
  return getToken(sqliParser::TO, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COMMENT() {
  return getToken(sqliParser::COMMENT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BOOLEAN() {
  return getToken(sqliParser::BOOLEAN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TINYINT() {
  return getToken(sqliParser::TINYINT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SMALLINT() {
  return getToken(sqliParser::SMALLINT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INT() {
  return getToken(sqliParser::INT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BIGINT() {
  return getToken(sqliParser::BIGINT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FLOAT() {
  return getToken(sqliParser::FLOAT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DOUBLE() {
  return getToken(sqliParser::DOUBLE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATE() {
  return getToken(sqliParser::DATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATETIME() {
  return getToken(sqliParser::DATETIME, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TIMESTAMP() {
  return getToken(sqliParser::TIMESTAMP, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DECIMAL() {
  return getToken(sqliParser::DECIMAL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::STRING() {
  return getToken(sqliParser::STRING, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::VARCHAR() {
  return getToken(sqliParser::VARCHAR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ARRAY() {
  return getToken(sqliParser::ARRAY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::STRUCT() {
  return getToken(sqliParser::STRUCT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MAP() {
  return getToken(sqliParser::MAP, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNIONTYPE() {
  return getToken(sqliParser::UNIONTYPE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REDUCE() {
  return getToken(sqliParser::REDUCE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PARTITIONED() {
  return getToken(sqliParser::PARTITIONED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CLUSTERED() {
  return getToken(sqliParser::CLUSTERED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SORTED() {
  return getToken(sqliParser::SORTED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INTO() {
  return getToken(sqliParser::INTO, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BUCKETS() {
  return getToken(sqliParser::BUCKETS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ROW() {
  return getToken(sqliParser::ROW, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ROWS() {
  return getToken(sqliParser::ROWS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FORMAT() {
  return getToken(sqliParser::FORMAT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DELIMITED() {
  return getToken(sqliParser::DELIMITED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FIELDS() {
  return getToken(sqliParser::FIELDS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TERMINATED() {
  return getToken(sqliParser::TERMINATED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ESCAPED() {
  return getToken(sqliParser::ESCAPED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COLLECTION() {
  return getToken(sqliParser::COLLECTION, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ITEMS() {
  return getToken(sqliParser::ITEMS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::KEYS() {
  return getToken(sqliParser::KEYS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::KEY() {
  return getToken(sqliParser::KEY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LINES() {
  return getToken(sqliParser::LINES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::STORED() {
  return getToken(sqliParser::STORED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FILEFORMAT() {
  return getToken(sqliParser::FILEFORMAT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SEQUENCEFILE() {
  return getToken(sqliParser::SEQUENCEFILE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TEXTFILE() {
  return getToken(sqliParser::TEXTFILE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RCFILE() {
  return getToken(sqliParser::RCFILE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ORCFILE() {
  return getToken(sqliParser::ORCFILE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INPUTFORMAT() {
  return getToken(sqliParser::INPUTFORMAT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OUTPUTFORMAT() {
  return getToken(sqliParser::OUTPUTFORMAT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INPUTDRIVER() {
  return getToken(sqliParser::INPUTDRIVER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OUTPUTDRIVER() {
  return getToken(sqliParser::OUTPUTDRIVER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OFFLINE() {
  return getToken(sqliParser::OFFLINE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ENABLE() {
  return getToken(sqliParser::ENABLE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DEFAULT() {
  return getToken(sqliParser::DEFAULT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DISABLE() {
  return getToken(sqliParser::DISABLE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::READONLY() {
  return getToken(sqliParser::READONLY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOCATION() {
  return getToken(sqliParser::LOCATION, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TABLESAMPLE() {
  return getToken(sqliParser::TABLESAMPLE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BUCKET() {
  return getToken(sqliParser::BUCKET, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OUT() {
  return getToken(sqliParser::OUT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OF() {
  return getToken(sqliParser::OF, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PERCENT() {
  return getToken(sqliParser::PERCENT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CAST() {
  return getToken(sqliParser::CAST, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ADD() {
  return getToken(sqliParser::ADD, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REPLACE() {
  return getToken(sqliParser::REPLACE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RLIKE() {
  return getToken(sqliParser::RLIKE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REGEXP() {
  return getToken(sqliParser::REGEXP, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TEMPORARY() {
  return getToken(sqliParser::TEMPORARY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FUNCTION() {
  return getToken(sqliParser::FUNCTION, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MACRO() {
  return getToken(sqliParser::MACRO, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXPLAIN() {
  return getToken(sqliParser::EXPLAIN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXTENDED() {
  return getToken(sqliParser::EXTENDED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FORMATTED() {
  return getToken(sqliParser::FORMATTED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PRETTY() {
  return getToken(sqliParser::PRETTY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DEPENDENCY() {
  return getToken(sqliParser::DEPENDENCY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOGICAL() {
  return getToken(sqliParser::LOGICAL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SERDE() {
  return getToken(sqliParser::SERDE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::WITH() {
  return getToken(sqliParser::WITH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DEFERRED() {
  return getToken(sqliParser::DEFERRED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SERDEPROPERTIES() {
  return getToken(sqliParser::SERDEPROPERTIES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DBPROPERTIES() {
  return getToken(sqliParser::DBPROPERTIES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LIMIT() {
  return getToken(sqliParser::LIMIT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SET() {
  return getToken(sqliParser::SET, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNSET() {
  return getToken(sqliParser::UNSET, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TBLPROPERTIES() {
  return getToken(sqliParser::TBLPROPERTIES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IDXPROPERTIES() {
  return getToken(sqliParser::IDXPROPERTIES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CASCADED() {
  return getToken(sqliParser::CASCADED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::THEN() {
  return getToken(sqliParser::THEN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ELSE() {
  return getToken(sqliParser::ELSE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::END() {
  return getToken(sqliParser::END, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MAPJOIN() {
  return getToken(sqliParser::MAPJOIN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::STREAMTABLE() {
  return getToken(sqliParser::STREAMTABLE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CLUSTERSTATUS() {
  return getToken(sqliParser::CLUSTERSTATUS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UTC() {
  return getToken(sqliParser::UTC, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LONG() {
  return getToken(sqliParser::LONG, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DELETE() {
  return getToken(sqliParser::DELETE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FETCH() {
  return getToken(sqliParser::FETCH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INTERSECT() {
  return getToken(sqliParser::INTERSECT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::VIEW() {
  return getToken(sqliParser::VIEW, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IN() {
  return getToken(sqliParser::IN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATABASE() {
  return getToken(sqliParser::DATABASE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATABASES() {
  return getToken(sqliParser::DATABASES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MATERIALIZED() {
  return getToken(sqliParser::MATERIALIZED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SCHEMA() {
  return getToken(sqliParser::SCHEMA, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SCHEMAS() {
  return getToken(sqliParser::SCHEMAS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::GRANT() {
  return getToken(sqliParser::GRANT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REVOKE() {
  return getToken(sqliParser::REVOKE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SSL() {
  return getToken(sqliParser::SSL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNDO() {
  return getToken(sqliParser::UNDO, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOCK() {
  return getToken(sqliParser::LOCK, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOCKS() {
  return getToken(sqliParser::LOCKS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNLOCK() {
  return getToken(sqliParser::UNLOCK, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SHARED() {
  return getToken(sqliParser::SHARED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXCLUSIVE() {
  return getToken(sqliParser::EXCLUSIVE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PROCEDURE() {
  return getToken(sqliParser::PROCEDURE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNSIGNED() {
  return getToken(sqliParser::UNSIGNED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::WHILE() {
  return getToken(sqliParser::WHILE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::READ() {
  return getToken(sqliParser::READ, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::READS() {
  return getToken(sqliParser::READS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PURGE() {
  return getToken(sqliParser::PURGE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RANGE() {
  return getToken(sqliParser::RANGE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ANALYZE() {
  return getToken(sqliParser::ANALYZE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BEFORE() {
  return getToken(sqliParser::BEFORE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BETWEEN() {
  return getToken(sqliParser::BETWEEN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BOTH() {
  return getToken(sqliParser::BOTH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::BINARY() {
  return getToken(sqliParser::BINARY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CROSS() {
  return getToken(sqliParser::CROSS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CONTINUE() {
  return getToken(sqliParser::CONTINUE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CURSOR() {
  return getToken(sqliParser::CURSOR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TRIGGER() {
  return getToken(sqliParser::TRIGGER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RECORDREADER() {
  return getToken(sqliParser::RECORDREADER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RECORDWRITER() {
  return getToken(sqliParser::RECORDWRITER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LATERAL() {
  return getToken(sqliParser::LATERAL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TOUCH() {
  return getToken(sqliParser::TOUCH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ARCHIVE() {
  return getToken(sqliParser::ARCHIVE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNARCHIVE() {
  return getToken(sqliParser::UNARCHIVE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COMPUTE() {
  return getToken(sqliParser::COMPUTE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::STATISTICS() {
  return getToken(sqliParser::STATISTICS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::USE() {
  return getToken(sqliParser::USE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OPTION() {
  return getToken(sqliParser::OPTION, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CONCATENATE() {
  return getToken(sqliParser::CONCATENATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UPDATE() {
  return getToken(sqliParser::UPDATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RESTRICT() {
  return getToken(sqliParser::RESTRICT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CASCADE() {
  return getToken(sqliParser::CASCADE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SKEWED() {
  return getToken(sqliParser::SKEWED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ROLLUP() {
  return getToken(sqliParser::ROLLUP, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CUBE() {
  return getToken(sqliParser::CUBE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DIRECTORIES() {
  return getToken(sqliParser::DIRECTORIES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FOR() {
  return getToken(sqliParser::FOR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::WINDOW() {
  return getToken(sqliParser::WINDOW, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UNBOUNDED() {
  return getToken(sqliParser::UNBOUNDED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PRECEDING() {
  return getToken(sqliParser::PRECEDING, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FOLLOWING() {
  return getToken(sqliParser::FOLLOWING, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CURRENT() {
  return getToken(sqliParser::CURRENT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LESS() {
  return getToken(sqliParser::LESS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MORE() {
  return getToken(sqliParser::MORE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OVER() {
  return getToken(sqliParser::OVER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::GROUPING() {
  return getToken(sqliParser::GROUPING, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SETS() {
  return getToken(sqliParser::SETS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TRUNCATE() {
  return getToken(sqliParser::TRUNCATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::NOSCAN() {
  return getToken(sqliParser::NOSCAN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::PARTIALSCAN() {
  return getToken(sqliParser::PARTIALSCAN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::USER() {
  return getToken(sqliParser::USER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ROLE() {
  return getToken(sqliParser::ROLE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INNER() {
  return getToken(sqliParser::INNER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXCHANGE() {
  return getToken(sqliParser::EXCHANGE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IDENTIFIED() {
  return getToken(sqliParser::IDENTIFIED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CHAR() {
  return getToken(sqliParser::CHAR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ABS() {
  return getToken(sqliParser::ABS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ACOS() {
  return getToken(sqliParser::ACOS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ASIN() {
  return getToken(sqliParser::ASIN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ATAN() {
  return getToken(sqliParser::ATAN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CEIL() {
  return getToken(sqliParser::CEIL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COS() {
  return getToken(sqliParser::COS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COT() {
  return getToken(sqliParser::COT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EXP() {
  return getToken(sqliParser::EXP, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FLOOR() {
  return getToken(sqliParser::FLOOR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LN() {
  return getToken(sqliParser::LN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::POW() {
  return getToken(sqliParser::POW, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RAND() {
  return getToken(sqliParser::RAND, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ROUND() {
  return getToken(sqliParser::ROUND, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SIN() {
  return getToken(sqliParser::SIN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SQRT() {
  return getToken(sqliParser::SQRT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TAN() {
  return getToken(sqliParser::TAN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LCASE() {
  return getToken(sqliParser::LCASE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOWER() {
  return getToken(sqliParser::LOWER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LTRIM() {
  return getToken(sqliParser::LTRIM, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::RTRIM() {
  return getToken(sqliParser::RTRIM, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CONCAT() {
  return getToken(sqliParser::CONCAT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SUBSTR() {
  return getToken(sqliParser::SUBSTR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TRIM() {
  return getToken(sqliParser::TRIM, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UCASE() {
  return getToken(sqliParser::UCASE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::UPPER() {
  return getToken(sqliParser::UPPER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INTERVAL() {
  return getToken(sqliParser::INTERVAL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TO_DATE() {
  return getToken(sqliParser::TO_DATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DAY() {
  return getToken(sqliParser::DAY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::HOUR() {
  return getToken(sqliParser::HOUR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MINUTE() {
  return getToken(sqliParser::MINUTE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MONTH() {
  return getToken(sqliParser::MONTH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SECOND() {
  return getToken(sqliParser::SECOND, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::FROM_UNIXTIME() {
  return getToken(sqliParser::FROM_UNIXTIME, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::YEAR() {
  return getToken(sqliParser::YEAR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATE_ADD() {
  return getToken(sqliParser::DATE_ADD, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATE_SUB() {
  return getToken(sqliParser::DATE_SUB, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COLLATE() {
  return getToken(sqliParser::COLLATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::AVG() {
  return getToken(sqliParser::AVG, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COUNT() {
  return getToken(sqliParser::COUNT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MAX() {
  return getToken(sqliParser::MAX, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MIN() {
  return getToken(sqliParser::MIN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SUM() {
  return getToken(sqliParser::SUM, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::COALESCE() {
  return getToken(sqliParser::COALESCE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DUPLICATE() {
  return getToken(sqliParser::DUPLICATE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SERVER() {
  return getToken(sqliParser::SERVER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ALIASES() {
  return getToken(sqliParser::ALIASES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ALIAS() {
  return getToken(sqliParser::ALIAS, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::VALUES() {
  return getToken(sqliParser::VALUES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::VALUE() {
  return getToken(sqliParser::VALUE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LOW_PRIORITY() {
  return getToken(sqliParser::LOW_PRIORITY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::HIGH_PRIORITY() {
  return getToken(sqliParser::HIGH_PRIORITY, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::HASH() {
  return getToken(sqliParser::HASH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REFERENCES() {
  return getToken(sqliParser::REFERENCES, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::TO_CHAR() {
  return getToken(sqliParser::TO_CHAR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DATE_FORMAT() {
  return getToken(sqliParser::DATE_FORMAT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SIGNED() {
  return getToken(sqliParser::SIGNED, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::INTEGER() {
  return getToken(sqliParser::INTEGER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LENGTH() {
  return getToken(sqliParser::LENGTH, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::REVERSE() {
  return getToken(sqliParser::REVERSE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::IFNULL() {
  return getToken(sqliParser::IFNULL, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::DIVIDE() {
  return getToken(sqliParser::DIVIDE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::MOD() {
  return getToken(sqliParser::MOD, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::OR() {
  return getToken(sqliParser::OR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::AND() {
  return getToken(sqliParser::AND, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::XOR() {
  return getToken(sqliParser::XOR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::ARROW() {
  return getToken(sqliParser::ARROW, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::EQ() {
  return getToken(sqliParser::EQ, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::NOT_EQ() {
  return getToken(sqliParser::NOT_EQ, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::LET() {
  return getToken(sqliParser::LET, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::GET() {
  return getToken(sqliParser::GET, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SET_VAR() {
  return getToken(sqliParser::SET_VAR, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SHIFT_LEFT() {
  return getToken(sqliParser::SHIFT_LEFT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::SHIFT_RIGHT() {
  return getToken(sqliParser::SHIFT_RIGHT, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CASE() {
  return getToken(sqliParser::CASE, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::WHEN() {
  return getToken(sqliParser::WHEN, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CHARACTER() {
  return getToken(sqliParser::CHARACTER, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::HEX() {
  return getToken(sqliParser::HEX, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::CONV() {
  return getToken(sqliParser::CONV, 0);
}

tree::TerminalNode* sqliParser::KeywordContext::VERSION() {
  return getToken(sqliParser::VERSION, 0);
}


size_t sqliParser::KeywordContext::getRuleIndex() const {
  return sqliParser::RuleKeyword;
}

void sqliParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void sqliParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}


antlrcpp::Any sqliParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::KeywordContext* sqliParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 208, sqliParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1477);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sqliParser::TRUE)
      | (1ULL << sqliParser::FALSE)
      | (1ULL << sqliParser::ALL)
      | (1ULL << sqliParser::NOT)
      | (1ULL << sqliParser::LIKE)
      | (1ULL << sqliParser::CHARACTER)
      | (1ULL << sqliParser::IF)
      | (1ULL << sqliParser::EXISTS)
      | (1ULL << sqliParser::ASC)
      | (1ULL << sqliParser::DESC)
      | (1ULL << sqliParser::BY)
      | (1ULL << sqliParser::HAVING)
      | (1ULL << sqliParser::WHERE)
      | (1ULL << sqliParser::AS)
      | (1ULL << sqliParser::SELECT)
      | (1ULL << sqliParser::DISTINCT)
      | (1ULL << sqliParser::INSERT)
      | (1ULL << sqliParser::OVERWRITE)
      | (1ULL << sqliParser::OUTER)
      | (1ULL << sqliParser::UNIQUEJOIN)
      | (1ULL << sqliParser::PRESERVE)
      | (1ULL << sqliParser::JOIN)
      | (1ULL << sqliParser::LEFT)
      | (1ULL << sqliParser::RIGHT)
      | (1ULL << sqliParser::FULL)
      | (1ULL << sqliParser::ON)
      | (1ULL << sqliParser::PARTITION)
      | (1ULL << sqliParser::PARTITIONS)
      | (1ULL << sqliParser::TABLE)
      | (1ULL << sqliParser::TABLES)
      | (1ULL << sqliParser::COLUMNS)
      | (1ULL << sqliParser::INDEX)
      | (1ULL << sqliParser::INDEXES)
      | (1ULL << sqliParser::REBUILD)
      | (1ULL << sqliParser::FUNCTIONS)
      | (1ULL << sqliParser::SHOW)
      | (1ULL << sqliParser::MSCK)
      | (1ULL << sqliParser::REPAIR)
      | (1ULL << sqliParser::DIRECTORY)
      | (1ULL << sqliParser::LOCAL)
      | (1ULL << sqliParser::TRANSFORM)
      | (1ULL << sqliParser::USING)
      | (1ULL << sqliParser::CLUSTER)
      | (1ULL << sqliParser::DISTRIBUTE)
      | (1ULL << sqliParser::SORT)
      | (1ULL << sqliParser::UNION)
      | (1ULL << sqliParser::LOAD)
      | (1ULL << sqliParser::EXPORT)
      | (1ULL << sqliParser::IMPORT)
      | (1ULL << sqliParser::DATA)
      | (1ULL << sqliParser::INPATH)
      | (1ULL << sqliParser::IS)
      | (1ULL << sqliParser::CNULL)
      | (1ULL << sqliParser::CREATE)
      | (1ULL << sqliParser::EXTERNAL)
      | (1ULL << sqliParser::ALTER)
      | (1ULL << sqliParser::CHANGE)
      | (1ULL << sqliParser::COLUMN)
      | (1ULL << sqliParser::FIRST)
      | (1ULL << sqliParser::AFTER))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (sqliParser::DESCRIBE - 64))
      | (1ULL << (sqliParser::DROP - 64))
      | (1ULL << (sqliParser::RENAME - 64))
      | (1ULL << (sqliParser::IGNORE - 64))
      | (1ULL << (sqliParser::PROTECTION - 64))
      | (1ULL << (sqliParser::TO - 64))
      | (1ULL << (sqliParser::COMMENT - 64))
      | (1ULL << (sqliParser::BOOLEAN - 64))
      | (1ULL << (sqliParser::TINYINT - 64))
      | (1ULL << (sqliParser::SMALLINT - 64))
      | (1ULL << (sqliParser::INT - 64))
      | (1ULL << (sqliParser::BIGINT - 64))
      | (1ULL << (sqliParser::FLOAT - 64))
      | (1ULL << (sqliParser::DOUBLE - 64))
      | (1ULL << (sqliParser::DATE - 64))
      | (1ULL << (sqliParser::DATETIME - 64))
      | (1ULL << (sqliParser::TIMESTAMP - 64))
      | (1ULL << (sqliParser::DECIMAL - 64))
      | (1ULL << (sqliParser::STRING - 64))
      | (1ULL << (sqliParser::VARCHAR - 64))
      | (1ULL << (sqliParser::ARRAY - 64))
      | (1ULL << (sqliParser::STRUCT - 64))
      | (1ULL << (sqliParser::MAP - 64))
      | (1ULL << (sqliParser::UNIONTYPE - 64))
      | (1ULL << (sqliParser::REDUCE - 64))
      | (1ULL << (sqliParser::PARTITIONED - 64))
      | (1ULL << (sqliParser::CLUSTERED - 64))
      | (1ULL << (sqliParser::SORTED - 64))
      | (1ULL << (sqliParser::INTO - 64))
      | (1ULL << (sqliParser::BUCKETS - 64))
      | (1ULL << (sqliParser::ROW - 64))
      | (1ULL << (sqliParser::ROWS - 64))
      | (1ULL << (sqliParser::FORMAT - 64))
      | (1ULL << (sqliParser::DELIMITED - 64))
      | (1ULL << (sqliParser::FIELDS - 64))
      | (1ULL << (sqliParser::TERMINATED - 64))
      | (1ULL << (sqliParser::ESCAPED - 64))
      | (1ULL << (sqliParser::COLLECTION - 64))
      | (1ULL << (sqliParser::ITEMS - 64))
      | (1ULL << (sqliParser::KEYS - 64))
      | (1ULL << (sqliParser::KEY - 64))
      | (1ULL << (sqliParser::LINES - 64))
      | (1ULL << (sqliParser::STORED - 64))
      | (1ULL << (sqliParser::FILEFORMAT - 64))
      | (1ULL << (sqliParser::SEQUENCEFILE - 64))
      | (1ULL << (sqliParser::TEXTFILE - 64))
      | (1ULL << (sqliParser::RCFILE - 64))
      | (1ULL << (sqliParser::ORCFILE - 64))
      | (1ULL << (sqliParser::INPUTFORMAT - 64))
      | (1ULL << (sqliParser::OUTPUTFORMAT - 64))
      | (1ULL << (sqliParser::INPUTDRIVER - 64))
      | (1ULL << (sqliParser::OUTPUTDRIVER - 64))
      | (1ULL << (sqliParser::OFFLINE - 64))
      | (1ULL << (sqliParser::ENABLE - 64))
      | (1ULL << (sqliParser::DEFAULT - 64))
      | (1ULL << (sqliParser::DISABLE - 64))
      | (1ULL << (sqliParser::READONLY - 64))
      | (1ULL << (sqliParser::LOCATION - 64))
      | (1ULL << (sqliParser::TABLESAMPLE - 64))
      | (1ULL << (sqliParser::BUCKET - 64))
      | (1ULL << (sqliParser::OUT - 64))
      | (1ULL << (sqliParser::OF - 64))
      | (1ULL << (sqliParser::PERCENT - 64))
      | (1ULL << (sqliParser::CAST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (sqliParser::ADD - 128))
      | (1ULL << (sqliParser::REPLACE - 128))
      | (1ULL << (sqliParser::RLIKE - 128))
      | (1ULL << (sqliParser::REGEXP - 128))
      | (1ULL << (sqliParser::TEMPORARY - 128))
      | (1ULL << (sqliParser::FUNCTION - 128))
      | (1ULL << (sqliParser::MACRO - 128))
      | (1ULL << (sqliParser::EXPLAIN - 128))
      | (1ULL << (sqliParser::EXTENDED - 128))
      | (1ULL << (sqliParser::FORMATTED - 128))
      | (1ULL << (sqliParser::PRETTY - 128))
      | (1ULL << (sqliParser::DEPENDENCY - 128))
      | (1ULL << (sqliParser::LOGICAL - 128))
      | (1ULL << (sqliParser::SERDE - 128))
      | (1ULL << (sqliParser::WITH - 128))
      | (1ULL << (sqliParser::DEFERRED - 128))
      | (1ULL << (sqliParser::SERDEPROPERTIES - 128))
      | (1ULL << (sqliParser::DBPROPERTIES - 128))
      | (1ULL << (sqliParser::LIMIT - 128))
      | (1ULL << (sqliParser::SET - 128))
      | (1ULL << (sqliParser::UNSET - 128))
      | (1ULL << (sqliParser::TBLPROPERTIES - 128))
      | (1ULL << (sqliParser::IDXPROPERTIES - 128))
      | (1ULL << (sqliParser::CASCADED - 128))
      | (1ULL << (sqliParser::CASE - 128))
      | (1ULL << (sqliParser::WHEN - 128))
      | (1ULL << (sqliParser::THEN - 128))
      | (1ULL << (sqliParser::ELSE - 128))
      | (1ULL << (sqliParser::END - 128))
      | (1ULL << (sqliParser::MAPJOIN - 128))
      | (1ULL << (sqliParser::STREAMTABLE - 128))
      | (1ULL << (sqliParser::CLUSTERSTATUS - 128))
      | (1ULL << (sqliParser::UTC - 128))
      | (1ULL << (sqliParser::LONG - 128))
      | (1ULL << (sqliParser::DELETE - 128))
      | (1ULL << (sqliParser::FETCH - 128))
      | (1ULL << (sqliParser::INTERSECT - 128))
      | (1ULL << (sqliParser::VIEW - 128))
      | (1ULL << (sqliParser::IN - 128))
      | (1ULL << (sqliParser::DATABASE - 128))
      | (1ULL << (sqliParser::DATABASES - 128))
      | (1ULL << (sqliParser::MATERIALIZED - 128))
      | (1ULL << (sqliParser::SCHEMA - 128))
      | (1ULL << (sqliParser::SCHEMAS - 128))
      | (1ULL << (sqliParser::GRANT - 128))
      | (1ULL << (sqliParser::REVOKE - 128))
      | (1ULL << (sqliParser::SSL - 128))
      | (1ULL << (sqliParser::UNDO - 128))
      | (1ULL << (sqliParser::LOCK - 128))
      | (1ULL << (sqliParser::LOCKS - 128))
      | (1ULL << (sqliParser::UNLOCK - 128))
      | (1ULL << (sqliParser::SHARED - 128))
      | (1ULL << (sqliParser::EXCLUSIVE - 128))
      | (1ULL << (sqliParser::PROCEDURE - 128))
      | (1ULL << (sqliParser::UNSIGNED - 128))
      | (1ULL << (sqliParser::WHILE - 128))
      | (1ULL << (sqliParser::READ - 128))
      | (1ULL << (sqliParser::READS - 128))
      | (1ULL << (sqliParser::PURGE - 128))
      | (1ULL << (sqliParser::RANGE - 128))
      | (1ULL << (sqliParser::ANALYZE - 128))
      | (1ULL << (sqliParser::BEFORE - 128))
      | (1ULL << (sqliParser::BETWEEN - 128))
      | (1ULL << (sqliParser::BOTH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (sqliParser::BINARY - 192))
      | (1ULL << (sqliParser::CROSS - 192))
      | (1ULL << (sqliParser::CONTINUE - 192))
      | (1ULL << (sqliParser::CURSOR - 192))
      | (1ULL << (sqliParser::TRIGGER - 192))
      | (1ULL << (sqliParser::RECORDREADER - 192))
      | (1ULL << (sqliParser::RECORDWRITER - 192))
      | (1ULL << (sqliParser::LATERAL - 192))
      | (1ULL << (sqliParser::TOUCH - 192))
      | (1ULL << (sqliParser::ARCHIVE - 192))
      | (1ULL << (sqliParser::UNARCHIVE - 192))
      | (1ULL << (sqliParser::COMPUTE - 192))
      | (1ULL << (sqliParser::STATISTICS - 192))
      | (1ULL << (sqliParser::USE - 192))
      | (1ULL << (sqliParser::OPTION - 192))
      | (1ULL << (sqliParser::CONCATENATE - 192))
      | (1ULL << (sqliParser::UPDATE - 192))
      | (1ULL << (sqliParser::RESTRICT - 192))
      | (1ULL << (sqliParser::CASCADE - 192))
      | (1ULL << (sqliParser::SKEWED - 192))
      | (1ULL << (sqliParser::ROLLUP - 192))
      | (1ULL << (sqliParser::CUBE - 192))
      | (1ULL << (sqliParser::DIRECTORIES - 192))
      | (1ULL << (sqliParser::FOR - 192))
      | (1ULL << (sqliParser::WINDOW - 192))
      | (1ULL << (sqliParser::UNBOUNDED - 192))
      | (1ULL << (sqliParser::PRECEDING - 192))
      | (1ULL << (sqliParser::FOLLOWING - 192))
      | (1ULL << (sqliParser::CURRENT - 192))
      | (1ULL << (sqliParser::LESS - 192))
      | (1ULL << (sqliParser::OVER - 192))
      | (1ULL << (sqliParser::GROUPING - 192))
      | (1ULL << (sqliParser::SETS - 192))
      | (1ULL << (sqliParser::TRUNCATE - 192))
      | (1ULL << (sqliParser::NOSCAN - 192))
      | (1ULL << (sqliParser::PARTIALSCAN - 192))
      | (1ULL << (sqliParser::USER - 192))
      | (1ULL << (sqliParser::ROLE - 192))
      | (1ULL << (sqliParser::INNER - 192))
      | (1ULL << (sqliParser::EXCHANGE - 192))
      | (1ULL << (sqliParser::IDENTIFIED - 192))
      | (1ULL << (sqliParser::CHAR - 192))
      | (1ULL << (sqliParser::ABS - 192))
      | (1ULL << (sqliParser::ACOS - 192))
      | (1ULL << (sqliParser::ASIN - 192))
      | (1ULL << (sqliParser::ATAN - 192))
      | (1ULL << (sqliParser::CEIL - 192))
      | (1ULL << (sqliParser::COS - 192))
      | (1ULL << (sqliParser::COT - 192))
      | (1ULL << (sqliParser::EXP - 192))
      | (1ULL << (sqliParser::FLOOR - 192))
      | (1ULL << (sqliParser::LN - 192))
      | (1ULL << (sqliParser::POW - 192))
      | (1ULL << (sqliParser::RAND - 192))
      | (1ULL << (sqliParser::ROUND - 192))
      | (1ULL << (sqliParser::SIN - 192))
      | (1ULL << (sqliParser::SQRT - 192))
      | (1ULL << (sqliParser::TAN - 192))
      | (1ULL << (sqliParser::LCASE - 192))
      | (1ULL << (sqliParser::LOWER - 192))
      | (1ULL << (sqliParser::LTRIM - 192))
      | (1ULL << (sqliParser::RTRIM - 192))
      | (1ULL << (sqliParser::CONCAT - 192))
      | (1ULL << (sqliParser::SUBSTR - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (sqliParser::TRIM - 256))
      | (1ULL << (sqliParser::UCASE - 256))
      | (1ULL << (sqliParser::UPPER - 256))
      | (1ULL << (sqliParser::INTERVAL - 256))
      | (1ULL << (sqliParser::TO_DATE - 256))
      | (1ULL << (sqliParser::DAY - 256))
      | (1ULL << (sqliParser::HOUR - 256))
      | (1ULL << (sqliParser::MINUTE - 256))
      | (1ULL << (sqliParser::MONTH - 256))
      | (1ULL << (sqliParser::SECOND - 256))
      | (1ULL << (sqliParser::FROM_UNIXTIME - 256))
      | (1ULL << (sqliParser::YEAR - 256))
      | (1ULL << (sqliParser::DATE_ADD - 256))
      | (1ULL << (sqliParser::DATE_SUB - 256))
      | (1ULL << (sqliParser::COLLATE - 256))
      | (1ULL << (sqliParser::AVG - 256))
      | (1ULL << (sqliParser::COUNT - 256))
      | (1ULL << (sqliParser::MAX - 256))
      | (1ULL << (sqliParser::MIN - 256))
      | (1ULL << (sqliParser::SUM - 256))
      | (1ULL << (sqliParser::COALESCE - 256))
      | (1ULL << (sqliParser::DUPLICATE - 256))
      | (1ULL << (sqliParser::SERVER - 256))
      | (1ULL << (sqliParser::ALIASES - 256))
      | (1ULL << (sqliParser::ALIAS - 256))
      | (1ULL << (sqliParser::VALUES - 256))
      | (1ULL << (sqliParser::VALUE - 256))
      | (1ULL << (sqliParser::LOW_PRIORITY - 256))
      | (1ULL << (sqliParser::HIGH_PRIORITY - 256))
      | (1ULL << (sqliParser::HASH - 256))
      | (1ULL << (sqliParser::REFERENCES - 256))
      | (1ULL << (sqliParser::TO_CHAR - 256))
      | (1ULL << (sqliParser::DATE_FORMAT - 256))
      | (1ULL << (sqliParser::SIGNED - 256))
      | (1ULL << (sqliParser::INTEGER - 256))
      | (1ULL << (sqliParser::LENGTH - 256))
      | (1ULL << (sqliParser::REVERSE - 256))
      | (1ULL << (sqliParser::IFNULL - 256))
      | (1ULL << (sqliParser::HEX - 256))
      | (1ULL << (sqliParser::CONV - 256))
      | (1ULL << (sqliParser::VERSION - 256)))) != 0) || ((((_la - 320) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 320)) & ((1ULL << (sqliParser::DIVIDE - 320))
      | (1ULL << (sqliParser::MOD - 320))
      | (1ULL << (sqliParser::OR - 320))
      | (1ULL << (sqliParser::AND - 320))
      | (1ULL << (sqliParser::XOR - 320))
      | (1ULL << (sqliParser::ARROW - 320))
      | (1ULL << (sqliParser::EQ - 320))
      | (1ULL << (sqliParser::NOT_EQ - 320))
      | (1ULL << (sqliParser::LET - 320))
      | (1ULL << (sqliParser::GET - 320))
      | (1ULL << (sqliParser::SET_VAR - 320))
      | (1ULL << (sqliParser::SHIFT_LEFT - 320))
      | (1ULL << (sqliParser::SHIFT_RIGHT - 320))
      | (1ULL << (sqliParser::MORE - 320)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delimited_statementContext ------------------------------------------------------------------

sqliParser::Delimited_statementContext::Delimited_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Delimited_statementContext::Regex_Escaped_Unicode() {
  return getToken(sqliParser::Regex_Escaped_Unicode, 0);
}


size_t sqliParser::Delimited_statementContext::getRuleIndex() const {
  return sqliParser::RuleDelimited_statement;
}

void sqliParser::Delimited_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelimited_statement(this);
}

void sqliParser::Delimited_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelimited_statement(this);
}


antlrcpp::Any sqliParser::Delimited_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDelimited_statement(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Delimited_statementContext* sqliParser::delimited_statement() {
  Delimited_statementContext *_localctx = _tracker.createInstance<Delimited_statementContext>(_ctx, getState());
  enterRule(_localctx, 210, sqliParser::RuleDelimited_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1479);
    match(sqliParser::Regex_Escaped_Unicode);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_typesContext ------------------------------------------------------------------

sqliParser::Integer_typesContext::Integer_typesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Integer_typesContext::TINYINT() {
  return getToken(sqliParser::TINYINT, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::SMALLINT() {
  return getToken(sqliParser::SMALLINT, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::INT() {
  return getToken(sqliParser::INT, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::BIGINT() {
  return getToken(sqliParser::BIGINT, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::BOOLEAN() {
  return getToken(sqliParser::BOOLEAN, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::FLOAT() {
  return getToken(sqliParser::FLOAT, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::DOUBLE() {
  return getToken(sqliParser::DOUBLE, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::DATE() {
  return getToken(sqliParser::DATE, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::TIMESTAMP() {
  return getToken(sqliParser::TIMESTAMP, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::VARCHAR() {
  return getToken(sqliParser::VARCHAR, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::BINARY() {
  return getToken(sqliParser::BINARY, 0);
}

tree::TerminalNode* sqliParser::Integer_typesContext::DECIMAL() {
  return getToken(sqliParser::DECIMAL, 0);
}


size_t sqliParser::Integer_typesContext::getRuleIndex() const {
  return sqliParser::RuleInteger_types;
}

void sqliParser::Integer_typesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_types(this);
}

void sqliParser::Integer_typesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_types(this);
}


antlrcpp::Any sqliParser::Integer_typesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitInteger_types(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Integer_typesContext* sqliParser::integer_types() {
  Integer_typesContext *_localctx = _tracker.createInstance<Integer_typesContext>(_ctx, getState());
  enterRule(_localctx, 212, sqliParser::RuleInteger_types);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1494);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::EOF: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case sqliParser::TINYINT: {
        enterOuterAlt(_localctx, 2);
        setState(1482);
        match(sqliParser::TINYINT);
        break;
      }

      case sqliParser::SMALLINT: {
        enterOuterAlt(_localctx, 3);
        setState(1483);
        match(sqliParser::SMALLINT);
        break;
      }

      case sqliParser::INT: {
        enterOuterAlt(_localctx, 4);
        setState(1484);
        match(sqliParser::INT);
        break;
      }

      case sqliParser::BIGINT: {
        enterOuterAlt(_localctx, 5);
        setState(1485);
        match(sqliParser::BIGINT);
        break;
      }

      case sqliParser::BOOLEAN: {
        enterOuterAlt(_localctx, 6);
        setState(1486);
        match(sqliParser::BOOLEAN);
        break;
      }

      case sqliParser::FLOAT: {
        enterOuterAlt(_localctx, 7);
        setState(1487);
        match(sqliParser::FLOAT);
        break;
      }

      case sqliParser::DOUBLE: {
        enterOuterAlt(_localctx, 8);
        setState(1488);
        match(sqliParser::DOUBLE);
        break;
      }

      case sqliParser::DATE: {
        enterOuterAlt(_localctx, 9);
        setState(1489);
        match(sqliParser::DATE);
        break;
      }

      case sqliParser::TIMESTAMP: {
        enterOuterAlt(_localctx, 10);
        setState(1490);
        match(sqliParser::TIMESTAMP);
        break;
      }

      case sqliParser::VARCHAR: {
        enterOuterAlt(_localctx, 11);
        setState(1491);
        match(sqliParser::VARCHAR);
        break;
      }

      case sqliParser::BINARY: {
        enterOuterAlt(_localctx, 12);
        setState(1492);
        match(sqliParser::BINARY);
        break;
      }

      case sqliParser::DECIMAL: {
        enterOuterAlt(_localctx, 13);
        setState(1493);
        match(sqliParser::DECIMAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relational_opContext ------------------------------------------------------------------

sqliParser::Relational_opContext::Relational_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Relational_opContext::EQ() {
  return getToken(sqliParser::EQ, 0);
}

tree::TerminalNode* sqliParser::Relational_opContext::LTH() {
  return getToken(sqliParser::LTH, 0);
}

tree::TerminalNode* sqliParser::Relational_opContext::GTH() {
  return getToken(sqliParser::GTH, 0);
}

tree::TerminalNode* sqliParser::Relational_opContext::NOT_EQ() {
  return getToken(sqliParser::NOT_EQ, 0);
}

tree::TerminalNode* sqliParser::Relational_opContext::LET() {
  return getToken(sqliParser::LET, 0);
}

tree::TerminalNode* sqliParser::Relational_opContext::GET() {
  return getToken(sqliParser::GET, 0);
}


size_t sqliParser::Relational_opContext::getRuleIndex() const {
  return sqliParser::RuleRelational_op;
}

void sqliParser::Relational_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_op(this);
}

void sqliParser::Relational_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_op(this);
}


antlrcpp::Any sqliParser::Relational_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitRelational_op(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Relational_opContext* sqliParser::relational_op() {
  Relational_opContext *_localctx = _tracker.createInstance<Relational_opContext>(_ctx, getState());
  enterRule(_localctx, 214, sqliParser::RuleRelational_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1496);
    _la = _input->LA(1);
    if (!(((((_la - 326) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 326)) & ((1ULL << (sqliParser::EQ - 326))
      | (1ULL << (sqliParser::NOT_EQ - 326))
      | (1ULL << (sqliParser::LET - 326))
      | (1ULL << (sqliParser::GET - 326))
      | (1ULL << (sqliParser::GTH - 326))
      | (1ULL << (sqliParser::LTH - 326)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cast_data_typeContext ------------------------------------------------------------------

sqliParser::Cast_data_typeContext::Cast_data_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::BINARY() {
  return getToken(sqliParser::BINARY, 0);
}

std::vector<tree::TerminalNode *> sqliParser::Cast_data_typeContext::INTEGER_NUM() {
  return getTokens(sqliParser::INTEGER_NUM);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::INTEGER_NUM(size_t i) {
  return getToken(sqliParser::INTEGER_NUM, i);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::CHAR() {
  return getToken(sqliParser::CHAR, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::DATE() {
  return getToken(sqliParser::DATE, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::DATETIME() {
  return getToken(sqliParser::DATETIME, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::DECIMAL() {
  return getToken(sqliParser::DECIMAL, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::LPAREN() {
  return getToken(sqliParser::LPAREN, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::RPAREN() {
  return getToken(sqliParser::RPAREN, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::COMMA() {
  return getToken(sqliParser::COMMA, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::SIGNED() {
  return getToken(sqliParser::SIGNED, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::INTEGER() {
  return getToken(sqliParser::INTEGER, 0);
}

tree::TerminalNode* sqliParser::Cast_data_typeContext::UNSIGNED() {
  return getToken(sqliParser::UNSIGNED, 0);
}


size_t sqliParser::Cast_data_typeContext::getRuleIndex() const {
  return sqliParser::RuleCast_data_type;
}

void sqliParser::Cast_data_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCast_data_type(this);
}

void sqliParser::Cast_data_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCast_data_type(this);
}


antlrcpp::Any sqliParser::Cast_data_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCast_data_type(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Cast_data_typeContext* sqliParser::cast_data_type() {
  Cast_data_typeContext *_localctx = _tracker.createInstance<Cast_data_typeContext>(_ctx, getState());
  enterRule(_localctx, 216, sqliParser::RuleCast_data_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1526);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::BINARY: {
        enterOuterAlt(_localctx, 1);
        setState(1498);
        match(sqliParser::BINARY);
        setState(1500);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::INTEGER_NUM) {
          setState(1499);
          match(sqliParser::INTEGER_NUM);
        }
        break;
      }

      case sqliParser::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(1502);
        match(sqliParser::CHAR);
        setState(1504);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::INTEGER_NUM) {
          setState(1503);
          match(sqliParser::INTEGER_NUM);
        }
        break;
      }

      case sqliParser::DATE: {
        enterOuterAlt(_localctx, 3);
        setState(1506);
        match(sqliParser::DATE);
        break;
      }

      case sqliParser::DATETIME: {
        enterOuterAlt(_localctx, 4);
        setState(1507);
        match(sqliParser::DATETIME);
        break;
      }

      case sqliParser::DECIMAL: {
        enterOuterAlt(_localctx, 5);
        setState(1508);
        match(sqliParser::DECIMAL);
        setState(1516);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::LPAREN) {
          setState(1509);
          match(sqliParser::LPAREN);
          setState(1510);
          match(sqliParser::INTEGER_NUM);
          setState(1513);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == sqliParser::COMMA) {
            setState(1511);
            match(sqliParser::COMMA);
            setState(1512);
            match(sqliParser::INTEGER_NUM);
          }
          setState(1515);
          match(sqliParser::RPAREN);
        }
        break;
      }

      case sqliParser::SIGNED: {
        enterOuterAlt(_localctx, 6);
        setState(1518);
        match(sqliParser::SIGNED);
        setState(1520);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::INTEGER) {
          setState(1519);
          match(sqliParser::INTEGER);
        }
        break;
      }

      case sqliParser::UNSIGNED: {
        enterOuterAlt(_localctx, 7);
        setState(1522);
        match(sqliParser::UNSIGNED);
        setState(1524);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == sqliParser::INTEGER) {
          setState(1523);
          match(sqliParser::INTEGER);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interval_unitContext ------------------------------------------------------------------

sqliParser::Interval_unitContext::Interval_unitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Interval_unitContext::SECOND() {
  return getToken(sqliParser::SECOND, 0);
}

tree::TerminalNode* sqliParser::Interval_unitContext::MINUTE() {
  return getToken(sqliParser::MINUTE, 0);
}

tree::TerminalNode* sqliParser::Interval_unitContext::HOUR() {
  return getToken(sqliParser::HOUR, 0);
}

tree::TerminalNode* sqliParser::Interval_unitContext::DAY() {
  return getToken(sqliParser::DAY, 0);
}

tree::TerminalNode* sqliParser::Interval_unitContext::MONTH() {
  return getToken(sqliParser::MONTH, 0);
}

tree::TerminalNode* sqliParser::Interval_unitContext::YEAR() {
  return getToken(sqliParser::YEAR, 0);
}


size_t sqliParser::Interval_unitContext::getRuleIndex() const {
  return sqliParser::RuleInterval_unit;
}

void sqliParser::Interval_unitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterval_unit(this);
}

void sqliParser::Interval_unitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterval_unit(this);
}


antlrcpp::Any sqliParser::Interval_unitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitInterval_unit(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Interval_unitContext* sqliParser::interval_unit() {
  Interval_unitContext *_localctx = _tracker.createInstance<Interval_unitContext>(_ctx, getState());
  enterRule(_localctx, 218, sqliParser::RuleInterval_unit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1528);
    _la = _input->LA(1);
    if (!(((((_la - 261) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 261)) & ((1ULL << (sqliParser::DAY - 261))
      | (1ULL << (sqliParser::HOUR - 261))
      | (1ULL << (sqliParser::MINUTE - 261))
      | (1ULL << (sqliParser::MONTH - 261))
      | (1ULL << (sqliParser::SECOND - 261))
      | (1ULL << (sqliParser::YEAR - 261)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_literalContext ------------------------------------------------------------------

sqliParser::String_literalContext::String_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::String_literalContext::TEXT_STRING() {
  return getToken(sqliParser::TEXT_STRING, 0);
}


size_t sqliParser::String_literalContext::getRuleIndex() const {
  return sqliParser::RuleString_literal;
}

void sqliParser::String_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_literal(this);
}

void sqliParser::String_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_literal(this);
}


antlrcpp::Any sqliParser::String_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitString_literal(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::String_literalContext* sqliParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 220, sqliParser::RuleString_literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1530);
    match(sqliParser::TEXT_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Number_literalContext ------------------------------------------------------------------

sqliParser::Number_literalContext::Number_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Number_literalContext::INTEGER_NUM() {
  return getToken(sqliParser::INTEGER_NUM, 0);
}

tree::TerminalNode* sqliParser::Number_literalContext::REAL_NUMBER() {
  return getToken(sqliParser::REAL_NUMBER, 0);
}

tree::TerminalNode* sqliParser::Number_literalContext::PLUS() {
  return getToken(sqliParser::PLUS, 0);
}

tree::TerminalNode* sqliParser::Number_literalContext::MINUS() {
  return getToken(sqliParser::MINUS, 0);
}


size_t sqliParser::Number_literalContext::getRuleIndex() const {
  return sqliParser::RuleNumber_literal;
}

void sqliParser::Number_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber_literal(this);
}

void sqliParser::Number_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber_literal(this);
}


antlrcpp::Any sqliParser::Number_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitNumber_literal(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Number_literalContext* sqliParser::number_literal() {
  Number_literalContext *_localctx = _tracker.createInstance<Number_literalContext>(_ctx, getState());
  enterRule(_localctx, 222, sqliParser::RuleNumber_literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1533);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sqliParser::PLUS

    || _la == sqliParser::MINUS) {
      setState(1532);
      _la = _input->LA(1);
      if (!(_la == sqliParser::PLUS

      || _la == sqliParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1535);
    _la = _input->LA(1);
    if (!(_la == sqliParser::INTEGER_NUM

    || _la == sqliParser::REAL_NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Hex_literalContext ------------------------------------------------------------------

sqliParser::Hex_literalContext::Hex_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Hex_literalContext::HEX_DIGIT() {
  return getToken(sqliParser::HEX_DIGIT, 0);
}


size_t sqliParser::Hex_literalContext::getRuleIndex() const {
  return sqliParser::RuleHex_literal;
}

void sqliParser::Hex_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHex_literal(this);
}

void sqliParser::Hex_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHex_literal(this);
}


antlrcpp::Any sqliParser::Hex_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitHex_literal(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Hex_literalContext* sqliParser::hex_literal() {
  Hex_literalContext *_localctx = _tracker.createInstance<Hex_literalContext>(_ctx, getState());
  enterRule(_localctx, 224, sqliParser::RuleHex_literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1537);
    match(sqliParser::HEX_DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_literalContext ------------------------------------------------------------------

sqliParser::Boolean_literalContext::Boolean_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Boolean_literalContext::TRUE() {
  return getToken(sqliParser::TRUE, 0);
}

tree::TerminalNode* sqliParser::Boolean_literalContext::FALSE() {
  return getToken(sqliParser::FALSE, 0);
}


size_t sqliParser::Boolean_literalContext::getRuleIndex() const {
  return sqliParser::RuleBoolean_literal;
}

void sqliParser::Boolean_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean_literal(this);
}

void sqliParser::Boolean_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean_literal(this);
}


antlrcpp::Any sqliParser::Boolean_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitBoolean_literal(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Boolean_literalContext* sqliParser::boolean_literal() {
  Boolean_literalContext *_localctx = _tracker.createInstance<Boolean_literalContext>(_ctx, getState());
  enterRule(_localctx, 226, sqliParser::RuleBoolean_literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1539);
    _la = _input->LA(1);
    if (!(_la == sqliParser::TRUE

    || _la == sqliParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_valueContext ------------------------------------------------------------------

sqliParser::Literal_valueContext::Literal_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::String_literalContext* sqliParser::Literal_valueContext::string_literal() {
  return getRuleContext<sqliParser::String_literalContext>(0);
}

sqliParser::Number_literalContext* sqliParser::Literal_valueContext::number_literal() {
  return getRuleContext<sqliParser::Number_literalContext>(0);
}

sqliParser::Hex_literalContext* sqliParser::Literal_valueContext::hex_literal() {
  return getRuleContext<sqliParser::Hex_literalContext>(0);
}

sqliParser::Boolean_literalContext* sqliParser::Literal_valueContext::boolean_literal() {
  return getRuleContext<sqliParser::Boolean_literalContext>(0);
}


size_t sqliParser::Literal_valueContext::getRuleIndex() const {
  return sqliParser::RuleLiteral_value;
}

void sqliParser::Literal_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral_value(this);
}

void sqliParser::Literal_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral_value(this);
}


antlrcpp::Any sqliParser::Literal_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitLiteral_value(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Literal_valueContext* sqliParser::literal_value() {
  Literal_valueContext *_localctx = _tracker.createInstance<Literal_valueContext>(_ctx, getState());
  enterRule(_localctx, 228, sqliParser::RuleLiteral_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1545);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::TEXT_STRING: {
        setState(1541);
        string_literal();
        break;
      }

      case sqliParser::PLUS:
      case sqliParser::MINUS:
      case sqliParser::INTEGER_NUM:
      case sqliParser::REAL_NUMBER: {
        setState(1542);
        number_literal();
        break;
      }

      case sqliParser::HEX_DIGIT: {
        setState(1543);
        hex_literal();
        break;
      }

      case sqliParser::TRUE:
      case sqliParser::FALSE: {
        setState(1544);
        boolean_literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionListContext ------------------------------------------------------------------

sqliParser::FunctionListContext::FunctionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Number_functionsContext* sqliParser::FunctionListContext::number_functions() {
  return getRuleContext<sqliParser::Number_functionsContext>(0);
}

sqliParser::Char_functionsContext* sqliParser::FunctionListContext::char_functions() {
  return getRuleContext<sqliParser::Char_functionsContext>(0);
}

sqliParser::Time_functionsContext* sqliParser::FunctionListContext::time_functions() {
  return getRuleContext<sqliParser::Time_functionsContext>(0);
}

sqliParser::Other_functionsContext* sqliParser::FunctionListContext::other_functions() {
  return getRuleContext<sqliParser::Other_functionsContext>(0);
}

sqliParser::Group_functionsContext* sqliParser::FunctionListContext::group_functions() {
  return getRuleContext<sqliParser::Group_functionsContext>(0);
}

sqliParser::Sensitive_functionsContext* sqliParser::FunctionListContext::sensitive_functions() {
  return getRuleContext<sqliParser::Sensitive_functionsContext>(0);
}


size_t sqliParser::FunctionListContext::getRuleIndex() const {
  return sqliParser::RuleFunctionList;
}

void sqliParser::FunctionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionList(this);
}

void sqliParser::FunctionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionList(this);
}


antlrcpp::Any sqliParser::FunctionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitFunctionList(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::FunctionListContext* sqliParser::functionList() {
  FunctionListContext *_localctx = _tracker.createInstance<FunctionListContext>(_ctx, getState());
  enterRule(_localctx, 230, sqliParser::RuleFunctionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1553);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::ABS:
      case sqliParser::ACOS:
      case sqliParser::ASIN:
      case sqliParser::ATAN:
      case sqliParser::CEIL:
      case sqliParser::COS:
      case sqliParser::COT:
      case sqliParser::EXP:
      case sqliParser::FLOOR:
      case sqliParser::LN:
      case sqliParser::POW:
      case sqliParser::RAND:
      case sqliParser::ROUND:
      case sqliParser::SIN:
      case sqliParser::SQRT:
      case sqliParser::TAN: {
        enterOuterAlt(_localctx, 1);
        setState(1547);
        number_functions();
        break;
      }

      case sqliParser::CHAR:
      case sqliParser::LCASE:
      case sqliParser::LOWER:
      case sqliParser::LTRIM:
      case sqliParser::RTRIM:
      case sqliParser::CONCAT:
      case sqliParser::SUBSTR:
      case sqliParser::TRIM:
      case sqliParser::UCASE:
      case sqliParser::UPPER:
      case sqliParser::TO_CHAR:
      case sqliParser::LENGTH:
      case sqliParser::REVERSE:
      case sqliParser::HEX:
      case sqliParser::CONV:
      case sqliParser::UNHEX:
      case sqliParser::SUBSTRING:
      case sqliParser::LOCATE: {
        enterOuterAlt(_localctx, 2);
        setState(1548);
        char_functions();
        break;
      }

      case sqliParser::TO_DATE:
      case sqliParser::DAY:
      case sqliParser::HOUR:
      case sqliParser::MINUTE:
      case sqliParser::MONTH:
      case sqliParser::SECOND:
      case sqliParser::FROM_UNIXTIME:
      case sqliParser::YEAR:
      case sqliParser::DATE_ADD:
      case sqliParser::DATE_SUB:
      case sqliParser::DATE_FORMAT:
      case sqliParser::NOW:
      case sqliParser::SYSDATE: {
        enterOuterAlt(_localctx, 3);
        setState(1549);
        time_functions();
        break;
      }

      case sqliParser::COALESCE:
      case sqliParser::IFNULL:
      case sqliParser::NULLIF:
      case sqliParser::ISNULL: {
        enterOuterAlt(_localctx, 4);
        setState(1550);
        other_functions();
        break;
      }

      case sqliParser::AVG:
      case sqliParser::COUNT:
      case sqliParser::MAX:
      case sqliParser::MIN:
      case sqliParser::SUM: {
        enterOuterAlt(_localctx, 5);
        setState(1551);
        group_functions();
        break;
      }

      case sqliParser::IF:
      case sqliParser::DATABASE:
      case sqliParser::SCHEMA:
      case sqliParser::PROCEDURE:
      case sqliParser::USER:
      case sqliParser::SLEEP:
      case sqliParser::BENCHMARK:
      case sqliParser::UPDATEXML:
      case sqliParser::EXTRACTVALUE:
      case sqliParser::LOAD_FILE:
      case sqliParser::SYSTEM_USER:
      case sqliParser::SESSION_USER:
      case sqliParser::CURRENT_USER:
      case sqliParser::MD5:
      case sqliParser::ASCII:
      case sqliParser::MID:
      case sqliParser::VERSION:
      case sqliParser::ORD:
      case sqliParser::INSTR:
      case sqliParser::CONCAT_WS:
      case sqliParser::GROUP_CONCAT: {
        enterOuterAlt(_localctx, 6);
        setState(1552);
        sensitive_functions();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Number_functionsContext ------------------------------------------------------------------

sqliParser::Number_functionsContext::Number_functionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Number_functionsContext::ABS() {
  return getToken(sqliParser::ABS, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::ACOS() {
  return getToken(sqliParser::ACOS, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::ASIN() {
  return getToken(sqliParser::ASIN, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::ATAN() {
  return getToken(sqliParser::ATAN, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::CEIL() {
  return getToken(sqliParser::CEIL, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::COS() {
  return getToken(sqliParser::COS, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::COT() {
  return getToken(sqliParser::COT, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::EXP() {
  return getToken(sqliParser::EXP, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::FLOOR() {
  return getToken(sqliParser::FLOOR, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::LN() {
  return getToken(sqliParser::LN, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::POW() {
  return getToken(sqliParser::POW, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::RAND() {
  return getToken(sqliParser::RAND, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::ROUND() {
  return getToken(sqliParser::ROUND, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::SIN() {
  return getToken(sqliParser::SIN, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::SQRT() {
  return getToken(sqliParser::SQRT, 0);
}

tree::TerminalNode* sqliParser::Number_functionsContext::TAN() {
  return getToken(sqliParser::TAN, 0);
}


size_t sqliParser::Number_functionsContext::getRuleIndex() const {
  return sqliParser::RuleNumber_functions;
}

void sqliParser::Number_functionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber_functions(this);
}

void sqliParser::Number_functionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber_functions(this);
}


antlrcpp::Any sqliParser::Number_functionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitNumber_functions(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Number_functionsContext* sqliParser::number_functions() {
  Number_functionsContext *_localctx = _tracker.createInstance<Number_functionsContext>(_ctx, getState());
  enterRule(_localctx, 232, sqliParser::RuleNumber_functions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1555);
    _la = _input->LA(1);
    if (!(((((_la - 234) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 234)) & ((1ULL << (sqliParser::ABS - 234))
      | (1ULL << (sqliParser::ACOS - 234))
      | (1ULL << (sqliParser::ASIN - 234))
      | (1ULL << (sqliParser::ATAN - 234))
      | (1ULL << (sqliParser::CEIL - 234))
      | (1ULL << (sqliParser::COS - 234))
      | (1ULL << (sqliParser::COT - 234))
      | (1ULL << (sqliParser::EXP - 234))
      | (1ULL << (sqliParser::FLOOR - 234))
      | (1ULL << (sqliParser::LN - 234))
      | (1ULL << (sqliParser::POW - 234))
      | (1ULL << (sqliParser::RAND - 234))
      | (1ULL << (sqliParser::ROUND - 234))
      | (1ULL << (sqliParser::SIN - 234))
      | (1ULL << (sqliParser::SQRT - 234))
      | (1ULL << (sqliParser::TAN - 234)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Char_functionsContext ------------------------------------------------------------------

sqliParser::Char_functionsContext::Char_functionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Char_functionsContext::LCASE() {
  return getToken(sqliParser::LCASE, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::LOWER() {
  return getToken(sqliParser::LOWER, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::LTRIM() {
  return getToken(sqliParser::LTRIM, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::RTRIM() {
  return getToken(sqliParser::RTRIM, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::CONCAT() {
  return getToken(sqliParser::CONCAT, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::SUBSTR() {
  return getToken(sqliParser::SUBSTR, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::TRIM() {
  return getToken(sqliParser::TRIM, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::UCASE() {
  return getToken(sqliParser::UCASE, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::UPPER() {
  return getToken(sqliParser::UPPER, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::TO_CHAR() {
  return getToken(sqliParser::TO_CHAR, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::LENGTH() {
  return getToken(sqliParser::LENGTH, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::REVERSE() {
  return getToken(sqliParser::REVERSE, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::HEX() {
  return getToken(sqliParser::HEX, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::CONV() {
  return getToken(sqliParser::CONV, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::CHAR() {
  return getToken(sqliParser::CHAR, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::UNHEX() {
  return getToken(sqliParser::UNHEX, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::SUBSTRING() {
  return getToken(sqliParser::SUBSTRING, 0);
}

tree::TerminalNode* sqliParser::Char_functionsContext::LOCATE() {
  return getToken(sqliParser::LOCATE, 0);
}


size_t sqliParser::Char_functionsContext::getRuleIndex() const {
  return sqliParser::RuleChar_functions;
}

void sqliParser::Char_functionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChar_functions(this);
}

void sqliParser::Char_functionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChar_functions(this);
}


antlrcpp::Any sqliParser::Char_functionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitChar_functions(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Char_functionsContext* sqliParser::char_functions() {
  Char_functionsContext *_localctx = _tracker.createInstance<Char_functionsContext>(_ctx, getState());
  enterRule(_localctx, 234, sqliParser::RuleChar_functions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1557);
    _la = _input->LA(1);
    if (!(((((_la - 233) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 233)) & ((1ULL << (sqliParser::CHAR - 233))
      | (1ULL << (sqliParser::LCASE - 233))
      | (1ULL << (sqliParser::LOWER - 233))
      | (1ULL << (sqliParser::LTRIM - 233))
      | (1ULL << (sqliParser::RTRIM - 233))
      | (1ULL << (sqliParser::CONCAT - 233))
      | (1ULL << (sqliParser::SUBSTR - 233))
      | (1ULL << (sqliParser::TRIM - 233))
      | (1ULL << (sqliParser::UCASE - 233))
      | (1ULL << (sqliParser::UPPER - 233))
      | (1ULL << (sqliParser::TO_CHAR - 233))
      | (1ULL << (sqliParser::LENGTH - 233))
      | (1ULL << (sqliParser::REVERSE - 233))
      | (1ULL << (sqliParser::HEX - 233))
      | (1ULL << (sqliParser::CONV - 233)))) != 0) || ((((_la - 315) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 315)) & ((1ULL << (sqliParser::UNHEX - 315))
      | (1ULL << (sqliParser::SUBSTRING - 315))
      | (1ULL << (sqliParser::LOCATE - 315)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_functionsContext ------------------------------------------------------------------

sqliParser::Time_functionsContext::Time_functionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Time_functionsContext::TO_DATE() {
  return getToken(sqliParser::TO_DATE, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::DAY() {
  return getToken(sqliParser::DAY, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::HOUR() {
  return getToken(sqliParser::HOUR, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::MINUTE() {
  return getToken(sqliParser::MINUTE, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::MONTH() {
  return getToken(sqliParser::MONTH, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::SECOND() {
  return getToken(sqliParser::SECOND, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::FROM_UNIXTIME() {
  return getToken(sqliParser::FROM_UNIXTIME, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::YEAR() {
  return getToken(sqliParser::YEAR, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::DATE_ADD() {
  return getToken(sqliParser::DATE_ADD, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::DATE_SUB() {
  return getToken(sqliParser::DATE_SUB, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::DATE_FORMAT() {
  return getToken(sqliParser::DATE_FORMAT, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::NOW() {
  return getToken(sqliParser::NOW, 0);
}

tree::TerminalNode* sqliParser::Time_functionsContext::SYSDATE() {
  return getToken(sqliParser::SYSDATE, 0);
}


size_t sqliParser::Time_functionsContext::getRuleIndex() const {
  return sqliParser::RuleTime_functions;
}

void sqliParser::Time_functionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTime_functions(this);
}

void sqliParser::Time_functionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTime_functions(this);
}


antlrcpp::Any sqliParser::Time_functionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitTime_functions(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Time_functionsContext* sqliParser::time_functions() {
  Time_functionsContext *_localctx = _tracker.createInstance<Time_functionsContext>(_ctx, getState());
  enterRule(_localctx, 236, sqliParser::RuleTime_functions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1559);
    _la = _input->LA(1);
    if (!(((((_la - 260) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 260)) & ((1ULL << (sqliParser::TO_DATE - 260))
      | (1ULL << (sqliParser::DAY - 260))
      | (1ULL << (sqliParser::HOUR - 260))
      | (1ULL << (sqliParser::MINUTE - 260))
      | (1ULL << (sqliParser::MONTH - 260))
      | (1ULL << (sqliParser::SECOND - 260))
      | (1ULL << (sqliParser::FROM_UNIXTIME - 260))
      | (1ULL << (sqliParser::YEAR - 260))
      | (1ULL << (sqliParser::DATE_ADD - 260))
      | (1ULL << (sqliParser::DATE_SUB - 260))
      | (1ULL << (sqliParser::DATE_FORMAT - 260))
      | (1ULL << (sqliParser::NOW - 260))
      | (1ULL << (sqliParser::SYSDATE - 260)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Other_functionsContext ------------------------------------------------------------------

sqliParser::Other_functionsContext::Other_functionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Other_functionsContext::COALESCE() {
  return getToken(sqliParser::COALESCE, 0);
}

tree::TerminalNode* sqliParser::Other_functionsContext::IFNULL() {
  return getToken(sqliParser::IFNULL, 0);
}

tree::TerminalNode* sqliParser::Other_functionsContext::NULLIF() {
  return getToken(sqliParser::NULLIF, 0);
}

tree::TerminalNode* sqliParser::Other_functionsContext::ISNULL() {
  return getToken(sqliParser::ISNULL, 0);
}


size_t sqliParser::Other_functionsContext::getRuleIndex() const {
  return sqliParser::RuleOther_functions;
}

void sqliParser::Other_functionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOther_functions(this);
}

void sqliParser::Other_functionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOther_functions(this);
}


antlrcpp::Any sqliParser::Other_functionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitOther_functions(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Other_functionsContext* sqliParser::other_functions() {
  Other_functionsContext *_localctx = _tracker.createInstance<Other_functionsContext>(_ctx, getState());
  enterRule(_localctx, 238, sqliParser::RuleOther_functions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1561);
    _la = _input->LA(1);
    if (!(((((_la - 276) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 276)) & ((1ULL << (sqliParser::COALESCE - 276))
      | (1ULL << (sqliParser::IFNULL - 276))
      | (1ULL << (sqliParser::NULLIF - 276))
      | (1ULL << (sqliParser::ISNULL - 276)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_functionsContext ------------------------------------------------------------------

sqliParser::Group_functionsContext::Group_functionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Group_functionsContext::AVG() {
  return getToken(sqliParser::AVG, 0);
}

tree::TerminalNode* sqliParser::Group_functionsContext::COUNT() {
  return getToken(sqliParser::COUNT, 0);
}

tree::TerminalNode* sqliParser::Group_functionsContext::MAX() {
  return getToken(sqliParser::MAX, 0);
}

tree::TerminalNode* sqliParser::Group_functionsContext::MIN() {
  return getToken(sqliParser::MIN, 0);
}

tree::TerminalNode* sqliParser::Group_functionsContext::SUM() {
  return getToken(sqliParser::SUM, 0);
}


size_t sqliParser::Group_functionsContext::getRuleIndex() const {
  return sqliParser::RuleGroup_functions;
}

void sqliParser::Group_functionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroup_functions(this);
}

void sqliParser::Group_functionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroup_functions(this);
}


antlrcpp::Any sqliParser::Group_functionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitGroup_functions(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Group_functionsContext* sqliParser::group_functions() {
  Group_functionsContext *_localctx = _tracker.createInstance<Group_functionsContext>(_ctx, getState());
  enterRule(_localctx, 240, sqliParser::RuleGroup_functions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1563);
    _la = _input->LA(1);
    if (!(((((_la - 271) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 271)) & ((1ULL << (sqliParser::AVG - 271))
      | (1ULL << (sqliParser::COUNT - 271))
      | (1ULL << (sqliParser::MAX - 271))
      | (1ULL << (sqliParser::MIN - 271))
      | (1ULL << (sqliParser::SUM - 271)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sensitive_functionsContext ------------------------------------------------------------------

sqliParser::Sensitive_functionsContext::Sensitive_functionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::SLEEP() {
  return getToken(sqliParser::SLEEP, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::BENCHMARK() {
  return getToken(sqliParser::BENCHMARK, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::UPDATEXML() {
  return getToken(sqliParser::UPDATEXML, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::EXTRACTVALUE() {
  return getToken(sqliParser::EXTRACTVALUE, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::LOAD_FILE() {
  return getToken(sqliParser::LOAD_FILE, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::DATABASE() {
  return getToken(sqliParser::DATABASE, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::SCHEMA() {
  return getToken(sqliParser::SCHEMA, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::USER() {
  return getToken(sqliParser::USER, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::SYSTEM_USER() {
  return getToken(sqliParser::SYSTEM_USER, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::SESSION_USER() {
  return getToken(sqliParser::SESSION_USER, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::CURRENT_USER() {
  return getToken(sqliParser::CURRENT_USER, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::PROCEDURE() {
  return getToken(sqliParser::PROCEDURE, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::ANALYSE() {
  return getToken(sqliParser::ANALYSE, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::MD5() {
  return getToken(sqliParser::MD5, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::IF() {
  return getToken(sqliParser::IF, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::ASCII() {
  return getToken(sqliParser::ASCII, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::MID() {
  return getToken(sqliParser::MID, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::ORD() {
  return getToken(sqliParser::ORD, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::INSTR() {
  return getToken(sqliParser::INSTR, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::CONCAT_WS() {
  return getToken(sqliParser::CONCAT_WS, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::GROUP_CONCAT() {
  return getToken(sqliParser::GROUP_CONCAT, 0);
}

tree::TerminalNode* sqliParser::Sensitive_functionsContext::VERSION() {
  return getToken(sqliParser::VERSION, 0);
}


size_t sqliParser::Sensitive_functionsContext::getRuleIndex() const {
  return sqliParser::RuleSensitive_functions;
}

void sqliParser::Sensitive_functionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSensitive_functions(this);
}

void sqliParser::Sensitive_functionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSensitive_functions(this);
}


antlrcpp::Any sqliParser::Sensitive_functionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSensitive_functions(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Sensitive_functionsContext* sqliParser::sensitive_functions() {
  Sensitive_functionsContext *_localctx = _tracker.createInstance<Sensitive_functionsContext>(_ctx, getState());
  enterRule(_localctx, 242, sqliParser::RuleSensitive_functions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1587);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::SLEEP: {
        enterOuterAlt(_localctx, 1);
        setState(1565);
        match(sqliParser::SLEEP);
        break;
      }

      case sqliParser::BENCHMARK: {
        enterOuterAlt(_localctx, 2);
        setState(1566);
        match(sqliParser::BENCHMARK);
        break;
      }

      case sqliParser::UPDATEXML: {
        enterOuterAlt(_localctx, 3);
        setState(1567);
        match(sqliParser::UPDATEXML);
        break;
      }

      case sqliParser::EXTRACTVALUE: {
        enterOuterAlt(_localctx, 4);
        setState(1568);
        match(sqliParser::EXTRACTVALUE);
        break;
      }

      case sqliParser::LOAD_FILE: {
        enterOuterAlt(_localctx, 5);
        setState(1569);
        match(sqliParser::LOAD_FILE);
        break;
      }

      case sqliParser::DATABASE: {
        enterOuterAlt(_localctx, 6);
        setState(1570);
        match(sqliParser::DATABASE);
        break;
      }

      case sqliParser::SCHEMA: {
        enterOuterAlt(_localctx, 7);
        setState(1571);
        match(sqliParser::SCHEMA);
        break;
      }

      case sqliParser::USER: {
        enterOuterAlt(_localctx, 8);
        setState(1572);
        match(sqliParser::USER);
        break;
      }

      case sqliParser::SYSTEM_USER: {
        enterOuterAlt(_localctx, 9);
        setState(1573);
        match(sqliParser::SYSTEM_USER);
        break;
      }

      case sqliParser::SESSION_USER: {
        enterOuterAlt(_localctx, 10);
        setState(1574);
        match(sqliParser::SESSION_USER);
        break;
      }

      case sqliParser::CURRENT_USER: {
        enterOuterAlt(_localctx, 11);
        setState(1575);
        match(sqliParser::CURRENT_USER);
        break;
      }

      case sqliParser::PROCEDURE: {
        enterOuterAlt(_localctx, 12);
        setState(1576);
        match(sqliParser::PROCEDURE);
        setState(1577);
        match(sqliParser::ANALYSE);
        break;
      }

      case sqliParser::MD5: {
        enterOuterAlt(_localctx, 13);
        setState(1578);
        match(sqliParser::MD5);
        break;
      }

      case sqliParser::IF: {
        enterOuterAlt(_localctx, 14);
        setState(1579);
        match(sqliParser::IF);
        break;
      }

      case sqliParser::ASCII: {
        enterOuterAlt(_localctx, 15);
        setState(1580);
        match(sqliParser::ASCII);
        break;
      }

      case sqliParser::MID: {
        enterOuterAlt(_localctx, 16);
        setState(1581);
        match(sqliParser::MID);
        break;
      }

      case sqliParser::ORD: {
        enterOuterAlt(_localctx, 17);
        setState(1582);
        match(sqliParser::ORD);
        break;
      }

      case sqliParser::INSTR: {
        enterOuterAlt(_localctx, 18);
        setState(1583);
        match(sqliParser::INSTR);
        break;
      }

      case sqliParser::CONCAT_WS: {
        enterOuterAlt(_localctx, 19);
        setState(1584);
        match(sqliParser::CONCAT_WS);
        break;
      }

      case sqliParser::GROUP_CONCAT: {
        enterOuterAlt(_localctx, 20);
        setState(1585);
        match(sqliParser::GROUP_CONCAT);
        break;
      }

      case sqliParser::VERSION: {
        enterOuterAlt(_localctx, 21);
        setState(1586);
        match(sqliParser::VERSION);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Schema_nameContext ------------------------------------------------------------------

sqliParser::Schema_nameContext::Schema_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Schema_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Schema_nameContext::getRuleIndex() const {
  return sqliParser::RuleSchema_name;
}

void sqliParser::Schema_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchema_name(this);
}

void sqliParser::Schema_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchema_name(this);
}


antlrcpp::Any sqliParser::Schema_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitSchema_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Schema_nameContext* sqliParser::schema_name() {
  Schema_nameContext *_localctx = _tracker.createInstance<Schema_nameContext>(_ctx, getState());
  enterRule(_localctx, 244, sqliParser::RuleSchema_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1589);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Database_nameContext ------------------------------------------------------------------

sqliParser::Database_nameContext::Database_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Database_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Database_nameContext::getRuleIndex() const {
  return sqliParser::RuleDatabase_name;
}

void sqliParser::Database_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDatabase_name(this);
}

void sqliParser::Database_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDatabase_name(this);
}


antlrcpp::Any sqliParser::Database_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitDatabase_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Database_nameContext* sqliParser::database_name() {
  Database_nameContext *_localctx = _tracker.createInstance<Database_nameContext>(_ctx, getState());
  enterRule(_localctx, 246, sqliParser::RuleDatabase_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1591);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_nameContext ------------------------------------------------------------------

sqliParser::Table_nameContext::Table_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Table_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Table_nameContext::getRuleIndex() const {
  return sqliParser::RuleTable_name;
}

void sqliParser::Table_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_name(this);
}

void sqliParser::Table_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_name(this);
}


antlrcpp::Any sqliParser::Table_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitTable_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Table_nameContext* sqliParser::table_name() {
  Table_nameContext *_localctx = _tracker.createInstance<Table_nameContext>(_ctx, getState());
  enterRule(_localctx, 248, sqliParser::RuleTable_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1593);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Engine_nameContext ------------------------------------------------------------------

sqliParser::Engine_nameContext::Engine_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Engine_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Engine_nameContext::getRuleIndex() const {
  return sqliParser::RuleEngine_name;
}

void sqliParser::Engine_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEngine_name(this);
}

void sqliParser::Engine_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEngine_name(this);
}


antlrcpp::Any sqliParser::Engine_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitEngine_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Engine_nameContext* sqliParser::engine_name() {
  Engine_nameContext *_localctx = _tracker.createInstance<Engine_nameContext>(_ctx, getState());
  enterRule(_localctx, 250, sqliParser::RuleEngine_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1595);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_nameContext ------------------------------------------------------------------

sqliParser::Column_nameContext::Column_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Column_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Column_nameContext::getRuleIndex() const {
  return sqliParser::RuleColumn_name;
}

void sqliParser::Column_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_name(this);
}

void sqliParser::Column_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_name(this);
}


antlrcpp::Any sqliParser::Column_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitColumn_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Column_nameContext* sqliParser::column_name() {
  Column_nameContext *_localctx = _tracker.createInstance<Column_nameContext>(_ctx, getState());
  enterRule(_localctx, 252, sqliParser::RuleColumn_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1597);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_nameContext ------------------------------------------------------------------

sqliParser::Value_nameContext::Value_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Value_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Value_nameContext::getRuleIndex() const {
  return sqliParser::RuleValue_name;
}

void sqliParser::Value_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue_name(this);
}

void sqliParser::Value_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue_name(this);
}


antlrcpp::Any sqliParser::Value_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitValue_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Value_nameContext* sqliParser::value_name() {
  Value_nameContext *_localctx = _tracker.createInstance<Value_nameContext>(_ctx, getState());
  enterRule(_localctx, 254, sqliParser::RuleValue_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1599);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- View_nameContext ------------------------------------------------------------------

sqliParser::View_nameContext::View_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::View_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::View_nameContext::getRuleIndex() const {
  return sqliParser::RuleView_name;
}

void sqliParser::View_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterView_name(this);
}

void sqliParser::View_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitView_name(this);
}


antlrcpp::Any sqliParser::View_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitView_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::View_nameContext* sqliParser::view_name() {
  View_nameContext *_localctx = _tracker.createInstance<View_nameContext>(_ctx, getState());
  enterRule(_localctx, 256, sqliParser::RuleView_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1601);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parser_nameContext ------------------------------------------------------------------

sqliParser::Parser_nameContext::Parser_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Parser_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Parser_nameContext::getRuleIndex() const {
  return sqliParser::RuleParser_name;
}

void sqliParser::Parser_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParser_name(this);
}

void sqliParser::Parser_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParser_name(this);
}


antlrcpp::Any sqliParser::Parser_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitParser_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Parser_nameContext* sqliParser::parser_name() {
  Parser_nameContext *_localctx = _tracker.createInstance<Parser_nameContext>(_ctx, getState());
  enterRule(_localctx, 258, sqliParser::RuleParser_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1603);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_nameContext ------------------------------------------------------------------

sqliParser::Index_nameContext::Index_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Index_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Index_nameContext::getRuleIndex() const {
  return sqliParser::RuleIndex_name;
}

void sqliParser::Index_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_name(this);
}

void sqliParser::Index_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_name(this);
}


antlrcpp::Any sqliParser::Index_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitIndex_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Index_nameContext* sqliParser::index_name() {
  Index_nameContext *_localctx = _tracker.createInstance<Index_nameContext>(_ctx, getState());
  enterRule(_localctx, 260, sqliParser::RuleIndex_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1605);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Partition_nameContext ------------------------------------------------------------------

sqliParser::Partition_nameContext::Partition_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Partition_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Partition_nameContext::getRuleIndex() const {
  return sqliParser::RulePartition_name;
}

void sqliParser::Partition_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPartition_name(this);
}

void sqliParser::Partition_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPartition_name(this);
}


antlrcpp::Any sqliParser::Partition_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPartition_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Partition_nameContext* sqliParser::partition_name() {
  Partition_nameContext *_localctx = _tracker.createInstance<Partition_nameContext>(_ctx, getState());
  enterRule(_localctx, 262, sqliParser::RulePartition_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1607);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Partition_logical_nameContext ------------------------------------------------------------------

sqliParser::Partition_logical_nameContext::Partition_logical_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Partition_logical_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Partition_logical_nameContext::getRuleIndex() const {
  return sqliParser::RulePartition_logical_name;
}

void sqliParser::Partition_logical_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPartition_logical_name(this);
}

void sqliParser::Partition_logical_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPartition_logical_name(this);
}


antlrcpp::Any sqliParser::Partition_logical_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPartition_logical_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Partition_logical_nameContext* sqliParser::partition_logical_name() {
  Partition_logical_nameContext *_localctx = _tracker.createInstance<Partition_logical_nameContext>(_ctx, getState());
  enterRule(_localctx, 264, sqliParser::RulePartition_logical_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1609);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constraintbol_nameContext ------------------------------------------------------------------

sqliParser::Constraintbol_nameContext::Constraintbol_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Constraintbol_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Constraintbol_nameContext::getRuleIndex() const {
  return sqliParser::RuleConstraintbol_name;
}

void sqliParser::Constraintbol_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraintbol_name(this);
}

void sqliParser::Constraintbol_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraintbol_name(this);
}


antlrcpp::Any sqliParser::Constraintbol_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitConstraintbol_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Constraintbol_nameContext* sqliParser::constraintbol_name() {
  Constraintbol_nameContext *_localctx = _tracker.createInstance<Constraintbol_nameContext>(_ctx, getState());
  enterRule(_localctx, 266, sqliParser::RuleConstraintbol_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1611);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Foreign_keybol_nameContext ------------------------------------------------------------------

sqliParser::Foreign_keybol_nameContext::Foreign_keybol_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Foreign_keybol_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Foreign_keybol_nameContext::getRuleIndex() const {
  return sqliParser::RuleForeign_keybol_name;
}

void sqliParser::Foreign_keybol_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeign_keybol_name(this);
}

void sqliParser::Foreign_keybol_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeign_keybol_name(this);
}


antlrcpp::Any sqliParser::Foreign_keybol_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitForeign_keybol_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Foreign_keybol_nameContext* sqliParser::foreign_keybol_name() {
  Foreign_keybol_nameContext *_localctx = _tracker.createInstance<Foreign_keybol_nameContext>(_ctx, getState());
  enterRule(_localctx, 268, sqliParser::RuleForeign_keybol_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1613);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Collation_nameContext ------------------------------------------------------------------

sqliParser::Collation_nameContext::Collation_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Collation_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Collation_nameContext::getRuleIndex() const {
  return sqliParser::RuleCollation_name;
}

void sqliParser::Collation_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollation_name(this);
}

void sqliParser::Collation_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollation_name(this);
}


antlrcpp::Any sqliParser::Collation_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitCollation_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Collation_nameContext* sqliParser::collation_name() {
  Collation_nameContext *_localctx = _tracker.createInstance<Collation_nameContext>(_ctx, getState());
  enterRule(_localctx, 270, sqliParser::RuleCollation_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1615);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_nameContext ------------------------------------------------------------------

sqliParser::Event_nameContext::Event_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Event_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Event_nameContext::getRuleIndex() const {
  return sqliParser::RuleEvent_name;
}

void sqliParser::Event_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvent_name(this);
}

void sqliParser::Event_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvent_name(this);
}


antlrcpp::Any sqliParser::Event_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitEvent_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Event_nameContext* sqliParser::event_name() {
  Event_nameContext *_localctx = _tracker.createInstance<Event_nameContext>(_ctx, getState());
  enterRule(_localctx, 272, sqliParser::RuleEvent_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1617);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- User_nameContext ------------------------------------------------------------------

sqliParser::User_nameContext::User_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::User_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::User_nameContext::getRuleIndex() const {
  return sqliParser::RuleUser_name;
}

void sqliParser::User_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUser_name(this);
}

void sqliParser::User_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUser_name(this);
}


antlrcpp::Any sqliParser::User_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitUser_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::User_nameContext* sqliParser::user_name() {
  User_nameContext *_localctx = _tracker.createInstance<User_nameContext>(_ctx, getState());
  enterRule(_localctx, 274, sqliParser::RuleUser_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1619);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_nameContext ------------------------------------------------------------------

sqliParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Function_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Function_nameContext::getRuleIndex() const {
  return sqliParser::RuleFunction_name;
}

void sqliParser::Function_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_name(this);
}

void sqliParser::Function_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_name(this);
}


antlrcpp::Any sqliParser::Function_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitFunction_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Function_nameContext* sqliParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 276, sqliParser::RuleFunction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1621);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedure_nameContext ------------------------------------------------------------------

sqliParser::Procedure_nameContext::Procedure_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Procedure_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Procedure_nameContext::getRuleIndex() const {
  return sqliParser::RuleProcedure_name;
}

void sqliParser::Procedure_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedure_name(this);
}

void sqliParser::Procedure_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedure_name(this);
}


antlrcpp::Any sqliParser::Procedure_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitProcedure_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Procedure_nameContext* sqliParser::procedure_name() {
  Procedure_nameContext *_localctx = _tracker.createInstance<Procedure_nameContext>(_ctx, getState());
  enterRule(_localctx, 278, sqliParser::RuleProcedure_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1623);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Server_nameContext ------------------------------------------------------------------

sqliParser::Server_nameContext::Server_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Server_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Server_nameContext::getRuleIndex() const {
  return sqliParser::RuleServer_name;
}

void sqliParser::Server_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterServer_name(this);
}

void sqliParser::Server_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitServer_name(this);
}


antlrcpp::Any sqliParser::Server_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitServer_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Server_nameContext* sqliParser::server_name() {
  Server_nameContext *_localctx = _tracker.createInstance<Server_nameContext>(_ctx, getState());
  enterRule(_localctx, 280, sqliParser::RuleServer_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1625);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Wrapper_nameContext ------------------------------------------------------------------

sqliParser::Wrapper_nameContext::Wrapper_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Wrapper_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Wrapper_nameContext::getRuleIndex() const {
  return sqliParser::RuleWrapper_name;
}

void sqliParser::Wrapper_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWrapper_name(this);
}

void sqliParser::Wrapper_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWrapper_name(this);
}


antlrcpp::Any sqliParser::Wrapper_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitWrapper_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Wrapper_nameContext* sqliParser::wrapper_name() {
  Wrapper_nameContext *_localctx = _tracker.createInstance<Wrapper_nameContext>(_ctx, getState());
  enterRule(_localctx, 282, sqliParser::RuleWrapper_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1627);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasContext ------------------------------------------------------------------

sqliParser::AliasContext::AliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Alias_nameContext* sqliParser::AliasContext::alias_name() {
  return getRuleContext<sqliParser::Alias_nameContext>(0);
}

tree::TerminalNode* sqliParser::AliasContext::AS() {
  return getToken(sqliParser::AS, 0);
}


size_t sqliParser::AliasContext::getRuleIndex() const {
  return sqliParser::RuleAlias;
}

void sqliParser::AliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlias(this);
}

void sqliParser::AliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlias(this);
}


antlrcpp::Any sqliParser::AliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitAlias(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::AliasContext* sqliParser::alias() {
  AliasContext *_localctx = _tracker.createInstance<AliasContext>(_ctx, getState());
  enterRule(_localctx, 284, sqliParser::RuleAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1630);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx)) {
    case 1: {
      setState(1629);
      match(sqliParser::AS);
      break;
    }

    }
    setState(1632);
    alias_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PasswordContext ------------------------------------------------------------------

sqliParser::PasswordContext::PasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::PasswordContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::PasswordContext::getRuleIndex() const {
  return sqliParser::RulePassword;
}

void sqliParser::PasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPassword(this);
}

void sqliParser::PasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPassword(this);
}


antlrcpp::Any sqliParser::PasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPassword(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::PasswordContext* sqliParser::password() {
  PasswordContext *_localctx = _tracker.createInstance<PasswordContext>(_ctx, getState());
  enterRule(_localctx, 286, sqliParser::RulePassword);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1634);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Server_alias_nameContext ------------------------------------------------------------------

sqliParser::Server_alias_nameContext::Server_alias_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Server_alias_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Server_alias_nameContext::getRuleIndex() const {
  return sqliParser::RuleServer_alias_name;
}

void sqliParser::Server_alias_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterServer_alias_name(this);
}

void sqliParser::Server_alias_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitServer_alias_name(this);
}


antlrcpp::Any sqliParser::Server_alias_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitServer_alias_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Server_alias_nameContext* sqliParser::server_alias_name() {
  Server_alias_nameContext *_localctx = _tracker.createInstance<Server_alias_nameContext>(_ctx, getState());
  enterRule(_localctx, 288, sqliParser::RuleServer_alias_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1636);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Role_nameContext ------------------------------------------------------------------

sqliParser::Role_nameContext::Role_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Role_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Role_nameContext::getRuleIndex() const {
  return sqliParser::RuleRole_name;
}

void sqliParser::Role_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRole_name(this);
}

void sqliParser::Role_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRole_name(this);
}


antlrcpp::Any sqliParser::Role_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitRole_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Role_nameContext* sqliParser::role_name() {
  Role_nameContext *_localctx = _tracker.createInstance<Role_nameContext>(_ctx, getState());
  enterRule(_localctx, 290, sqliParser::RuleRole_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1638);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_nameContext ------------------------------------------------------------------

sqliParser::Group_nameContext::Group_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Group_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Group_nameContext::getRuleIndex() const {
  return sqliParser::RuleGroup_name;
}

void sqliParser::Group_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroup_name(this);
}

void sqliParser::Group_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroup_name(this);
}


antlrcpp::Any sqliParser::Group_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitGroup_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Group_nameContext* sqliParser::group_name() {
  Group_nameContext *_localctx = _tracker.createInstance<Group_nameContext>(_ctx, getState());
  enterRule(_localctx, 292, sqliParser::RuleGroup_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1640);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Principal_nameContext ------------------------------------------------------------------

sqliParser::Principal_nameContext::Principal_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sqliParser::Any_nameContext* sqliParser::Principal_nameContext::any_name() {
  return getRuleContext<sqliParser::Any_nameContext>(0);
}


size_t sqliParser::Principal_nameContext::getRuleIndex() const {
  return sqliParser::RulePrincipal_name;
}

void sqliParser::Principal_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrincipal_name(this);
}

void sqliParser::Principal_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrincipal_name(this);
}


antlrcpp::Any sqliParser::Principal_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPrincipal_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Principal_nameContext* sqliParser::principal_name() {
  Principal_nameContext *_localctx = _tracker.createInstance<Principal_nameContext>(_ctx, getState());
  enterRule(_localctx, 294, sqliParser::RulePrincipal_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1642);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Any_nameContext ------------------------------------------------------------------

sqliParser::Any_nameContext::Any_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Any_nameContext::ID() {
  return getToken(sqliParser::ID, 0);
}

sqliParser::KeywordContext* sqliParser::Any_nameContext::keyword() {
  return getRuleContext<sqliParser::KeywordContext>(0);
}

tree::TerminalNode* sqliParser::Any_nameContext::SYSTEM_VAR() {
  return getToken(sqliParser::SYSTEM_VAR, 0);
}

sqliParser::Number_literalContext* sqliParser::Any_nameContext::number_literal() {
  return getRuleContext<sqliParser::Number_literalContext>(0);
}

sqliParser::String_literalContext* sqliParser::Any_nameContext::string_literal() {
  return getRuleContext<sqliParser::String_literalContext>(0);
}

sqliParser::Function_callContext* sqliParser::Any_nameContext::function_call() {
  return getRuleContext<sqliParser::Function_callContext>(0);
}

tree::TerminalNode* sqliParser::Any_nameContext::HEX_DIGIT() {
  return getToken(sqliParser::HEX_DIGIT, 0);
}


size_t sqliParser::Any_nameContext::getRuleIndex() const {
  return sqliParser::RuleAny_name;
}

void sqliParser::Any_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAny_name(this);
}

void sqliParser::Any_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAny_name(this);
}


antlrcpp::Any sqliParser::Any_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitAny_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Any_nameContext* sqliParser::any_name() {
  Any_nameContext *_localctx = _tracker.createInstance<Any_nameContext>(_ctx, getState());
  enterRule(_localctx, 296, sqliParser::RuleAny_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1653);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1644);
      match(sqliParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1646);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sqliParser::SYSTEM_VAR) {
        setState(1645);
        match(sqliParser::SYSTEM_VAR);
      }
      setState(1648);
      keyword();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1649);
      number_literal();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1650);
      string_literal();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1651);
      function_call();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1652);
      match(sqliParser::HEX_DIGIT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alias_nameContext ------------------------------------------------------------------

sqliParser::Alias_nameContext::Alias_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Alias_nameContext::ID() {
  return getToken(sqliParser::ID, 0);
}

sqliParser::KeywordContext* sqliParser::Alias_nameContext::keyword() {
  return getRuleContext<sqliParser::KeywordContext>(0);
}

sqliParser::String_literalContext* sqliParser::Alias_nameContext::string_literal() {
  return getRuleContext<sqliParser::String_literalContext>(0);
}


size_t sqliParser::Alias_nameContext::getRuleIndex() const {
  return sqliParser::RuleAlias_name;
}

void sqliParser::Alias_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlias_name(this);
}

void sqliParser::Alias_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlias_name(this);
}


antlrcpp::Any sqliParser::Alias_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitAlias_name(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Alias_nameContext* sqliParser::alias_name() {
  Alias_nameContext *_localctx = _tracker.createInstance<Alias_nameContext>(_ctx, getState());
  enterRule(_localctx, 298, sqliParser::RuleAlias_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1658);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sqliParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(1655);
        match(sqliParser::ID);
        break;
      }

      case sqliParser::TRUE:
      case sqliParser::FALSE:
      case sqliParser::ALL:
      case sqliParser::NOT:
      case sqliParser::LIKE:
      case sqliParser::CHARACTER:
      case sqliParser::IF:
      case sqliParser::EXISTS:
      case sqliParser::ASC:
      case sqliParser::DESC:
      case sqliParser::BY:
      case sqliParser::HAVING:
      case sqliParser::WHERE:
      case sqliParser::AS:
      case sqliParser::SELECT:
      case sqliParser::DISTINCT:
      case sqliParser::INSERT:
      case sqliParser::OVERWRITE:
      case sqliParser::OUTER:
      case sqliParser::UNIQUEJOIN:
      case sqliParser::PRESERVE:
      case sqliParser::JOIN:
      case sqliParser::LEFT:
      case sqliParser::RIGHT:
      case sqliParser::FULL:
      case sqliParser::ON:
      case sqliParser::PARTITION:
      case sqliParser::PARTITIONS:
      case sqliParser::TABLE:
      case sqliParser::TABLES:
      case sqliParser::COLUMNS:
      case sqliParser::INDEX:
      case sqliParser::INDEXES:
      case sqliParser::REBUILD:
      case sqliParser::FUNCTIONS:
      case sqliParser::SHOW:
      case sqliParser::MSCK:
      case sqliParser::REPAIR:
      case sqliParser::DIRECTORY:
      case sqliParser::LOCAL:
      case sqliParser::TRANSFORM:
      case sqliParser::USING:
      case sqliParser::CLUSTER:
      case sqliParser::DISTRIBUTE:
      case sqliParser::SORT:
      case sqliParser::UNION:
      case sqliParser::LOAD:
      case sqliParser::EXPORT:
      case sqliParser::IMPORT:
      case sqliParser::DATA:
      case sqliParser::INPATH:
      case sqliParser::IS:
      case sqliParser::CNULL:
      case sqliParser::CREATE:
      case sqliParser::EXTERNAL:
      case sqliParser::ALTER:
      case sqliParser::CHANGE:
      case sqliParser::COLUMN:
      case sqliParser::FIRST:
      case sqliParser::AFTER:
      case sqliParser::DESCRIBE:
      case sqliParser::DROP:
      case sqliParser::RENAME:
      case sqliParser::IGNORE:
      case sqliParser::PROTECTION:
      case sqliParser::TO:
      case sqliParser::COMMENT:
      case sqliParser::BOOLEAN:
      case sqliParser::TINYINT:
      case sqliParser::SMALLINT:
      case sqliParser::INT:
      case sqliParser::BIGINT:
      case sqliParser::FLOAT:
      case sqliParser::DOUBLE:
      case sqliParser::DATE:
      case sqliParser::DATETIME:
      case sqliParser::TIMESTAMP:
      case sqliParser::DECIMAL:
      case sqliParser::STRING:
      case sqliParser::VARCHAR:
      case sqliParser::ARRAY:
      case sqliParser::STRUCT:
      case sqliParser::MAP:
      case sqliParser::UNIONTYPE:
      case sqliParser::REDUCE:
      case sqliParser::PARTITIONED:
      case sqliParser::CLUSTERED:
      case sqliParser::SORTED:
      case sqliParser::INTO:
      case sqliParser::BUCKETS:
      case sqliParser::ROW:
      case sqliParser::ROWS:
      case sqliParser::FORMAT:
      case sqliParser::DELIMITED:
      case sqliParser::FIELDS:
      case sqliParser::TERMINATED:
      case sqliParser::ESCAPED:
      case sqliParser::COLLECTION:
      case sqliParser::ITEMS:
      case sqliParser::KEYS:
      case sqliParser::KEY:
      case sqliParser::LINES:
      case sqliParser::STORED:
      case sqliParser::FILEFORMAT:
      case sqliParser::SEQUENCEFILE:
      case sqliParser::TEXTFILE:
      case sqliParser::RCFILE:
      case sqliParser::ORCFILE:
      case sqliParser::INPUTFORMAT:
      case sqliParser::OUTPUTFORMAT:
      case sqliParser::INPUTDRIVER:
      case sqliParser::OUTPUTDRIVER:
      case sqliParser::OFFLINE:
      case sqliParser::ENABLE:
      case sqliParser::DEFAULT:
      case sqliParser::DISABLE:
      case sqliParser::READONLY:
      case sqliParser::LOCATION:
      case sqliParser::TABLESAMPLE:
      case sqliParser::BUCKET:
      case sqliParser::OUT:
      case sqliParser::OF:
      case sqliParser::PERCENT:
      case sqliParser::CAST:
      case sqliParser::ADD:
      case sqliParser::REPLACE:
      case sqliParser::RLIKE:
      case sqliParser::REGEXP:
      case sqliParser::TEMPORARY:
      case sqliParser::FUNCTION:
      case sqliParser::MACRO:
      case sqliParser::EXPLAIN:
      case sqliParser::EXTENDED:
      case sqliParser::FORMATTED:
      case sqliParser::PRETTY:
      case sqliParser::DEPENDENCY:
      case sqliParser::LOGICAL:
      case sqliParser::SERDE:
      case sqliParser::WITH:
      case sqliParser::DEFERRED:
      case sqliParser::SERDEPROPERTIES:
      case sqliParser::DBPROPERTIES:
      case sqliParser::LIMIT:
      case sqliParser::SET:
      case sqliParser::UNSET:
      case sqliParser::TBLPROPERTIES:
      case sqliParser::IDXPROPERTIES:
      case sqliParser::CASCADED:
      case sqliParser::CASE:
      case sqliParser::WHEN:
      case sqliParser::THEN:
      case sqliParser::ELSE:
      case sqliParser::END:
      case sqliParser::MAPJOIN:
      case sqliParser::STREAMTABLE:
      case sqliParser::CLUSTERSTATUS:
      case sqliParser::UTC:
      case sqliParser::LONG:
      case sqliParser::DELETE:
      case sqliParser::FETCH:
      case sqliParser::INTERSECT:
      case sqliParser::VIEW:
      case sqliParser::IN:
      case sqliParser::DATABASE:
      case sqliParser::DATABASES:
      case sqliParser::MATERIALIZED:
      case sqliParser::SCHEMA:
      case sqliParser::SCHEMAS:
      case sqliParser::GRANT:
      case sqliParser::REVOKE:
      case sqliParser::SSL:
      case sqliParser::UNDO:
      case sqliParser::LOCK:
      case sqliParser::LOCKS:
      case sqliParser::UNLOCK:
      case sqliParser::SHARED:
      case sqliParser::EXCLUSIVE:
      case sqliParser::PROCEDURE:
      case sqliParser::UNSIGNED:
      case sqliParser::WHILE:
      case sqliParser::READ:
      case sqliParser::READS:
      case sqliParser::PURGE:
      case sqliParser::RANGE:
      case sqliParser::ANALYZE:
      case sqliParser::BEFORE:
      case sqliParser::BETWEEN:
      case sqliParser::BOTH:
      case sqliParser::BINARY:
      case sqliParser::CROSS:
      case sqliParser::CONTINUE:
      case sqliParser::CURSOR:
      case sqliParser::TRIGGER:
      case sqliParser::RECORDREADER:
      case sqliParser::RECORDWRITER:
      case sqliParser::LATERAL:
      case sqliParser::TOUCH:
      case sqliParser::ARCHIVE:
      case sqliParser::UNARCHIVE:
      case sqliParser::COMPUTE:
      case sqliParser::STATISTICS:
      case sqliParser::USE:
      case sqliParser::OPTION:
      case sqliParser::CONCATENATE:
      case sqliParser::UPDATE:
      case sqliParser::RESTRICT:
      case sqliParser::CASCADE:
      case sqliParser::SKEWED:
      case sqliParser::ROLLUP:
      case sqliParser::CUBE:
      case sqliParser::DIRECTORIES:
      case sqliParser::FOR:
      case sqliParser::WINDOW:
      case sqliParser::UNBOUNDED:
      case sqliParser::PRECEDING:
      case sqliParser::FOLLOWING:
      case sqliParser::CURRENT:
      case sqliParser::LESS:
      case sqliParser::OVER:
      case sqliParser::GROUPING:
      case sqliParser::SETS:
      case sqliParser::TRUNCATE:
      case sqliParser::NOSCAN:
      case sqliParser::PARTIALSCAN:
      case sqliParser::USER:
      case sqliParser::ROLE:
      case sqliParser::INNER:
      case sqliParser::EXCHANGE:
      case sqliParser::IDENTIFIED:
      case sqliParser::CHAR:
      case sqliParser::ABS:
      case sqliParser::ACOS:
      case sqliParser::ASIN:
      case sqliParser::ATAN:
      case sqliParser::CEIL:
      case sqliParser::COS:
      case sqliParser::COT:
      case sqliParser::EXP:
      case sqliParser::FLOOR:
      case sqliParser::LN:
      case sqliParser::POW:
      case sqliParser::RAND:
      case sqliParser::ROUND:
      case sqliParser::SIN:
      case sqliParser::SQRT:
      case sqliParser::TAN:
      case sqliParser::LCASE:
      case sqliParser::LOWER:
      case sqliParser::LTRIM:
      case sqliParser::RTRIM:
      case sqliParser::CONCAT:
      case sqliParser::SUBSTR:
      case sqliParser::TRIM:
      case sqliParser::UCASE:
      case sqliParser::UPPER:
      case sqliParser::INTERVAL:
      case sqliParser::TO_DATE:
      case sqliParser::DAY:
      case sqliParser::HOUR:
      case sqliParser::MINUTE:
      case sqliParser::MONTH:
      case sqliParser::SECOND:
      case sqliParser::FROM_UNIXTIME:
      case sqliParser::YEAR:
      case sqliParser::DATE_ADD:
      case sqliParser::DATE_SUB:
      case sqliParser::COLLATE:
      case sqliParser::AVG:
      case sqliParser::COUNT:
      case sqliParser::MAX:
      case sqliParser::MIN:
      case sqliParser::SUM:
      case sqliParser::COALESCE:
      case sqliParser::DUPLICATE:
      case sqliParser::SERVER:
      case sqliParser::ALIASES:
      case sqliParser::ALIAS:
      case sqliParser::VALUES:
      case sqliParser::VALUE:
      case sqliParser::LOW_PRIORITY:
      case sqliParser::HIGH_PRIORITY:
      case sqliParser::HASH:
      case sqliParser::REFERENCES:
      case sqliParser::TO_CHAR:
      case sqliParser::DATE_FORMAT:
      case sqliParser::SIGNED:
      case sqliParser::INTEGER:
      case sqliParser::LENGTH:
      case sqliParser::REVERSE:
      case sqliParser::IFNULL:
      case sqliParser::HEX:
      case sqliParser::CONV:
      case sqliParser::VERSION:
      case sqliParser::DIVIDE:
      case sqliParser::MOD:
      case sqliParser::OR:
      case sqliParser::AND:
      case sqliParser::XOR:
      case sqliParser::ARROW:
      case sqliParser::EQ:
      case sqliParser::NOT_EQ:
      case sqliParser::LET:
      case sqliParser::GET:
      case sqliParser::SET_VAR:
      case sqliParser::SHIFT_LEFT:
      case sqliParser::SHIFT_RIGHT:
      case sqliParser::MORE: {
        enterOuterAlt(_localctx, 2);
        setState(1656);
        keyword();
        break;
      }

      case sqliParser::TEXT_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(1657);
        string_literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Priv_typeContext ------------------------------------------------------------------

sqliParser::Priv_typeContext::Priv_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sqliParser::Priv_typeContext::INSERT() {
  return getToken(sqliParser::INSERT, 0);
}

tree::TerminalNode* sqliParser::Priv_typeContext::SELECT() {
  return getToken(sqliParser::SELECT, 0);
}

tree::TerminalNode* sqliParser::Priv_typeContext::UPDATE() {
  return getToken(sqliParser::UPDATE, 0);
}

tree::TerminalNode* sqliParser::Priv_typeContext::DELETE() {
  return getToken(sqliParser::DELETE, 0);
}

tree::TerminalNode* sqliParser::Priv_typeContext::ALTER() {
  return getToken(sqliParser::ALTER, 0);
}

tree::TerminalNode* sqliParser::Priv_typeContext::DROP() {
  return getToken(sqliParser::DROP, 0);
}

tree::TerminalNode* sqliParser::Priv_typeContext::CREATE() {
  return getToken(sqliParser::CREATE, 0);
}

tree::TerminalNode* sqliParser::Priv_typeContext::ALL() {
  return getToken(sqliParser::ALL, 0);
}


size_t sqliParser::Priv_typeContext::getRuleIndex() const {
  return sqliParser::RulePriv_type;
}

void sqliParser::Priv_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPriv_type(this);
}

void sqliParser::Priv_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sqliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPriv_type(this);
}


antlrcpp::Any sqliParser::Priv_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sqliParserVisitor*>(visitor))
    return parserVisitor->visitPriv_type(this);
  else
    return visitor->visitChildren(this);
}

sqliParser::Priv_typeContext* sqliParser::priv_type() {
  Priv_typeContext *_localctx = _tracker.createInstance<Priv_typeContext>(_ctx, getState());
  enterRule(_localctx, 300, sqliParser::RulePriv_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1660);
    _la = _input->LA(1);
    if (!(((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (sqliParser::ALL - 3))
      | (1ULL << (sqliParser::SELECT - 3))
      | (1ULL << (sqliParser::INSERT - 3))
      | (1ULL << (sqliParser::CREATE - 3))
      | (1ULL << (sqliParser::ALTER - 3))
      | (1ULL << (sqliParser::DROP - 3)))) != 0) || _la == sqliParser::DELETE

    || _la == sqliParser::UPDATE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> sqliParser::_decisionToDFA;
atn::PredictionContextCache sqliParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sqliParser::_atn;
std::vector<uint16_t> sqliParser::_serializedATN;

std::vector<std::string> sqliParser::_ruleNames = {
  "root_statement", "data_manipulation_statements", "data_definition_statements", 
  "create_statement", "create_statement_spec", "drop_statement", "privilege_alter_statement", 
  "select_statement", "select_statement_subquery", "select_expression", 
  "select_expression_subquery", "where_clause", "groupby_clause", "groupby_item", 
  "having_clause", "orderby_clause", "orderby_item", "orderby_column_spec", 
  "orderby_column_name", "orderby_any_name", "limit_clause", "offset", "row_count", 
  "select_list", "column_list", "subquery", "table_spec", "displayed_column", 
  "insert_statement", "insert_header", "value_list_clause", "value_list", 
  "column_value_list", "set_columns_cluase", "set_column_cluase", "create_database_statement", 
  "create_table_statement", "create_table_spec", "create_definition", "column_definition", 
  "null_or_notnull", "column_data_type_header", "index_column_name", "length", 
  "varchar_length", "binary_length", "alter_table_statement", "alter_table_specification", 
  "index_column_names", "index_type", "index_option", "column_definitions", 
  "rename_table_statement", "drop_database_statement", "drop_table_statement", 
  "drop_view_statement", "drop_user_statement", "create_view_statement", 
  "create_view_body", "alter_view_statement", "create_user_statement", "grant_privilege_statement", 
  "principal_specification", "revoke_privilege_statement", "show_event_statement", 
  "show_specification", "set_event_statement", "use_event_statement", "server_event_statement", 
  "update_statements", "delete_statements", "expression", "exp_factor1", 
  "bool_primary", "predicate_quote", "predicate_exp_quote", "bit_expr_quote", 
  "factor1_quote", "factor2_quote", "simple_expr_quote", "column_spec_quote", 
  "column_name_quote", "any_name_quote", "predicate", "predicate_exp", "bit_expr", 
  "factor1", "factor2", "simple_expr", "function_call", "case_when_statement", 
  "column_spec", "expression_list", "interval_expr", "table_references", 
  "table_reference", "table_atom", "join_condition", "index_hint_list", 
  "index_options", "index_hint", "index_list", "partition_clause", "partition_names", 
  "keyword", "delimited_statement", "integer_types", "relational_op", "cast_data_type", 
  "interval_unit", "string_literal", "number_literal", "hex_literal", "boolean_literal", 
  "literal_value", "functionList", "number_functions", "char_functions", 
  "time_functions", "other_functions", "group_functions", "sensitive_functions", 
  "schema_name", "database_name", "table_name", "engine_name", "column_name", 
  "value_name", "view_name", "parser_name", "index_name", "partition_name", 
  "partition_logical_name", "constraintbol_name", "foreign_keybol_name", 
  "collation_name", "event_name", "user_name", "function_name", "procedure_name", 
  "server_name", "wrapper_name", "alias", "password", "server_alias_name", 
  "role_name", "group_name", "principal_name", "any_name", "alias_name", 
  "priv_type"
};

std::vector<std::string> sqliParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "'=>'", "", "", "'<='", "'>='", "':='", "'<<'", "'>>'", "';'", "':'", 
  "'.'", "','", "'*'", "')'", "'('", "']'", "'['", "'+'", "'-'", "'~'", 
  "'|'", "'&'", "'^'", "'>'", "'<'", "", "'`'", "", "", "", "", "", "", 
  "", "", "", "", "'@@'"
};

std::vector<std::string> sqliParser::_symbolicNames = {
  "", "TRUE", "FALSE", "ALL", "NOT", "LIKE", "CHARACTER", "IF", "EXISTS", 
  "ASC", "DESC", "ORDER", "GROUP", "BY", "HAVING", "WHERE", "FROM", "AS", 
  "SELECT", "DISTINCT", "INSERT", "OVERWRITE", "OUTER", "UNIQUEJOIN", "PRESERVE", 
  "JOIN", "LEFT", "RIGHT", "FULL", "ON", "PARTITION", "PARTITIONS", "TABLE", 
  "TABLES", "COLUMNS", "INDEX", "INDEXES", "REBUILD", "FUNCTIONS", "SHOW", 
  "MSCK", "REPAIR", "DIRECTORY", "LOCAL", "TRANSFORM", "USING", "CLUSTER", 
  "DISTRIBUTE", "SORT", "UNION", "LOAD", "EXPORT", "IMPORT", "DATA", "INPATH", 
  "IS", "CNULL", "CREATE", "EXTERNAL", "ALTER", "CHANGE", "COLUMN", "FIRST", 
  "AFTER", "DESCRIBE", "DROP", "RENAME", "IGNORE", "PROTECTION", "TO", "COMMENT", 
  "BOOLEAN", "TINYINT", "SMALLINT", "INT", "BIGINT", "FLOAT", "DOUBLE", 
  "DATE", "DATETIME", "TIMESTAMP", "DECIMAL", "STRING", "VARCHAR", "ARRAY", 
  "STRUCT", "MAP", "UNIONTYPE", "REDUCE", "PARTITIONED", "CLUSTERED", "SORTED", 
  "INTO", "BUCKETS", "ROW", "ROWS", "FORMAT", "DELIMITED", "FIELDS", "TERMINATED", 
  "ESCAPED", "COLLECTION", "ITEMS", "KEYS", "KEY", "LINES", "STORED", "FILEFORMAT", 
  "SEQUENCEFILE", "TEXTFILE", "RCFILE", "ORCFILE", "INPUTFORMAT", "OUTPUTFORMAT", 
  "INPUTDRIVER", "OUTPUTDRIVER", "OFFLINE", "ENABLE", "DEFAULT", "DISABLE", 
  "READONLY", "LOCATION", "TABLESAMPLE", "BUCKET", "OUT", "OF", "PERCENT", 
  "CAST", "ADD", "REPLACE", "RLIKE", "REGEXP", "TEMPORARY", "FUNCTION", 
  "MACRO", "EXPLAIN", "EXTENDED", "FORMATTED", "PRETTY", "DEPENDENCY", "LOGICAL", 
  "SERDE", "WITH", "DEFERRED", "SERDEPROPERTIES", "DBPROPERTIES", "LIMIT", 
  "SET", "UNSET", "TBLPROPERTIES", "IDXPROPERTIES", "CASCADED", "CASE", 
  "WHEN", "THEN", "ELSE", "END", "MAPJOIN", "STREAMTABLE", "CLUSTERSTATUS", 
  "UTC", "LONG", "DELETE", "FETCH", "INTERSECT", "VIEW", "IN", "DATABASE", 
  "DATABASES", "MATERIALIZED", "SCHEMA", "SCHEMAS", "GRANT", "REVOKE", "SSL", 
  "UNDO", "LOCK", "LOCKS", "UNLOCK", "SHARED", "EXCLUSIVE", "PROCEDURE", 
  "UNSIGNED", "WHILE", "READ", "READS", "PURGE", "RANGE", "ANALYZE", "BEFORE", 
  "BETWEEN", "BOTH", "BINARY", "CROSS", "CONTINUE", "CURSOR", "TRIGGER", 
  "RECORDREADER", "RECORDWRITER", "LATERAL", "TOUCH", "ARCHIVE", "UNARCHIVE", 
  "COMPUTE", "STATISTICS", "USE", "OPTION", "CONCATENATE", "UPDATE", "RESTRICT", 
  "CASCADE", "SKEWED", "ROLLUP", "CUBE", "DIRECTORIES", "FOR", "WINDOW", 
  "UNBOUNDED", "PRECEDING", "FOLLOWING", "CURRENT", "LESS", "OVER", "GROUPING", 
  "SETS", "TRUNCATE", "NOSCAN", "PARTIALSCAN", "USER", "ROLE", "INNER", 
  "EXCHANGE", "IDENTIFIED", "CHAR", "ABS", "ACOS", "ASIN", "ATAN", "CEIL", 
  "COS", "COT", "EXP", "FLOOR", "LN", "POW", "RAND", "ROUND", "SIN", "SQRT", 
  "TAN", "LCASE", "LOWER", "LTRIM", "RTRIM", "CONCAT", "SUBSTR", "TRIM", 
  "UCASE", "UPPER", "INTERVAL", "TO_DATE", "DAY", "HOUR", "MINUTE", "MONTH", 
  "SECOND", "FROM_UNIXTIME", "YEAR", "DATE_ADD", "DATE_SUB", "COLLATE", 
  "AVG", "COUNT", "MAX", "MIN", "SUM", "COALESCE", "DUPLICATE", "SERVER", 
  "ALIASES", "ALIAS", "VALUES", "VALUE", "LOW_PRIORITY", "HIGH_PRIORITY", 
  "HASH", "REFERENCES", "TO_CHAR", "DATE_FORMAT", "SIGNED", "INTEGER", "LENGTH", 
  "REVERSE", "IFNULL", "HEX", "CONV", "SLEEP", "BENCHMARK", "UPDATEXML", 
  "EXTRACTVALUE", "LOAD_FILE", "SYSTEM_USER", "SESSION_USER", "CURRENT_USER", 
  "ANALYSE", "MD5", "ASCII", "MID", "VERSION", "NOW", "SYSDATE", "ORD", 
  "INSTR", "CONCAT_WS", "GROUP_CONCAT", "UNHEX", "SUBSTRING", "LOCATE", 
  "NULLIF", "ISNULL", "DIVIDE", "MOD", "OR", "AND", "XOR", "ARROW", "EQ", 
  "NOT_EQ", "LET", "GET", "SET_VAR", "SHIFT_LEFT", "SHIFT_RIGHT", "SEMI", 
  "COLON", "DOT", "COMMA", "ASTERISK", "RPAREN", "LPAREN", "RBRACK", "LBRACK", 
  "PLUS", "MINUS", "NEGATION", "VERTBAR", "BITAND", "POWER_OP", "GTH", "LTH", 
  "Double_Quote", "UNQUOTE", "INTEGER_NUM", "VARCHAR_NUM", "BINARY_NUM", 
  "HEX_DIGIT", "REAL_NUMBER", "TEXT_STRING", "ID", "LINE_COMMENT", "BLOCK_COMMENT", 
  "ANNOTATION_COMMENT", "SYSTEM_VAR", "WHITE_SPACE", "SL_COMMENT", "SPEC_MYSQL_COMMENT", 
  "COMMENT_INPUT", "Regex_Escaped_Unicode", "MORE"
};

dfa::Vocabulary sqliParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> sqliParser::_tokenNames;

sqliParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x172, 0x681, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x133, 
    0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x13c, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x144, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x14c, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x151, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x157, 0xa, 0x8, 0x3, 0x9, 0x5, 0x9, 0x15a, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x15e, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x162, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0x165, 0xa, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x169, 0xa, 0x9, 0x7, 0x9, 0x16b, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0x16e, 0xb, 0x9, 0x3, 0xa, 0x5, 0xa, 0x171, 
    0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x175, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x179, 0xa, 0xa, 0x3, 0xa, 0x5, 0xa, 0x17c, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x180, 0xa, 0xa, 0x7, 0xa, 0x182, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x185, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
    0x189, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x190, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x193, 0xa, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x196, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x199, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x19d, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x1a3, 0xa, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1a6, 0xa, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x1a9, 0xa, 0xc, 0x5, 0xc, 0x1ab, 0xa, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x1ae, 0xa, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1b1, 0xa, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0x1bb, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x1be, 
    0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1c2, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0x1cc, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x1cf, 0xb, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1d3, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1d8, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0x1e2, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x1e8, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x1ed, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x1f6, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x1f9, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 
    0x1ff, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x202, 0xb, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x5, 0x1b, 0x207, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x20b, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x210, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0x217, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x21b, 
    0xa, 0x1d, 0x5, 0x1d, 0x21d, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
    0x221, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x225, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x229, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x7, 0x21, 0x234, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x237, 0xb, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x7, 0x22, 0x23f, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x242, 0xb, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 
    0x23, 0x24a, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x24d, 0xb, 0x23, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x257, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x25d, 0xa, 0x25, 0x3, 0x26, 0x5, 0x26, 0x260, 
    0xa, 0x26, 0x3, 0x26, 0x5, 0x26, 0x263, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x269, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x5, 0x26, 0x26d, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x275, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
    0x278, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x27d, 
    0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x281, 0xa, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x284, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 
    0x289, 0xa, 0x27, 0x5, 0x27, 0x28b, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x293, 0xa, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x298, 0xa, 0x2a, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x29f, 0xa, 0x2b, 
    0x3, 0x2b, 0x5, 0x2b, 0x2a2, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2a9, 0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 
    0x2ac, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x2b3, 0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2b6, 0xa, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2bd, 
    0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2c0, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2c9, 
    0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2cc, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2d5, 
    0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2d8, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2df, 0xa, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x5, 0x2b, 0x2e3, 0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2e6, 
    0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2ea, 0xa, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x5, 0x2b, 0x2ee, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 
    0x2f2, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x2f9, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x5, 0x2b, 0x300, 0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x303, 
    0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x307, 0xa, 0x2b, 0x5, 0x2b, 
    0x309, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x30f, 0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x312, 0xa, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x320, 
    0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x323, 0xb, 0x30, 0x5, 0x30, 0x325, 
    0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 
    0x31, 0x32c, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 
    0x331, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x336, 
    0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x339, 0xb, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x341, 0xa, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 
    0x35, 0x349, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x34c, 0xb, 0x35, 0x3, 
    0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x358, 0xa, 0x36, 0xc, 0x36, 
    0xe, 0x36, 0x35b, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x5, 0x37, 0x361, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x369, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x36f, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x375, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x384, 
    0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x38a, 
    0xa, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x38d, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x7, 0x3f, 0x39f, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x3a2, 
    0xb, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3a7, 0xa, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3ac, 0xa, 0x3f, 0x5, 0x3f, 
    0x3ae, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 
    0x3b4, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x3b7, 0xb, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3bc, 0xa, 0x3f, 0x3, 0x40, 0x5, 0x40, 
    0x3bf, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x5, 0x41, 0x3c7, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x7, 0x41, 0x3cc, 0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x3cf, 0xb, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x3d4, 0xa, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x3d9, 0xa, 0x41, 0x5, 0x41, 0x3db, 
    0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x3e1, 
    0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x3e4, 0xb, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x3f2, 0xa, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x3f7, 0xa, 0x43, 0x3, 0x43, 
    0x5, 0x43, 0x3fa, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 
    0x3ff, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x404, 
    0xa, 0x43, 0x3, 0x43, 0x5, 0x43, 0x407, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x5, 0x43, 0x40b, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x5, 0x48, 0x425, 0xa, 0x48, 0x3, 0x49, 0x5, 0x49, 0x428, 0xa, 
    0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x42d, 0xa, 0x49, 
    0xc, 0x49, 0xe, 0x49, 0x430, 0xb, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x5, 0x4a, 0x436, 0xa, 0x4a, 0x5, 0x4a, 0x438, 0xa, 0x4a, 
    0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x43c, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 
    0x43f, 0xb, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 
    0x445, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x448, 0xb, 0x4b, 0x3, 0x4b, 
    0x7, 0x4b, 0x44b, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x44e, 0xb, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x453, 0xa, 0x4b, 0xc, 0x4b, 
    0xe, 0x4b, 0x456, 0xb, 0x4b, 0x5, 0x4b, 0x458, 0xa, 0x4b, 0x3, 0x4c, 
    0x3, 0x4c, 0x5, 0x4c, 0x45c, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x5, 0x4d, 0x461, 0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x469, 0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x7, 0x4d, 0x46d, 0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 0x470, 0xb, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x474, 0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 
    0x477, 0xb, 0x4d, 0x5, 0x4d, 0x479, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x47f, 0xa, 0x4e, 0x5, 0x4e, 0x481, 
    0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x7, 0x4f, 0x486, 0xa, 0x4f, 
    0xc, 0x4f, 0xe, 0x4f, 0x489, 0xb, 0x4f, 0x3, 0x50, 0x7, 0x50, 0x48c, 
    0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x48f, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x7, 0x50, 0x493, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x496, 0xb, 0x50, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x49c, 0xa, 0x51, 
    0x3, 0x51, 0x5, 0x51, 0x49f, 0xa, 0x51, 0x3, 0x51, 0x5, 0x51, 0x4a2, 
    0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x4a7, 0xa, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4b2, 0xa, 0x54, 0x3, 0x55, 
    0x3, 0x55, 0x5, 0x55, 0x4b6, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x5, 0x56, 0x4bb, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x4c3, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x7, 0x56, 0x4c7, 0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 0x4ca, 0xb, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x4ce, 0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 
    0x4d1, 0xb, 0x56, 0x5, 0x56, 0x4d3, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x4d9, 0xa, 0x57, 0x5, 0x57, 0x4db, 
    0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x7, 0x58, 0x4e0, 0xa, 0x58, 
    0xc, 0x58, 0xe, 0x58, 0x4e3, 0xb, 0x58, 0x3, 0x59, 0x7, 0x59, 0x4e6, 
    0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x4e9, 0xb, 0x59, 0x3, 0x59, 0x3, 0x59, 
    0x7, 0x59, 0x4ed, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x4f0, 0xb, 0x59, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x4f7, 
    0xa, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x4fa, 0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
    0x5, 0x5a, 0x4fe, 0xa, 0x5a, 0x3, 0x5b, 0x5, 0x5b, 0x501, 0xa, 0x5b, 
    0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x505, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x3, 0x5b, 0x7, 0x5b, 0x50b, 0xa, 0x5b, 0xc, 0x5b, 0xe, 0x5b, 
    0x50e, 0xb, 0x5b, 0x5, 0x5b, 0x510, 0xa, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 
    0x513, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x518, 
    0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
    0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x524, 
    0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x528, 0xa, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x5, 0x5b, 0x52c, 0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 
    0x530, 0xa, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x6, 0x5c, 0x537, 0xa, 0x5c, 0xd, 0x5c, 0xe, 0x5c, 0x538, 0x3, 0x5c, 
    0x3, 0x5c, 0x5, 0x5c, 0x53d, 0xa, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 
    0x541, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x546, 
    0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x54a, 0xa, 0x5d, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x7, 0x5e, 0x550, 0xa, 0x5e, 0xc, 0x5e, 
    0xe, 0x5e, 0x553, 0xb, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x7, 0x60, 0x55e, 
    0xa, 0x60, 0xc, 0x60, 0xe, 0x60, 0x561, 0xb, 0x60, 0x3, 0x61, 0x3, 0x61, 
    0x5, 0x61, 0x565, 0xa, 0x61, 0x3, 0x61, 0x5, 0x61, 0x568, 0xa, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x56d, 0xa, 0x61, 0x7, 0x61, 
    0x56f, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x572, 0xb, 0x61, 0x3, 0x62, 
    0x3, 0x62, 0x5, 0x62, 0x576, 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x5, 0x62, 0x57b, 0xa, 0x62, 0x3, 0x62, 0x5, 0x62, 0x57e, 0xa, 0x62, 
    0x3, 0x62, 0x5, 0x62, 0x581, 0xa, 0x62, 0x3, 0x62, 0x5, 0x62, 0x584, 
    0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x589, 0xa, 0x62, 
    0x5, 0x62, 0x58b, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 
    0x3, 0x64, 0x3, 0x64, 0x7, 0x64, 0x593, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 
    0x596, 0xb, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x59f, 0xa, 0x65, 0x5, 0x65, 0x5a1, 
    0xa, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x5a7, 
    0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x5b1, 0xa, 0x66, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x7, 0x67, 0x5b6, 0xa, 0x67, 0xc, 0x67, 0xe, 0x67, 
    0x5b9, 0xb, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x7, 0x69, 0x5c3, 0xa, 0x69, 0xc, 0x69, 
    0xe, 0x69, 0x5c6, 0xb, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 
    0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 
    0x5, 0x6c, 0x5d9, 0xa, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 
    0x5, 0x6e, 0x5df, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x5e3, 
    0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
    0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x5ec, 0xa, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 
    0x5ef, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x5f3, 0xa, 0x6e, 
    0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x5f7, 0xa, 0x6e, 0x5, 0x6e, 0x5f9, 
    0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x5, 
    0x71, 0x600, 0xa, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 
    0x74, 0x60c, 0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 0x614, 0xa, 0x75, 0x3, 0x76, 0x3, 0x76, 
    0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 
    0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
    0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x636, 0xa, 0x7b, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
    0x7f, 0x3, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 
    0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 
    0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 
    0x3, 0x8f, 0x3, 0x90, 0x5, 0x90, 0x661, 0xa, 0x90, 0x3, 0x90, 0x3, 0x90, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 0x93, 0x3, 0x93, 0x3, 
    0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x96, 0x3, 0x96, 0x5, 0x96, 
    0x671, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x5, 0x96, 0x678, 0xa, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x5, 0x97, 
    0x67d, 0xa, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x2, 0x2, 0x99, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
    0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 
    0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 
    0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 
    0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 
    0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 
    0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 
    0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 
    0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 
    0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 
    0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x2, 0x1a, 0x4, 
    0x2, 0x5, 0x5, 0x15, 0x15, 0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 0x11b, 0x11c, 
    0x4, 0x2, 0xa9, 0xa9, 0xac, 0xac, 0x4, 0x2, 0x22, 0x22, 0xa7, 0xa7, 
    0x4, 0x2, 0xaa, 0xaa, 0xad, 0xad, 0x3, 0x2, 0x144, 0x146, 0x4, 0x2, 
    0x7, 0x7, 0x84, 0x84, 0x4, 0x2, 0x158, 0x159, 0x15b, 0x15c, 0x6, 0x2, 
    0x142, 0x143, 0x153, 0x153, 0x158, 0x159, 0x15d, 0x15d, 0x5, 0x2, 0x1c, 
    0x1e, 0xc3, 0xc3, 0xe8, 0xe8, 0x4, 0x2, 0x25, 0x25, 0x6a, 0x6a, 0x8, 
    0x2, 0x3, 0xc, 0xf, 0x11, 0x13, 0x129, 0x136, 0x136, 0x142, 0x14e, 0x172, 
    0x172, 0x4, 0x2, 0x148, 0x14b, 0x15e, 0x15f, 0x4, 0x2, 0x107, 0x10b, 
    0x10d, 0x10d, 0x3, 0x2, 0x158, 0x159, 0x4, 0x2, 0x162, 0x162, 0x166, 
    0x166, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0xec, 0xfb, 0x8, 0x2, 0xeb, 0xeb, 
    0xfc, 0x104, 0x121, 0x121, 0x125, 0x126, 0x128, 0x129, 0x13d, 0x13f, 
    0x5, 0x2, 0x106, 0x10f, 0x122, 0x122, 0x137, 0x138, 0x5, 0x2, 0x116, 
    0x116, 0x127, 0x127, 0x140, 0x141, 0x3, 0x2, 0x111, 0x115, 0xa, 0x2, 
    0x5, 0x5, 0x14, 0x14, 0x16, 0x16, 0x3b, 0x3b, 0x3d, 0x3d, 0x43, 0x43, 
    0xa4, 0xa4, 0xd2, 0xd2, 0x2, 0x71d, 0x2, 0x132, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x143, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x145, 0x3, 0x2, 0x2, 0x2, 0xa, 0x14b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x150, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x156, 0x3, 0x2, 0x2, 0x2, 0x10, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x170, 0x3, 0x2, 0x2, 0x2, 0x14, 0x186, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1b2, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x1d0, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1db, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1e3, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1f0, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1fa, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x206, 0x3, 0x2, 0x2, 0x2, 0x36, 0x20f, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x226, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x22f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x44, 0x245, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x48, 0x252, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x28a, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x50, 0x28f, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x297, 0x3, 0x2, 0x2, 0x2, 0x54, 0x308, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x30a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x313, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x315, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x317, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x319, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x330, 0x3, 0x2, 0x2, 0x2, 0x62, 0x332, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x66, 0x340, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x342, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x34d, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x370, 0x3, 0x2, 0x2, 0x2, 0x72, 0x378, 0x3, 0x2, 0x2, 0x2, 0x74, 0x37c, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x78, 0x391, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x394, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x39a, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x80, 0x3c2, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x84, 0x40a, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x88, 0x414, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x417, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x420, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x427, 0x3, 0x2, 0x2, 0x2, 0x92, 0x431, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x457, 0x3, 0x2, 0x2, 0x2, 0x96, 0x459, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x478, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x47a, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x482, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x48d, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0x4aa, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x4b3, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0xac, 0x4d4, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x4e7, 0x3, 0x2, 
    0x2, 0x2, 0xb2, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x52b, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0x52d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x545, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0x54b, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x556, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0x55a, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x562, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x58a, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0x58c, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x58f, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0x597, 0x3, 0x2, 0x2, 0x2, 0xca, 0x5b0, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0xce, 0x5ba, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x5c7, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0x5da, 0x3, 0x2, 0x2, 0x2, 0xda, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x5fa, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x5ff, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0x603, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x605, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0x60b, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x613, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0x615, 0x3, 0x2, 0x2, 0x2, 0xec, 0x617, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0x619, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x61b, 0x3, 0x2, 0x2, 0x2, 0xf2, 
    0x61d, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x635, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x637, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0x639, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x63b, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0x63d, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x63f, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0x641, 0x3, 0x2, 0x2, 0x2, 0x102, 0x643, 0x3, 0x2, 
    0x2, 0x2, 0x104, 0x645, 0x3, 0x2, 0x2, 0x2, 0x106, 0x647, 0x3, 0x2, 
    0x2, 0x2, 0x108, 0x649, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x64b, 0x3, 0x2, 
    0x2, 0x2, 0x10c, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x64f, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0x651, 0x3, 0x2, 0x2, 0x2, 0x112, 0x653, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0x655, 0x3, 0x2, 0x2, 0x2, 0x116, 0x657, 0x3, 0x2, 
    0x2, 0x2, 0x118, 0x659, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x65b, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x660, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x664, 0x3, 0x2, 0x2, 0x2, 0x122, 0x666, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x668, 0x3, 0x2, 0x2, 0x2, 0x126, 0x66a, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x677, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x67c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x67e, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x133, 0x5, 0x4, 0x3, 0x2, 0x131, 0x133, 0x5, 0x6, 
    0x4, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0x14f, 
    0x2, 0x2, 0x135, 0x3, 0x3, 0x2, 0x2, 0x2, 0x136, 0x13c, 0x5, 0x10, 0x9, 
    0x2, 0x137, 0x13c, 0x5, 0x3a, 0x1e, 0x2, 0x138, 0x13c, 0x5, 0x8c, 0x47, 
    0x2, 0x139, 0x13c, 0x5, 0x8e, 0x48, 0x2, 0x13a, 0x13c, 0x5, 0x8a, 0x46, 
    0x2, 0x13b, 0x136, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x13d, 0x144, 0x5, 0x8, 0x5, 0x2, 0x13e, 0x144, 0x5, 0xc, 0x7, 0x2, 
    0x13f, 0x144, 0x5, 0xe, 0x8, 0x2, 0x140, 0x144, 0x5, 0x82, 0x42, 0x2, 
    0x141, 0x144, 0x5, 0x86, 0x44, 0x2, 0x142, 0x144, 0x5, 0x88, 0x45, 0x2, 
    0x143, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x143, 0x13e, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x143, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x7, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x7, 0x3b, 0x2, 0x2, 0x146, 
    0x147, 0x5, 0xa, 0x6, 0x2, 0x147, 0x9, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14c, 
    0x5, 0x48, 0x25, 0x2, 0x149, 0x14c, 0x5, 0x7a, 0x3e, 0x2, 0x14a, 0x14c, 
    0x5, 0x4a, 0x26, 0x2, 0x14b, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x14d, 0x151, 0x5, 0x6c, 0x37, 0x2, 0x14e, 0x151, 0x5, 
    0x72, 0x3a, 0x2, 0x14f, 0x151, 0x5, 0x6e, 0x38, 0x2, 0x150, 0x14d, 0x3, 
    0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14f, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0xd, 0x3, 0x2, 0x2, 0x2, 0x152, 0x157, 0x5, 0x7c, 
    0x3f, 0x2, 0x153, 0x157, 0x5, 0x80, 0x41, 0x2, 0x154, 0x157, 0x5, 0x5e, 
    0x30, 0x2, 0x155, 0x157, 0x5, 0x78, 0x3d, 0x2, 0x156, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x153, 0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x15a, 0x7, 0x155, 0x2, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x15d, 0x5, 0x14, 0xb, 0x2, 0x15c, 0x15e, 0x7, 0x154, 0x2, 
    0x2, 0x15d, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x161, 0x7, 0x33, 0x2, 
    0x2, 0x160, 0x162, 0x7, 0x5, 0x2, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x163, 0x165, 0x7, 0x155, 0x2, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x168, 0x5, 0x16, 0xc, 0x2, 0x167, 0x169, 0x7, 0x154, 0x2, 
    0x2, 0x168, 0x167, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x171, 0x7, 0x155, 0x2, 0x2, 
    0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 
    0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x174, 0x5, 0x16, 0xc, 0x2, 
    0x173, 0x175, 0x7, 0x154, 0x2, 0x2, 0x174, 0x173, 0x3, 0x2, 0x2, 0x2, 
    0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x183, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x178, 0x7, 0x33, 0x2, 0x2, 0x177, 0x179, 0x7, 0x5, 0x2, 0x2, 
    0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17c, 0x7, 0x155, 0x2, 0x2, 
    0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17f, 0x5, 0x16, 0xc, 0x2, 
    0x17e, 0x180, 0x7, 0x154, 0x2, 0x2, 0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 0x182, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x176, 0x3, 0x2, 0x2, 0x2, 0x182, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 
    0x184, 0x13, 0x3, 0x2, 0x2, 0x2, 0x185, 0x183, 0x3, 0x2, 0x2, 0x2, 0x186, 
    0x188, 0x7, 0x14, 0x2, 0x2, 0x187, 0x189, 0x9, 0x2, 0x2, 0x2, 0x188, 
    0x187, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x5, 0x30, 0x19, 0x2, 0x18b, 
    0x18c, 0x7, 0x12, 0x2, 0x2, 0x18c, 0x18d, 0x5, 0xbe, 0x60, 0x2, 0x18d, 
    0x18f, 0x5, 0x18, 0xd, 0x2, 0x18e, 0x190, 0x5, 0x1a, 0xe, 0x2, 0x18f, 
    0x18e, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 
    0x192, 0x3, 0x2, 0x2, 0x2, 0x191, 0x193, 0x5, 0x1e, 0x10, 0x2, 0x192, 
    0x191, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 
    0x195, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x5, 0x20, 0x11, 0x2, 0x195, 
    0x194, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 
    0x198, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 0x5, 0x2a, 0x16, 0x2, 0x198, 
    0x197, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x7, 0x14, 0x2, 0x2, 0x19b, 
    0x19d, 0x9, 0x2, 0x2, 0x2, 0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19e, 
    0x1aa, 0x5, 0x30, 0x19, 0x2, 0x19f, 0x1a0, 0x7, 0x12, 0x2, 0x2, 0x1a0, 
    0x1a2, 0x5, 0xbe, 0x60, 0x2, 0x1a1, 0x1a3, 0x5, 0x18, 0xd, 0x2, 0x1a2, 
    0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a6, 0x5, 0x1a, 0xe, 0x2, 0x1a5, 
    0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a9, 0x5, 0x1e, 0x10, 0x2, 0x1a8, 
    0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
    0x1ae, 0x5, 0x20, 0x11, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ad, 
    0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1af, 
    0x1b1, 0x5, 0x2a, 0x16, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b0, 
    0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 
    0x7, 0x11, 0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x90, 0x49, 0x2, 0x1b4, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x7, 0xe, 0x2, 0x2, 0x1b6, 0x1b7, 
    0x7, 0xf, 0x2, 0x2, 0x1b7, 0x1bc, 0x5, 0x1c, 0xf, 0x2, 0x1b8, 0x1b9, 
    0x7, 0x152, 0x2, 0x2, 0x1b9, 0x1bb, 0x5, 0x1c, 0xf, 0x2, 0x1ba, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 
    0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1be, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c2, 0x5, 
    0xb8, 0x5d, 0x2, 0x1c0, 0x1c2, 0x5, 0xb2, 0x5a, 0x2, 0x1c1, 0x1bf, 0x3, 
    0x2, 0x2, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x10, 0x2, 0x2, 0x1c4, 0x1c5, 0x5, 0x90, 
    0x49, 0x2, 0x1c5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x7, 0xd, 
    0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0xf, 0x2, 0x2, 0x1c8, 0x1cd, 0x5, 0x22, 
    0x12, 0x2, 0x1c9, 0x1ca, 0x7, 0x152, 0x2, 0x2, 0x1ca, 0x1cc, 0x5, 0x22, 
    0x12, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 
    0x2, 0x2, 0x1ce, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1d0, 0x1d2, 0x5, 0x24, 0x13, 0x2, 0x1d1, 0x1d3, 0x9, 0x3, 0x2, 
    0x2, 0x1d2, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 0x2, 
    0x2, 0x1d3, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0x36, 0x1c, 
    0x2, 0x1d5, 0x1d6, 0x7, 0x151, 0x2, 0x2, 0x1d6, 0x1d8, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 
    0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x5, 0x26, 0x14, 
    0x2, 0x1da, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x5, 0x28, 0x15, 
    0x2, 0x1dc, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e2, 0x7, 0x168, 0x2, 
    0x2, 0x1de, 0x1e2, 0x5, 0xe0, 0x71, 0x2, 0x1df, 0x1e2, 0x5, 0xb4, 0x5b, 
    0x2, 0x1e0, 0x1e2, 0x5, 0x34, 0x1b, 0x2, 0x1e1, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x1e1, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 
    0x2, 0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x1e3, 0x1e7, 0x7, 0x94, 0x2, 0x2, 0x1e4, 0x1e5, 0x5, 0x2c, 0x17, 0x2, 
    0x1e5, 0x1e6, 0x7, 0x152, 0x2, 0x2, 0x1e6, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1e7, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x2e, 0x18, 0x2, 
    0x1ea, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ed, 0x5, 0xb4, 0x5b, 0x2, 
    0x1ec, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 
    0x1ed, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x162, 0x2, 0x2, 
    0x1ef, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x162, 0x2, 0x2, 
    0x1f1, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f7, 0x5, 0x38, 0x1d, 0x2, 
    0x1f3, 0x1f4, 0x7, 0x152, 0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x38, 0x1d, 0x2, 
    0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x3, 0x2, 0x2, 0x2, 
    0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 
    0x1f8, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
    0x1fb, 0x7, 0x155, 0x2, 0x2, 0x1fb, 0x200, 0x5, 0xb8, 0x5d, 0x2, 0x1fc, 
    0x1fd, 0x7, 0x152, 0x2, 0x2, 0x1fd, 0x1ff, 0x5, 0xb8, 0x5d, 0x2, 0x1fe, 
    0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x202, 0x3, 0x2, 0x2, 0x2, 0x200, 
    0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 
    0x203, 0x3, 0x2, 0x2, 0x2, 0x202, 0x200, 0x3, 0x2, 0x2, 0x2, 0x203, 
    0x204, 0x7, 0x154, 0x2, 0x2, 0x204, 0x33, 0x3, 0x2, 0x2, 0x2, 0x205, 
    0x207, 0x7, 0x155, 0x2, 0x2, 0x206, 0x205, 0x3, 0x2, 0x2, 0x2, 0x206, 
    0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 
    0x20a, 0x5, 0x12, 0xa, 0x2, 0x209, 0x20b, 0x7, 0x154, 0x2, 0x2, 0x20a, 
    0x209, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x5, 0xf8, 0x7d, 0x2, 0x20d, 
    0x20e, 0x7, 0x151, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 
    0x20c, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 
    0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x5, 0xfa, 0x7e, 0x2, 0x212, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x213, 0x21d, 0x7, 0x153, 0x2, 0x2, 0x214, 
    0x216, 0x5, 0xb8, 0x5d, 0x2, 0x215, 0x217, 0x5, 0x11e, 0x90, 0x2, 0x216, 
    0x215, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 
    0x21d, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21a, 0x5, 0x90, 0x49, 0x2, 0x219, 
    0x21b, 0x5, 0x11e, 0x90, 0x2, 0x21a, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21a, 
    0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21c, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x214, 0x3, 0x2, 0x2, 0x2, 0x21c, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x220, 
    0x5, 0x3c, 0x1f, 0x2, 0x21f, 0x221, 0x5, 0x32, 0x1a, 0x2, 0x220, 0x21f, 
    0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x224, 
    0x3, 0x2, 0x2, 0x2, 0x222, 0x225, 0x5, 0x14, 0xb, 0x2, 0x223, 0x225, 
    0x5, 0x3e, 0x20, 0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x223, 
    0x3, 0x2, 0x2, 0x2, 0x225, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x226, 0x228, 0x7, 
    0x16, 0x2, 0x2, 0x227, 0x229, 0x7, 0x5e, 0x2, 0x2, 0x228, 0x227, 0x3, 
    0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x3, 
    0x2, 0x2, 0x2, 0x22a, 0x22b, 0x5, 0x36, 0x1c, 0x2, 0x22b, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x22c, 0x22d, 0x9, 0x4, 0x2, 0x2, 0x22d, 0x22e, 0x5, 
    0x40, 0x21, 0x2, 0x22e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x7, 
    0x155, 0x2, 0x2, 0x230, 0x235, 0x5, 0x100, 0x81, 0x2, 0x231, 0x232, 
    0x7, 0x152, 0x2, 0x2, 0x232, 0x234, 0x5, 0x100, 0x81, 0x2, 0x233, 0x231, 
    0x3, 0x2, 0x2, 0x2, 0x234, 0x237, 0x3, 0x2, 0x2, 0x2, 0x235, 0x233, 
    0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x238, 
    0x3, 0x2, 0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 
    0x7, 0x154, 0x2, 0x2, 0x239, 0x41, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 
    0x7, 0x155, 0x2, 0x2, 0x23b, 0x240, 0x5, 0xac, 0x57, 0x2, 0x23c, 0x23d, 
    0x7, 0x152, 0x2, 0x2, 0x23d, 0x23f, 0x5, 0xac, 0x57, 0x2, 0x23e, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x23f, 0x242, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 
    0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x243, 
    0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 
    0x7, 0x154, 0x2, 0x2, 0x244, 0x43, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 
    0x7, 0x95, 0x2, 0x2, 0x246, 0x24b, 0x5, 0x46, 0x24, 0x2, 0x247, 0x248, 
    0x7, 0x152, 0x2, 0x2, 0x248, 0x24a, 0x5, 0x46, 0x24, 0x2, 0x249, 0x247, 
    0x3, 0x2, 0x2, 0x2, 0x24a, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x249, 
    0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x5, 
    0xb8, 0x5d, 0x2, 0x24f, 0x250, 0x7, 0x148, 0x2, 0x2, 0x250, 0x251, 0x5, 
    0x90, 0x49, 0x2, 0x251, 0x47, 0x3, 0x2, 0x2, 0x2, 0x252, 0x256, 0x9, 
    0x5, 0x2, 0x2, 0x253, 0x254, 0x7, 0x9, 0x2, 0x2, 0x254, 0x255, 0x7, 
    0x6, 0x2, 0x2, 0x255, 0x257, 0x7, 0xa, 0x2, 0x2, 0x256, 0x253, 0x3, 
    0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 
    0x2, 0x2, 0x2, 0x258, 0x25c, 0x5, 0xf8, 0x7d, 0x2, 0x259, 0x25a, 0x7, 
    0x118, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x11a, 0x2, 0x2, 0x25b, 0x25d, 0x5, 
    0x122, 0x92, 0x2, 0x25c, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 
    0x2, 0x2, 0x2, 0x25d, 0x49, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x260, 0x7, 0x86, 
    0x2, 0x2, 0x25f, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x260, 0x262, 0x3, 0x2, 0x2, 0x2, 0x261, 0x263, 0x7, 0x3c, 
    0x2, 0x2, 0x262, 0x261, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 
    0x2, 0x2, 0x263, 0x264, 0x3, 0x2, 0x2, 0x2, 0x264, 0x268, 0x9, 0x6, 
    0x2, 0x2, 0x265, 0x266, 0x7, 0x9, 0x2, 0x2, 0x266, 0x267, 0x7, 0x6, 
    0x2, 0x2, 0x267, 0x269, 0x7, 0xa, 0x2, 0x2, 0x268, 0x265, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 
    0x2, 0x2, 0x26a, 0x26c, 0x5, 0x36, 0x1c, 0x2, 0x26b, 0x26d, 0x5, 0x4c, 
    0x27, 0x2, 0x26c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 
    0x2, 0x2, 0x26d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0x13, 
    0x2, 0x2, 0x26f, 0x28b, 0x5, 0x10, 0x9, 0x2, 0x270, 0x271, 0x7, 0x155, 
    0x2, 0x2, 0x271, 0x276, 0x5, 0x4e, 0x28, 0x2, 0x272, 0x273, 0x7, 0x152, 
    0x2, 0x2, 0x273, 0x275, 0x5, 0x4e, 0x28, 0x2, 0x274, 0x272, 0x3, 0x2, 
    0x2, 0x2, 0x275, 0x278, 0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 
    0x2, 0x2, 0x276, 0x277, 0x3, 0x2, 0x2, 0x2, 0x277, 0x279, 0x3, 0x2, 
    0x2, 0x2, 0x278, 0x276, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27c, 0x7, 0x154, 
    0x2, 0x2, 0x27a, 0x27b, 0x7, 0x48, 0x2, 0x2, 0x27b, 0x27d, 0x7, 0x167, 
    0x2, 0x2, 0x27c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x27d, 0x280, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x13, 
    0x2, 0x2, 0x27f, 0x281, 0x5, 0x10, 0x9, 0x2, 0x280, 0x27e, 0x3, 0x2, 
    0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 0x2, 0x2, 0x281, 0x28b, 0x3, 0x2, 
    0x2, 0x2, 0x282, 0x284, 0x7, 0x155, 0x2, 0x2, 0x283, 0x282, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x3, 0x2, 
    0x2, 0x2, 0x285, 0x286, 0x7, 0x7, 0x2, 0x2, 0x286, 0x288, 0x5, 0x36, 
    0x1c, 0x2, 0x287, 0x289, 0x7, 0x154, 0x2, 0x2, 0x288, 0x287, 0x3, 0x2, 
    0x2, 0x2, 0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28b, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x270, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x283, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x28c, 0x28d, 0x5, 0xfe, 0x80, 0x2, 0x28d, 0x28e, 0x5, 0x50, 0x29, 
    0x2, 0x28e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x292, 0x5, 0x54, 0x2b, 
    0x2, 0x290, 0x291, 0x7, 0x48, 0x2, 0x2, 0x291, 0x293, 0x7, 0x167, 0x2, 
    0x2, 0x292, 0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 
    0x2, 0x293, 0x51, 0x3, 0x2, 0x2, 0x2, 0x294, 0x298, 0x7, 0x3a, 0x2, 
    0x2, 0x295, 0x296, 0x7, 0x6, 0x2, 0x2, 0x296, 0x298, 0x7, 0x3a, 0x2, 
    0x2, 0x297, 0x294, 0x3, 0x2, 0x2, 0x2, 0x297, 0x295, 0x3, 0x2, 0x2, 
    0x2, 0x298, 0x53, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29e, 0x7, 0x4a, 0x2, 
    0x2, 0x29a, 0x29b, 0x7, 0x155, 0x2, 0x2, 0x29b, 0x29c, 0x5, 0x58, 0x2d, 
    0x2, 0x29c, 0x29d, 0x7, 0x154, 0x2, 0x2, 0x29d, 0x29f, 0x3, 0x2, 0x2, 
    0x2, 0x29e, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 0x2, 
    0x2, 0x29f, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 0x52, 0x2a, 
    0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 
    0x2, 0x2a2, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a8, 0x7, 0x4b, 0x2, 
    0x2, 0x2a4, 0x2a5, 0x7, 0x155, 0x2, 0x2, 0x2a5, 0x2a6, 0x5, 0x58, 0x2d, 
    0x2, 0x2a6, 0x2a7, 0x7, 0x154, 0x2, 0x2, 0x2a7, 0x2a9, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 
    0x2, 0x2a9, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ac, 0x5, 0x52, 0x2a, 
    0x2, 0x2ab, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 0x3, 0x2, 0x2, 
    0x2, 0x2ac, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2b2, 0x7, 0x4c, 0x2, 
    0x2, 0x2ae, 0x2af, 0x7, 0x155, 0x2, 0x2, 0x2af, 0x2b0, 0x5, 0x58, 0x2d, 
    0x2, 0x2b0, 0x2b1, 0x7, 0x154, 0x2, 0x2, 0x2b1, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2b2, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2b3, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b6, 0x5, 0x52, 0x2a, 
    0x2, 0x2b5, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 0x2, 
    0x2, 0x2b6, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2bc, 0x7, 0x4d, 0x2, 
    0x2, 0x2b8, 0x2b9, 0x7, 0x155, 0x2, 0x2, 0x2b9, 0x2ba, 0x5, 0x58, 0x2d, 
    0x2, 0x2ba, 0x2bb, 0x7, 0x154, 0x2, 0x2, 0x2bb, 0x2bd, 0x3, 0x2, 0x2, 
    0x2, 0x2bc, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x3, 0x2, 0x2, 
    0x2, 0x2bd, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2c0, 0x5, 0x52, 0x2a, 
    0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 
    0x2, 0x2c0, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c8, 0x7, 0x4f, 0x2, 
    0x2, 0x2c2, 0x2c3, 0x7, 0x155, 0x2, 0x2, 0x2c3, 0x2c4, 0x5, 0x58, 0x2d, 
    0x2, 0x2c4, 0x2c5, 0x7, 0x152, 0x2, 0x2, 0x2c5, 0x2c6, 0x5, 0xe0, 0x71, 
    0x2, 0x2c6, 0x2c7, 0x7, 0x154, 0x2, 0x2, 0x2c7, 0x2c9, 0x3, 0x2, 0x2, 
    0x2, 0x2c8, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 
    0x2, 0x2c9, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cc, 0x5, 0x52, 0x2a, 
    0x2, 0x2cb, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 
    0x2, 0x2cc, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2d4, 0x7, 0x4e, 0x2, 
    0x2, 0x2ce, 0x2cf, 0x7, 0x155, 0x2, 0x2, 0x2cf, 0x2d0, 0x5, 0x58, 0x2d, 
    0x2, 0x2d0, 0x2d1, 0x7, 0x152, 0x2, 0x2, 0x2d1, 0x2d2, 0x5, 0xe0, 0x71, 
    0x2, 0x2d2, 0x2d3, 0x7, 0x154, 0x2, 0x2, 0x2d3, 0x2d5, 0x3, 0x2, 0x2, 
    0x2, 0x2d4, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 
    0x2, 0x2d5, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d8, 0x5, 0x52, 0x2a, 
    0x2, 0x2d7, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 
    0x2, 0x2d8, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2e2, 0x7, 0x53, 0x2, 
    0x2, 0x2da, 0x2db, 0x7, 0x155, 0x2, 0x2, 0x2db, 0x2de, 0x5, 0x58, 0x2d, 
    0x2, 0x2dc, 0x2dd, 0x7, 0x152, 0x2, 0x2, 0x2dd, 0x2df, 0x5, 0xe0, 0x71, 
    0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x3, 0x2, 0x2, 
    0x2, 0x2df, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x7, 0x154, 0x2, 
    0x2, 0x2e1, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2e2, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e5, 0x3, 0x2, 0x2, 
    0x2, 0x2e4, 0x2e6, 0x5, 0x52, 0x2a, 0x2, 0x2e5, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x309, 0x3, 0x2, 0x2, 
    0x2, 0x2e7, 0x2e9, 0x7, 0x50, 0x2, 0x2, 0x2e8, 0x2ea, 0x5, 0x52, 0x2a, 
    0x2, 0x2e9, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ea, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ed, 0x7, 0x52, 0x2, 
    0x2, 0x2ec, 0x2ee, 0x5, 0x52, 0x2a, 0x2, 0x2ed, 0x2ec, 0x3, 0x2, 0x2, 
    0x2, 0x2ed, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x309, 0x3, 0x2, 0x2, 
    0x2, 0x2ef, 0x2f1, 0x7, 0x51, 0x2, 0x2, 0x2f0, 0x2f2, 0x5, 0x52, 0x2a, 
    0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x3, 0x2, 0x2, 
    0x2, 0x2f2, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x7, 0x55, 0x2, 
    0x2, 0x2f4, 0x2f5, 0x7, 0x155, 0x2, 0x2, 0x2f5, 0x2f6, 0x5, 0x5a, 0x2e, 
    0x2, 0x2f6, 0x2f8, 0x7, 0x154, 0x2, 0x2, 0x2f7, 0x2f9, 0x5, 0x52, 0x2a, 
    0x2, 0x2f8, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x3, 0x2, 0x2, 
    0x2, 0x2f9, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2ff, 0x7, 0xc2, 0x2, 
    0x2, 0x2fb, 0x2fc, 0x7, 0x155, 0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0x5c, 0x2f, 
    0x2, 0x2fd, 0x2fe, 0x7, 0x154, 0x2, 0x2, 0x2fe, 0x300, 0x3, 0x2, 0x2, 
    0x2, 0x2ff, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x3, 0x2, 0x2, 
    0x2, 0x300, 0x302, 0x3, 0x2, 0x2, 0x2, 0x301, 0x303, 0x5, 0x52, 0x2a, 
    0x2, 0x302, 0x301, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 0x2, 
    0x2, 0x303, 0x309, 0x3, 0x2, 0x2, 0x2, 0x304, 0x306, 0x7, 0x49, 0x2, 
    0x2, 0x305, 0x307, 0x5, 0x52, 0x2a, 0x2, 0x306, 0x305, 0x3, 0x2, 0x2, 
    0x2, 0x306, 0x307, 0x3, 0x2, 0x2, 0x2, 0x307, 0x309, 0x3, 0x2, 0x2, 
    0x2, 0x308, 0x299, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2a3, 0x3, 0x2, 0x2, 
    0x2, 0x308, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2b7, 0x3, 0x2, 0x2, 
    0x2, 0x308, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2cd, 0x3, 0x2, 0x2, 
    0x2, 0x308, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2e7, 0x3, 0x2, 0x2, 
    0x2, 0x308, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2ef, 0x3, 0x2, 0x2, 
    0x2, 0x308, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2fa, 0x3, 0x2, 0x2, 
    0x2, 0x308, 0x304, 0x3, 0x2, 0x2, 0x2, 0x309, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x30a, 0x30e, 0x5, 0xfe, 0x80, 0x2, 0x30b, 0x30c, 0x7, 0x155, 0x2, 0x2, 
    0x30c, 0x30d, 0x7, 0x162, 0x2, 0x2, 0x30d, 0x30f, 0x7, 0x154, 0x2, 0x2, 
    0x30e, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x30f, 0x311, 0x3, 0x2, 0x2, 0x2, 0x310, 0x312, 0x9, 0x3, 0x2, 0x2, 
    0x311, 0x310, 0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 0x3, 0x2, 0x2, 0x2, 
    0x312, 0x57, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x7, 0x162, 0x2, 0x2, 
    0x314, 0x59, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x7, 0x162, 0x2, 0x2, 
    0x316, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x7, 0x162, 0x2, 0x2, 
    0x318, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x7, 0x3d, 0x2, 0x2, 
    0x31a, 0x31b, 0x7, 0x22, 0x2, 0x2, 0x31b, 0x324, 0x5, 0x36, 0x1c, 0x2, 
    0x31c, 0x321, 0x5, 0x60, 0x31, 0x2, 0x31d, 0x31e, 0x7, 0x152, 0x2, 0x2, 
    0x31e, 0x320, 0x5, 0x60, 0x31, 0x2, 0x31f, 0x31d, 0x3, 0x2, 0x2, 0x2, 
    0x320, 0x323, 0x3, 0x2, 0x2, 0x2, 0x321, 0x31f, 0x3, 0x2, 0x2, 0x2, 
    0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 0x325, 0x3, 0x2, 0x2, 0x2, 
    0x323, 0x321, 0x3, 0x2, 0x2, 0x2, 0x324, 0x31c, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x326, 
    0x327, 0x7, 0x44, 0x2, 0x2, 0x327, 0x328, 0x7, 0x47, 0x2, 0x2, 0x328, 
    0x331, 0x5, 0x36, 0x1c, 0x2, 0x329, 0x32b, 0x7, 0x3e, 0x2, 0x2, 0x32a, 
    0x32c, 0x7, 0x3f, 0x2, 0x2, 0x32b, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32b, 
    0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 
    0x32e, 0x5, 0xfe, 0x80, 0x2, 0x32e, 0x32f, 0x5, 0xfe, 0x80, 0x2, 0x32f, 
    0x331, 0x3, 0x2, 0x2, 0x2, 0x330, 0x326, 0x3, 0x2, 0x2, 0x2, 0x330, 
    0x329, 0x3, 0x2, 0x2, 0x2, 0x331, 0x61, 0x3, 0x2, 0x2, 0x2, 0x332, 0x337, 
    0x5, 0x56, 0x2c, 0x2, 0x333, 0x334, 0x7, 0x152, 0x2, 0x2, 0x334, 0x336, 
    0x5, 0x56, 0x2c, 0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x336, 0x339, 
    0x3, 0x2, 0x2, 0x2, 0x337, 0x335, 0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 
    0x3, 0x2, 0x2, 0x2, 0x338, 0x63, 0x3, 0x2, 0x2, 0x2, 0x339, 0x337, 0x3, 
    0x2, 0x2, 0x2, 0x33a, 0x33b, 0x7, 0x2f, 0x2, 0x2, 0x33b, 0x33c, 0x7, 
    0x11f, 0x2, 0x2, 0x33c, 0x65, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x341, 0x5, 
    0x64, 0x33, 0x2, 0x33e, 0x33f, 0x7, 0x48, 0x2, 0x2, 0x33f, 0x341, 0x7, 
    0x167, 0x2, 0x2, 0x340, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 0x3, 
    0x2, 0x2, 0x2, 0x341, 0x67, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x5, 0xfe, 
    0x80, 0x2, 0x343, 0x34a, 0x5, 0x50, 0x29, 0x2, 0x344, 0x345, 0x7, 0x152, 
    0x2, 0x2, 0x345, 0x346, 0x5, 0xfe, 0x80, 0x2, 0x346, 0x347, 0x5, 0x50, 
    0x29, 0x2, 0x347, 0x349, 0x3, 0x2, 0x2, 0x2, 0x348, 0x344, 0x3, 0x2, 
    0x2, 0x2, 0x349, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x348, 0x3, 0x2, 
    0x2, 0x2, 0x34a, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x7, 0x44, 0x2, 
    0x2, 0x34e, 0x34f, 0x7, 0x22, 0x2, 0x2, 0x34f, 0x350, 0x5, 0x36, 0x1c, 
    0x2, 0x350, 0x351, 0x7, 0x47, 0x2, 0x2, 0x351, 0x359, 0x5, 0x36, 0x1c, 
    0x2, 0x352, 0x353, 0x7, 0x152, 0x2, 0x2, 0x353, 0x354, 0x5, 0x36, 0x1c, 
    0x2, 0x354, 0x355, 0x7, 0x47, 0x2, 0x2, 0x355, 0x356, 0x5, 0x36, 0x1c, 
    0x2, 0x356, 0x358, 0x3, 0x2, 0x2, 0x2, 0x357, 0x352, 0x3, 0x2, 0x2, 
    0x2, 0x358, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x359, 0x357, 0x3, 0x2, 0x2, 
    0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x35b, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x7, 0x43, 0x2, 0x2, 
    0x35d, 0x360, 0x9, 0x5, 0x2, 0x2, 0x35e, 0x35f, 0x7, 0x9, 0x2, 0x2, 
    0x35f, 0x361, 0x7, 0xa, 0x2, 0x2, 0x360, 0x35e, 0x3, 0x2, 0x2, 0x2, 
    0x360, 0x361, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 0x2, 0x2, 
    0x362, 0x363, 0x5, 0xf8, 0x7d, 0x2, 0x363, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x364, 0x365, 0x7, 0x43, 0x2, 0x2, 0x365, 0x368, 0x9, 0x6, 0x2, 0x2, 
    0x366, 0x367, 0x7, 0x9, 0x2, 0x2, 0x367, 0x369, 0x7, 0xa, 0x2, 0x2, 
    0x368, 0x366, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x3, 0x2, 0x2, 0x2, 
    0x369, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36f, 0x5, 0x36, 0x1c, 0x2, 
    0x36b, 0x36c, 0x7, 0xe3, 0x2, 0x2, 0x36c, 0x36d, 0x7, 0x22, 0x2, 0x2, 
    0x36d, 0x36f, 0x5, 0x36, 0x1c, 0x2, 0x36e, 0x364, 0x3, 0x2, 0x2, 0x2, 
    0x36e, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x370, 
    0x371, 0x7, 0x43, 0x2, 0x2, 0x371, 0x374, 0x7, 0xa7, 0x2, 0x2, 0x372, 
    0x373, 0x7, 0x9, 0x2, 0x2, 0x373, 0x375, 0x7, 0xa, 0x2, 0x2, 0x374, 
    0x372, 0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0x3, 0x2, 0x2, 0x2, 0x375, 
    0x376, 0x3, 0x2, 0x2, 0x2, 0x376, 0x377, 0x5, 0x36, 0x1c, 0x2, 0x377, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 0x7, 0x43, 0x2, 0x2, 0x379, 
    0x37a, 0x7, 0xe6, 0x2, 0x2, 0x37a, 0x37b, 0x5, 0x114, 0x8b, 0x2, 0x37b, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x7, 0x3b, 0x2, 0x2, 0x37d, 
    0x37e, 0x5, 0x76, 0x3c, 0x2, 0x37e, 0x75, 0x3, 0x2, 0x2, 0x2, 0x37f, 
    0x383, 0x7, 0xa7, 0x2, 0x2, 0x380, 0x381, 0x5, 0xf8, 0x7d, 0x2, 0x381, 
    0x382, 0x7, 0x151, 0x2, 0x2, 0x382, 0x384, 0x3, 0x2, 0x2, 0x2, 0x383, 
    0x380, 0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 0x3, 0x2, 0x2, 0x2, 0x384, 
    0x385, 0x3, 0x2, 0x2, 0x2, 0x385, 0x389, 0x5, 0x102, 0x82, 0x2, 0x386, 
    0x387, 0x7, 0x9, 0x2, 0x2, 0x387, 0x388, 0x7, 0x6, 0x2, 0x2, 0x388, 
    0x38a, 0x7, 0xa, 0x2, 0x2, 0x389, 0x386, 0x3, 0x2, 0x2, 0x2, 0x389, 
    0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38b, 
    0x38d, 0x5, 0x32, 0x1a, 0x2, 0x38c, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38c, 
    0x38d, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x38e, 
    0x38f, 0x7, 0x13, 0x2, 0x2, 0x38f, 0x390, 0x5, 0x10, 0x9, 0x2, 0x390, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x391, 0x392, 0x7, 0x3d, 0x2, 0x2, 0x392, 
    0x393, 0x5, 0x76, 0x3c, 0x2, 0x393, 0x79, 0x3, 0x2, 0x2, 0x2, 0x394, 
    0x395, 0x7, 0xe6, 0x2, 0x2, 0x395, 0x396, 0x5, 0x114, 0x8b, 0x2, 0x396, 
    0x397, 0x7, 0xea, 0x2, 0x2, 0x397, 0x398, 0x7, 0xf, 0x2, 0x2, 0x398, 
    0x399, 0x7, 0x167, 0x2, 0x2, 0x399, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x39a, 
    0x39b, 0x7, 0xae, 0x2, 0x2, 0x39b, 0x3a0, 0x5, 0x12e, 0x98, 0x2, 0x39c, 
    0x39d, 0x7, 0x152, 0x2, 0x2, 0x39d, 0x39f, 0x5, 0x12e, 0x98, 0x2, 0x39e, 
    0x39c, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a0, 
    0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a1, 
    0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a3, 
    0x3a6, 0x7, 0x1f, 0x2, 0x2, 0x3a4, 0x3a7, 0x5, 0xf8, 0x7d, 0x2, 0x3a5, 
    0x3a7, 0x7, 0x153, 0x2, 0x2, 0x3a6, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a6, 
    0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3a8, 
    0x3ab, 0x7, 0x151, 0x2, 0x2, 0x3a9, 0x3ac, 0x5, 0xfa, 0x7e, 0x2, 0x3aa, 
    0x3ac, 0x7, 0x153, 0x2, 0x2, 0x3ab, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
    0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ad, 
    0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ae, 
    0x3af, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 0x7, 0x47, 0x2, 0x2, 0x3b0, 
    0x3b5, 0x5, 0x7e, 0x40, 0x2, 0x3b1, 0x3b2, 0x7, 0x152, 0x2, 0x2, 0x3b2, 
    0x3b4, 0x5, 0x7e, 0x40, 0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b4, 
    0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b5, 
    0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
    0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x7, 0x90, 0x2, 0x2, 0x3b9, 
    0x3ba, 0x7, 0xae, 0x2, 0x2, 0x3ba, 0x3bc, 0x7, 0xd0, 0x2, 0x2, 0x3bb, 
    0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
    0x7d, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3bf, 0x7, 0xe6, 0x2, 0x2, 0x3be, 
    0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bf, 
    0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 0x5, 0x114, 0x8b, 0x2, 0x3c1, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c6, 0x7, 0xaf, 0x2, 0x2, 0x3c3, 
    0x3c4, 0x7, 0xae, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0xd0, 0x2, 0x2, 0x3c5, 
    0x3c7, 0x7, 0xd9, 0x2, 0x2, 0x3c6, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c6, 
    0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c8, 
    0x3cd, 0x5, 0x12e, 0x98, 0x2, 0x3c9, 0x3ca, 0x7, 0x152, 0x2, 0x2, 0x3ca, 
    0x3cc, 0x5, 0x12e, 0x98, 0x2, 0x3cb, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3cc, 
    0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cd, 
    0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
    0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d3, 0x7, 0x1f, 0x2, 0x2, 0x3d1, 
    0x3d4, 0x5, 0xf8, 0x7d, 0x2, 0x3d2, 0x3d4, 0x7, 0x153, 0x2, 0x2, 0x3d3, 
    0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
    0x3da, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d8, 0x7, 0x151, 0x2, 0x2, 0x3d6, 
    0x3d9, 0x5, 0xfa, 0x7e, 0x2, 0x3d7, 0x3d9, 0x7, 0x153, 0x2, 0x2, 0x3d8, 
    0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d9, 
    0x3db, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3da, 
    0x3db, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 
    0x3dd, 0x7, 0x12, 0x2, 0x2, 0x3dd, 0x3e2, 0x5, 0x7e, 0x40, 0x2, 0x3de, 
    0x3df, 0x7, 0x152, 0x2, 0x2, 0x3df, 0x3e1, 0x5, 0x7e, 0x40, 0x2, 0x3e0, 
    0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e2, 
    0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 
    0x7, 0x29, 0x2, 0x2, 0x3e6, 0x3e7, 0x5, 0x84, 0x43, 0x2, 0x3e7, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e9, 0x7, 0x3b, 0x2, 0x2, 0x3e9, 0x3ea, 
    0x9, 0x6, 0x2, 0x2, 0x3ea, 0x40b, 0x5, 0x36, 0x1c, 0x2, 0x3eb, 0x3ec, 
    0x7, 0x24, 0x2, 0x2, 0x3ec, 0x3ed, 0x7, 0x12, 0x2, 0x2, 0x3ed, 0x40b, 
    0x5, 0x36, 0x1c, 0x2, 0x3ee, 0x3f1, 0x9, 0x7, 0x2, 0x2, 0x3ef, 0x3f0, 
    0x7, 0x7, 0x2, 0x2, 0x3f0, 0x3f2, 0x7, 0x167, 0x2, 0x2, 0x3f1, 0x3ef, 
    0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x40b, 
    0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f6, 0x7, 0x23, 0x2, 0x2, 0x3f4, 0x3f5, 
    0x7, 0xa8, 0x2, 0x2, 0x3f5, 0x3f7, 0x5, 0xf8, 0x7d, 0x2, 0x3f6, 0x3f4, 
    0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f9, 
    0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fa, 0x7, 0x167, 0x2, 0x2, 0x3f9, 0x3f8, 
    0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x40b, 
    0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fe, 0x7, 0xae, 0x2, 0x2, 0x3fc, 0x3ff, 
    0x5, 0x128, 0x95, 0x2, 0x3fd, 0x3ff, 0x5, 0x7e, 0x40, 0x2, 0x3fe, 0x3fc, 
    0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 
    0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x3, 0x2, 0x2, 0x2, 0x400, 0x406, 
    0x7, 0x1f, 0x2, 0x2, 0x401, 0x407, 0x7, 0x5, 0x2, 0x2, 0x402, 0x404, 
    0x7, 0x22, 0x2, 0x2, 0x403, 0x402, 0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 
    0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 0x407, 
    0x5, 0x36, 0x1c, 0x2, 0x406, 0x401, 0x3, 0x2, 0x2, 0x2, 0x406, 0x403, 
    0x3, 0x2, 0x2, 0x2, 0x407, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 
    0x7, 0x118, 0x2, 0x2, 0x409, 0x40b, 0x7, 0x119, 0x2, 0x2, 0x40a, 0x3e8, 
    0x3, 0x2, 0x2, 0x2, 0x40a, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x3ee, 
    0x3, 0x2, 0x2, 0x2, 0x40a, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x3fb, 
    0x3, 0x2, 0x2, 0x2, 0x40a, 0x408, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x40c, 0x40d, 0x7, 0x95, 0x2, 0x2, 0x40d, 0x40e, 0x7, 
    0x22, 0x2, 0x2, 0x40e, 0x40f, 0x5, 0x36, 0x1c, 0x2, 0x40f, 0x410, 0x7, 
    0x47, 0x2, 0x2, 0x410, 0x411, 0x5, 0x122, 0x92, 0x2, 0x411, 0x412, 0x7, 
    0x151, 0x2, 0x2, 0x412, 0x413, 0x5, 0xf8, 0x7d, 0x2, 0x413, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x414, 0x415, 0x7, 0xcf, 0x2, 0x2, 0x415, 0x416, 0x5, 
    0xf8, 0x7d, 0x2, 0x416, 0x89, 0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x7, 
    0x118, 0x2, 0x2, 0x418, 0x419, 0x7, 0x11a, 0x2, 0x2, 0x419, 0x41a, 0x5, 
    0x122, 0x92, 0x2, 0x41a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 0x7, 
    0xd2, 0x2, 0x2, 0x41c, 0x41d, 0x5, 0x36, 0x1c, 0x2, 0x41d, 0x41e, 0x5, 
    0x44, 0x23, 0x2, 0x41e, 0x41f, 0x5, 0x18, 0xd, 0x2, 0x41f, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x420, 0x421, 0x7, 0xa4, 0x2, 0x2, 0x421, 0x422, 0x7, 
    0x12, 0x2, 0x2, 0x422, 0x424, 0x5, 0x36, 0x1c, 0x2, 0x423, 0x425, 0x5, 
    0x18, 0xd, 0x2, 0x424, 0x423, 0x3, 0x2, 0x2, 0x2, 0x424, 0x425, 0x3, 
    0x2, 0x2, 0x2, 0x425, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x426, 0x428, 0x7, 0x6, 
    0x2, 0x2, 0x427, 0x426, 0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x429, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42e, 0x5, 0x92, 
    0x4a, 0x2, 0x42a, 0x42b, 0x9, 0x8, 0x2, 0x2, 0x42b, 0x42d, 0x5, 0x92, 
    0x4a, 0x2, 0x42c, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x430, 0x3, 0x2, 
    0x2, 0x2, 0x42e, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42f, 0x3, 0x2, 
    0x2, 0x2, 0x42f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 0x3, 0x2, 0x2, 
    0x2, 0x431, 0x437, 0x5, 0x94, 0x4b, 0x2, 0x432, 0x435, 0x7, 0x39, 0x2, 
    0x2, 0x433, 0x436, 0x5, 0xe4, 0x73, 0x2, 0x434, 0x436, 0x5, 0x52, 0x2a, 
    0x2, 0x435, 0x433, 0x3, 0x2, 0x2, 0x2, 0x435, 0x434, 0x3, 0x2, 0x2, 
    0x2, 0x436, 0x438, 0x3, 0x2, 0x2, 0x2, 0x437, 0x432, 0x3, 0x2, 0x2, 
    0x2, 0x437, 0x438, 0x3, 0x2, 0x2, 0x2, 0x438, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x439, 0x458, 0x5, 0xa8, 0x55, 0x2, 0x43a, 0x43c, 0x7, 0x155, 0x2, 0x2, 
    0x43b, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43f, 0x3, 0x2, 0x2, 0x2, 
    0x43d, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x3, 0x2, 0x2, 0x2, 
    0x43e, 0x440, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x43d, 0x3, 0x2, 0x2, 0x2, 
    0x440, 0x441, 0x5, 0xa8, 0x55, 0x2, 0x441, 0x442, 0x5, 0xd8, 0x6d, 0x2, 
    0x442, 0x446, 0x5, 0x96, 0x4c, 0x2, 0x443, 0x445, 0x7, 0x154, 0x2, 0x2, 
    0x444, 0x443, 0x3, 0x2, 0x2, 0x2, 0x445, 0x448, 0x3, 0x2, 0x2, 0x2, 
    0x446, 0x444, 0x3, 0x2, 0x2, 0x2, 0x446, 0x447, 0x3, 0x2, 0x2, 0x2, 
    0x447, 0x458, 0x3, 0x2, 0x2, 0x2, 0x448, 0x446, 0x3, 0x2, 0x2, 0x2, 
    0x449, 0x44b, 0x7, 0x155, 0x2, 0x2, 0x44a, 0x449, 0x3, 0x2, 0x2, 0x2, 
    0x44b, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44a, 0x3, 0x2, 0x2, 0x2, 
    0x44c, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x44f, 0x3, 0x2, 0x2, 0x2, 
    0x44e, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 0x5, 0xa8, 0x55, 0x2, 
    0x450, 0x454, 0x5, 0xaa, 0x56, 0x2, 0x451, 0x453, 0x7, 0x154, 0x2, 0x2, 
    0x452, 0x451, 0x3, 0x2, 0x2, 0x2, 0x453, 0x456, 0x3, 0x2, 0x2, 0x2, 
    0x454, 0x452, 0x3, 0x2, 0x2, 0x2, 0x454, 0x455, 0x3, 0x2, 0x2, 0x2, 
    0x455, 0x458, 0x3, 0x2, 0x2, 0x2, 0x456, 0x454, 0x3, 0x2, 0x2, 0x2, 
    0x457, 0x439, 0x3, 0x2, 0x2, 0x2, 0x457, 0x43d, 0x3, 0x2, 0x2, 0x2, 
    0x457, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x458, 0x95, 0x3, 0x2, 0x2, 0x2, 0x459, 
    0x45b, 0x5, 0x9a, 0x4e, 0x2, 0x45a, 0x45c, 0x5, 0x98, 0x4d, 0x2, 0x45b, 
    0x45a, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x460, 0x7, 0xa8, 0x2, 0x2, 0x45e, 
    0x461, 0x5, 0x34, 0x1b, 0x2, 0x45f, 0x461, 0x5, 0x42, 0x22, 0x2, 0x460, 
    0x45e, 0x3, 0x2, 0x2, 0x2, 0x460, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x461, 
    0x479, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 0x7, 0xc0, 0x2, 0x2, 0x463, 
    0x464, 0x5, 0xac, 0x57, 0x2, 0x464, 0x465, 0x7, 0x145, 0x2, 0x2, 0x465, 
    0x466, 0x5, 0xac, 0x57, 0x2, 0x466, 0x479, 0x3, 0x2, 0x2, 0x2, 0x467, 
    0x469, 0x7, 0x6, 0x2, 0x2, 0x468, 0x467, 0x3, 0x2, 0x2, 0x2, 0x468, 
    0x469, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x46a, 
    0x46e, 0x9, 0x9, 0x2, 0x2, 0x46b, 0x46d, 0x7, 0x155, 0x2, 0x2, 0x46c, 
    0x46b, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x470, 0x3, 0x2, 0x2, 0x2, 0x46e, 
    0x46c, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46f, 
    0x471, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x471, 
    0x475, 0x5, 0xa0, 0x51, 0x2, 0x472, 0x474, 0x7, 0x154, 0x2, 0x2, 0x473, 
    0x472, 0x3, 0x2, 0x2, 0x2, 0x474, 0x477, 0x3, 0x2, 0x2, 0x2, 0x475, 
    0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 0x3, 0x2, 0x2, 0x2, 0x476, 
    0x479, 0x3, 0x2, 0x2, 0x2, 0x477, 0x475, 0x3, 0x2, 0x2, 0x2, 0x478, 
    0x45d, 0x3, 0x2, 0x2, 0x2, 0x478, 0x462, 0x3, 0x2, 0x2, 0x2, 0x478, 
    0x468, 0x3, 0x2, 0x2, 0x2, 0x479, 0x99, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x480, 
    0x5, 0x9c, 0x4f, 0x2, 0x47b, 0x47e, 0x9, 0xa, 0x2, 0x2, 0x47c, 0x47f, 
    0x5, 0x9c, 0x4f, 0x2, 0x47d, 0x47f, 0x5, 0xbc, 0x5f, 0x2, 0x47e, 0x47c, 
    0x3, 0x2, 0x2, 0x2, 0x47e, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x481, 
    0x3, 0x2, 0x2, 0x2, 0x480, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x480, 0x481, 
    0x3, 0x2, 0x2, 0x2, 0x481, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x482, 0x487, 0x5, 
    0x9e, 0x50, 0x2, 0x483, 0x484, 0x9, 0xb, 0x2, 0x2, 0x484, 0x486, 0x5, 
    0x9e, 0x50, 0x2, 0x485, 0x483, 0x3, 0x2, 0x2, 0x2, 0x486, 0x489, 0x3, 
    0x2, 0x2, 0x2, 0x487, 0x485, 0x3, 0x2, 0x2, 0x2, 0x487, 0x488, 0x3, 
    0x2, 0x2, 0x2, 0x488, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x489, 0x487, 0x3, 0x2, 
    0x2, 0x2, 0x48a, 0x48c, 0x7, 0x155, 0x2, 0x2, 0x48b, 0x48a, 0x3, 0x2, 
    0x2, 0x2, 0x48c, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48b, 0x3, 0x2, 
    0x2, 0x2, 0x48d, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x490, 0x3, 0x2, 
    0x2, 0x2, 0x48f, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x490, 0x494, 0x5, 0xa0, 
    0x51, 0x2, 0x491, 0x493, 0x7, 0x154, 0x2, 0x2, 0x492, 0x491, 0x3, 0x2, 
    0x2, 0x2, 0x493, 0x496, 0x3, 0x2, 0x2, 0x2, 0x494, 0x492, 0x3, 0x2, 
    0x2, 0x2, 0x494, 0x495, 0x3, 0x2, 0x2, 0x2, 0x495, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x496, 0x494, 0x3, 0x2, 0x2, 0x2, 0x497, 0x4a2, 0x5, 0xa2, 0x52, 
    0x2, 0x498, 0x4a2, 0x5, 0xb4, 0x5b, 0x2, 0x499, 0x4a2, 0x5, 0xb6, 0x5c, 
    0x2, 0x49a, 0x49c, 0x7, 0x6, 0x2, 0x2, 0x49b, 0x49a, 0x3, 0x2, 0x2, 
    0x2, 0x49b, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49e, 0x3, 0x2, 0x2, 
    0x2, 0x49d, 0x49f, 0x7, 0xa, 0x2, 0x2, 0x49e, 0x49d, 0x3, 0x2, 0x2, 
    0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 0x3, 0x2, 0x2, 
    0x2, 0x4a0, 0x4a2, 0x5, 0x34, 0x1b, 0x2, 0x4a1, 0x497, 0x3, 0x2, 0x2, 
    0x2, 0x4a1, 0x498, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x499, 0x3, 0x2, 0x2, 
    0x2, 0x4a1, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0x4a3, 0x4a4, 0x5, 0x36, 0x1c, 0x2, 0x4a4, 0x4a5, 0x7, 0x151, 0x2, 0x2, 
    0x4a5, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a3, 0x3, 0x2, 0x2, 0x2, 
    0x4a6, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x4a8, 0x3, 0x2, 0x2, 0x2, 
    0x4a8, 0x4a9, 0x5, 0xa4, 0x53, 0x2, 0x4a9, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0x4aa, 0x4ab, 0x5, 0xa6, 0x54, 0x2, 0x4ab, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0x4ac, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4b2, 0x5, 0xe0, 0x71, 0x2, 
    0x4ae, 0x4b2, 0x5, 0xde, 0x70, 0x2, 0x4af, 0x4b2, 0x5, 0xb4, 0x5b, 0x2, 
    0x4b0, 0x4b2, 0x7, 0x165, 0x2, 0x2, 0x4b1, 0x4ac, 0x3, 0x2, 0x2, 0x2, 
    0x4b1, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4ae, 0x3, 0x2, 0x2, 0x2, 
    0x4b1, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b0, 0x3, 0x2, 0x2, 0x2, 
    0x4b2, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b5, 0x5, 0xac, 0x57, 0x2, 
    0x4b4, 0x4b6, 0x5, 0xaa, 0x56, 0x2, 0x4b5, 0x4b4, 0x3, 0x2, 0x2, 0x2, 
    0x4b5, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x4b7, 
    0x4ba, 0x7, 0xa8, 0x2, 0x2, 0x4b8, 0x4bb, 0x5, 0x34, 0x1b, 0x2, 0x4b9, 
    0x4bb, 0x5, 0x42, 0x22, 0x2, 0x4ba, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4ba, 
    0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4bc, 
    0x4bd, 0x7, 0xc0, 0x2, 0x2, 0x4bd, 0x4be, 0x5, 0xac, 0x57, 0x2, 0x4be, 
    0x4bf, 0x7, 0x145, 0x2, 0x2, 0x4bf, 0x4c0, 0x5, 0xac, 0x57, 0x2, 0x4c0, 
    0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c3, 0x7, 0x6, 0x2, 0x2, 0x4c2, 
    0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4c3, 
    0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c8, 0x9, 0x9, 0x2, 0x2, 0x4c5, 
    0x4c7, 0x7, 0x155, 0x2, 0x2, 0x4c6, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c7, 
    0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c8, 
    0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4ca, 
    0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cf, 0x5, 0xb2, 0x5a, 0x2, 0x4cc, 
    0x4ce, 0x7, 0x154, 0x2, 0x2, 0x4cd, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4ce, 
    0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d1, 
    0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
    0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4d3, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4da, 0x5, 0xae, 0x58, 0x2, 0x4d5, 
    0x4d8, 0x9, 0xa, 0x2, 0x2, 0x4d6, 0x4d9, 0x5, 0xae, 0x58, 0x2, 0x4d7, 
    0x4d9, 0x5, 0xbc, 0x5f, 0x2, 0x4d8, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d8, 
    0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4da, 
    0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4db, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4e1, 0x5, 0xb0, 0x59, 0x2, 0x4dd, 
    0x4de, 0x9, 0xb, 0x2, 0x2, 0x4de, 0x4e0, 0x5, 0xb0, 0x59, 0x2, 0x4df, 
    0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e1, 
    0x4df, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e2, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e6, 
    0x7, 0x155, 0x2, 0x2, 0x4e5, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e9, 
    0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e8, 
    0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4e7, 
    0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4ee, 0x5, 0xb2, 0x5a, 0x2, 0x4eb, 0x4ed, 
    0x7, 0x154, 0x2, 0x2, 0x4ec, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4f0, 
    0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ef, 
    0x3, 0x2, 0x2, 0x2, 0x4ef, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4ee, 0x3, 
    0x2, 0x2, 0x2, 0x4f1, 0x4fe, 0x5, 0xb8, 0x5d, 0x2, 0x4f2, 0x4fe, 0x5, 
    0xb4, 0x5b, 0x2, 0x4f3, 0x4fe, 0x5, 0xb6, 0x5c, 0x2, 0x4f4, 0x4fe, 0x5, 
    0xba, 0x5e, 0x2, 0x4f5, 0x4f7, 0x7, 0x6, 0x2, 0x2, 0x4f6, 0x4f5, 0x3, 
    0x2, 0x2, 0x2, 0x4f6, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f9, 0x3, 
    0x2, 0x2, 0x2, 0x4f8, 0x4fa, 0x7, 0xa, 0x2, 0x2, 0x4f9, 0x4f8, 0x3, 
    0x2, 0x2, 0x2, 0x4f9, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fb, 0x3, 
    0x2, 0x2, 0x2, 0x4fb, 0x4fe, 0x5, 0x34, 0x1b, 0x2, 0x4fc, 0x4fe, 0x5, 
    0xbc, 0x5f, 0x2, 0x4fd, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4f2, 0x3, 
    0x2, 0x2, 0x2, 0x4fd, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4f4, 0x3, 
    0x2, 0x2, 0x2, 0x4fd, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fc, 0x3, 
    0x2, 0x2, 0x2, 0x4fe, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x501, 0x7, 0x161, 
    0x2, 0x2, 0x500, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x500, 0x501, 0x3, 0x2, 
    0x2, 0x2, 0x501, 0x502, 0x3, 0x2, 0x2, 0x2, 0x502, 0x504, 0x5, 0xe8, 
    0x75, 0x2, 0x503, 0x505, 0x7, 0x161, 0x2, 0x2, 0x504, 0x503, 0x3, 0x2, 
    0x2, 0x2, 0x504, 0x505, 0x3, 0x2, 0x2, 0x2, 0x505, 0x512, 0x3, 0x2, 
    0x2, 0x2, 0x506, 0x50f, 0x7, 0x155, 0x2, 0x2, 0x507, 0x50c, 0x5, 0x90, 
    0x49, 0x2, 0x508, 0x509, 0x7, 0x152, 0x2, 0x2, 0x509, 0x50b, 0x5, 0x90, 
    0x49, 0x2, 0x50a, 0x508, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x50e, 0x3, 0x2, 
    0x2, 0x2, 0x50c, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 
    0x2, 0x2, 0x50d, 0x510, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x50c, 0x3, 0x2, 
    0x2, 0x2, 0x50f, 0x507, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x510, 0x3, 0x2, 
    0x2, 0x2, 0x510, 0x511, 0x3, 0x2, 0x2, 0x2, 0x511, 0x513, 0x7, 0x154, 
    0x2, 0x2, 0x512, 0x506, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 0x3, 0x2, 
    0x2, 0x2, 0x513, 0x517, 0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 0x5, 0xd8, 
    0x6d, 0x2, 0x515, 0x516, 0x5, 0xe0, 0x71, 0x2, 0x516, 0x518, 0x3, 0x2, 
    0x2, 0x2, 0x517, 0x514, 0x3, 0x2, 0x2, 0x2, 0x517, 0x518, 0x3, 0x2, 
    0x2, 0x2, 0x518, 0x52c, 0x3, 0x2, 0x2, 0x2, 0x519, 0x51a, 0x7, 0x81, 
    0x2, 0x2, 0x51a, 0x51b, 0x7, 0x155, 0x2, 0x2, 0x51b, 0x51c, 0x5, 0x90, 
    0x49, 0x2, 0x51c, 0x51d, 0x7, 0x13, 0x2, 0x2, 0x51d, 0x51e, 0x5, 0xda, 
    0x6e, 0x2, 0x51e, 0x51f, 0x7, 0x154, 0x2, 0x2, 0x51f, 0x52c, 0x3, 0x2, 
    0x2, 0x2, 0x520, 0x521, 0x5, 0xf2, 0x7a, 0x2, 0x521, 0x523, 0x7, 0x155, 
    0x2, 0x2, 0x522, 0x524, 0x9, 0x2, 0x2, 0x2, 0x523, 0x522, 0x3, 0x2, 
    0x2, 0x2, 0x523, 0x524, 0x3, 0x2, 0x2, 0x2, 0x524, 0x527, 0x3, 0x2, 
    0x2, 0x2, 0x525, 0x528, 0x7, 0x153, 0x2, 0x2, 0x526, 0x528, 0x5, 0xac, 
    0x57, 0x2, 0x527, 0x525, 0x3, 0x2, 0x2, 0x2, 0x527, 0x526, 0x3, 0x2, 
    0x2, 0x2, 0x528, 0x529, 0x3, 0x2, 0x2, 0x2, 0x529, 0x52a, 0x7, 0x154, 
    0x2, 0x2, 0x52a, 0x52c, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x500, 0x3, 0x2, 
    0x2, 0x2, 0x52b, 0x519, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x520, 0x3, 0x2, 
    0x2, 0x2, 0x52c, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52f, 0x7, 0x9a, 
    0x2, 0x2, 0x52e, 0x530, 0x5, 0xfe, 0x80, 0x2, 0x52f, 0x52e, 0x3, 0x2, 
    0x2, 0x2, 0x52f, 0x530, 0x3, 0x2, 0x2, 0x2, 0x530, 0x536, 0x3, 0x2, 
    0x2, 0x2, 0x531, 0x532, 0x7, 0x9b, 0x2, 0x2, 0x532, 0x533, 0x5, 0x90, 
    0x49, 0x2, 0x533, 0x534, 0x7, 0x9c, 0x2, 0x2, 0x534, 0x535, 0x5, 0xb2, 
    0x5a, 0x2, 0x535, 0x537, 0x3, 0x2, 0x2, 0x2, 0x536, 0x531, 0x3, 0x2, 
    0x2, 0x2, 0x537, 0x538, 0x3, 0x2, 0x2, 0x2, 0x538, 0x536, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x539, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53c, 0x3, 0x2, 
    0x2, 0x2, 0x53a, 0x53b, 0x7, 0x9d, 0x2, 0x2, 0x53b, 0x53d, 0x5, 0x90, 
    0x49, 0x2, 0x53c, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 0x3, 0x2, 
    0x2, 0x2, 0x53d, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x540, 0x7, 0x9e, 
    0x2, 0x2, 0x53f, 0x541, 0x5, 0x11e, 0x90, 0x2, 0x540, 0x53f, 0x3, 0x2, 
    0x2, 0x2, 0x540, 0x541, 0x3, 0x2, 0x2, 0x2, 0x541, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0x542, 0x543, 0x5, 0x36, 0x1c, 0x2, 0x543, 0x544, 0x7, 0x151, 0x2, 
    0x2, 0x544, 0x546, 0x3, 0x2, 0x2, 0x2, 0x545, 0x542, 0x3, 0x2, 0x2, 
    0x2, 0x545, 0x546, 0x3, 0x2, 0x2, 0x2, 0x546, 0x549, 0x3, 0x2, 0x2, 
    0x2, 0x547, 0x54a, 0x7, 0x153, 0x2, 0x2, 0x548, 0x54a, 0x5, 0xfe, 0x80, 
    0x2, 0x549, 0x547, 0x3, 0x2, 0x2, 0x2, 0x549, 0x548, 0x3, 0x2, 0x2, 
    0x2, 0x54a, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x54c, 0x7, 0x155, 0x2, 
    0x2, 0x54c, 0x551, 0x5, 0x90, 0x49, 0x2, 0x54d, 0x54e, 0x7, 0x152, 0x2, 
    0x2, 0x54e, 0x550, 0x5, 0x90, 0x49, 0x2, 0x54f, 0x54d, 0x3, 0x2, 0x2, 
    0x2, 0x550, 0x553, 0x3, 0x2, 0x2, 0x2, 0x551, 0x54f, 0x3, 0x2, 0x2, 
    0x2, 0x551, 0x552, 0x3, 0x2, 0x2, 0x2, 0x552, 0x554, 0x3, 0x2, 0x2, 
    0x2, 0x553, 0x551, 0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 0x7, 0x154, 0x2, 
    0x2, 0x555, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x556, 0x557, 0x7, 0x105, 0x2, 
    0x2, 0x557, 0x558, 0x5, 0x90, 0x49, 0x2, 0x558, 0x559, 0x5, 0xdc, 0x6f, 
    0x2, 0x559, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55f, 0x5, 0xc0, 0x61, 
    0x2, 0x55b, 0x55c, 0x7, 0x152, 0x2, 0x2, 0x55c, 0x55e, 0x5, 0xc0, 0x61, 
    0x2, 0x55d, 0x55b, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x561, 0x3, 0x2, 0x2, 
    0x2, 0x55f, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x560, 0x3, 0x2, 0x2, 
    0x2, 0x560, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x561, 0x55f, 0x3, 0x2, 0x2, 0x2, 
    0x562, 0x570, 0x5, 0xc2, 0x62, 0x2, 0x563, 0x565, 0x9, 0xc, 0x2, 0x2, 
    0x564, 0x563, 0x3, 0x2, 0x2, 0x2, 0x564, 0x565, 0x3, 0x2, 0x2, 0x2, 
    0x565, 0x567, 0x3, 0x2, 0x2, 0x2, 0x566, 0x568, 0x7, 0x18, 0x2, 0x2, 
    0x567, 0x566, 0x3, 0x2, 0x2, 0x2, 0x567, 0x568, 0x3, 0x2, 0x2, 0x2, 
    0x568, 0x569, 0x3, 0x2, 0x2, 0x2, 0x569, 0x56a, 0x7, 0x1b, 0x2, 0x2, 
    0x56a, 0x56c, 0x5, 0xc2, 0x62, 0x2, 0x56b, 0x56d, 0x5, 0xc4, 0x63, 0x2, 
    0x56c, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56d, 0x3, 0x2, 0x2, 0x2, 
    0x56d, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x564, 0x3, 0x2, 0x2, 0x2, 
    0x56f, 0x572, 0x3, 0x2, 0x2, 0x2, 0x570, 0x56e, 0x3, 0x2, 0x2, 0x2, 
    0x570, 0x571, 0x3, 0x2, 0x2, 0x2, 0x571, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x572, 
    0x570, 0x3, 0x2, 0x2, 0x2, 0x573, 0x575, 0x5, 0x36, 0x1c, 0x2, 0x574, 
    0x576, 0x5, 0x11e, 0x90, 0x2, 0x575, 0x574, 0x3, 0x2, 0x2, 0x2, 0x575, 
    0x576, 0x3, 0x2, 0x2, 0x2, 0x576, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x577, 
    0x578, 0x7, 0x155, 0x2, 0x2, 0x578, 0x57a, 0x5, 0x34, 0x1b, 0x2, 0x579, 
    0x57b, 0x5, 0x11e, 0x90, 0x2, 0x57a, 0x579, 0x3, 0x2, 0x2, 0x2, 0x57a, 
    0x57b, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x57c, 
    0x57e, 0x5, 0x18, 0xd, 0x2, 0x57d, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57d, 
    0x57e, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x580, 0x3, 0x2, 0x2, 0x2, 0x57f, 
    0x581, 0x5, 0x1a, 0xe, 0x2, 0x580, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x580, 
    0x581, 0x3, 0x2, 0x2, 0x2, 0x581, 0x583, 0x3, 0x2, 0x2, 0x2, 0x582, 
    0x584, 0x5, 0x1e, 0x10, 0x2, 0x583, 0x582, 0x3, 0x2, 0x2, 0x2, 0x583, 
    0x584, 0x3, 0x2, 0x2, 0x2, 0x584, 0x585, 0x3, 0x2, 0x2, 0x2, 0x585, 
    0x586, 0x7, 0x154, 0x2, 0x2, 0x586, 0x588, 0x3, 0x2, 0x2, 0x2, 0x587, 
    0x589, 0x5, 0x11e, 0x90, 0x2, 0x588, 0x587, 0x3, 0x2, 0x2, 0x2, 0x588, 
    0x589, 0x3, 0x2, 0x2, 0x2, 0x589, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x58a, 
    0x573, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x577, 0x3, 0x2, 0x2, 0x2, 0x58b, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x7, 0x1f, 0x2, 0x2, 0x58d, 
    0x58e, 0x5, 0x90, 0x49, 0x2, 0x58e, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x58f, 
    0x594, 0x5, 0xca, 0x66, 0x2, 0x590, 0x591, 0x7, 0x152, 0x2, 0x2, 0x591, 
    0x593, 0x5, 0xca, 0x66, 0x2, 0x592, 0x590, 0x3, 0x2, 0x2, 0x2, 0x593, 
    0x596, 0x3, 0x2, 0x2, 0x2, 0x594, 0x592, 0x3, 0x2, 0x2, 0x2, 0x594, 
    0x595, 0x3, 0x2, 0x2, 0x2, 0x595, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x596, 0x594, 
    0x3, 0x2, 0x2, 0x2, 0x597, 0x5a0, 0x9, 0xd, 0x2, 0x2, 0x598, 0x59e, 
    0x7, 0xd9, 0x2, 0x2, 0x599, 0x59f, 0x7, 0x1b, 0x2, 0x2, 0x59a, 0x59b, 
    0x7, 0xd, 0x2, 0x2, 0x59b, 0x59f, 0x7, 0xf, 0x2, 0x2, 0x59c, 0x59d, 
    0x7, 0xe, 0x2, 0x2, 0x59d, 0x59f, 0x7, 0xf, 0x2, 0x2, 0x59e, 0x599, 
    0x3, 0x2, 0x2, 0x2, 0x59e, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59e, 0x59c, 
    0x3, 0x2, 0x2, 0x2, 0x59f, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0x598, 
    0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0x5a2, 0x5a3, 0x7, 0xcf, 0x2, 0x2, 0x5a3, 0x5a4, 0x5, 
    0xc8, 0x65, 0x2, 0x5a4, 0x5a6, 0x7, 0x155, 0x2, 0x2, 0x5a5, 0x5a7, 0x5, 
    0xcc, 0x67, 0x2, 0x5a6, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a7, 0x3, 
    0x2, 0x2, 0x2, 0x5a7, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5a9, 0x7, 
    0x154, 0x2, 0x2, 0x5a9, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 0x7, 
    0x45, 0x2, 0x2, 0x5ab, 0x5ac, 0x5, 0xc8, 0x65, 0x2, 0x5ac, 0x5ad, 0x7, 
    0x155, 0x2, 0x2, 0x5ad, 0x5ae, 0x5, 0xcc, 0x67, 0x2, 0x5ae, 0x5af, 0x7, 
    0x154, 0x2, 0x2, 0x5af, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5a2, 0x3, 
    0x2, 0x2, 0x2, 0x5b0, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0x5b2, 0x5b7, 0x5, 0x106, 0x84, 0x2, 0x5b3, 0x5b4, 0x7, 0x152, 
    0x2, 0x2, 0x5b4, 0x5b6, 0x5, 0x106, 0x84, 0x2, 0x5b5, 0x5b3, 0x3, 0x2, 
    0x2, 0x2, 0x5b6, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b5, 0x3, 0x2, 
    0x2, 0x2, 0x5b7, 0x5b8, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0x5b9, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bb, 0x7, 0x20, 0x2, 
    0x2, 0x5bb, 0x5bc, 0x7, 0x155, 0x2, 0x2, 0x5bc, 0x5bd, 0x5, 0xd0, 0x69, 
    0x2, 0x5bd, 0x5be, 0x7, 0x154, 0x2, 0x2, 0x5be, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0x5bf, 0x5c4, 0x5, 0x108, 0x85, 0x2, 0x5c0, 0x5c1, 0x7, 0x152, 
    0x2, 0x2, 0x5c1, 0x5c3, 0x5, 0x108, 0x85, 0x2, 0x5c2, 0x5c0, 0x3, 0x2, 
    0x2, 0x2, 0x5c3, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c2, 0x3, 0x2, 
    0x2, 0x2, 0x5c4, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0x5c6, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c8, 0x9, 0xe, 0x2, 
    0x2, 0x5c8, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5ca, 0x7, 0x171, 0x2, 
    0x2, 0x5ca, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5d9, 0x3, 0x2, 0x2, 0x2, 
    0x5cc, 0x5d9, 0x7, 0x4a, 0x2, 0x2, 0x5cd, 0x5d9, 0x7, 0x4b, 0x2, 0x2, 
    0x5ce, 0x5d9, 0x7, 0x4c, 0x2, 0x2, 0x5cf, 0x5d9, 0x7, 0x4d, 0x2, 0x2, 
    0x5d0, 0x5d9, 0x7, 0x49, 0x2, 0x2, 0x5d1, 0x5d9, 0x7, 0x4e, 0x2, 0x2, 
    0x5d2, 0x5d9, 0x7, 0x4f, 0x2, 0x2, 0x5d3, 0x5d9, 0x7, 0x50, 0x2, 0x2, 
    0x5d4, 0x5d9, 0x7, 0x52, 0x2, 0x2, 0x5d5, 0x5d9, 0x7, 0x55, 0x2, 0x2, 
    0x5d6, 0x5d9, 0x7, 0xc2, 0x2, 0x2, 0x5d7, 0x5d9, 0x7, 0x53, 0x2, 0x2, 
    0x5d8, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5cc, 0x3, 0x2, 0x2, 0x2, 
    0x5d8, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5ce, 0x3, 0x2, 0x2, 0x2, 
    0x5d8, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d0, 0x3, 0x2, 0x2, 0x2, 
    0x5d8, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d2, 0x3, 0x2, 0x2, 0x2, 
    0x5d8, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d4, 0x3, 0x2, 0x2, 0x2, 
    0x5d8, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d6, 0x3, 0x2, 0x2, 0x2, 
    0x5d8, 0x5d7, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x5da, 
    0x5db, 0x9, 0xf, 0x2, 0x2, 0x5db, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5de, 
    0x7, 0xc2, 0x2, 0x2, 0x5dd, 0x5df, 0x7, 0x162, 0x2, 0x2, 0x5de, 0x5dd, 
    0x3, 0x2, 0x2, 0x2, 0x5de, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5f9, 
    0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e2, 0x7, 0xeb, 0x2, 0x2, 0x5e1, 0x5e3, 
    0x7, 0x162, 0x2, 0x2, 0x5e2, 0x5e1, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5e3, 
    0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5f9, 
    0x7, 0x50, 0x2, 0x2, 0x5e5, 0x5f9, 0x7, 0x51, 0x2, 0x2, 0x5e6, 0x5ee, 
    0x7, 0x53, 0x2, 0x2, 0x5e7, 0x5e8, 0x7, 0x155, 0x2, 0x2, 0x5e8, 0x5eb, 
    0x7, 0x162, 0x2, 0x2, 0x5e9, 0x5ea, 0x7, 0x152, 0x2, 0x2, 0x5ea, 0x5ec, 
    0x7, 0x162, 0x2, 0x2, 0x5eb, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ec, 
    0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ef, 
    0x7, 0x154, 0x2, 0x2, 0x5ee, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5ef, 
    0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5f0, 0x5f2, 
    0x7, 0x123, 0x2, 0x2, 0x5f1, 0x5f3, 0x7, 0x124, 0x2, 0x2, 0x5f2, 0x5f1, 
    0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f9, 
    0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f6, 0x7, 0xb8, 0x2, 0x2, 0x5f5, 0x5f7, 
    0x7, 0x124, 0x2, 0x2, 0x5f6, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f7, 
    0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5dc, 
    0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5e4, 
    0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5e6, 
    0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f4, 
    0x3, 0x2, 0x2, 0x2, 0x5f9, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 0x9, 
    0x10, 0x2, 0x2, 0x5fb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 
    0x167, 0x2, 0x2, 0x5fd, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x600, 0x9, 
    0x11, 0x2, 0x2, 0x5ff, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x5ff, 0x600, 0x3, 
    0x2, 0x2, 0x2, 0x600, 0x601, 0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 0x9, 
    0x12, 0x2, 0x2, 0x602, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x603, 0x604, 0x7, 
    0x165, 0x2, 0x2, 0x604, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x605, 0x606, 0x9, 
    0x13, 0x2, 0x2, 0x606, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x607, 0x60c, 0x5, 
    0xde, 0x70, 0x2, 0x608, 0x60c, 0x5, 0xe0, 0x71, 0x2, 0x609, 0x60c, 0x5, 
    0xe2, 0x72, 0x2, 0x60a, 0x60c, 0x5, 0xe4, 0x73, 0x2, 0x60b, 0x607, 0x3, 
    0x2, 0x2, 0x2, 0x60b, 0x608, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x609, 0x3, 
    0x2, 0x2, 0x2, 0x60b, 0x60a, 0x3, 0x2, 0x2, 0x2, 0x60c, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0x60d, 0x614, 0x5, 0xea, 0x76, 0x2, 0x60e, 0x614, 0x5, 0xec, 
    0x77, 0x2, 0x60f, 0x614, 0x5, 0xee, 0x78, 0x2, 0x610, 0x614, 0x5, 0xf0, 
    0x79, 0x2, 0x611, 0x614, 0x5, 0xf2, 0x7a, 0x2, 0x612, 0x614, 0x5, 0xf4, 
    0x7b, 0x2, 0x613, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x613, 0x60e, 0x3, 0x2, 
    0x2, 0x2, 0x613, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x613, 0x610, 0x3, 0x2, 
    0x2, 0x2, 0x613, 0x611, 0x3, 0x2, 0x2, 0x2, 0x613, 0x612, 0x3, 0x2, 
    0x2, 0x2, 0x614, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x615, 0x616, 0x9, 0x14, 
    0x2, 0x2, 0x616, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x617, 0x618, 0x9, 0x15, 
    0x2, 0x2, 0x618, 0xed, 0x3, 0x2, 0x2, 0x2, 0x619, 0x61a, 0x9, 0x16, 
    0x2, 0x2, 0x61a, 0xef, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 0x9, 0x17, 
    0x2, 0x2, 0x61c, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61e, 0x9, 0x18, 
    0x2, 0x2, 0x61e, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x636, 0x7, 0x12a, 
    0x2, 0x2, 0x620, 0x636, 0x7, 0x12b, 0x2, 0x2, 0x621, 0x636, 0x7, 0x12c, 
    0x2, 0x2, 0x622, 0x636, 0x7, 0x12d, 0x2, 0x2, 0x623, 0x636, 0x7, 0x12e, 
    0x2, 0x2, 0x624, 0x636, 0x7, 0xa9, 0x2, 0x2, 0x625, 0x636, 0x7, 0xac, 
    0x2, 0x2, 0x626, 0x636, 0x7, 0xe6, 0x2, 0x2, 0x627, 0x636, 0x7, 0x12f, 
    0x2, 0x2, 0x628, 0x636, 0x7, 0x130, 0x2, 0x2, 0x629, 0x636, 0x7, 0x131, 
    0x2, 0x2, 0x62a, 0x62b, 0x7, 0xb7, 0x2, 0x2, 0x62b, 0x636, 0x7, 0x132, 
    0x2, 0x2, 0x62c, 0x636, 0x7, 0x133, 0x2, 0x2, 0x62d, 0x636, 0x7, 0x9, 
    0x2, 0x2, 0x62e, 0x636, 0x7, 0x134, 0x2, 0x2, 0x62f, 0x636, 0x7, 0x135, 
    0x2, 0x2, 0x630, 0x636, 0x7, 0x139, 0x2, 0x2, 0x631, 0x636, 0x7, 0x13a, 
    0x2, 0x2, 0x632, 0x636, 0x7, 0x13b, 0x2, 0x2, 0x633, 0x636, 0x7, 0x13c, 
    0x2, 0x2, 0x634, 0x636, 0x7, 0x136, 0x2, 0x2, 0x635, 0x61f, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x620, 0x3, 0x2, 0x2, 0x2, 0x635, 0x621, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x622, 0x3, 0x2, 0x2, 0x2, 0x635, 0x623, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x624, 0x3, 0x2, 0x2, 0x2, 0x635, 0x625, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x626, 0x3, 0x2, 0x2, 0x2, 0x635, 0x627, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x628, 0x3, 0x2, 0x2, 0x2, 0x635, 0x629, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x635, 0x62c, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x635, 0x62e, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x635, 0x630, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x631, 0x3, 0x2, 0x2, 0x2, 0x635, 0x632, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x633, 0x3, 0x2, 0x2, 0x2, 0x635, 0x634, 0x3, 0x2, 
    0x2, 0x2, 0x636, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x637, 0x638, 0x5, 0x12a, 
    0x96, 0x2, 0x638, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x639, 0x63a, 0x5, 0x12a, 
    0x96, 0x2, 0x63a, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x63c, 0x5, 0x12a, 
    0x96, 0x2, 0x63c, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x63d, 0x63e, 0x5, 0x12a, 
    0x96, 0x2, 0x63e, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x63f, 0x640, 0x5, 0x12a, 
    0x96, 0x2, 0x640, 0xff, 0x3, 0x2, 0x2, 0x2, 0x641, 0x642, 0x5, 0x12a, 
    0x96, 0x2, 0x642, 0x101, 0x3, 0x2, 0x2, 0x2, 0x643, 0x644, 0x5, 0x12a, 
    0x96, 0x2, 0x644, 0x103, 0x3, 0x2, 0x2, 0x2, 0x645, 0x646, 0x5, 0x12a, 
    0x96, 0x2, 0x646, 0x105, 0x3, 0x2, 0x2, 0x2, 0x647, 0x648, 0x5, 0x12a, 
    0x96, 0x2, 0x648, 0x107, 0x3, 0x2, 0x2, 0x2, 0x649, 0x64a, 0x5, 0x12a, 
    0x96, 0x2, 0x64a, 0x109, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x64c, 0x5, 0x12a, 
    0x96, 0x2, 0x64c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64e, 0x5, 0x12a, 
    0x96, 0x2, 0x64e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x64f, 0x650, 0x5, 0x12a, 
    0x96, 0x2, 0x650, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x651, 0x652, 0x5, 0x12a, 
    0x96, 0x2, 0x652, 0x111, 0x3, 0x2, 0x2, 0x2, 0x653, 0x654, 0x5, 0x12a, 
    0x96, 0x2, 0x654, 0x113, 0x3, 0x2, 0x2, 0x2, 0x655, 0x656, 0x5, 0x12a, 
    0x96, 0x2, 0x656, 0x115, 0x3, 0x2, 0x2, 0x2, 0x657, 0x658, 0x5, 0x12a, 
    0x96, 0x2, 0x658, 0x117, 0x3, 0x2, 0x2, 0x2, 0x659, 0x65a, 0x5, 0x12a, 
    0x96, 0x2, 0x65a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 0x5, 0x12a, 
    0x96, 0x2, 0x65c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65e, 0x5, 0x12a, 
    0x96, 0x2, 0x65e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x661, 0x7, 0x13, 
    0x2, 0x2, 0x660, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x660, 0x661, 0x3, 0x2, 
    0x2, 0x2, 0x661, 0x662, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 0x5, 0x12c, 
    0x97, 0x2, 0x663, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x664, 0x665, 0x5, 0x12a, 
    0x96, 0x2, 0x665, 0x121, 0x3, 0x2, 0x2, 0x2, 0x666, 0x667, 0x5, 0x12a, 
    0x96, 0x2, 0x667, 0x123, 0x3, 0x2, 0x2, 0x2, 0x668, 0x669, 0x5, 0x12a, 
    0x96, 0x2, 0x669, 0x125, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 0x5, 0x12a, 
    0x96, 0x2, 0x66b, 0x127, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x66d, 0x5, 0x12a, 
    0x96, 0x2, 0x66d, 0x129, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x678, 0x7, 0x168, 
    0x2, 0x2, 0x66f, 0x671, 0x7, 0x16c, 0x2, 0x2, 0x670, 0x66f, 0x3, 0x2, 
    0x2, 0x2, 0x670, 0x671, 0x3, 0x2, 0x2, 0x2, 0x671, 0x672, 0x3, 0x2, 
    0x2, 0x2, 0x672, 0x678, 0x5, 0xd2, 0x6a, 0x2, 0x673, 0x678, 0x5, 0xe0, 
    0x71, 0x2, 0x674, 0x678, 0x5, 0xde, 0x70, 0x2, 0x675, 0x678, 0x5, 0xb4, 
    0x5b, 0x2, 0x676, 0x678, 0x7, 0x165, 0x2, 0x2, 0x677, 0x66e, 0x3, 0x2, 
    0x2, 0x2, 0x677, 0x670, 0x3, 0x2, 0x2, 0x2, 0x677, 0x673, 0x3, 0x2, 
    0x2, 0x2, 0x677, 0x674, 0x3, 0x2, 0x2, 0x2, 0x677, 0x675, 0x3, 0x2, 
    0x2, 0x2, 0x677, 0x676, 0x3, 0x2, 0x2, 0x2, 0x678, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x679, 0x67d, 0x7, 0x168, 0x2, 0x2, 0x67a, 0x67d, 0x5, 0xd2, 
    0x6a, 0x2, 0x67b, 0x67d, 0x5, 0xde, 0x70, 0x2, 0x67c, 0x679, 0x3, 0x2, 
    0x2, 0x2, 0x67c, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x67c, 0x67b, 0x3, 0x2, 
    0x2, 0x2, 0x67d, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x67f, 0x9, 0x19, 
    0x2, 0x2, 0x67f, 0x12f, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x132, 0x13b, 0x143, 
    0x14b, 0x150, 0x156, 0x159, 0x15d, 0x161, 0x164, 0x168, 0x16c, 0x170, 
    0x174, 0x178, 0x17b, 0x17f, 0x183, 0x188, 0x18f, 0x192, 0x195, 0x198, 
    0x19c, 0x1a2, 0x1a5, 0x1a8, 0x1aa, 0x1ad, 0x1b0, 0x1bc, 0x1c1, 0x1cd, 
    0x1d2, 0x1d7, 0x1e1, 0x1e7, 0x1ec, 0x1f7, 0x200, 0x206, 0x20a, 0x20f, 
    0x216, 0x21a, 0x21c, 0x220, 0x224, 0x228, 0x235, 0x240, 0x24b, 0x256, 
    0x25c, 0x25f, 0x262, 0x268, 0x26c, 0x276, 0x27c, 0x280, 0x283, 0x288, 
    0x28a, 0x292, 0x297, 0x29e, 0x2a1, 0x2a8, 0x2ab, 0x2b2, 0x2b5, 0x2bc, 
    0x2bf, 0x2c8, 0x2cb, 0x2d4, 0x2d7, 0x2de, 0x2e2, 0x2e5, 0x2e9, 0x2ed, 
    0x2f1, 0x2f8, 0x2ff, 0x302, 0x306, 0x308, 0x30e, 0x311, 0x321, 0x324, 
    0x32b, 0x330, 0x337, 0x340, 0x34a, 0x359, 0x360, 0x368, 0x36e, 0x374, 
    0x383, 0x389, 0x38c, 0x3a0, 0x3a6, 0x3ab, 0x3ad, 0x3b5, 0x3bb, 0x3be, 
    0x3c6, 0x3cd, 0x3d3, 0x3d8, 0x3da, 0x3e2, 0x3f1, 0x3f6, 0x3f9, 0x3fe, 
    0x403, 0x406, 0x40a, 0x424, 0x427, 0x42e, 0x435, 0x437, 0x43d, 0x446, 
    0x44c, 0x454, 0x457, 0x45b, 0x460, 0x468, 0x46e, 0x475, 0x478, 0x47e, 
    0x480, 0x487, 0x48d, 0x494, 0x49b, 0x49e, 0x4a1, 0x4a6, 0x4b1, 0x4b5, 
    0x4ba, 0x4c2, 0x4c8, 0x4cf, 0x4d2, 0x4d8, 0x4da, 0x4e1, 0x4e7, 0x4ee, 
    0x4f6, 0x4f9, 0x4fd, 0x500, 0x504, 0x50c, 0x50f, 0x512, 0x517, 0x523, 
    0x527, 0x52b, 0x52f, 0x538, 0x53c, 0x540, 0x545, 0x549, 0x551, 0x55f, 
    0x564, 0x567, 0x56c, 0x570, 0x575, 0x57a, 0x57d, 0x580, 0x583, 0x588, 
    0x58a, 0x594, 0x59e, 0x5a0, 0x5a6, 0x5b0, 0x5b7, 0x5c4, 0x5d8, 0x5de, 
    0x5e2, 0x5eb, 0x5ee, 0x5f2, 0x5f6, 0x5f8, 0x5ff, 0x60b, 0x613, 0x635, 
    0x660, 0x670, 0x677, 0x67c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

sqliParser::Initializer sqliParser::_init;
