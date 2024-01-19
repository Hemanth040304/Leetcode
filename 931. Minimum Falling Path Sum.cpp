//https://leetcode.com/problems/minimum-falling-path-sum/description/?envType=daily-question&envId=2024-01-19


class Solution {
public:
    int dfs(vector<vector<int>>&matrix,int i,int j , vector<vector<int>>&dp,int n){
        if(i==n)return 0;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int left=0,right=0;
        if(j>0)left=dfs(matrix,i+1,j-1,dp,n);
        else left=INT_MAX;
        if(j<n-1)right=dfs(matrix,i+1,j+1,dp,n);
        else right=INT_MAX;
        int front=dfs(matrix,i+1,j,dp,n);
        return dp[i][j]=matrix[i][j]+min(left,min(right,front));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int s=INT_MAX;
        int n = matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++){
            s=min(s,dfs(matrix,0,i,dp,n));
        }
        return s;
    }
};
