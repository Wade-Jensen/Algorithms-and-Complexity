set(SOURCE_FILES cpp/com/wade-jensen/UnitTest1/main.cpp)
add_library(core cpp/com/wade-jensen/UnitTest1/main.cpp)
add_executable(UnitTest1 ${SOURCE_FILES})
target_link_libraries(UnitTest1 core)