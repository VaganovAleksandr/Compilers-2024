
// Generated from Grammar.g4 by ANTLR 4.13.1


#include "GrammarListener.h"
#include "GrammarVisitor.h"

#include "GrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GrammarParserStaticData final {
  GrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarParserStaticData(const GrammarParserStaticData&) = delete;
  GrammarParserStaticData(GrammarParserStaticData&&) = delete;
  GrammarParserStaticData& operator=(const GrammarParserStaticData&) = delete;
  GrammarParserStaticData& operator=(GrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GrammarParserStaticData *grammarParserStaticData = nullptr;

void grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrammarParserStaticData>(
    std::vector<std::string>{
      "prog", "base_type", "variable_declaration", "variable_definition", 
      "variable_declaration_definition", "print", "function", "if_statement", 
      "else_statement", "statement", "expression"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'()'", "'{'", "'}'", "'bool'", "'void'", "';'", 
      "'='", "'print'", "'('", "')'", "'if'", "'else'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "NEWLINE", 
      "SPACE", "VARIABLE_NAME", "INTEGER", "UNARY_OPERATOR", "BINARY_OPERATOR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,147,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,0,1,0,1,0,5,0,28,8,0,10,0,12,
  	0,31,9,0,1,0,1,0,5,0,35,8,0,10,0,12,0,38,9,0,5,0,40,8,0,10,0,12,0,43,
  	9,0,1,0,1,0,1,1,1,1,1,1,3,1,50,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,5,7,75,8,7,
  	10,7,12,7,78,9,7,1,7,1,7,5,7,82,8,7,10,7,12,7,85,9,7,1,8,5,8,88,8,8,10,
  	8,12,8,91,9,8,1,8,1,8,5,8,95,8,8,10,8,12,8,98,9,8,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,5,9,109,8,9,10,9,12,9,112,9,9,1,9,1,9,1,9,1,9,5,9,118,
  	8,9,10,9,12,9,121,9,9,1,9,3,9,124,8,9,1,9,1,9,1,9,3,9,129,8,9,1,10,1,
  	10,3,10,133,8,10,1,10,1,10,3,10,137,8,10,1,10,1,10,1,10,5,10,142,8,10,
  	10,10,12,10,145,9,10,1,10,0,1,20,11,0,2,4,6,8,10,12,14,16,18,20,0,0,154,
  	0,22,1,0,0,0,2,49,1,0,0,0,4,51,1,0,0,0,6,55,1,0,0,0,8,60,1,0,0,0,10,66,
  	1,0,0,0,12,71,1,0,0,0,14,76,1,0,0,0,16,89,1,0,0,0,18,128,1,0,0,0,20,136,
  	1,0,0,0,22,23,5,1,0,0,23,24,5,2,0,0,24,25,5,3,0,0,25,29,5,4,0,0,26,28,
  	5,15,0,0,27,26,1,0,0,0,28,31,1,0,0,0,29,27,1,0,0,0,29,30,1,0,0,0,30,41,
  	1,0,0,0,31,29,1,0,0,0,32,36,3,18,9,0,33,35,5,15,0,0,34,33,1,0,0,0,35,
  	38,1,0,0,0,36,34,1,0,0,0,36,37,1,0,0,0,37,40,1,0,0,0,38,36,1,0,0,0,39,
  	32,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,44,1,0,0,0,43,
  	41,1,0,0,0,44,45,5,5,0,0,45,1,1,0,0,0,46,50,5,1,0,0,47,50,5,6,0,0,48,
  	50,5,7,0,0,49,46,1,0,0,0,49,47,1,0,0,0,49,48,1,0,0,0,50,3,1,0,0,0,51,
  	52,3,2,1,0,52,53,5,17,0,0,53,54,5,8,0,0,54,5,1,0,0,0,55,56,5,17,0,0,56,
  	57,5,9,0,0,57,58,3,20,10,0,58,59,5,8,0,0,59,7,1,0,0,0,60,61,3,2,1,0,61,
  	62,5,17,0,0,62,63,5,9,0,0,63,64,3,20,10,0,64,65,5,8,0,0,65,9,1,0,0,0,
  	66,67,5,10,0,0,67,68,5,11,0,0,68,69,3,20,10,0,69,70,5,12,0,0,70,11,1,
  	0,0,0,71,72,3,10,5,0,72,13,1,0,0,0,73,75,5,15,0,0,74,73,1,0,0,0,75,78,
  	1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,79,1,0,0,0,78,76,1,0,0,0,79,83,
  	3,18,9,0,80,82,5,15,0,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,
  	84,1,0,0,0,84,15,1,0,0,0,85,83,1,0,0,0,86,88,5,15,0,0,87,86,1,0,0,0,88,
  	91,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,92,1,0,0,0,91,89,1,0,0,0,92,
  	96,3,18,9,0,93,95,5,15,0,0,94,93,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,
  	96,97,1,0,0,0,97,17,1,0,0,0,98,96,1,0,0,0,99,129,3,4,2,0,100,129,3,6,
  	3,0,101,129,3,8,4,0,102,103,5,13,0,0,103,104,5,11,0,0,104,105,3,20,10,
  	0,105,106,5,12,0,0,106,110,5,4,0,0,107,109,3,14,7,0,108,107,1,0,0,0,109,
  	112,1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,0,111,113,1,0,0,0,112,110,1,
  	0,0,0,113,123,5,5,0,0,114,115,5,14,0,0,115,119,5,4,0,0,116,118,3,16,8,
  	0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,
  	122,1,0,0,0,121,119,1,0,0,0,122,124,5,5,0,0,123,114,1,0,0,0,123,124,1,
  	0,0,0,124,129,1,0,0,0,125,126,3,12,6,0,126,127,5,8,0,0,127,129,1,0,0,
  	0,128,99,1,0,0,0,128,100,1,0,0,0,128,101,1,0,0,0,128,102,1,0,0,0,128,
  	125,1,0,0,0,129,19,1,0,0,0,130,132,6,10,-1,0,131,133,5,19,0,0,132,131,
  	1,0,0,0,132,133,1,0,0,0,133,134,1,0,0,0,134,137,5,18,0,0,135,137,5,17,
  	0,0,136,130,1,0,0,0,136,135,1,0,0,0,137,143,1,0,0,0,138,139,10,3,0,0,
  	139,140,5,20,0,0,140,142,3,20,10,4,141,138,1,0,0,0,142,145,1,0,0,0,143,
  	141,1,0,0,0,143,144,1,0,0,0,144,21,1,0,0,0,145,143,1,0,0,0,15,29,36,41,
  	49,76,83,89,96,110,119,123,128,132,136,143
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarParserStaticData = staticData.release();
}

}

GrammarParser::GrammarParser(TokenStream *input) : GrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GrammarParser::GrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *grammarParserStaticData->atn, grammarParserStaticData->decisionToDFA, grammarParserStaticData->sharedContextCache, options);
}

GrammarParser::~GrammarParser() {
  delete _interpreter;
}

const atn::ATN& GrammarParser::getATN() const {
  return *grammarParserStaticData->atn;
}

std::string GrammarParser::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarParser::getRuleNames() const {
  return grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& GrammarParser::getVocabulary() const {
  return grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrammarParser::getSerializedATN() const {
  return grammarParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

GrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GrammarParser::ProgContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::ProgContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::ProgContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::ProgContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}


size_t GrammarParser::ProgContext::getRuleIndex() const {
  return GrammarParser::RuleProg;
}

void GrammarParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void GrammarParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any GrammarParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ProgContext* GrammarParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammarParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(GrammarParser::T__0);
    setState(23);
    match(GrammarParser::T__1);
    setState(24);
    match(GrammarParser::T__2);
    setState(25);
    match(GrammarParser::T__3);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(26);
      match(GrammarParser::NEWLINE);
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 140482) != 0)) {
      setState(32);
      statement();
      setState(36);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(33);
        match(GrammarParser::NEWLINE);
        setState(38);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
    match(GrammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_typeContext ------------------------------------------------------------------

GrammarParser::Base_typeContext::Base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Base_typeContext::getRuleIndex() const {
  return GrammarParser::RuleBase_type;
}

void GrammarParser::Base_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase_type(this);
}

void GrammarParser::Base_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase_type(this);
}


std::any GrammarParser::Base_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitBase_type(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Base_typeContext* GrammarParser::base_type() {
  Base_typeContext *_localctx = _tracker.createInstance<Base_typeContext>(_ctx, getState());
  enterRule(_localctx, 2, GrammarParser::RuleBase_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(46);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->int_ = match(GrammarParser::T__0);
        break;
      }

      case GrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->bool_ = match(GrammarParser::T__5);
        break;
      }

      case GrammarParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(48);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->void_ = match(GrammarParser::T__6);
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

//----------------- Variable_declarationContext ------------------------------------------------------------------

GrammarParser::Variable_declarationContext::Variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::Variable_declarationContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}

tree::TerminalNode* GrammarParser::Variable_declarationContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}


size_t GrammarParser::Variable_declarationContext::getRuleIndex() const {
  return GrammarParser::RuleVariable_declaration;
}

void GrammarParser::Variable_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declaration(this);
}

void GrammarParser::Variable_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declaration(this);
}


std::any GrammarParser::Variable_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Variable_declarationContext* GrammarParser::variable_declaration() {
  Variable_declarationContext *_localctx = _tracker.createInstance<Variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 4, GrammarParser::RuleVariable_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    base_type();
    setState(52);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->var_name = match(GrammarParser::VARIABLE_NAME);
    setState(53);
    match(GrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_definitionContext ------------------------------------------------------------------

GrammarParser::Variable_definitionContext::Variable_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::Variable_definitionContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::ExpressionContext* GrammarParser::Variable_definitionContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}


size_t GrammarParser::Variable_definitionContext::getRuleIndex() const {
  return GrammarParser::RuleVariable_definition;
}

void GrammarParser::Variable_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_definition(this);
}

void GrammarParser::Variable_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_definition(this);
}


std::any GrammarParser::Variable_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVariable_definition(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Variable_definitionContext* GrammarParser::variable_definition() {
  Variable_definitionContext *_localctx = _tracker.createInstance<Variable_definitionContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammarParser::RuleVariable_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(GrammarParser::VARIABLE_NAME);
    setState(56);
    match(GrammarParser::T__8);
    setState(57);
    expression(0);
    setState(58);
    match(GrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaration_definitionContext ------------------------------------------------------------------

GrammarParser::Variable_declaration_definitionContext::Variable_declaration_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::Variable_declaration_definitionContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}

tree::TerminalNode* GrammarParser::Variable_declaration_definitionContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::ExpressionContext* GrammarParser::Variable_declaration_definitionContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}


size_t GrammarParser::Variable_declaration_definitionContext::getRuleIndex() const {
  return GrammarParser::RuleVariable_declaration_definition;
}

void GrammarParser::Variable_declaration_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declaration_definition(this);
}

void GrammarParser::Variable_declaration_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declaration_definition(this);
}


std::any GrammarParser::Variable_declaration_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration_definition(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Variable_declaration_definitionContext* GrammarParser::variable_declaration_definition() {
  Variable_declaration_definitionContext *_localctx = _tracker.createInstance<Variable_declaration_definitionContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammarParser::RuleVariable_declaration_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    base_type();
    setState(61);
    match(GrammarParser::VARIABLE_NAME);
    setState(62);
    match(GrammarParser::T__8);
    setState(63);
    expression(0);
    setState(64);
    match(GrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

GrammarParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::ExpressionContext* GrammarParser::PrintContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}


size_t GrammarParser::PrintContext::getRuleIndex() const {
  return GrammarParser::RulePrint;
}

void GrammarParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void GrammarParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any GrammarParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::PrintContext* GrammarParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 10, GrammarParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(GrammarParser::T__9);
    setState(67);
    match(GrammarParser::T__10);
    setState(68);
    expression(0);
    setState(69);
    match(GrammarParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

GrammarParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::PrintContext* GrammarParser::FunctionContext::print() {
  return getRuleContext<GrammarParser::PrintContext>(0);
}


size_t GrammarParser::FunctionContext::getRuleIndex() const {
  return GrammarParser::RuleFunction;
}

void GrammarParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void GrammarParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any GrammarParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::FunctionContext* GrammarParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 12, GrammarParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    print();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

GrammarParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::StatementContext* GrammarParser::If_statementContext::statement() {
  return getRuleContext<GrammarParser::StatementContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::If_statementContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::If_statementContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}


size_t GrammarParser::If_statementContext::getRuleIndex() const {
  return GrammarParser::RuleIf_statement;
}

void GrammarParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void GrammarParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any GrammarParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::If_statementContext* GrammarParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, GrammarParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(73);
      match(GrammarParser::NEWLINE);
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(79);
    statement();
    setState(83);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(80);
        match(GrammarParser::NEWLINE); 
      }
      setState(85);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_statementContext ------------------------------------------------------------------

GrammarParser::Else_statementContext::Else_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::StatementContext* GrammarParser::Else_statementContext::statement() {
  return getRuleContext<GrammarParser::StatementContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::Else_statementContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::Else_statementContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}


size_t GrammarParser::Else_statementContext::getRuleIndex() const {
  return GrammarParser::RuleElse_statement;
}

void GrammarParser::Else_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_statement(this);
}

void GrammarParser::Else_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_statement(this);
}


std::any GrammarParser::Else_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitElse_statement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Else_statementContext* GrammarParser::else_statement() {
  Else_statementContext *_localctx = _tracker.createInstance<Else_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, GrammarParser::RuleElse_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(86);
      match(GrammarParser::NEWLINE);
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
    statement();
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(93);
        match(GrammarParser::NEWLINE); 
      }
      setState(98);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

GrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Variable_declarationContext* GrammarParser::StatementContext::variable_declaration() {
  return getRuleContext<GrammarParser::Variable_declarationContext>(0);
}

GrammarParser::Variable_definitionContext* GrammarParser::StatementContext::variable_definition() {
  return getRuleContext<GrammarParser::Variable_definitionContext>(0);
}

GrammarParser::Variable_declaration_definitionContext* GrammarParser::StatementContext::variable_declaration_definition() {
  return getRuleContext<GrammarParser::Variable_declaration_definitionContext>(0);
}

GrammarParser::ExpressionContext* GrammarParser::StatementContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}

std::vector<GrammarParser::If_statementContext *> GrammarParser::StatementContext::if_statement() {
  return getRuleContexts<GrammarParser::If_statementContext>();
}

GrammarParser::If_statementContext* GrammarParser::StatementContext::if_statement(size_t i) {
  return getRuleContext<GrammarParser::If_statementContext>(i);
}

std::vector<GrammarParser::Else_statementContext *> GrammarParser::StatementContext::else_statement() {
  return getRuleContexts<GrammarParser::Else_statementContext>();
}

GrammarParser::Else_statementContext* GrammarParser::StatementContext::else_statement(size_t i) {
  return getRuleContext<GrammarParser::Else_statementContext>(i);
}

GrammarParser::FunctionContext* GrammarParser::StatementContext::function() {
  return getRuleContext<GrammarParser::FunctionContext>(0);
}


size_t GrammarParser::StatementContext::getRuleIndex() const {
  return GrammarParser::RuleStatement;
}

void GrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void GrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any GrammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::StatementContext* GrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, GrammarParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(99);
      variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      variable_definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(101);
      variable_declaration_definition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(102);
      match(GrammarParser::T__12);
      setState(103);
      match(GrammarParser::T__10);
      setState(104);
      antlrcpp::downCast<StatementContext *>(_localctx)->expr = expression(0);
      setState(105);
      match(GrammarParser::T__11);
      setState(106);
      match(GrammarParser::T__3);
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 173250) != 0)) {
        setState(107);
        if_statement();
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(113);
      match(GrammarParser::T__4);
      setState(123);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::T__13) {
        setState(114);
        match(GrammarParser::T__13);
        setState(115);
        match(GrammarParser::T__3);
        setState(119);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 173250) != 0)) {
          setState(116);
          else_statement();
          setState(121);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(122);
        match(GrammarParser::T__4);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(125);
      function();
      setState(126);
      match(GrammarParser::T__7);
      break;
    }

    default:
      break;
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

GrammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::ExpressionContext::INTEGER() {
  return getToken(GrammarParser::INTEGER, 0);
}

tree::TerminalNode* GrammarParser::ExpressionContext::UNARY_OPERATOR() {
  return getToken(GrammarParser::UNARY_OPERATOR, 0);
}

tree::TerminalNode* GrammarParser::ExpressionContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

tree::TerminalNode* GrammarParser::ExpressionContext::BINARY_OPERATOR() {
  return getToken(GrammarParser::BINARY_OPERATOR, 0);
}

std::vector<GrammarParser::ExpressionContext *> GrammarParser::ExpressionContext::expression() {
  return getRuleContexts<GrammarParser::ExpressionContext>();
}

GrammarParser::ExpressionContext* GrammarParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<GrammarParser::ExpressionContext>(i);
}


size_t GrammarParser::ExpressionContext::getRuleIndex() const {
  return GrammarParser::RuleExpression;
}

void GrammarParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void GrammarParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any GrammarParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


GrammarParser::ExpressionContext* GrammarParser::expression() {
   return expression(0);
}

GrammarParser::ExpressionContext* GrammarParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GrammarParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  GrammarParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, GrammarParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::INTEGER:
      case GrammarParser::UNARY_OPERATOR: {
        setState(132);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::UNARY_OPERATOR) {
          setState(131);
          match(GrammarParser::UNARY_OPERATOR);
        }
        setState(134);
        match(GrammarParser::INTEGER);
        break;
      }

      case GrammarParser::VARIABLE_NAME: {
        setState(135);
        match(GrammarParser::VARIABLE_NAME);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        _localctx->expr1 = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(138);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(139);
        match(GrammarParser::BINARY_OPERATOR);
        setState(140);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expr2 = expression(4); 
      }
      setState(145);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool GrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GrammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void GrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grammarParserInitialize();
#else
  ::antlr4::internal::call_once(grammarParserOnceFlag, grammarParserInitialize);
#endif
}
