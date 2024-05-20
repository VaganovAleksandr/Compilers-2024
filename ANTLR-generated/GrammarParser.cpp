
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
      "pre_main", "prog", "base_type", "function_declaration", "array_type", 
      "parameter", "type", "parameter_list", "method", "class_field", "class_statement", 
      "class", "variable_declaration", "variable_definition", "variable_declaration_definition", 
      "print", "function", "if_statement", "else_statement", "statement", 
      "expression"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'()'", "'{'", "'}'", "'bool'", "'void'", "'string'", 
      "'func'", "'('", "')'", "'['", "']'", "','", "'method'", "';'", "'class'", 
      "'='", "'print'", "'if'", "'else'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "NEWLINE", "SPACE", "VARIABLE_NAME", "INTEGER", 
      "SCHAR", "STRING", "UNARY_OPERATOR", "BINARY_OPERATOR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,310,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,3,0,45,8,0,1,1,1,1,5,1,49,8,1,10,1,12,1,52,9,1,5,1,54,8,1,10,1,12,1,
  	57,9,1,1,1,1,1,1,1,1,1,1,1,5,1,64,8,1,10,1,12,1,67,9,1,1,1,1,1,5,1,71,
  	8,1,10,1,12,1,74,9,1,5,1,76,8,1,10,1,12,1,79,9,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,3,2,87,8,2,1,3,1,3,1,3,1,3,1,3,3,3,94,8,3,1,3,1,3,1,3,5,3,99,8,3,
  	10,3,12,3,102,9,3,1,3,1,3,5,3,106,8,3,10,3,12,3,109,9,3,5,3,111,8,3,10,
  	3,12,3,114,9,3,1,3,1,3,5,3,118,8,3,10,3,12,3,121,9,3,1,4,1,4,1,4,1,4,
  	1,4,1,5,1,5,1,5,1,6,1,6,3,6,133,8,6,1,7,1,7,1,7,5,7,138,8,7,10,7,12,7,
  	141,9,7,1,8,1,8,1,8,1,8,1,8,3,8,148,8,8,1,8,1,8,1,8,5,8,153,8,8,10,8,
  	12,8,156,9,8,1,8,1,8,1,8,5,8,161,8,8,10,8,12,8,164,9,8,1,8,1,8,5,8,168,
  	8,8,10,8,12,8,171,9,8,1,9,1,9,1,9,1,9,1,10,1,10,3,10,179,8,10,1,11,1,
  	11,1,11,1,11,5,11,185,8,11,10,11,12,11,188,9,11,1,11,1,11,1,11,5,11,193,
  	8,11,10,11,12,11,196,9,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,5,16,225,8,16,10,16,12,16,228,9,16,1,16,3,16,231,
  	8,16,1,17,5,17,234,8,17,10,17,12,17,237,9,17,1,17,1,17,5,17,241,8,17,
  	10,17,12,17,244,9,17,1,18,5,18,247,8,18,10,18,12,18,250,9,18,1,18,1,18,
  	5,18,254,8,18,10,18,12,18,257,9,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,5,19,268,8,19,10,19,12,19,271,9,19,1,19,1,19,1,19,1,19,5,19,
  	277,8,19,10,19,12,19,280,9,19,1,19,3,19,283,8,19,1,19,1,19,1,19,3,19,
  	288,8,19,1,20,1,20,1,20,3,20,293,8,20,1,20,1,20,3,20,297,8,20,1,20,3,
  	20,300,8,20,1,20,1,20,1,20,5,20,305,8,20,10,20,12,20,308,9,20,1,20,0,
  	1,40,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,0,0,
  	329,0,44,1,0,0,0,2,55,1,0,0,0,4,86,1,0,0,0,6,88,1,0,0,0,8,122,1,0,0,0,
  	10,127,1,0,0,0,12,132,1,0,0,0,14,134,1,0,0,0,16,142,1,0,0,0,18,172,1,
  	0,0,0,20,178,1,0,0,0,22,180,1,0,0,0,24,200,1,0,0,0,26,204,1,0,0,0,28,
  	209,1,0,0,0,30,215,1,0,0,0,32,230,1,0,0,0,34,235,1,0,0,0,36,248,1,0,0,
  	0,38,287,1,0,0,0,40,299,1,0,0,0,42,45,3,6,3,0,43,45,3,22,11,0,44,42,1,
  	0,0,0,44,43,1,0,0,0,45,1,1,0,0,0,46,50,3,0,0,0,47,49,5,22,0,0,48,47,1,
  	0,0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,54,1,0,0,0,52,50,1,
  	0,0,0,53,46,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,58,1,
  	0,0,0,57,55,1,0,0,0,58,59,5,1,0,0,59,60,5,2,0,0,60,61,5,3,0,0,61,65,5,
  	4,0,0,62,64,5,22,0,0,63,62,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,
  	1,0,0,0,66,77,1,0,0,0,67,65,1,0,0,0,68,72,3,38,19,0,69,71,5,22,0,0,70,
  	69,1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,76,1,0,0,0,74,
  	72,1,0,0,0,75,68,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,
  	80,1,0,0,0,79,77,1,0,0,0,80,81,5,5,0,0,81,3,1,0,0,0,82,87,5,1,0,0,83,
  	87,5,6,0,0,84,87,5,7,0,0,85,87,5,8,0,0,86,82,1,0,0,0,86,83,1,0,0,0,86,
  	84,1,0,0,0,86,85,1,0,0,0,87,5,1,0,0,0,88,89,5,9,0,0,89,90,3,12,6,0,90,
  	91,5,24,0,0,91,93,5,10,0,0,92,94,3,14,7,0,93,92,1,0,0,0,93,94,1,0,0,0,
  	94,95,1,0,0,0,95,96,5,11,0,0,96,100,5,4,0,0,97,99,5,22,0,0,98,97,1,0,
  	0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,112,1,0,0,0,102,
  	100,1,0,0,0,103,107,3,38,19,0,104,106,5,22,0,0,105,104,1,0,0,0,106,109,
  	1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,
  	0,110,103,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,
  	115,1,0,0,0,114,112,1,0,0,0,115,119,5,5,0,0,116,118,5,22,0,0,117,116,
  	1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,7,1,0,0,0,
  	121,119,1,0,0,0,122,123,3,4,2,0,123,124,5,12,0,0,124,125,3,40,20,0,125,
  	126,5,13,0,0,126,9,1,0,0,0,127,128,3,12,6,0,128,129,5,24,0,0,129,11,1,
  	0,0,0,130,133,3,4,2,0,131,133,3,8,4,0,132,130,1,0,0,0,132,131,1,0,0,0,
  	133,13,1,0,0,0,134,139,3,10,5,0,135,136,5,14,0,0,136,138,3,10,5,0,137,
  	135,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,15,1,
  	0,0,0,141,139,1,0,0,0,142,143,5,15,0,0,143,144,3,12,6,0,144,145,5,24,
  	0,0,145,147,5,10,0,0,146,148,3,14,7,0,147,146,1,0,0,0,147,148,1,0,0,0,
  	148,149,1,0,0,0,149,150,5,11,0,0,150,154,5,4,0,0,151,153,5,22,0,0,152,
  	151,1,0,0,0,153,156,1,0,0,0,154,152,1,0,0,0,154,155,1,0,0,0,155,162,1,
  	0,0,0,156,154,1,0,0,0,157,158,3,38,19,0,158,159,5,22,0,0,159,161,1,0,
  	0,0,160,157,1,0,0,0,161,164,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,
  	165,1,0,0,0,164,162,1,0,0,0,165,169,5,5,0,0,166,168,5,22,0,0,167,166,
  	1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,17,1,0,0,
  	0,171,169,1,0,0,0,172,173,3,12,6,0,173,174,5,24,0,0,174,175,5,16,0,0,
  	175,19,1,0,0,0,176,179,3,16,8,0,177,179,3,18,9,0,178,176,1,0,0,0,178,
  	177,1,0,0,0,179,21,1,0,0,0,180,181,5,17,0,0,181,182,5,24,0,0,182,186,
  	5,4,0,0,183,185,5,22,0,0,184,183,1,0,0,0,185,188,1,0,0,0,186,184,1,0,
  	0,0,186,187,1,0,0,0,187,194,1,0,0,0,188,186,1,0,0,0,189,190,3,20,10,0,
  	190,191,5,22,0,0,191,193,1,0,0,0,192,189,1,0,0,0,193,196,1,0,0,0,194,
  	192,1,0,0,0,194,195,1,0,0,0,195,197,1,0,0,0,196,194,1,0,0,0,197,198,5,
  	5,0,0,198,199,5,16,0,0,199,23,1,0,0,0,200,201,3,12,6,0,201,202,5,24,0,
  	0,202,203,5,16,0,0,203,25,1,0,0,0,204,205,5,24,0,0,205,206,5,18,0,0,206,
  	207,3,40,20,0,207,208,5,16,0,0,208,27,1,0,0,0,209,210,3,12,6,0,210,211,
  	5,24,0,0,211,212,5,18,0,0,212,213,3,40,20,0,213,214,5,16,0,0,214,29,1,
  	0,0,0,215,216,5,19,0,0,216,217,5,10,0,0,217,218,3,40,20,0,218,219,5,11,
  	0,0,219,31,1,0,0,0,220,231,3,30,15,0,221,222,5,24,0,0,222,226,5,10,0,
  	0,223,225,3,40,20,0,224,223,1,0,0,0,225,228,1,0,0,0,226,224,1,0,0,0,226,
  	227,1,0,0,0,227,229,1,0,0,0,228,226,1,0,0,0,229,231,5,11,0,0,230,220,
  	1,0,0,0,230,221,1,0,0,0,231,33,1,0,0,0,232,234,5,22,0,0,233,232,1,0,0,
  	0,234,237,1,0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,238,1,0,0,0,237,
  	235,1,0,0,0,238,242,3,38,19,0,239,241,5,22,0,0,240,239,1,0,0,0,241,244,
  	1,0,0,0,242,240,1,0,0,0,242,243,1,0,0,0,243,35,1,0,0,0,244,242,1,0,0,
  	0,245,247,5,22,0,0,246,245,1,0,0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,
  	249,1,0,0,0,249,251,1,0,0,0,250,248,1,0,0,0,251,255,3,38,19,0,252,254,
  	5,22,0,0,253,252,1,0,0,0,254,257,1,0,0,0,255,253,1,0,0,0,255,256,1,0,
  	0,0,256,37,1,0,0,0,257,255,1,0,0,0,258,288,3,24,12,0,259,288,3,26,13,
  	0,260,288,3,28,14,0,261,262,5,20,0,0,262,263,5,10,0,0,263,264,3,40,20,
  	0,264,265,5,11,0,0,265,269,5,4,0,0,266,268,3,34,17,0,267,266,1,0,0,0,
  	268,271,1,0,0,0,269,267,1,0,0,0,269,270,1,0,0,0,270,272,1,0,0,0,271,269,
  	1,0,0,0,272,282,5,5,0,0,273,274,5,21,0,0,274,278,5,4,0,0,275,277,3,36,
  	18,0,276,275,1,0,0,0,277,280,1,0,0,0,278,276,1,0,0,0,278,279,1,0,0,0,
  	279,281,1,0,0,0,280,278,1,0,0,0,281,283,5,5,0,0,282,273,1,0,0,0,282,283,
  	1,0,0,0,283,288,1,0,0,0,284,285,3,32,16,0,285,286,5,16,0,0,286,288,1,
  	0,0,0,287,258,1,0,0,0,287,259,1,0,0,0,287,260,1,0,0,0,287,261,1,0,0,0,
  	287,284,1,0,0,0,288,39,1,0,0,0,289,290,6,20,-1,0,290,300,5,27,0,0,291,
  	293,5,28,0,0,292,291,1,0,0,0,292,293,1,0,0,0,293,294,1,0,0,0,294,300,
  	5,25,0,0,295,297,5,28,0,0,296,295,1,0,0,0,296,297,1,0,0,0,297,298,1,0,
  	0,0,298,300,5,24,0,0,299,289,1,0,0,0,299,292,1,0,0,0,299,296,1,0,0,0,
  	300,306,1,0,0,0,301,302,10,4,0,0,302,303,5,29,0,0,303,305,3,40,20,5,304,
  	301,1,0,0,0,305,308,1,0,0,0,306,304,1,0,0,0,306,307,1,0,0,0,307,41,1,
  	0,0,0,308,306,1,0,0,0,35,44,50,55,65,72,77,86,93,100,107,112,119,132,
  	139,147,154,162,169,178,186,194,226,230,235,242,248,255,269,278,282,287,
  	292,296,299,306
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


//----------------- Pre_mainContext ------------------------------------------------------------------

GrammarParser::Pre_mainContext::Pre_mainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Function_declarationContext* GrammarParser::Pre_mainContext::function_declaration() {
  return getRuleContext<GrammarParser::Function_declarationContext>(0);
}

GrammarParser::ClassContext* GrammarParser::Pre_mainContext::class_() {
  return getRuleContext<GrammarParser::ClassContext>(0);
}


size_t GrammarParser::Pre_mainContext::getRuleIndex() const {
  return GrammarParser::RulePre_main;
}

void GrammarParser::Pre_mainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPre_main(this);
}

void GrammarParser::Pre_mainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPre_main(this);
}


std::any GrammarParser::Pre_mainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPre_main(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Pre_mainContext* GrammarParser::pre_main() {
  Pre_mainContext *_localctx = _tracker.createInstance<Pre_mainContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammarParser::RulePre_main);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        function_declaration();
        break;
      }

      case GrammarParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(43);
        class_();
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

//----------------- ProgContext ------------------------------------------------------------------

GrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrammarParser::Pre_mainContext *> GrammarParser::ProgContext::pre_main() {
  return getRuleContexts<GrammarParser::Pre_mainContext>();
}

GrammarParser::Pre_mainContext* GrammarParser::ProgContext::pre_main(size_t i) {
  return getRuleContext<GrammarParser::Pre_mainContext>(i);
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
  enterRule(_localctx, 2, GrammarParser::RuleProg);
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
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::T__8

    || _la == GrammarParser::T__16) {
      setState(46);
      pre_main();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(47);
        match(GrammarParser::NEWLINE);
        setState(52);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
    match(GrammarParser::T__0);
    setState(59);
    match(GrammarParser::T__1);
    setState(60);
    match(GrammarParser::T__2);
    setState(61);
    match(GrammarParser::T__3);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(62);
      match(GrammarParser::NEWLINE);
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18350530) != 0)) {
      setState(68);
      statement();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(69);
        match(GrammarParser::NEWLINE);
        setState(74);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
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
  enterRule(_localctx, 4, GrammarParser::RuleBase_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(82);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->int_ = match(GrammarParser::T__0);
        break;
      }

      case GrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(83);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->bool_ = match(GrammarParser::T__5);
        break;
      }

      case GrammarParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(84);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->void_ = match(GrammarParser::T__6);
        break;
      }

      case GrammarParser::T__7: {
        enterOuterAlt(_localctx, 4);
        setState(85);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->str = match(GrammarParser::T__7);
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

//----------------- Function_declarationContext ------------------------------------------------------------------

GrammarParser::Function_declarationContext::Function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::Function_declarationContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::Function_declarationContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::Parameter_listContext* GrammarParser::Function_declarationContext::parameter_list() {
  return getRuleContext<GrammarParser::Parameter_listContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::Function_declarationContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::Function_declarationContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::Function_declarationContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::Function_declarationContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}


size_t GrammarParser::Function_declarationContext::getRuleIndex() const {
  return GrammarParser::RuleFunction_declaration;
}

void GrammarParser::Function_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declaration(this);
}

void GrammarParser::Function_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declaration(this);
}


std::any GrammarParser::Function_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunction_declaration(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Function_declarationContext* GrammarParser::function_declaration() {
  Function_declarationContext *_localctx = _tracker.createInstance<Function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammarParser::RuleFunction_declaration);
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
    setState(88);
    match(GrammarParser::T__8);
    setState(89);
    type();
    setState(90);
    match(GrammarParser::VARIABLE_NAME);
    setState(91);
    match(GrammarParser::T__9);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 450) != 0)) {
      setState(92);
      parameter_list();
    }
    setState(95);
    match(GrammarParser::T__10);
    setState(96);
    match(GrammarParser::T__3);
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(97);
      match(GrammarParser::NEWLINE);
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18350530) != 0)) {
      setState(103);
      statement();
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(104);
        match(GrammarParser::NEWLINE);
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(115);
    match(GrammarParser::T__4);
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(116);
        match(GrammarParser::NEWLINE); 
      }
      setState(121);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

GrammarParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::Array_typeContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}

GrammarParser::ExpressionContext* GrammarParser::Array_typeContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}


size_t GrammarParser::Array_typeContext::getRuleIndex() const {
  return GrammarParser::RuleArray_type;
}

void GrammarParser::Array_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_type(this);
}

void GrammarParser::Array_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_type(this);
}


std::any GrammarParser::Array_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitArray_type(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Array_typeContext* GrammarParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammarParser::RuleArray_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    base_type();
    setState(123);
    match(GrammarParser::T__11);
    setState(124);
    expression(0);
    setState(125);
    match(GrammarParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

GrammarParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::ParameterContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::ParameterContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}


size_t GrammarParser::ParameterContext::getRuleIndex() const {
  return GrammarParser::RuleParameter;
}

void GrammarParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void GrammarParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any GrammarParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ParameterContext* GrammarParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, GrammarParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    type();
    setState(128);
    match(GrammarParser::VARIABLE_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

GrammarParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::TypeContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}

GrammarParser::Array_typeContext* GrammarParser::TypeContext::array_type() {
  return getRuleContext<GrammarParser::Array_typeContext>(0);
}


size_t GrammarParser::TypeContext::getRuleIndex() const {
  return GrammarParser::RuleType;
}

void GrammarParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void GrammarParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any GrammarParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::TypeContext* GrammarParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, GrammarParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(132);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      base_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      array_type();
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

//----------------- Parameter_listContext ------------------------------------------------------------------

GrammarParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrammarParser::ParameterContext *> GrammarParser::Parameter_listContext::parameter() {
  return getRuleContexts<GrammarParser::ParameterContext>();
}

GrammarParser::ParameterContext* GrammarParser::Parameter_listContext::parameter(size_t i) {
  return getRuleContext<GrammarParser::ParameterContext>(i);
}


size_t GrammarParser::Parameter_listContext::getRuleIndex() const {
  return GrammarParser::RuleParameter_list;
}

void GrammarParser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void GrammarParser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}


std::any GrammarParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Parameter_listContext* GrammarParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 14, GrammarParser::RuleParameter_list);
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
    setState(134);
    parameter();
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::T__13) {
      setState(135);
      match(GrammarParser::T__13);
      setState(136);
      parameter();
      setState(141);
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

//----------------- MethodContext ------------------------------------------------------------------

GrammarParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::MethodContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::MethodContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::Parameter_listContext* GrammarParser::MethodContext::parameter_list() {
  return getRuleContext<GrammarParser::Parameter_listContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::MethodContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::MethodContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::MethodContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::MethodContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}


size_t GrammarParser::MethodContext::getRuleIndex() const {
  return GrammarParser::RuleMethod;
}

void GrammarParser::MethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod(this);
}

void GrammarParser::MethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod(this);
}


std::any GrammarParser::MethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitMethod(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::MethodContext* GrammarParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 16, GrammarParser::RuleMethod);
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
    setState(142);
    match(GrammarParser::T__14);
    setState(143);
    type();
    setState(144);
    match(GrammarParser::VARIABLE_NAME);
    setState(145);
    match(GrammarParser::T__9);
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 450) != 0)) {
      setState(146);
      parameter_list();
    }
    setState(149);
    match(GrammarParser::T__10);
    setState(150);
    match(GrammarParser::T__3);
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(151);
      match(GrammarParser::NEWLINE);
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18350530) != 0)) {
      setState(157);
      statement();
      setState(158);
      match(GrammarParser::NEWLINE);
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(165);
    match(GrammarParser::T__4);
    setState(169);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(166);
        match(GrammarParser::NEWLINE); 
      }
      setState(171);
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

//----------------- Class_fieldContext ------------------------------------------------------------------

GrammarParser::Class_fieldContext::Class_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::Class_fieldContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::Class_fieldContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}


size_t GrammarParser::Class_fieldContext::getRuleIndex() const {
  return GrammarParser::RuleClass_field;
}

void GrammarParser::Class_fieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_field(this);
}

void GrammarParser::Class_fieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_field(this);
}


std::any GrammarParser::Class_fieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitClass_field(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Class_fieldContext* GrammarParser::class_field() {
  Class_fieldContext *_localctx = _tracker.createInstance<Class_fieldContext>(_ctx, getState());
  enterRule(_localctx, 18, GrammarParser::RuleClass_field);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    type();
    setState(173);
    match(GrammarParser::VARIABLE_NAME);
    setState(174);
    match(GrammarParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_statementContext ------------------------------------------------------------------

GrammarParser::Class_statementContext::Class_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::MethodContext* GrammarParser::Class_statementContext::method() {
  return getRuleContext<GrammarParser::MethodContext>(0);
}

GrammarParser::Class_fieldContext* GrammarParser::Class_statementContext::class_field() {
  return getRuleContext<GrammarParser::Class_fieldContext>(0);
}


size_t GrammarParser::Class_statementContext::getRuleIndex() const {
  return GrammarParser::RuleClass_statement;
}

void GrammarParser::Class_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_statement(this);
}

void GrammarParser::Class_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_statement(this);
}


std::any GrammarParser::Class_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitClass_statement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Class_statementContext* GrammarParser::class_statement() {
  Class_statementContext *_localctx = _tracker.createInstance<Class_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, GrammarParser::RuleClass_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(176);
        method();
        break;
      }

      case GrammarParser::T__0:
      case GrammarParser::T__5:
      case GrammarParser::T__6:
      case GrammarParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(177);
        class_field();
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

//----------------- ClassContext ------------------------------------------------------------------

GrammarParser::ClassContext::ClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::ClassContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

std::vector<tree::TerminalNode *> GrammarParser::ClassContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::ClassContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::Class_statementContext *> GrammarParser::ClassContext::class_statement() {
  return getRuleContexts<GrammarParser::Class_statementContext>();
}

GrammarParser::Class_statementContext* GrammarParser::ClassContext::class_statement(size_t i) {
  return getRuleContext<GrammarParser::Class_statementContext>(i);
}


size_t GrammarParser::ClassContext::getRuleIndex() const {
  return GrammarParser::RuleClass;
}

void GrammarParser::ClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass(this);
}

void GrammarParser::ClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass(this);
}


std::any GrammarParser::ClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitClass(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ClassContext* GrammarParser::class_() {
  ClassContext *_localctx = _tracker.createInstance<ClassContext>(_ctx, getState());
  enterRule(_localctx, 22, GrammarParser::RuleClass);
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
    setState(180);
    match(GrammarParser::T__16);
    setState(181);
    match(GrammarParser::VARIABLE_NAME);
    setState(182);
    match(GrammarParser::T__3);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(183);
      match(GrammarParser::NEWLINE);
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33218) != 0)) {
      setState(189);
      class_statement();
      setState(190);
      match(GrammarParser::NEWLINE);
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197);
    match(GrammarParser::T__4);
    setState(198);
    match(GrammarParser::T__15);
   
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

GrammarParser::TypeContext* GrammarParser::Variable_declarationContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
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
  enterRule(_localctx, 24, GrammarParser::RuleVariable_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    type();
    setState(201);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->var_name = match(GrammarParser::VARIABLE_NAME);
    setState(202);
    match(GrammarParser::T__15);
   
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
  enterRule(_localctx, 26, GrammarParser::RuleVariable_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(GrammarParser::VARIABLE_NAME);
    setState(205);
    match(GrammarParser::T__17);
    setState(206);
    expression(0);
    setState(207);
    match(GrammarParser::T__15);
   
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

GrammarParser::TypeContext* GrammarParser::Variable_declaration_definitionContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
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
  enterRule(_localctx, 28, GrammarParser::RuleVariable_declaration_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    type();
    setState(210);
    match(GrammarParser::VARIABLE_NAME);
    setState(211);
    match(GrammarParser::T__17);
    setState(212);
    expression(0);
    setState(213);
    match(GrammarParser::T__15);
   
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
  enterRule(_localctx, 30, GrammarParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(GrammarParser::T__18);
    setState(216);
    match(GrammarParser::T__9);
    setState(217);
    expression(0);
    setState(218);
    match(GrammarParser::T__10);
   
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

tree::TerminalNode* GrammarParser::FunctionContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

std::vector<GrammarParser::ExpressionContext *> GrammarParser::FunctionContext::expression() {
  return getRuleContexts<GrammarParser::ExpressionContext>();
}

GrammarParser::ExpressionContext* GrammarParser::FunctionContext::expression(size_t i) {
  return getRuleContext<GrammarParser::ExpressionContext>(i);
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
  enterRule(_localctx, 32, GrammarParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(220);
        print();
        break;
      }

      case GrammarParser::VARIABLE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(221);
        antlrcpp::downCast<FunctionContext *>(_localctx)->name = match(GrammarParser::VARIABLE_NAME);
        setState(222);
        match(GrammarParser::T__9);
        setState(226);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 452984832) != 0)) {
          setState(223);
          expression(0);
          setState(228);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(229);
        match(GrammarParser::T__10);
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
  enterRule(_localctx, 34, GrammarParser::RuleIf_statement);
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
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(232);
      match(GrammarParser::NEWLINE);
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(238);
    statement();
    setState(242);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(239);
        match(GrammarParser::NEWLINE); 
      }
      setState(244);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
  enterRule(_localctx, 36, GrammarParser::RuleElse_statement);
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
    setState(248);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(245);
      match(GrammarParser::NEWLINE);
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(251);
    statement();
    setState(255);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(252);
        match(GrammarParser::NEWLINE); 
      }
      setState(257);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
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
  enterRule(_localctx, 38, GrammarParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(287);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(258);
      variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(259);
      variable_definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(260);
      variable_declaration_definition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(261);
      match(GrammarParser::T__19);
      setState(262);
      match(GrammarParser::T__9);
      setState(263);
      antlrcpp::downCast<StatementContext *>(_localctx)->expr = expression(0);
      setState(264);
      match(GrammarParser::T__10);
      setState(265);
      match(GrammarParser::T__3);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 22544834) != 0)) {
        setState(266);
        if_statement();
        setState(271);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(272);
      match(GrammarParser::T__4);
      setState(282);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::T__20) {
        setState(273);
        match(GrammarParser::T__20);
        setState(274);
        match(GrammarParser::T__3);
        setState(278);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 22544834) != 0)) {
          setState(275);
          else_statement();
          setState(280);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(281);
        match(GrammarParser::T__4);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(284);
      function();
      setState(285);
      match(GrammarParser::T__15);
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

tree::TerminalNode* GrammarParser::ExpressionContext::STRING() {
  return getToken(GrammarParser::STRING, 0);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, GrammarParser::RuleExpression, precedence);

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
    setState(299);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(290);
      match(GrammarParser::STRING);
      break;
    }

    case 2: {
      setState(292);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::UNARY_OPERATOR) {
        setState(291);
        match(GrammarParser::UNARY_OPERATOR);
      }
      setState(294);
      match(GrammarParser::INTEGER);
      break;
    }

    case 3: {
      setState(296);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::UNARY_OPERATOR) {
        setState(295);
        match(GrammarParser::UNARY_OPERATOR);
      }
      setState(298);
      match(GrammarParser::VARIABLE_NAME);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(306);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        _localctx->expr1 = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(301);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(302);
        match(GrammarParser::BINARY_OPERATOR);
        setState(303);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expr2 = expression(5); 
      }
      setState(308);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
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
    case 20: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GrammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

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
