#include "Driver.h"

#include <format>
#include <iostream>

std::unique_ptr<Driver> driver = std::make_unique<Driver>();

void Driver::AddVariable(const std::string& type, const std::string& name,
                         int value) {
  if (variables_int.contains(name) || variables_bool.contains(name)) {
    throw std::logic_error(std::format("Variable {} already exists.", name));
  }
  if (type == "int") {
    variables_int.emplace(name, value);
    return;
  }
  variables_bool.emplace(name, value);
}

void Driver::ChangeVariable(const std::string& name, int new_value) {
  if (!(variables_int.contains(name) || variables_bool.contains(name))) {
    throw std::logic_error(std::format("Variable {} does not exist.", name));
  }
  if (variables_int.contains(name)) {
    variables_int[name] = new_value;
    return;
  }
  variables_bool[name] = new_value;
}

int Driver::GetVariable(const std::string& name) const {
  if (!(variables_int.contains(name) || variables_bool.contains(name))) {
    throw std::logic_error(std::format("Variable {} does not exist.", name));
  }
  return variables_int.contains(name) ? variables_int.at(name)
                                      : variables_bool.at(name);
}