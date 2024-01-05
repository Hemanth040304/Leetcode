//https://leetcode.com/problems/longest-increasing-subsequence/?envType=daily-question&envId=2024-01-05

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1];
        int maxi=0;
        for(int i = 0 ; i < n ; i++){
            int tempmax = 0;
            for(int j = 0 ; j < i ; j++){
                if(nums[i]>nums[j]){
                    if(tempmax<dp[j])tempmax=dp[j];
                }
            }
            dp[i]=tempmax+1;
            maxi = max(maxi,dp[i]);
        }
        return maxi;
    }
};
