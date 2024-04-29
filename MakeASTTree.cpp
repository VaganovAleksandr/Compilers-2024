#include "GrammarLexer.h"
#include "ASTTree.h"
#include "antlr4-runtime.h"

int main() {
  auto stream = antlr4::ANTLRInputStream("int main() { int x = 5; x = x + 5; if (x == 10) { x = 3; print(x); } else { x = 7; print(x); } }");
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