//https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/description/
//Biweekly Contest 122

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1,nums.end());
        return nums[0]+nums[1]+nums[2];
    }
};
