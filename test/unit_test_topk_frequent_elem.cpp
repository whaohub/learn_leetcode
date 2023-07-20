#include "topK_frequent_elements.cpp"
#include <gtest/gtest.h>
#include <vector>

TEST(TopKFrequent, TopKFrequentTest) {
  std::vector<int> test_case1{1,1,1,2,2,3};
  std::vector<int> test_case2{1};
  std::vector<int> test_case3{-1, -1};
  int k1 = 2;
  int k2 = 1;

  std::vector<int> expect1{1,2};
  std::vector<int> expect2{1};

  Solution s;
  EXPECT_EQ(expect1,s.topKFrequent(test_case1, k1));
  EXPECT_EQ(expect2,s.topKFrequent(test_case2, k2));
  EXPECT_EQ(std::vector<int>{-1},s.topKFrequent(test_case3, k2));


}