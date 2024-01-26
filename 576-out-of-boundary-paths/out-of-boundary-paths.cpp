#define MOD 1000000007

class Solution {
public:
    int dp[51][51][51];

    int ans(int &m, int &n, int i, int j, int move){
        if(i < 0 or j < 0 or i > m-1 or j > n-1)return 1;
        if(move<=0)return 0;
        if(dp[i][j][move]!=-1)return dp[i][j][move];
        return dp[i][j][move] = ((((ans(m,n,i+1,j,move-1) % MOD)+(ans(m,n,i-1,j,move-1) % MOD))%MOD+(ans(m,n,i,j+1,move-1) % MOD))%MOD+(ans(m,n,i,j-1,move-1) % MOD))%MOD;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return ans(m,n,startRow,startColumn,maxMove)%MOD;
    }
};