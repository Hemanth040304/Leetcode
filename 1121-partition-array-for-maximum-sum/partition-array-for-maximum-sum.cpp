class Solution {
public:

    int call(int i, int &n, int &k, vector<int> &arr, vector<int> &dp){
        if(i==n)return 0;
        if(dp[i]!=-1)return dp[i];
        int a = 0, b = 0;
        for(int j = i ; j < n and j < k+i ; j++){
            a = max(a,arr[j]);
            int l = j-i+1;
            b = max( b, a*l+call(j+1,n,k,arr,dp));
        }
        return dp[i] = b;
    }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>dp(n,-1);
        return call(0,n,k,arr,dp);
    }
};