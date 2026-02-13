cmake_minimum_required(VERSION 3.10)
project(laba1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# Основная программа
add_executable(main 
    src/main.cpp 
    src/func.cpp
)

target_include_directories(main PRIVATE include)

# Тесты
find_package(GTest REQUIRED)

add_executable(run_tests 
    tests/test.cpp 
    src/func.cpp
)

target_include_directories(run_tests PRIVATE include)
target_link_libraries(run_tests GTest::GTest GTest::Main)

add_test(NAME FuncTests COMMAND run_tests)