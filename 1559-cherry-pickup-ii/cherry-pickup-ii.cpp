class Solution {
public:
    int dp[101][101][101];
    int moves[3] = {0,-1,1};
    int dfs(vector<vector<int>>& grid, int i, int c1, int c2, int m, int n){
        if(i==m)return 0;
        if(c1<0 || c2<0 || c1>=n || c2>=n) return INT_MIN;
        int ans = 0;
        if(dp[i][c1][c2]!=-1)return dp[i][c1][c2];
        for(int k=0;k<3;k++){
            for(int r=0;r<3;r++){
                ans = max(ans, dfs(grid, i+1, c1 + moves[k], c2 + moves[r] , m, n));
            }
        }
        if(c1==c2){
            ans+=grid[i][c1];
        }
        else{
            ans+=(grid[i][c1]+grid[i][c2]);
        }
        return dp[i][c1][c2] = ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int m = grid.size();
        int n  = grid[0].size();
        return dfs(grid,0,0,n-1,m,n);
    }
};