cmake_minimum_required(VERSION 3.6)
project(pi_on_four)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main/cpp/com/wade-jensen/program_name/main.cpp
        src/main/cpp/com/wade-jensen/ccputils/ioutils.cpp)
add_executable(pi_on_four ${SOURCE_FILES})