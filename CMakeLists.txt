cmake_minimum_required(VERSION 3.10)

project(grammar)
SET(THREADS_PREFER_PTHREAD_FLAG ON)
SET(CMAKE_CXX_STANDARD 20)

add_subdirectory(runtime)
include_directories(runtime/src)
include_directories(expression)
include_directories(statement)
include_directories(variable_declaration)
include_directories(variable_definition)
include_directories(variable_declaration_definition)

add_executable(
        Program
        GrammarBaseListener.cpp
        GrammarLexer.cpp
        GrammarListener.cpp
        GrammarParser.cpp
        GrammarVisitor.cpp
        Driver.cpp
        ASTTree.cpp
        Interpreter.cpp
        main.cpp)

find_package(Threads REQUIRED)

target_link_directories(Program PRIVATE dist)
target_link_libraries(Program antlr4-runtime)
target_link_libraries(Program Threads::Threads)