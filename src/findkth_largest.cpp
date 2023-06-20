/* 给定整数数组 nums 和整数 k，请返回数组中第 k 个最大的元素。
 * 你必须设计并实现时间复杂度为 O(n) 的算法解决此问题。
 * input:  [3,2,1,5,6,4], k = 2
 * output: 5
 */

/*  使用max heap 实现
 *     6
 *    / \
 *   5   4
 *  / \ / \
 * 3  2 1
 */

#include <queue>
#include <vector>

class Solution {
public:
  int findKthLargest(std::vector<int> &nums, int k) {
    if (k > nums.size())
      return -1;

    std::priority_queue<int> pq;
    // max heap
    for (auto i : nums) {
      pq.push(i);
    }

    // find kth largest
    for (int i = 0; i < k - 1; ++i) {
      pq.pop();
    }

    return pq.top();
  }
};