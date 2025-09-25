cmake_minimum_required(VERSION 3.10)

project(prog1)

add_executable(prog1 1.cpp help.cpp)

enable_testing()

find_package(GTest REQUIRED)
add_executable(test1 tests/test_prog.cpp help.cpp)
target_link_libraries(test1 GTest::GTest GTest::Main)
add_test(NAME HelpTests COMMAND test1)