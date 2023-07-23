#include "longest_substring.cpp"
#include <gtest/gtest.h>

TEST(LongestSubStringTest, BasicTest) {
  Solution s;
  EXPECT_EQ(s.lengthOfLongestSubstring("abcabcbb"), 3);

  EXPECT_EQ(s.lengthOfLongestSubstring("bbbbbb"), 1);

  EXPECT_EQ(s.lengthOfLongestSubstring("pwwkew"), 3);
}