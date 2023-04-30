#include <vector>
#include <iostream>
class Solution 
{
public:
    int removeElement(std::vector<int>& nums, int val) 
    {
	int left = 0;
//	int right = nums.size() - 1; // error test case2 not pase 
	int right = nums.size();	
	while(left < right)
	{
	    if(nums[left] == val)
		std::swap(nums[left], nums[--right]);
	    else
		++left;
	}
	return left;
    }
};


// test case1: nums = [3,2,2,3], val = 3
// output：2, nums = [2,2]

//test case2 : nums = [1], val = 1
//output:0,
int main()
{
    std::vector<int> nums = { 3, 2, 2, 3 };
    Solution s;
    s.removeElement(nums, 3);

    for(const auto &val : nums)
	std::cout<<"val = "<<val<<std::endl;
    return 0;
}
