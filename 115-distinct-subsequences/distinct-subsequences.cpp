class Solution {
public:
    int dp[1001][1001];

    int Helper(int ind, int n, int i, string &s, string &t, int tn){
        if(i >= tn) return 1;
        if(ind >= n) return 0;
        if(dp[ind][i] != -1) return dp[ind][i];
        if(s[ind] == t[i]) return dp[ind][i] = Helper(ind + 1, n, i + 1, s, t, tn) + Helper(ind + 1, n, i, s, t, tn);
        else return dp[ind][i] = Helper(ind + 1, n, i , s, t, tn);
    }
    
    int numDistinct(string s, string t){
        memset(dp,-1,sizeof(dp));
        return Helper(0,s.size(),0,s,t,t.size());
    }
};