cmake_minimum_required(VERSION 3.20)

project(grammar)
SET(THREADS_PREFER_PTHREAD_FLAG ON)
SET(CMAKE_CXX_STANDARD 20)

add_subdirectory(runtime)
include_directories(runtime/src)

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

add_executable(
        Tests
        GrammarLexer.cpp
        GrammarParser.cpp
        Driver.cpp
        GrammarBaseVisitor.cpp
        Interpreter.cpp
        Tests/InterpreterTests.cpp)

enable_testing()

gtest_discover_tests(Tests)

find_package(Threads REQUIRED)

target_link_directories(Program PRIVATE dist)
target_link_libraries(Program antlr4-runtime)
target_link_libraries(Program Threads::Threads)

target_link_directories(PrintASTTree PRIVATE dist)
target_link_libraries(PrintASTTree antlr4-runtime)
target_link_libraries(PrintASTTree Threads::Threads)

target_link_directories(Tests PRIVATE dist)
target_link_libraries(Tests antlr4-runtime)
target_link_libraries(Tests Threads::Threads)

target_link_libraries(Tests GTest::Main)