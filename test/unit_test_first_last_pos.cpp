#include "find_fist_and_last_pos_insort.cpp"
#include <gtest/gtest.h>



// Test the searchRange function
TEST(SearchRangeTest, BasicTest) {
  Solution s;
    // Test case: nums = {5, 7, 7, 8, 8, 10}, target = 8
    std::vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    std::vector<int> expected = {3, 4};

    std::vector<int> result = s.searchRange(nums, target);

    EXPECT_EQ(result, expected);
}

TEST(SearchRangeTest, ElementNotFoundTest) {
  Solution s;
    // Test case: nums = {5, 7, 7, 8, 8, 10}, target = 6
    std::vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 6;
    std::vector<int> expected = {-1, -1};

    std::vector<int> result = s.searchRange(nums, target);

    EXPECT_EQ(result, expected);
}
