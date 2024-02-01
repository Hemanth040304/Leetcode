class Solution {
public:

    int gfs(int i, int j, int &n, int &m, vector<vector<int>>&dp, vector<vector<int>>& obstacleGrid){
        if(i==n-1 and j==m-1){
            if(obstacleGrid[i][j])return 0;
            return 1;
        }
        if(i>=n or j>=m)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(obstacleGrid[i][j])return 0;
        return dp[i][j] = gfs(i+1,j,n,m,dp,obstacleGrid) + gfs(i,j+1,n,m,dp,obstacleGrid);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return gfs(0,0,n,m,dp,obstacleGrid);
    }
};