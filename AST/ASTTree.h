#ifndef ASTTree_H
#define ASTTree_H

#pragma once
#include "GrammarParser.h"
#include "GrammarBaseVisitor.h"

struct Instruction {
  Instruction() : name(""), children({}) {}
  Instruction(const std::string& name, const std::vector<Instruction*>& children)
      : name(name), children(children) {}
  ~Instruction() {
    for (auto* instr : children) {
      delete instr;
    }
  }
  void AddChild(Instruction* child) { children.push_back(child); }
  void Print(size_t number_of_tabs = 0) const noexcept;
  void PrintToFile(std::ofstream& file,
                   size_t number_of_tabs = 0) const noexcept;

  std::string name;
  std::vector<Instruction*> children;
};

class Prog : public GrammarParser::ProgContext {
 public:
  explicit Prog(GrammarParser::ProgContext* prog) : prog(prog){};
  explicit operator Instruction();

  GrammarParser::ProgContext* prog;
};

class ASTGenerator : public GrammarBaseVisitor {
 public:
  std::any visitProg(GrammarParser::ProgContext *ctx) override;
  std::any visitBase_type(GrammarParser::Base_typeContext *ctx) override;
  std::any visitVariable_declaration(
      GrammarParser::Variable_declarationContext *ctx) override;
  std::any visitVariable_definition(
      GrammarParser::Variable_definitionContext *ctx) override;
  std::any visitVariable_declaration_definition(
      GrammarParser::Variable_declaration_definitionContext *ctx) override;
  std::any visitPrint(GrammarParser::PrintContext *ctx) override;
  std::any visitFunction(GrammarParser::FunctionContext *ctx) override;
  std::any visitStatement(GrammarParser::StatementContext *ctx) override;
  std::any visitIf_statement(GrammarParser::If_statementContext *ctx) override;
  std::any visitElse_statement(
      GrammarParser::Else_statementContext *ctx) override;
  std::any visitExpression(GrammarParser::ExpressionContext *ctx) override;

  ~ASTGenerator() override = default;
};

class ASTTree {
 public:
  ASTTree() = default;
  ~ASTTree();
  void Build(GrammarParser::ProgContext* prog);
  void Print();
  void PrintToFile(const std::string& path_to_file);
  Instruction* GetRoot() const;

 private:
  Instruction* prog_root_instr = nullptr;
};

#endif