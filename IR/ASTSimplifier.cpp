#include "ASTSimplifier.h"

llvm::Value* ASTSimplifier::visitExpression(Instruction* instr) {
  if (instr->name == "IntegerExpression") {
    return llvm::ConstantInt::get(
        context, llvm::APInt(32, std::stoi(instr->children[0]->name), true));
  }
  if (instr->name == "VariableNameExpression") {
    llvm::Value* value;
    std::string base_type =
        symbol_table->GetSymbol(instr->children[0]->name)->base_type;
    if (base_type == "int" || base_type == "bool") {
      value = llvm::ConstantInt::get(
          Builder.getInt32Ty(),
          std::any_cast<int>(
              symbol_table->GetSymbol(instr->children[0]->name)->value));
    } else if (base_type == "string") {
      value = llvm::ConstantDataArray::getString(
          context,
          std::any_cast<std::string>(
              symbol_table->GetSymbol(instr->children[0]->name)->value));
    } else {
      exit(EXIT_FAILURE);
    }
    if (!value) {
      auto error = llvm::make_error<llvm::StringError>("no such variable", llvm::inconvertibleErrorCode());
      llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
    }
    return value;
  }
  if (instr->name == "BinaryOperatorExpression") {
    llvm::Value* left_expr = visitExpression(instr->children[0]);
    llvm::Value* right_expr = visitExpression(instr->children[2]);
    std::string binary_op_name = instr->children[1]->children[0]->name;
    if (binary_op_name == "+") {
      return Builder.CreateFAdd(left_expr, right_expr, "addtmp");
    }
    if (binary_op_name == "-") {
      return Builder.CreateFSub(left_expr, right_expr, "subtmp");
    }
    if (binary_op_name == "*") {
      return Builder.CreateFMul(left_expr, right_expr, "multmp");
    }
    if (binary_op_name == "/") {
      return Builder.CreateFDiv(left_expr, right_expr, "divtmp");
    }
    if (binary_op_name == "==") {
      std::cout << left_expr->getType() << right_expr->getType() << "\n";
      return Builder.CreateICmpEQ(left_expr, right_expr, "eqcmptmp");
    }
    auto error = llvm::make_error<llvm::StringError>("no such variable", llvm::inconvertibleErrorCode());;
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  if (instr->name == "StringExpression") {
    return llvm::ConstantDataArray::getString(context,
                                              instr->children[0]->name);
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitVariable_declaration(Instruction* instr) {
  if (instr->children[0]->name == "int") {
    llvm::Value* alloca =
        Builder.CreateAlloca(Builder.getInt32Ty(), nullptr, "allocaInt");
    symbol_table->CreateSymbol(
        new Symbol("variable", "int", instr->children[1]->name, alloca));
    return alloca;
  }
  if (instr->children[0]->name == "bool") {
    llvm::Value* alloca =
        Builder.CreateAlloca(Builder.getInt8Ty(), nullptr, "allocaBool");
    symbol_table->CreateSymbol(
        new Symbol("variable", "bool", instr->children[1]->name, alloca));
    return alloca;
  }
  if (instr->children[0]->name == "string") {
    auto error = llvm::make_error<llvm::StringError>("no dynamic allocations yet...", llvm::inconvertibleErrorCode());
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitVariable_definition(Instruction* instr) {
  Symbol* symbol =
      symbol_table->GetSymbol(instr->children[0]->children[0]->name);
  symbol->value = instr->children[1]->children[0]->name;
  symbol_table->ChangeSymbol(symbol);
  if (instr->children[1]->name == "IntegerExpression") {
    return Builder.CreateStore(
        Builder.getInt32(std::stoi(instr->children[1]->children[0]->name)),
        symbol_table->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory);
  } else if (instr->children[1]->name == "BoolExpression") {
    return Builder.CreateStore(
        Builder.getInt8(std::stoi(instr->children[1]->children[0]->name)),
        symbol_table->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory);
  } else if (instr->children[1]->name == "StringExpression") {
    auto error = llvm::make_error<llvm::StringError>("no dynamic allocations yet...", llvm::inconvertibleErrorCode());
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitVariable_declaration_definition(
    Instruction* instr) {
  if (instr->children[0]->children[0]->name == "int") {
    llvm::Value* alloca =
        Builder.CreateAlloca(llvm::Type::getInt32Ty(context));
    symbol_table->CreateSymbol(
        new Symbol("variable", "int", instr->children[1]->children[0]->name, alloca));
    return Builder.CreateStore(
        Builder.getInt32(std::stoi(instr->children[2]->children[0]->name)),
        alloca);
  }
  if (instr->children[0]->name == "bool") {
    llvm::Value* alloca =
        Builder.CreateAlloca(Builder.getInt8Ty());
    symbol_table->CreateSymbol(
        new Symbol("variable", "bool", instr->children[1]->name, alloca));
    return Builder.CreateStore(
        Builder.getInt8(std::stoi(instr->children[2]->children[0]->name)),
        alloca);
  }
  if (instr->children[0]->name == "string") {
    llvm::Type* charType = Builder.getInt8Ty();
    llvm::ArrayType* arrayType = llvm::ArrayType::get(
        charType, instr->children[2]->children[0]->name.size() + 1);

    llvm::Value* allocaStr =
        Builder.CreateAlloca(arrayType, nullptr, "allocaStr");
    for (size_t i = 0; i < instr->children[2]->children[0]->name.size(); ++i) {
      llvm::Value* gep = Builder.CreateInBoundsGEP(
          arrayType, allocaStr, {Builder.getInt32(0), Builder.getInt32(i)});
      Builder.CreateStore(
          Builder.getInt8(instr->children[2]->children[0]->name[i]), gep);
    }
    llvm::Value* gep = Builder.CreateInBoundsGEP(
        arrayType, allocaStr,
        {Builder.getInt32(0),
         Builder.getInt32(instr->children[2]->children[0]->name.size())});
    return Builder.CreateStore(Builder.getInt8(0), gep);
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitPrint(Instruction* instr) {
  std::vector<llvm::Type*> printfArgs = {Builder.getInt8PtrTy()};
  auto printfType =
      llvm::FunctionType::get(Builder.getInt32Ty(), printfArgs, true);
  llvm::FunctionCallee printfFunc =
      TheModule.getOrInsertFunction("printf", printfType);
  auto expr = visitExpression(instr->children[0]);
  if (expr->getType()->getTypeID() == llvm::Type::IntegerTyID) {
    llvm::Value* formatStr = Builder.CreateGlobalStringPtr("%d\n", "formatStr");
    llvm::Value* loadedInt = Builder.CreateLoad(
        Builder.getInt32Ty(),
        symbol_table->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory,
        "loadedInt");
    return Builder.CreateCall(printfFunc, {formatStr, loadedInt});
  }
  if (expr->getType()->getTypeID() == llvm::Type::ArrayTyID) {
    llvm::Type* charType = Builder.getInt8Ty();
    llvm::ArrayType* arrayType = llvm::ArrayType::get(
        charType,
        std::any_cast<std::string>(
            symbol_table->GetSymbol(instr->children[0]->children[0]->name)
                ->value)
                .size() +
            1);
    llvm::Value* strPtr = Builder.CreateInBoundsGEP(
        arrayType,
        symbol_table->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory,
        {Builder.getInt32(0), Builder.getInt32(0)});
    Builder.CreateCall(printfFunc, {strPtr});
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitFunction(Instruction* instr) {
  if (instr->children[0]->name == "Print") {
    return visitPrint(instr->children[0]);
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitStatement(Instruction* instr) {
  std::string statement_name = instr->children[0]->name;
  if (statement_name == "Variable_declaration") {
    return visitVariable_declaration(instr->children[0]);
  }
  if (statement_name == "Variable_definition") {
    return visitVariable_definition(instr->children[0]);
  }
  if (statement_name == "Variable_declaration_definition") {
    return visitVariable_declaration_definition(instr->children[0]);
  }
  if (statement_name == "Function") {
    return visitFunction(instr->children[0]);
  }
  if (statement_name == "IfElseStatement") {
    symbol_table->BeginScope();
    llvm::BasicBlock* entry_if_else = llvm::BasicBlock::Create(context, "entry", main);
    Builder.SetInsertPoint(entry_if_else);
    llvm::BasicBlock* if_statement = llvm::BasicBlock::Create(context, "if", main);
    llvm::BasicBlock* else_statement = llvm::BasicBlock::Create(context, "else", main);
    llvm::BasicBlock* merge_statement = llvm::BasicBlock::Create(context, "merge", main);
    Builder.CreateCondBr(visitExpression(instr->children[0]->children[0]), if_statement, else_statement);
    Builder.SetInsertPoint(if_statement);
    visitIf_statement(instr->children[0]->children[1]);
    Builder.CreateRetVoid();

    Builder.SetInsertPoint(else_statement);
    visitElse_statement(instr->children[0]->children[2]);
    Builder.CreateRetVoid();

    Builder.CreateBr(merge_statement);
    Builder.SetInsertPoint(merge_statement);
    symbol_table->EndScope();
    return merge_statement;
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitIf_statement(Instruction* instr) {
  for (auto* instr_ : instr->children) {
    visitStatement(instr_->children[0]);
  }
  return nullptr;
}

llvm::Value* ASTSimplifier::visitElse_statement(Instruction* instr) {
  for (auto* instr_ : instr->children) {
    visitStatement(instr_->children[0]);
  }
  return nullptr;
}

void ASTSimplifier::Simplify(Instruction* instr) {
  for (auto* instr_ : instr->children) {
    visitStatement(instr_);
  }
}

ASTSimplifier::ASTSimplifier(Instruction* instr, const std::string& path) {
  main = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, "main", TheModule);
  auto entry = llvm::BasicBlock::Create(context, "entry", main);
  Builder.SetInsertPoint(entry);
  Simplify(instr);
  std::error_code error_code;
  llvm::raw_fd_ostream outLL(path, error_code);
  TheModule.print(outLL, nullptr);
}