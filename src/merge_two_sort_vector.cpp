#include <vector>
class Solution 
{
public:
    //error solution test case 
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
    {
        int idx = nums1.size() -1;    //merge nums1 index

        int current_m = --m;
        int current_n = --n;
        while(current_n >= 0)
            if(current_m >= 0 && nums1[current_m] > nums2[current_n])
                std::swap(nums1[idx--],nums1[current_m--]);
		 
            else
                std::swap(nums1[idx--], nums2[current_n--]);

    }
};

int main ()
{
    Solution s;
    std::vector<int> nums1 = {2, 0}; // test case
    std::vector<int> nums2 = {1};
    s.merge(nums1, 1, nums2, nums2.size());

    return 0;
}
