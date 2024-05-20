#include "ASTTree.h"
#include "ScopeTree.h"

class ScopeTreeBuilder {
 private:
  ScopeLayer* root = new ScopeLayer(nullptr);
  void Build(Instruction* instr);
  Instruction* visitProg(Instruction* instr);
  Instruction* visitPre_main(Instruction* instr);
  Instruction* visitBase_type(Instruction* instr);
  Instruction* visitFunction_declaration(Instruction* instr);
  Instruction* visitArray_type(Instruction* instr);
  Instruction* visitParameter(Instruction* instr);
  Instruction* visitType(Instruction* instr);
  Instruction* visitParameter_list(Instruction* instr);
  Instruction* visitMethod(Instruction* instr);
  Instruction* visitClass_field(Instruction* instr);
  Instruction* visitClass_statement(Instruction* instr);
  Instruction* visitClass(Instruction* instr);
  Instruction* visitVariable_declaration(Instruction* instr);
  Instruction* visitVariable_definition(Instruction* instr);
  Instruction* visitVariable_declaration_definition(Instruction* instr);
  Instruction* visitPrint(Instruction* instr);
  Instruction* visitFunction(Instruction* instr);
  Instruction* visitStatement(Instruction* instr);
  Instruction* visitIf_statement(Instruction* instr);
  Instruction* visitElse_statement(Instruction* instr);
  Instruction* visitExpression(Instruction* instr);

 public:
  ScopeTreeBuilder() = delete;
  explicit ScopeTreeBuilder(const ASTTree& ast_tree);
  ~ScopeTreeBuilder();
  void AddLayer();
};