add_library(leetcode_test)

target_sources(leetcode_test
    PRIVATE merge_two_sort_vector.cpp
    PRIVATE remove_element.cpp
  )

target_include_directories(leetcode_test
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

# we use this to get code coverage
# flags are only valid with the GNU compiler and on Linux
if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
  target_compile_options(leetcode_test
    PUBLIC
      "--coverage"
    )
  target_link_options(leetcode_test
    INTERFACE
      "--coverage"
    )
endif()
