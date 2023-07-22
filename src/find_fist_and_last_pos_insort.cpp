// 在排序数组中查找元素的第一个和最后一个位置
// 给你一个按照非递减顺序排列的整数数组 nums，和一个目标值
// target。请你找出给定目标值在数组中的开始位置和结束位置。
// 如果数组中不存在目标值 target，返回 [-1, -1]。

// 你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。

// 示例 1：

// 输入：nums = [5,7,7,8,8,10], target = 8
// 输出：[3,4]

#include <vector>

class Solution {
public:
  int binary_search(const std::vector<int> &nums, int target,
                    bool first_index) {
    int left = 0;
    int right = nums.size() - 1;
    int result_index = -1;

    while (left <= right) {
      int mid = (left + right) / 2;
      if (nums[mid] == target) {
        result_index = mid;
        if (first_index) {
          right = mid - 1;
        } else {
          left = mid + 1;
        }
      } else if (nums[mid] > target) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }

    return result_index;
  }

  std::vector<int> searchRange(std::vector<int> &nums, int target) {
    int first_index = binary_search(nums, target, true);
    if (first_index == -1)
      return {-1, -1};

    int last_index = binary_search(nums, target, false);

    return {first_index,last_index};
  }
};