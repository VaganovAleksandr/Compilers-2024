#include "GrammarLexer.h"
#include "ASTTree.h"
#include "antlr4-runtime.h"

int main(int argc, char** argv) {
  auto path = argv[1];
  std::ifstream file(path);
  std::string inputString((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
  auto stream = antlr4::ANTLRInputStream(inputString);
  GrammarLexer lexer(&stream);
  antlr4::CommonTokenStream tokens(&lexer);

  tokens.fill();

  GrammarParser parser(&tokens);
  auto* tree = parser.prog();

  ASTTree astTree;
  astTree.Build(tree);
  astTree.Print();
  return 0;
}