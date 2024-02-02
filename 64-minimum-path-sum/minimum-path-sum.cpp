class Solution {
public:

    int call(int n, int m, vector<vector<int>>&dp, vector<vector<int>> &grid){
        if(n < 0 or m < 0)return INT_MAX;
        if(n==0 and m==0)return grid[n][m];
        if(dp[n][m]!=INT_MAX)return dp[n][m];
        return dp[n][m] = min(call(n-1,m,dp,grid),call(n,m-1,dp,grid))+grid[n][m];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        return call(n-1,m-1,dp,grid);
    }
};