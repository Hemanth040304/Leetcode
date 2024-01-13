//https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/?envType=daily-question&envId=2024-01-13


class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        int ans = 0 ;
        for(auto it:t){
            mp[it]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(mp[s[i]]){
                mp[s[i]]--;
            }
        }
        for(auto it:mp){
            if(it.second>0)ans+=it.second;
        }
        return ans;
    }
};
