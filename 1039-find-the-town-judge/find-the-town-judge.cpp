class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1)return 1;
        map<int,int> mp;
        int ans = -1;
        for ( auto it : trust){
            mp[it[1]]++;
            if(mp[it[1]] >= n-1)ans = it[1];
        }
        for ( auto it : trust){
            if(it[0] == ans)ans = -1;
        }
        return ans;
    }
};