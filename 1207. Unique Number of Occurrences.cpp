//https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=daily-question&envId=2024-01-17

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto it:arr)mp[it]++;
        vector<int>v;
        for(auto it:mp){
            v.emplace_back(it.second);
        }
        sort(v.begin(),v.end());
        int bo=0;
        for(int i = 0 ; i < v.size()-1 ; i++){
            if(v[i]!=v[i+1])bo++;
        }
        if(bo==v.size()-1)return true;
        return false;
    }
};
