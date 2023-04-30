cmake_minimum_required(VERSION 3.22)

project (unit_test) 
LINK_DIRECTORIES(/opt/gtest/lib
    ./build/
    )

add_executable(
    ${PROJECT_NAME} 
    example_add.cpp
    example_subtract.cpp
    )

target_include_directories(unit_test
    PUBLIC
        /opt/gtest/
	../src/
)


target_link_libraries(unit_test
    PRIVATE
    example
    gtest gtest_main gcov pthread 
)

