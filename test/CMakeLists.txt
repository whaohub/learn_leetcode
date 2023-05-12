cmake_minimum_required(VERSION 3.22)

project (unit_test) 
LINK_DIRECTORIES(/opt/gtest/lib
    )

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

add_executable(
    ${PROJECT_NAME} 
    unit_test_remove_dup.cpp
    )

target_include_directories(unit_test
    PUBLIC
        /opt/gtest/
	../src/
)


target_link_libraries(unit_test
    PRIVATE
    gtest gtest_main gcov pthread 
)

