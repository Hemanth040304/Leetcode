class Solution {
public:
    int dp[201][201];
    int dfs(int i, int j, int n, int m, vector<vector<int>> &vis, vector<vector<int>> &matrix,int Prev){
        if(i < 0 or i >= n or j < 0 or j >= m or vis[i][j] or Prev >= matrix[i][j])return 0;
        if(dp[i][j] != -1) return dp[i][j];
        vis[i][j] = 1;
        int a = 1 + dfs(i + 1, j, n, m, vis, matrix, matrix[i][j]);
        int b = 1 + dfs(i - 1, j, n, m, vis, matrix, matrix[i][j]);
        int c = 1 + dfs(i, j + 1, n, m, vis, matrix, matrix[i][j]);
        int d = 1 + dfs(i, j - 1, n, m, vis, matrix, matrix[i][j]);
        vis[i][j] = 0;
        return dp[i][j] = max(max(a, b), max(c, d));
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        memset(dp,-1,sizeof(dp));
        vector<vector<int>>vis(n,vector<int>(m,0));
        int maxi = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                maxi = max(maxi, dfs(i,j,n,m,vis,matrix,-1));
            }
        }
        return maxi;
    }
};