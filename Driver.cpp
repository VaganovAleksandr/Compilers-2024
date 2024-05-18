#include "Driver.h"

#include <iostream>

std::unique_ptr<Driver> driver = std::make_unique<Driver>();

void Driver::AddVariable(const std::string& type, const std::string& name,
                         const std::any& value) {
  if (variables_int.contains(name) || variables_bool.contains(name) ||
      variables_string.contains(name)) {
    std::cerr << "Symbol " << name << " is already defined";
    abort();
  }
  if (type == "int") {
    variables_int.emplace(name, std::any_cast<int>(value));
    return;
  }
  if (type == "bool") {
    variables_bool.emplace(name, std::any_cast<bool>(value));
    return;
  }
  if (type == "string") {
    variables_string.emplace(name, std::any_cast<std::string>(value));
    return;
  }
}

void Driver::ChangeVariable(const std::string& name, const std::any& new_value) {
  if (variables_int.contains(name)) {
    variables_int[name] = std::any_cast<int>(new_value);
    return;
  }
  if (variables_bool.contains(name)) {
    variables_bool[name] = std::any_cast<bool>(new_value);
    return;
  }
  if (variables_string.contains(name)) {
    variables_string[name] = std::any_cast<std::string>(new_value);
  }
  std::cerr << "Symbol " << name << " does not exist!";
  abort();
}

std::any Driver::GetVariable(const std::string& name) const {
  if (variables_int.contains(name)) {
    return driver->variables_int[name];
  }
  if (variables_bool.contains(name)) {
    return driver->variables_bool[name];
  }
  if (variables_string.contains(name)) {
    return driver->variables_string[name];
  }
  std::cerr << "Symbol " << name << " does not exist!";
  abort();
}

void Driver::Clear() {
  variables_int.clear();
  variables_bool.clear();
}