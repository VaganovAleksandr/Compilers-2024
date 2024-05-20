#include "Symbol.h"

#include <utility>

SymbolBase::SymbolBase(std::string name, llvm::Value* allocated_memory)
    : name(std::move(name)), allocated_memory(allocated_memory) {}

bool SymbolBase::operator==(const SymbolBase& other) const {
  return name == other.name;
}

bool SymbolBase::operator!=(const SymbolBase& other) const {
  return name != other.name;
}

SymbolVariable::SymbolVariable(std::string base_type, const std::string& name_,
                               std::any value, llvm::Value* allocated_memory_)
    : base_type(std::move(base_type)), value(std::move(value)) {
  name = name_;
  allocated_memory = allocated_memory_;
}

SymbolVariable::SymbolVariable(std::string base_type, const std::string& name_,
                               llvm::Value* allocated_memory_)
    : base_type(std::move(base_type)) {
  name = name_;
  allocated_memory = allocated_memory_;
}

SymbolFunction::SymbolFunction(std::string return_type,
                               std::vector<SymbolVariable*> args,
                               llvm::Function* function,
                               const std::string& name_,
                               llvm::Value* allocated_memory_)
    : return_type(std::move(return_type)),
      arguments(std::move(args)),
      function(function) {
  name = name_;
  allocated_memory = allocated_memory_;
}

SymbolClass::SymbolClass(std::vector<SymbolVariable*> fields,
                         std::vector<SymbolFunction*> methods,
                         const std::string& name_,
                         llvm::Value* allocated_memory_)
    : fields(std::move(fields)), methods(std::move(methods)) {
  name = name_;
  allocated_memory = allocated_memory_;
}