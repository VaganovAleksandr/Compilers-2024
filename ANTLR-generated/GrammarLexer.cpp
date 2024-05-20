
// Generated from Grammar.g4 by ANTLR 4.13.1


#include "GrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GrammarLexerStaticData final {
  GrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarLexerStaticData(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData(GrammarLexerStaticData&&) = delete;
  GrammarLexerStaticData& operator=(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData& operator=(GrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GrammarLexerStaticData *grammarlexerLexerStaticData = nullptr;

void grammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(grammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "NEWLINE", "SPACE", "VARIABLE_NAME", 
      "INTEGER", "SCHAR", "STRING", "UNARY_OPERATOR", "BINARY_OPERATOR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,29,184,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,4,1,4,
  	1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,21,4,21,140,8,21,11,21,12,21,141,1,22,1,22,1,22,1,22,1,23,
  	4,23,149,8,23,11,23,12,23,150,1,24,1,24,4,24,155,8,24,11,24,12,24,156,
  	1,24,3,24,160,8,24,1,25,1,25,1,26,1,26,5,26,166,8,26,10,26,12,26,169,
  	9,26,1,26,1,26,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,
  	183,8,28,0,0,29,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,
  	12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,
  	47,24,49,25,51,26,53,27,55,28,57,29,1,0,8,2,0,10,10,13,13,2,0,9,9,32,
  	32,2,0,65,90,97,122,1,0,49,57,1,0,48,57,9,0,10,10,13,13,34,34,38,38,42,
  	43,45,45,47,47,92,92,94,94,3,0,38,38,42,42,45,45,3,0,42,43,45,45,47,47,
  	192,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,
  	0,0,0,55,1,0,0,0,0,57,1,0,0,0,1,59,1,0,0,0,3,63,1,0,0,0,5,68,1,0,0,0,
  	7,71,1,0,0,0,9,73,1,0,0,0,11,75,1,0,0,0,13,80,1,0,0,0,15,85,1,0,0,0,17,
  	92,1,0,0,0,19,97,1,0,0,0,21,99,1,0,0,0,23,101,1,0,0,0,25,103,1,0,0,0,
  	27,105,1,0,0,0,29,107,1,0,0,0,31,114,1,0,0,0,33,116,1,0,0,0,35,122,1,
  	0,0,0,37,124,1,0,0,0,39,130,1,0,0,0,41,133,1,0,0,0,43,139,1,0,0,0,45,
  	143,1,0,0,0,47,148,1,0,0,0,49,159,1,0,0,0,51,161,1,0,0,0,53,163,1,0,0,
  	0,55,172,1,0,0,0,57,182,1,0,0,0,59,60,5,105,0,0,60,61,5,110,0,0,61,62,
  	5,116,0,0,62,2,1,0,0,0,63,64,5,109,0,0,64,65,5,97,0,0,65,66,5,105,0,0,
  	66,67,5,110,0,0,67,4,1,0,0,0,68,69,5,40,0,0,69,70,5,41,0,0,70,6,1,0,0,
  	0,71,72,5,123,0,0,72,8,1,0,0,0,73,74,5,125,0,0,74,10,1,0,0,0,75,76,5,
  	98,0,0,76,77,5,111,0,0,77,78,5,111,0,0,78,79,5,108,0,0,79,12,1,0,0,0,
  	80,81,5,118,0,0,81,82,5,111,0,0,82,83,5,105,0,0,83,84,5,100,0,0,84,14,
  	1,0,0,0,85,86,5,115,0,0,86,87,5,116,0,0,87,88,5,114,0,0,88,89,5,105,0,
  	0,89,90,5,110,0,0,90,91,5,103,0,0,91,16,1,0,0,0,92,93,5,102,0,0,93,94,
  	5,117,0,0,94,95,5,110,0,0,95,96,5,99,0,0,96,18,1,0,0,0,97,98,5,40,0,0,
  	98,20,1,0,0,0,99,100,5,41,0,0,100,22,1,0,0,0,101,102,5,91,0,0,102,24,
  	1,0,0,0,103,104,5,93,0,0,104,26,1,0,0,0,105,106,5,44,0,0,106,28,1,0,0,
  	0,107,108,5,109,0,0,108,109,5,101,0,0,109,110,5,116,0,0,110,111,5,104,
  	0,0,111,112,5,111,0,0,112,113,5,100,0,0,113,30,1,0,0,0,114,115,5,59,0,
  	0,115,32,1,0,0,0,116,117,5,99,0,0,117,118,5,108,0,0,118,119,5,97,0,0,
  	119,120,5,115,0,0,120,121,5,115,0,0,121,34,1,0,0,0,122,123,5,61,0,0,123,
  	36,1,0,0,0,124,125,5,112,0,0,125,126,5,114,0,0,126,127,5,105,0,0,127,
  	128,5,110,0,0,128,129,5,116,0,0,129,38,1,0,0,0,130,131,5,105,0,0,131,
  	132,5,102,0,0,132,40,1,0,0,0,133,134,5,101,0,0,134,135,5,108,0,0,135,
  	136,5,115,0,0,136,137,5,101,0,0,137,42,1,0,0,0,138,140,7,0,0,0,139,138,
  	1,0,0,0,140,141,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,44,1,0,0,
  	0,143,144,7,1,0,0,144,145,1,0,0,0,145,146,6,22,0,0,146,46,1,0,0,0,147,
  	149,7,2,0,0,148,147,1,0,0,0,149,150,1,0,0,0,150,148,1,0,0,0,150,151,1,
  	0,0,0,151,48,1,0,0,0,152,154,7,3,0,0,153,155,7,4,0,0,154,153,1,0,0,0,
  	155,156,1,0,0,0,156,154,1,0,0,0,156,157,1,0,0,0,157,160,1,0,0,0,158,160,
  	7,4,0,0,159,152,1,0,0,0,159,158,1,0,0,0,160,50,1,0,0,0,161,162,8,5,0,
  	0,162,52,1,0,0,0,163,167,5,34,0,0,164,166,3,51,25,0,165,164,1,0,0,0,166,
  	169,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,170,1,0,0,0,169,167,1,
  	0,0,0,170,171,5,34,0,0,171,54,1,0,0,0,172,173,7,6,0,0,173,56,1,0,0,0,
  	174,183,7,7,0,0,175,176,5,61,0,0,176,183,5,61,0,0,177,178,5,38,0,0,178,
  	183,5,38,0,0,179,180,5,124,0,0,180,183,5,124,0,0,181,183,5,94,0,0,182,
  	174,1,0,0,0,182,175,1,0,0,0,182,177,1,0,0,0,182,179,1,0,0,0,182,181,1,
  	0,0,0,183,58,1,0,0,0,7,0,141,150,156,159,167,182,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarlexerLexerStaticData = staticData.release();
}

}

GrammarLexer::GrammarLexer(CharStream *input) : Lexer(input) {
  GrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *grammarlexerLexerStaticData->atn, grammarlexerLexerStaticData->decisionToDFA, grammarlexerLexerStaticData->sharedContextCache);
}

GrammarLexer::~GrammarLexer() {
  delete _interpreter;
}

std::string GrammarLexer::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarLexer::getRuleNames() const {
  return grammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& GrammarLexer::getChannelNames() const {
  return grammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& GrammarLexer::getModeNames() const {
  return grammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& GrammarLexer::getVocabulary() const {
  return grammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrammarLexer::getSerializedATN() const {
  return grammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& GrammarLexer::getATN() const {
  return *grammarlexerLexerStaticData->atn;
}




void GrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(grammarlexerLexerOnceFlag, grammarlexerLexerInitialize);
#endif
}
