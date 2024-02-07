class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<>());
        string a = "";
        for(auto it:v){
            while(it.first){
                a+=it.second;
                it.first = it.first-1;
            }
        }
        return a;
    }
};