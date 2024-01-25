class Solution {
public:
    int fun(int i,int j, int n, int m, string &text1, string &text2,vector<vector<int>>&dp){
        if(i>=n || j>=m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int cnt=0;
        if(text1[i]==text2[j]){
            cnt=1+fun(i+1,j+1,n,m,text1,text2,dp);
        }
        else{
            cnt=0+max(fun(i+1,j,n,m,text1,text2,dp),fun(i,j+1,n,m,text1,text2,dp));
        }
        return dp[i][j]=cnt;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return fun(0,0,n,m,text1,text2,dp);
    }
};