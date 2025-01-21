class Solution {
private:
    bool Love(int ind, int n, vector<int> &nums, vector<int> &dp) {
        if (ind >= n) return 0;
        if (dp[ind] != -1) return dp[ind];
        
        if (ind == n - 1) return dp[ind] = 1;
        if (nums[ind] == 0) return dp[ind] = 0;

        bool store = false;

        for (int i = 1; i <= nums[ind]; i++) {
            if(Love(ind + i, n, nums, dp)) {
                store = true;
                break;
            }
        }

        return dp[ind] = store;

    }

public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true;
        vector<int> dp(n + 1, -1);
        return Love(0, n, nums, dp);
        return dp[n];
    }
};