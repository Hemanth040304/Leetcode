class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> vp(n);
        for (int i = 0; i < n; i++) vp[i] = {heights[i], names[i]};
        sort(vp.begin(), vp.end(), greater<>());
        for (int i = 0; i < n; i++) names[i] = vp[i].second;
        return names;    
    }
};