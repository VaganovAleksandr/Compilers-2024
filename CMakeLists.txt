cmake_minimum_required(VERSION 3.10)

project(grammar)
SET(THREADS_PREFER_PTHREAD_FLAG ON)
SET(CMAKE_CXX_STANDARD 20)

add_subdirectory(runtime)
include_directories(runtime/src)

add_executable(
        Program
        GrammarBaseListener.cpp
        GrammarLexer.cpp
        GrammarListener.cpp
        GrammarParser.cpp
        GrammarVisitor.cpp
        Driver.cpp
        Interpreter.cpp
        main.cpp)

add_executable(
        PrintASTTree
        GrammarParser.cpp
        GrammarLexer.cpp
        ASTTree.cpp
        MakeASTTree.cpp
)

find_package(Threads REQUIRED)

target_link_directories(Program PRIVATE dist)
target_link_libraries(Program antlr4-runtime)
target_link_libraries(Program Threads::Threads)

target_link_directories(PrintASTTree PRIVATE dist)
target_link_libraries(PrintASTTree antlr4-runtime)
target_link_libraries(PrintASTTree Threads::Threads)