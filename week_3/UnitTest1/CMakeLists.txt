cmake_minimum_required(VERSION 3.6)
project(UnitTest1)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(gtest-1.8.0)
add_subdirectory(main)
add_subdirectory(test)


################################
# GTest
################################
#ADD_SUBDIRECTORY (gtest-1.8.0)
#enable_testing()
#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
#add_executable( runUnitTests test/cpp/com/wade-jensen/UnitTest1/tests.cpp )
# Link test executable against gtest & gtest_main
#target_link_libraries(runUnitTests gtest gtest_main pthread)
#add_test( runUnitTests runUnitTests )