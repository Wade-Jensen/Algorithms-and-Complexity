cmake_minimum_required(VERSION 3.6)
project(reverse)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main/cpp/com/wade-jensen/program_name/main.cpp
        src/main/cpp/com/wade-jensen/cpputils/ioutils.cpp)
add_executable(reverse ${SOURCE_FILES})