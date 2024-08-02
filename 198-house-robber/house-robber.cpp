class Solution {
private:
    int fun (vector<int> &nums, int n, vector<int> dp) {
        // memoization
        if (n == 0) return nums[n];
        if (n < 0) return 0;
        if (dp[n] != -1) return dp[n];
        int a = nums[n] + fun(nums, n - 2, dp);
        int b = fun(nums, n - 1, dp);
        return dp[n] = max(a, b);
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        // tabulation
        if (n == 1) return nums[0];

        vector<int> dp(n, 0);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[n - 1];

    }
};