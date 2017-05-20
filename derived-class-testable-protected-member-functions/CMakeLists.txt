cmake_minimum_required(VERSION 2.6)

find_package(GTest REQUIRED)
set(includes_production ${PROJECT_SOURCE_DIR}/include)
include_directories(${GTEST_INCLUDE_DIRS} ${includes_production})

file(GLOB_RECURSE sources_production src/*.cc)
file(GLOB_RECURSE sources_test test/*.cc)

add_executable(unit_tests ${sources_test} ${sources_production})
target_link_libraries(unit_tests ${GTEST_LIBRARIES} pthread)
