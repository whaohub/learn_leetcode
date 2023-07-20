//给你一个整数数组 nums 和一个整数 k ，
//请你返回其中出现频率前 k 高的元素。
//你可以按 任意顺序 返回答案。

// 示例 1:

// 输入: nums = [1,1,1,2,2,3], k = 2
// 输出: [1,2]

// step1: 使用unordered_map 保存数字及数字出现的次数；key(num),value(times)
// step2: 使用priority_queue 构造max_heap
// step3: 获取max_heap top k

#include <queue>
#include <unordered_map>
#include <utility>
#include <vector>

class Solution {
public:
  // compare functor: 因为需要比较pair中的存储的次数值
  struct compare {
    bool operator()(const std::pair<int, int> &a,
                    const std::pair<int, int> &b) {
      return a.second < b.second;
    }
  };

  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    std::unordered_map<int, int> un_map;

    // key:nums value:times
    for (const auto &num : nums) {
      un_map[num]++;
    }

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>,
                        compare>
        max_heap;

    // build max heap
    for (const auto &value : un_map) {
      max_heap.push(value);
    }

    std::vector<int> ret;
    // get topK frequent elements
    while(k--) {
      ret.emplace_back(max_heap.top().first);
      max_heap.pop();
    }

    return ret;
  }
};