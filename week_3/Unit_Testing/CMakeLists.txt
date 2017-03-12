cmake_minimum_required(VERSION 3.6)
project(Unit_Testing)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/gtest-1.8.0)
include_directories(lib/gtest-1.8.0/googletest/include)
include_directories(lib/gtest-1.8.0/googlemock/include)

set(SOURCE_FILES main.cpp tests/ClassName.h tests/test_run.cpp)
add_executable(Unit_Testing ${SOURCE_FILES} tests/ClassName.h tests/test_run.cpp)
target_link_libraries(Unit_Testing gtest gtest_main)