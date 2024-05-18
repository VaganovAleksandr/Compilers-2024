cmake_minimum_required(VERSION 3.20)

project(grammar)
SET(THREADS_PREFER_PTHREAD_FLAG ON)
SET(CMAKE_CXX_STANDARD 20)

add_subdirectory(runtime)
include_directories(runtime/src)

include_directories(AST ANTLR-generated IR ${PROJECT_SOURCE_DIR})

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libs support core irreader)

link_directories(dist)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(
        Program
        ANTLR-generated/GrammarBaseListener.cpp
        ANTLR-generated/GrammarLexer.cpp
        ANTLR-generated/GrammarListener.cpp
        ANTLR-generated/GrammarParser.cpp
        ANTLR-generated/GrammarVisitor.cpp
        Driver.cpp
        Interpreter.cpp
        main.cpp)

add_executable(
        PrintASTTree
        ANTLR-generated/GrammarParser.cpp
        ANTLR-generated/GrammarLexer.cpp
        AST/ASTTree.cpp
        AST/MakeASTTree.cpp
)

add_executable(
        Tests
        ANTLR-generated/GrammarLexer.cpp
        ANTLR-generated/GrammarParser.cpp
        Driver.cpp
        ANTLR-generated/GrammarBaseVisitor.cpp
        Interpreter.cpp
        Tests/InterpreterTests.cpp
)

add_executable(
        AST_to_llvm
        ANTLR-generated/GrammarParser.cpp
        ANTLR-generated/GrammarLexer.cpp
        IR/AST_to_llvm.cpp
        IR/ASTSimplifier.cpp
        AST/ASTTree.cpp
        ScopeTree.cpp
        Symbol.cpp
        SymbolTable.cpp
)

enable_testing()

gtest_discover_tests(Tests)

find_package(Threads REQUIRED)

# target_link_libraries(AST_to_llvm ${llvm_libs})

target_link_directories(Program PRIVATE dist)
target_link_libraries(Program antlr4-runtime)
target_link_libraries(Program Threads::Threads)

target_link_directories(PrintASTTree PRIVATE dist)
target_link_libraries(PrintASTTree antlr4-runtime)
target_link_libraries(PrintASTTree Threads::Threads)

target_link_directories(Tests PRIVATE dist)
target_link_libraries(Tests antlr4-runtime)
target_link_libraries(Tests Threads::Threads)

target_link_directories(AST_to_llvm PRIVATE dist)
target_link_libraries(AST_to_llvm antlr4-runtime)
target_link_libraries(AST_to_llvm Threads::Threads)

target_link_libraries(AST_to_llvm ${llvm_libs})

target_link_libraries(Tests GTest::Main)

target_precompile_headers(AST_to_llvm PUBLIC IR/llvm_headers.h)