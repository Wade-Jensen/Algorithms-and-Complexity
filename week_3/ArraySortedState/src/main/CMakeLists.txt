set(CORE_SOURCE_FILES src/main/cpp/com/wade-jensen/ArraySortedState/main.cpp
        src/main/cpp/com/wade-jensen/ccputils/ioutils.cpp)
add_executable(ArraySortedState ${CORE_SOURCE_FILES})

add_library(core ${CORE_SOURCE_FILES})
add_executable(exe src/main/cpp/com/wade-jensen/ArraySortedState/main.cpp)
target_link_libraries(exe core)