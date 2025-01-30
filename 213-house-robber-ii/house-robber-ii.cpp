class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        vector<int> dp(n, 0);
        vector<int> pd(n, 0);


        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n - 1; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        
        
        pd[1] = nums[1];
        pd[2] = max(pd[1], nums[2]);
        for (int i = 3; i < n; i++) {
            pd[i] = max(pd[i - 1], nums[i] + pd[i - 2]);
        }

        return max(dp[n - 2], pd[n - 1]);
    }
};