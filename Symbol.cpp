#include "Symbol.h"

Symbol::Symbol(std::string type, std::string base_type, std::string name,
               llvm::Value* allocated_memory)
    : type(std::move(type)),
      base_type(std::move(base_type)),
      name(std::move(name)),
      allocated_memory(allocated_memory) {}

Symbol::Symbol(std::string type, std::string base_type, std::string name,
               std::any value, llvm::Value* allocated_memory)
    : type(std::move(type)),
      base_type(std::move(base_type)),
      name(std::move(name)),
      value(std::move(value)),
      allocated_memory(allocated_memory) {}

bool Symbol::operator==(const Symbol& other) const {
  return name == other.name;
}

bool Symbol::operator!=(const Symbol& other) const {
  return name != other.name;
}