//https://leetcode.com/problems/apply-operations-to-make-string-empty/description/

class Solution {
public:
    string lastNonEmptyString(string s) {
        int maxi = 0;
        string ans;
        unordered_map<char,int>mp;
        for(auto it: s){
            mp[it]++;
            if(mp[it] > maxi){
                maxi = mp[it];
                ans = "";
                ans += it;
            }
            else if(mp[it] == maxi)ans += it;
        }
        return ans;
    }
};
