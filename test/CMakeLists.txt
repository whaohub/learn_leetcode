cmake_minimum_required(VERSION 3.22)

project (unit_test) 
LINK_DIRECTORIES(/opt/gtest/lib
    )

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")

add_executable(
    ${PROJECT_NAME} 
    #unit_test_remove_dup.cpp
    #../src/valid_palindrome.cpp
    #unit_vaild_palindrome.cc
    #../src/is_subsequence.cc
    #unit_test_is_subsequence.cc
    #../src/has_cycle.cpp
    #unit_test_has_cycle.cc
    #../src/findkth_largest.cpp
    #unit_test_findkthlargest.cpp
    #../src/majority_element.cpp
    #unit_test_majority_element.cpp
    #../src/climb_stairs.cpp
    #unit_test_climb_stairs.cpp
    #../src/topK_frequent_elements.cpp
    #unit_test_topk_frequent_elem.cpp
    #../src/lru_cache.cpp
    #unit_test_lru_cache.cpp
    ../src/removeNth_from_end.cpp
    unit_test_removeNth_from_end.cpp
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

