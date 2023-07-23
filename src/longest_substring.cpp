// 给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。

// 示例 1:

// 输入: s = "abcabcbb"
// 输出: 3
// 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。

#include <cstddef>
#include <string>
#include <unordered_set>
#include <climits>

class Solution {
public:
  int lengthOfLongestSubstring(std::string s) {
    if (s.empty())
      return 0;

    std::unordered_set<char> un_set;
    int left = 0;
    int max_length = INT_MIN;
    for (int i = 0; i < s.size(); ++i) {
      while (un_set.count(s[i])) {
        un_set.erase(s[left]);
        ++left;
      }
      un_set.insert(s[i]);
      max_length = std::max(max_length, i - left + 1);
    }

    return max_length;
  }
};