#include "GrammarLexer.h"
#include "GrammarParser.h"
#include "Interpreter.h"
#include "antlr4-runtime.h"

int main() {
  auto stream = antlr4::ANTLRInputStream("int main() { int x = -1; x = x + 1; if (x == 0) { x = 5; print(x); } else { x = 3; x = x + 7; print(x); } }");
  GrammarLexer lexer(&stream);
  antlr4::CommonTokenStream tokens(&lexer);

  tokens.fill();

  GrammarParser parser(&tokens);
  auto* tree = parser.prog();

  if (parser.getNumberOfSyntaxErrors() || lexer.getNumberOfSyntaxErrors()) {
    return EXIT_FAILURE;
  }

  Interpreter interpreter;

  Prog* prog = std::any_cast<Prog*>(interpreter.visit(tree));
}