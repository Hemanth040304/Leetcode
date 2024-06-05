class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> cnt;
        
        for (char c : words[0]) {
            cnt[c]++;
        }
        
        for (const string& w : words) {
            unordered_map<char, int> cur;
            for (char c : w) {
                cur[c]++;
            }
            for (auto& kvp : cnt) {
                kvp.second = min(kvp.second, cur[kvp.first]);
            }
        }
        
        vector<string> res;
        for (auto& kvp : cnt) {
            for (int i = 0; i < kvp.second; ++i) {
                string s(1, kvp.first);
                res.push_back(s);
            }
        }
        
        return res;
    }
};
