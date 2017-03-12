cmake_minimum_required(VERSION 3.6)
project(CMakeGTest)
set(CMAKE_CXX_STANDARD 11)


add_definitions(-std=gnu++0x)

set(SOURCE_FILES main/cpp/com/wade-jensen/Unit_Testing/main.cpp)
add_executable(cmakegtest_run ${SOURCE_FILES})

include_directories(main)

add_subdirectory(main)
add_subdirectory(test)

target_link_libraries(cmakegtest_run testrun)