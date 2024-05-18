#include "ASTTree.h"
#include "../SymbolTable.h"

class ASTSimplifier {
 private:
  llvm::Function* main;
  llvm::Value* visitProg(Instruction* instr);
  llvm::Value* visitVariable_declaration(Instruction* instr);
  llvm::Value* visitVariable_definition(Instruction* instr);
  llvm::Value* visitVariable_declaration_definition(Instruction* instr);
  llvm::Value* visitPrint(Instruction* instr);
  llvm::Value* visitFunction(Instruction* instr);
  llvm::Value* visitStatement(Instruction* instr);
  llvm::Value* visitIf_statement(Instruction* instr);
  llvm::Value* visitElse_statement(Instruction* instr);
  llvm::Value* visitExpression(Instruction* instr);
  llvm::LLVMContext context;
  llvm::Module TheModule = llvm::Module("file", context);
  llvm::IRBuilder<> Builder = llvm::IRBuilder<>(context);
  llvm::FunctionType* funcType = llvm::FunctionType::get(llvm::Type::getInt32Ty(context), false);
  SymbolTable* symbol_table = new SymbolTable();

 public:
  ASTSimplifier(Instruction* instr, const std::string& path);
  ASTSimplifier() = delete;
  ~ASTSimplifier() = default;
  void Simplify(Instruction* instr);
};