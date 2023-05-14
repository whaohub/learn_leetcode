#include <gtest/gtest.h>

#include <string>

#include "is_subsequence.cc"

TEST(IsSubsequenceTest, PositiveTest) {
  Solution s;
  EXPECT_TRUE(s.isSubsequence("abc", "ahbgdc"));
  EXPECT_TRUE(s.isSubsequence("ace", "abcde"));
  EXPECT_TRUE(s.isSubsequence("bcd",
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
                              "uuuuuuuuuuuuuuuuuuuuuuuuubcd"));
}

TEST(IsSubsequenceTest, NegativeTest) {
  Solution s;
  EXPECT_FALSE(s.isSubsequence("axc", "ahbgdc"));
  EXPECT_FALSE(s.isSubsequence("aec", "abcde"));
}