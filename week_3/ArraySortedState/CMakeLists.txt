cmake_minimum_required(VERSION 3.6)
project(ArraySortedState)

add_definitions(-std=gnu++0x)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main/cpp/com/wade-jensen/ArraySortedState/main.cpp
                    src/main/cpp/com/wade-jensen/ccputils/ioutils.cpp)
add_executable(project_run ${SOURCE_FILES})

include_directories(src/main/cpp/com/wade-jensen/ArraySortedState
                    src/main/cpp/com/wade-jensen/ccputils
                    src/main/cpp/com/wade-jensen/inc)

add_subdirectory(src/main)
add_subdirectory(src/test)

target_link_libraries(project_run src/main)
