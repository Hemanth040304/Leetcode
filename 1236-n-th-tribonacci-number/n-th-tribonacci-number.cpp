class Solution {
public:
    int fun(int n, vector<int> &dp){
        if(n < 2)return n;
        if(n == 2)return 1;
        if(dp[n] != -1)return dp[n];
        return dp[n] = fun(n-1,dp)+fun(n-2,dp)+fun(n-3,dp);
    }
    int tribonacci(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<int> dp(n+1, -1);
        return fun(n,dp);
    }
};