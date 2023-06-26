#include <gtest/gtest.h>
#include <majority_element.cpp>
#include <vector>

TEST(MajorityElementTest, majorityElementUt) {
  Solution s;
  std::vector<int> vc = {2,2,1,1,1,2,2};
  EXPECT_EQ(s.majorityElement(vc), 2);
}