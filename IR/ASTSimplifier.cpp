#include "ASTSimplifier.h"

llvm::Value* ASTSimplifier::visitExpression(Instruction* instr) {
  if (instr->name == "IntegerExpression") {
    return llvm::ConstantInt::get(
        context, llvm::APInt(32, std::stoi(instr->children[0]->name), true));
  }
  if (instr->name == "VariableNameExpression") {
    llvm::Value* value;
    std::string base_type = dynamic_cast<SymbolVariable*>(
                                scope_tree->GetSymbol(instr->children[0]->name))
                                ->base_type;
    if (base_type == "int") {
      value = Builder.CreateLoad(
          Builder.getInt32Ty(),
              dynamic_cast<SymbolVariable*>(
                  scope_tree->GetSymbol(instr->children[0]->name))
                  ->allocated_memory);
    } else if (base_type == "bool") {
      value = Builder.CreateLoad(
          Builder.getInt8Ty(),
          dynamic_cast<SymbolVariable*>(
              scope_tree->GetSymbol(instr->children[0]->name))
              ->allocated_memory);
    } else if (base_type == "string") {
      value = llvm::ConstantDataArray::getString(
          context, std::any_cast<std::string>(
                       dynamic_cast<SymbolVariable*>(
                           scope_tree->GetSymbol(instr->children[0]->name))
                           ->value));
    } else {
      exit(EXIT_FAILURE);
    }
    if (!value) {
      auto error = llvm::make_error<llvm::StringError>(
          "no such variable", llvm::inconvertibleErrorCode());
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
      return Builder.CreateICmpEQ(left_expr, right_expr, "eqcmptmp");
    }
    auto error = llvm::make_error<llvm::StringError>(
        "no such variable", llvm::inconvertibleErrorCode());
    ;
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  if (instr->name == "StringExpression") {
    return llvm::ConstantDataArray::getString(context,
                                              instr->children[0]->name);
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitVariable_declaration(Instruction* instr) {
  if (scope_tree->GetCurrentLayer()->symbol_table->FindSymbol(
          instr->children[1]->children[0]->name)) {
    auto error = llvm::make_error<llvm::StringError>(
        instr->children[1]->children[0]->name +
            " is already declared in this scope!",
        llvm::inconvertibleErrorCode());
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  std::string type = instr->children[0]->children[0]->children[0]->name;
  if (type == "int") {
    llvm::Value* alloca =
        Builder.CreateAlloca(Builder.getInt32Ty(), nullptr, "allocaInt");
    scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
        new SymbolVariable("int", instr->children[1]->children[0]->name,
                           alloca));
    return alloca;
  }
  if (type == "bool") {
    llvm::Value* alloca =
        Builder.CreateAlloca(Builder.getInt8Ty(), nullptr, "allocaBool");
    scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
        new SymbolVariable("bool", instr->children[1]->name, alloca));
    return alloca;
  }
  if (type == "string") {
    auto error = llvm::make_error<llvm::StringError>(
        "no dynamic allocations yet...", llvm::inconvertibleErrorCode());
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitVariable_definition(Instruction* instr) {
  auto* symbol = dynamic_cast<SymbolVariable*>(
      scope_tree->GetSymbol(instr->children[0]->children[0]->name));
  symbol->value = instr->children[1]->children[0]->name;
  scope_tree->GetCurrentLayer()->symbol_table->ChangeSymbol(symbol);
  if (instr->children[1]->name == "IntegerExpression") {
    return Builder.CreateStore(
        Builder.getInt32(std::stoi(instr->children[1]->children[0]->name)),
        scope_tree->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory);
  } else if (instr->children[1]->name == "BoolExpression") {
    return Builder.CreateStore(
        Builder.getInt8(std::stoi(instr->children[1]->children[0]->name)),
        scope_tree->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory);
  } else if (instr->children[1]->name == "StringExpression") {
    auto error = llvm::make_error<llvm::StringError>(
        "no dynamic allocations yet...", llvm::inconvertibleErrorCode());
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitVariable_declaration_definition(
    Instruction* instr) {
  if (scope_tree->GetCurrentLayer()->symbol_table->FindSymbol(
          instr->children[1]->children[0]->name)) {
    auto error = llvm::make_error<llvm::StringError>(
        instr->children[1]->children[0]->name +
            " is already declared in this scope!",
        llvm::inconvertibleErrorCode());
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  }
  bool is_array = instr->children[0]->children[0]->name == "ArrayType";
  std::string type;
  if (is_array) {
    type = instr->children[0]->children[0]->children[0]->children[0]->name;
  } else {
    type = instr->children[0]->children[0]->children[0]->name;
  }
  if (type == "int") {
    if (instr->children[2]->name == "IntegerExpression") {
      llvm::Value* alloca =
          Builder.CreateAlloca(llvm::Type::getInt32Ty(context));
      scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
          new SymbolVariable("int", instr->children[1]->children[0]->name,
                             instr->children[2]->children[0]->name, alloca));
      return Builder.CreateStore(
          Builder.getInt32(std::stoi(std::any_cast<std::string>(
              dynamic_cast<SymbolVariable*>(
                  scope_tree->GetSymbol(instr->children[1]->children[0]->name))
                  ->value))),
          alloca);
    }
    if (instr->children[2]->name == "VariableNameExpression") {
      llvm::Value* alloca =
          Builder.CreateAlloca(llvm::Type::getInt32Ty(context));
      scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
          new SymbolVariable("int", instr->children[1]->children[0]->name,
                             std::any_cast<std::string>(
                                 dynamic_cast<SymbolVariable*>(
                                     scope_tree->GetSymbol(
                                         instr->children[2]->children[0]->name))
                                     ->value),
                             alloca));
      return Builder.CreateStore(
          Builder.getInt32(std::stoi(std::any_cast<std::string>(
              dynamic_cast<SymbolVariable*>(
                  scope_tree->GetSymbol(instr->children[1]->children[0]->name))
                  ->value))),
          alloca);
    }
    exit(EXIT_FAILURE);
  }
  if (type == "bool") {
    llvm::Value* alloca = Builder.CreateAlloca(Builder.getInt8Ty());
    scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
        new SymbolVariable("bool", instr->children[1]->name, alloca));
    return Builder.CreateStore(
        Builder.getInt8(std::stoi(instr->children[2]->children[0]->name)),
        alloca);
  }
  if (type == "string") {
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
        scope_tree->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory,
        "loadedInt");
    return Builder.CreateCall(printfFunc, {formatStr, loadedInt});
  }
  if (expr->getType()->getTypeID() == llvm::Type::ArrayTyID) {
    llvm::Type* charType = Builder.getInt8Ty();
    llvm::ArrayType* arrayType = llvm::ArrayType::get(
        charType,
        std::any_cast<std::string>(
            dynamic_cast<SymbolVariable*>(
                scope_tree->GetSymbol(instr->children[0]->children[0]->name))
                ->value)
                .size() +
            1);
    llvm::Value* strPtr = Builder.CreateInBoundsGEP(
        arrayType,
        scope_tree->GetSymbol(instr->children[0]->children[0]->name)
            ->allocated_memory,
        {Builder.getInt32(0), Builder.getInt32(0)});
    Builder.CreateCall(printfFunc, {strPtr});
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitFunction(Instruction* instr) {
  if (instr->children[0]->name == "Print") {
    return visitPrint(instr->children[0]);
  } else {
    scope_tree->AddLayer();
    std::vector<llvm::Value*> arguments;
    for (auto* instr_ : instr->children) {
      if (instr_->name == "Name") {
        continue;
      }
      auto* value = visitExpression(instr_->children[0]);
      llvm::Value* alloca = Builder.CreateAlloca(value->getType());
      Builder.CreateStore(value, alloca);
      arguments.push_back(value);
      scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
          new SymbolVariable(
              dynamic_cast<SymbolVariable*>(
                  scope_tree->GetSymbol(instr_->children[0]->children[0]->name))
                  ->base_type,
              instr_->children[0]->children[0]->name, value, alloca));
    }
    auto* sym_func = dynamic_cast<SymbolFunction*>(
        scope_tree->GetSymbol(instr->children[0]->children[0]->name));
    auto* result = Builder.CreateCall(
            sym_func->function,
        arguments);
    scope_tree->DeleteLayer();
    return result;
  }
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
    scope_tree->AddLayer();
    llvm::BasicBlock* if_statement =
        llvm::BasicBlock::Create(context, "if", main);
    if (instr->children[0]->children.size() > 2) {
      llvm::BasicBlock* else_statement =
          llvm::BasicBlock::Create(context, "else", main);
      llvm::BasicBlock* merge_statement =
          llvm::BasicBlock::Create(context, "merge", main);
      Builder.CreateCondBr(visitExpression(instr->children[0]->children[0]),
                           if_statement, else_statement);
      Builder.SetInsertPoint(if_statement);
      visitIf_statement(instr->children[0]->children[1]);

      Builder.SetInsertPoint(else_statement);
      visitElse_statement(instr->children[0]->children[2]);

      Builder.CreateBr(merge_statement);
      Builder.SetInsertPoint(merge_statement);
      scope_tree->DeleteLayer();
      return merge_statement;
    }
    llvm::BasicBlock* merge_statement =
        llvm::BasicBlock::Create(context, "merge", main);
    Builder.CreateCondBr(visitExpression(instr->children[0]->children[0]),
                         if_statement, merge_statement);
    Builder.SetInsertPoint(if_statement);
    visitIf_statement(instr->children[0]->children[1]);

    Builder.CreateBr(merge_statement);
    Builder.SetInsertPoint(merge_statement);
    scope_tree->DeleteLayer();
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

llvm::Value* ASTSimplifier::visitPre_main(Instruction* instr) {
  if (instr->name == "Class") {
    return visitClass(instr);
  }
  if (instr->name == "Function_declaration") {
    return visitFunction_declaration(instr);
  }
  exit(EXIT_FAILURE);
}

llvm::Value* ASTSimplifier::visitClass(Instruction* instr) {
  std::vector<llvm::Type*> fields;
  std::vector<llvm::Function*> methods;
  llvm::StructType* class_ =
      llvm::StructType::create(context, instr->children[0]->children[0]->name);
  for (auto* instr_ : instr->children) {
    if (instr_->children[0]->name == "Class field") {
      bool is_array =
          instr_->children[0]->children[0]->children[0]->name == "ArrayType";
      std::string type;
      if (is_array) {
        type = instr_->children[0]
                   ->children[0]
                   ->children[0]
                   ->children[0]
                   ->children[0]
                   ->name;
      } else {
        type = instr_->children[0]->children[0]->children[0]->children[0]->name;
      }
      llvm::Type* type_;
      if (type == "int") {
        type_ = llvm::Type::getInt32Ty(context);
      } else if (type == "bool") {
        type_ = llvm::Type::getInt8Ty(context);
      } else if (type == "string") {
        // TODO
      }
      if (is_array) {
        fields.push_back(
            llvm::ArrayType::get(type_, std::stoi(instr_->children[0]
                                                      ->children[0]
                                                      ->children[0]
                                                      ->children[1]
                                                      ->children[0]
                                                      ->children[0]
                                                      ->name)));
      } else {
        fields.push_back(type_);
      }
    }
  }
  class_->setBody(fields);
  llvm::Value* class_instance =
      Builder.CreateAlloca(class_, nullptr, "instance");
  std::vector<SymbolVariable*> fields_values;
  for (auto* type : fields) {
  }
  scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(new SymbolClass(
      {}, {}, instr->children[0]->children[0]->name, class_instance));
  size_t number_of_fields = 0;
  for (auto* instr_ : instr->children) {
    if (instr_->name == "Class name") continue;
    if (instr_->name == "Class statement") {
      if (instr_->children[0]->name == "Class field") {
        visitClass_field(instr_->children[0], class_, class_instance,
                         number_of_fields++);
      } else if (instr_->children[0]->name == "Method") {
        std::string type =
            instr_->children[0]->children[1]->children[0]->children[0]->name;
        llvm::FunctionType* method_type = llvm::FunctionType::get(
            llvm::Type::getVoidTy(context), {class_->getPointerTo()}, false);
        if (type == "int") {
          method_type = llvm::FunctionType::get(
              llvm::Type::getInt32Ty(context), {class_->getPointerTo()}, false);
        } else if (type == "bool") {
          method_type = llvm::FunctionType::get(
              llvm::Type::getInt8Ty(context), {class_->getPointerTo()}, false);
        } else if (type == "string") {
          auto error = llvm::make_error<llvm::StringError>(
              "no dynamic allocations yet...", llvm::inconvertibleErrorCode());
          llvm::logAllUnhandledErrors(std::move(error), llvm::errs(),
                                      "Error: ");
        }

        llvm::Function* method =
            llvm::Function::Create(method_type, llvm::Function::ExternalLinkage,
                                   "myMethod", TheModule);
        methods.push_back(method);
        visitMethod(instr_, method, class_);
        method->setName(instr_->children[0]->children[0]->children[0]->name);
        auto args = method->arg_begin();
        args->setName(instr->children[0]->children[0]->name);
        ++args;
        std::vector<SymbolVariable*> arguments;
        size_t index = 0;
        while (args != method->arg_end()) {
          std::string type_arg = instr_->children[2]
                                     ->children[index]
                                     ->children[0]
                                     ->children[0]
                                     ->children[0]
                                     ->name;
          arguments.push_back(new SymbolVariable(type_arg,
                                                 instr_->children[2]
                                                     ->children[index]
                                                     ->children[1]
                                                     ->children[0]
                                                     ->name,
                                                 nullptr));
          ++args;
          ++index;
        }
        scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
            new SymbolFunction(type, arguments, method,
                               instr->children[0]->children[0]->name,
                               class_instance));
        continue;
      }
    }
  }
  class_instance->setName(instr->children[0]->children[0]->name);
  return nullptr;
}

llvm::Value* ASTSimplifier::visitClass_field(Instruction* instr,
                                             llvm::StructType* struct_type,
                                             llvm::Value* class_ptr,
                                             size_t index) {
  bool is_array = instr->children[0]->children[0]->name == "ArrayType";
  std::string type;
  if (is_array) {
    type = instr->children[0]->children[0]->children[0]->children[0]->name;
  } else {
    type = instr->children[0]->children[0]->children[0]->name;
  }

  llvm::Type* type_;
  if (type == "int") {
    type_ = Builder.getInt32Ty();
  }
  if (instr->children[0]->children[0]->children[0]->name == "bool") {
    type_ = Builder.getInt8Ty();
  }
  if (is_array) {
    int size = std::stoi(instr->children[0]
                             ->children[0]
                             ->children[1]
                             ->children[0]
                             ->children[0]
                             ->name);
    auto* arr_type_ = llvm::ArrayType::get(type_, size);
    llvm::Value* field_ptr =
        Builder.CreateStructGEP(class_ptr->getType(), class_ptr, index,
                                instr->children[1]->children[0]->name);
    for (size_t i = 0; i < size; ++i) {
      std::vector<llvm::Value*> indices;
      indices.push_back(
          llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), 0));
      indices.push_back(
          llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), i));
      llvm::Value* elementPtr =
          Builder.CreateGEP(arr_type_, field_ptr, indices, "elementPtr");
      if (type == "int") {
        Builder.CreateStore(
            llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), index),
            elementPtr);
      } else if (type == "bool") {
        Builder.CreateStore(
            llvm::ConstantInt::get(llvm::Type::getInt8Ty(context), index),
            elementPtr);
      }
    }
  }
  return Builder.CreateStructGEP(struct_type, class_ptr, index,
                                 instr->children[1]->children[0]->name);
}

llvm::Function* ASTSimplifier::visitMethod(Instruction* instr,
                                           llvm::Function* method,
                                           llvm::StructType* class_type) {
  scope_tree->AddLayer();
  llvm::BasicBlock* entry = llvm::BasicBlock::Create(
      context, instr->children[0]->children[0]->children[0]->name + "_method",
      method);
  Builder.SetInsertPoint(entry);
  std::string return_type =
      instr->children[0]->children[1]->children[0]->children[0]->name;
  auto args = method->arg_begin();
  llvm::Argument* current_arg = ++args;
  std::vector<llvm::Value*> class_fields;
  for (auto* instr_ : instr->children[0]->children[2]->children) {
    std::string type = instr_->children[0]->children[0]->children[0]->name;
    llvm::Type* type_;
    if (type == "int") {
      type_ = Builder.getInt32Ty();
    } else if (type == "bool") {
      type_ = Builder.getInt8Ty();
    } else if (type == "string") {
      //TODO
    }
    llvm::Value* alloca = Builder.CreateAlloca(type_, nullptr, "allocaArg");
    scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
        new SymbolVariable(type,
                           instr_->children[1]->children[0]->name, alloca));
  }
  while (current_arg != method->arg_end()) {
    llvm::Value* field_ptr =
        Builder.CreateStructGEP(class_type, current_arg, 0, "field_ptr");
    class_fields.push_back(
        Builder.CreateLoad(current_arg->getType(), field_ptr, "field"));
  }
  for (auto* stat : instr->children[0]->children) {
    if (stat->name == "Name" || stat->name == "Type" ||
        stat->name == "Parameter_list") {
      continue;
    }
    visitStatement(stat);
  }
  if (return_type == "int") {
    Builder.CreateRet(llvm::ConstantInt::get(context, llvm::APInt(32, 0)));
  } else if (return_type == "bool") {
    Builder.CreateRet(llvm::ConstantInt::get(context, llvm::APInt(8, 0)));
  } else if (return_type == "string") {
    auto error = llvm::make_error<llvm::StringError>(
        "no dynamic allocations yet...", llvm::inconvertibleErrorCode());
    llvm::logAllUnhandledErrors(std::move(error), llvm::errs(), "Error: ");
  } else if (return_type == "void") {
    Builder.CreateRetVoid();
  }
  scope_tree->DeleteLayer();
  Builder.SetInsertPoint(pre_main_block);
  return nullptr;
}

llvm::Value* ASTSimplifier::visitFunction_declaration(Instruction* instr) {
  std::vector<llvm::Type*> arg_types;
  std::vector<SymbolVariable*> arguments;
  for (auto* param : instr->children[2]->children) {
    bool is_array = param->children[0]->children[0]->name == "ArrayType";
    std::string type;
    if (is_array) {
      type = param->children[0]->children[0]->children[0]->children[0]->name;
    } else {
      type = param->children[0]->children[0]->children[0]->name;
    }
    arguments.push_back(new SymbolVariable(
        type, param->children[1]->children[0]->name, nullptr));
    if (type == "int") {
      arg_types.push_back(llvm::Type::getInt32Ty(context));
    } else if (type == "bool") {
      arg_types.push_back(llvm::Type::getInt8Ty(context));
    } else if (type == "string") {
      // TODO
    }
  }
  bool returns_array = instr->children[0]->children[0]->name == "ArrayType";
  std::string return_type;
  llvm::Type* return_type_llvm = nullptr;
  if (returns_array) {
    return_type =
        instr->children[0]->children[0]->children[0]->children[0]->name;
  } else {
    return_type = instr->children[0]->children[0]->children[0]->name;
  }
  if (return_type == "int") {
    return_type_llvm = llvm::Type::getInt32Ty(context);
  } else if (return_type == "bool") {
    return_type_llvm = llvm::Type::getInt8Ty(context);
  } else if (return_type == "string") {
    // TODO
  } else if (return_type == "void") {
    return_type_llvm = llvm::Type::getVoidTy(context);
  }
  auto* func_type = llvm::FunctionType::get(return_type_llvm, arg_types, false);
  llvm::Function* function =
      llvm::Function::Create(func_type, llvm::Function::ExternalLinkage,
                             instr->children[1]->children[0]->name, TheModule);
  auto* function_block = llvm::BasicBlock::Create(
      context, instr->children[1]->children[0]->name + "_function", function);
  Builder.SetInsertPoint(function_block);
  auto args = function->arg_begin();
  size_t number_of_cur_param = 0;
  while (args != function->arg_end()) {
    llvm::Value* arg = args++;
    arg->setName(instr->children[2]
                     ->children[number_of_cur_param]
                     ->children[1]
                     ->children[0]
                     ->name);
    auto* alloca = Builder.CreateAlloca(arg_types[number_of_cur_param]);
    auto* storage = Builder.CreateStore(arg, alloca);
    arguments[number_of_cur_param]->allocated_memory = alloca;
    ++number_of_cur_param;
  }
  scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
      new SymbolFunction(return_type, arguments, function,
                         instr->children[1]->children[0]->name, nullptr));
  scope_tree->AddLayer();
  args = function->arg_begin();
  number_of_cur_param = 0;
  while (args != function->arg_end()) {
    llvm::Value* arg = args++;
    if (instr->children[2]
            ->children[number_of_cur_param]
            ->children[0]
            ->children[0]
            ->name != "ArrayType") {
      std::string var_name = instr->children[2]
                                 ->children[number_of_cur_param]
                                 ->children[1]
                                 ->children[0]
                                 ->name;
      scope_tree->GetCurrentLayer()->symbol_table->CreateSymbol(
          new SymbolVariable(instr->children[2]
                                 ->children[number_of_cur_param]
                                 ->children[0]
                                 ->children[0]
                                 ->children[0]
                                 ->name,
                             var_name, arguments[number_of_cur_param]->allocated_memory));
      ++number_of_cur_param;
    } else {
      size_t number_of_elements = std::stoi(instr->children[2]
                                                ->children[number_of_cur_param]
                                                ->children[0]
                                                ->children[0]
                                                ->children[1]
                                                ->children[0]
                                                ->children[0]
                                                ->name);
      // TODO
    }
  }



  for (auto* instr_ : instr->children) {
    if (instr_->name == "Type" || instr_->name == "Name" ||
        instr_->name == "Parameter_list") {
      continue;
    }
    visitStatement(instr_);
  }
  if (return_type == "int") {
    Builder.CreateRet(Builder.getInt32(0));
  } else if (return_type == "bool") {
    Builder.CreateRet(Builder.getInt8(0));
  } else if (return_type == "string") {
    // TODO
  } else if (return_type == "void") {
    Builder.CreateRetVoid();
  }
  scope_tree->DeleteLayer();
  Builder.SetInsertPoint(pre_main_block);
  return nullptr;
}

void ASTSimplifier::Simplify(Instruction* instr) {
  for (auto* instr_ : instr->children) {
    if (instr_->name == "Pre_main") {
      continue;
    } else if (instr_->name == "Statement") {
      visitStatement(instr_);
    }
  }
}

void ASTSimplifier::SimplifyPreMain(Instruction* instr) {
  for (auto* instr_ : instr->children) {
    if (instr_->name == "Pre_main") {
      visitPre_main(instr_->children[0]);
    } else if (instr_->name == "Statement") {
      continue;
    }
  }
}

ASTSimplifier::ASTSimplifier(Instruction* instr, const std::string& path) {
  pre_main = llvm::Function::Create(
      llvm::FunctionType::get(llvm::Type::getVoidTy(context), false),
      llvm::Function::ExternalLinkage, "pre_main", TheModule);
  pre_main_block = llvm::BasicBlock::Create(context, "pre_main", pre_main);
  Builder.SetInsertPoint(pre_main_block);
  SimplifyPreMain(instr);
  Builder.CreateRetVoid();
  main = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage,
                                "main", TheModule);
  auto entry = llvm::BasicBlock::Create(context, "main_function", main);
  Builder.SetInsertPoint(entry);
  Simplify(instr);
  Builder.CreateRet(Builder.getInt32(0));
  std::error_code error_code;
  llvm::raw_fd_ostream outLL(path, error_code);
  TheModule.print(outLL, nullptr);
}