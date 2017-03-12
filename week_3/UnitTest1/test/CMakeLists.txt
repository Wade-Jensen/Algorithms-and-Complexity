set(SOURCE_FILES cpp/com/wade-jensen/UnitTest1/tests.cpp)
add_executable(runUnitTests ${SOURCE_FILES})
add_library(tests cpp/com/wade-jensen/UnitTest1/tests.cpp)
target_link_libraries(runUnitTests gtest gmock core)