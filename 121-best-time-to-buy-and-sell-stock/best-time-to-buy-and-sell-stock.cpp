class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0;
        int mini = prices[0];
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            int cost = prices[i] - mini;
            maxProfit = max(cost, maxProfit);
            mini = min(prices[i], mini);
        }

        return maxProfit;
    }
};