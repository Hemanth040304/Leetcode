class Solution {
public:
    int dp[100001];
    bool Break(int ind, string &s, unordered_set<string> &st){
        if (ind == s.size()) return dp[ind] = 1;
        if(dp[ind] != -1) return dp[ind];
        string comp;
        for (int i = ind; i < s.size(); i++) {
            comp += s[i];
            if (st.find(comp) != st.end()) if (Break(i + 1, s, st)) return dp[ind] = 1;
        }
        return dp[ind] = 0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        unordered_set<string> st;
        for (auto it : wordDict){
            st.insert(it);
        }
        return Break(0,s,st);
    }
};