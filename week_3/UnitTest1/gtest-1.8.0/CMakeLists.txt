cmake_minimum_required(VERSION 2.6.4)

project( googletest-distribution )

enable_testing()

option(BUILD_GTEST "Builds the googletest subproject" ON)

#Note that googlemock target already builds googletest
option(BUILD_GMOCK "Builds the googlemock subproject" ON)

add_subdirectory( googlemock )
add_subdirectory( googletest )
