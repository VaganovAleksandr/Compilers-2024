#include "ScopeTree.h"
#include "ASTTree.h"

class ASTSimplifier {
 private:
  llvm::Function* main;
  llvm::Function* pre_main;
  llvm::BasicBlock* pre_main_block;
  llvm::Value* visitProg(Instruction* instr);
  llvm::Value* visitPre_main(Instruction* instr);
  llvm::Value* visitFunction_declaration(Instruction* instr);
  llvm::Value* visitArray_type(Instruction* instr);
  llvm::Value* visitType(Instruction* instr);
  llvm::Function* visitMethod(Instruction* instr, llvm::Function* method,
                              llvm::StructType* struct_type);
  llvm::Value* visitClass_field(Instruction* instr,
                                llvm::StructType* struct_type,
                                llvm::Value* class_ptr, size_t index);
  llvm::Value* visitClass_statement(Instruction* instr);
  llvm::Value* visitClass(Instruction* instr);
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
  llvm::FunctionType* funcType =
      llvm::FunctionType::get(llvm::Type::getInt32Ty(context), false);
  ScopeTree* scope_tree = new ScopeTree(new ScopeLayer(nullptr));

 public:
  ASTSimplifier(Instruction* instr, const std::string& path);
  ASTSimplifier() = delete;
  ~ASTSimplifier() = default;
  void Simplify(Instruction* instr);
  void SimplifyPreMain(Instruction* instr);
};