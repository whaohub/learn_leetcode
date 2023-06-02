#include <vector>
//
// slow:^
// fast:*
//[1	1	1	2	2	5]
// ^	*
// ^		*
// ^                    *  diff swap(^ +1,*) ^++, *++
//[1	2	1	1	2	5]
//      ^                       *
//      ^                                *  diff swap(^+1, *)
//              ^
// fast < size slow < fast
//
class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    if (nums.size() <= 1) {
      return nums.size();
    }

    unsigned int slow = 0;
    unsigned int fast = slow + 1;

    for (; fast < nums.size(); ++fast) {
      if (nums[slow] != nums[fast]) {
        std::swap(nums[++slow], nums[fast]);
      }
    }
    return slow + 1;
  }
};
