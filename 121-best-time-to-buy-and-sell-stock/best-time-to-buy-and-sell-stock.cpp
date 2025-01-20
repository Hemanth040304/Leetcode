class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), min_ind = 0;
        vector<int> dp(n, 0);

        for (int i = 0; i < n; i++) {
            if (prices[i] < prices[min_ind]) min_ind = i;
            dp[i] = max(prices[i] - prices[min_ind], (i > 0 ? dp[i - 1] : 0));
        }

        return dp[n - 1];
    }
};
