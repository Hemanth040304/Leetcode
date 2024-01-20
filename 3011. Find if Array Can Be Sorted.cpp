//https://leetcode.com/problems/find-if-array-can-be-sorted/description/
//Biweekly Contest 122


class Solution {
public:
    
    bool canSortArray(vector<int>& nums) {
        for(int i = 0 ; i < nums.size()-1 ; i++){
            for(int j = 0 ; j < nums.size()-i-1 ; j++){
                if(nums[j]>nums[j+1] and (__builtin_popcount(nums[j]))==(__builtin_popcount(nums[j+1]))){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        vector<int>cop;
        cop = nums;
        sort(cop.begin(),cop.end());
        return cop==nums;
    }
};
