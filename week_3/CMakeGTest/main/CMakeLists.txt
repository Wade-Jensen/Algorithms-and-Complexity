include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(main/cpp/com/wade-jensen/Unit_Testing/main.cpp)

target_link_libraries(main gtest gtest_main)