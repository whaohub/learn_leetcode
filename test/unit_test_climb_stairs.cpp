#include "climb_stairs.cpp"
#include <gtest/gtest.h>

TEST(ClimbStairsTest, ClimbStairsSolution0Test) {
  Solution s;
  EXPECT_EQ(s.climbStairs(2), 2);
  EXPECT_EQ(s.climbStairs(3), 3);
}


TEST(ClimbStairsTest, ClimbStairsSolution1Test) {
  Solution s;
  EXPECT_EQ(s.climbStairs1(2), 2);
  EXPECT_EQ(s.climbStairs1(3), 3);
}

TEST(ClimbStairsTest, ClimbStairsSolution2Test) {
  Solution s;
  EXPECT_EQ(s.climbStairs2(2), 2);
  EXPECT_EQ(s.climbStairs2(3), 3);
}