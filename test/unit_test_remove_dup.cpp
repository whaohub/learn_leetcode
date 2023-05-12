#include "remove_duplicates.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(SolutionTest, RemoveDuplicates)
{
    Solution solution;
    std::vector<int> nums1 {1, 1, 1, 2, 2, 5};
    EXPECT_EQ(solution.removeDuplicates(nums1), 3)<<"solution.removeDuplicates(nums1)";

    std::vector<int> nums2 {1, 2, 3, 4, 5};
    EXPECT_EQ(solution.removeDuplicates(nums2), 5);

    std::vector<int> nums3 {1, 1, 1, 1, 1};
    EXPECT_EQ(solution.removeDuplicates(nums3), 1);
}

// int main()
// {
//     Solution solution;
//     std::vector<int> nums1 {1, 1, 1, 2, 2, 5};
//     printf("result = %d",solution.removeDuplicates(nums1));
// }