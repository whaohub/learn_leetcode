/*
 *给定一个大小为 n 的数组 nums
 *，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
 *输入：nums = [2,2,1,1,1,2,2]
 *输出：2
 *尝试设计时间复杂度为 O(n)、空间复杂度为 O(1)
 */

/*
 * solution 摩尔投票算法
 * [2,2,1,1,1,2,2]
 *  + + - - r + +
 *  1 2 1 0 1 0 1
 * ret = target
 */

#include <cstddef>
#include <vector>

class Solution {
public:
  int majorityElement(std::vector<int> &nums) {

    int target = nums[0];
    int cnt = 1;
    for (std::size_t i = 1; i < nums.size(); i++) {

      if(cnt == 0) target = nums[i];
      
      if (target == nums[i])
        ++cnt;
      else
        --cnt;
    }
    return target;
  }
};
