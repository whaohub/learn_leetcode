#include <gtest/gtest.h>
#include <vector>
#include <findkth_largest.cpp>

TEST(FindKthLargest, FindKth) {
  std::vector<int> nums = {3, 2, 1, 5, 6, 4};

  Solution s;
  EXPECT_EQ(s.findKthLargest(nums, 2), 5);
}