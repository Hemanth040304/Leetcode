class Solution {
public:

    int call(int i, int j, int n, int m, vector<vector<int>>&dp, vector<vector<int>> &grid){
        if(i >= n or j >= m)return INT_MAX;
        if(i==n-1 and j==m-1)return grid[i][j];
        if(dp[i][j]!=INT_MAX)return dp[i][j];
        return dp[i][j] = min(call(i+1,j,n,m,dp,grid),call(i,j+1,n,m,dp,grid))+grid[i][j];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        return call(0,0,n,m,dp,grid);
    }
};