class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1 , INT_MAX-1);
        vector<int>v;
        for(int i = 1 ; i <= n ; i++){
            int a = i*i;
            if(a>n) break;
            v.emplace_back(a);
        }
        dp[0] = 0;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j < v.size() ; j++){
                if(v[j] <= i){
                    dp[i] = min(dp[i - v[j]] + 1 , dp[i]);
                }
            }
        }
        if(dp[n]==INT_MAX-1) return -1;
        return dp[n];
    }
};