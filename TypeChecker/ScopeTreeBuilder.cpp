#include "ScopeTreeBuilder.h"

ScopeTreeBuilder::ScopeTreeBuilder(const ASTTree& ast_tree) {
  Build(ast_tree.GetRoot());
}

ScopeTreeBuilder::~ScopeTreeBuilder() {
  delete root;
}

void ScopeTreeBuilder::Build(Instruction* instr) {
  if (instr->name == "Prog") {

  }
}