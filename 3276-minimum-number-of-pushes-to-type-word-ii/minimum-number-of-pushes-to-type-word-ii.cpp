class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> ump;
        vector<pair<int, char>> vp;

        for (char c : word) ump[c]++;
        for (auto it : ump) {
            vp.push_back({it.second, it.first});
        }
        sort(vp.begin(), vp.end(), greater<>());
        int ans = 0, c = 0;

        for (auto it : vp) {
            c++;
            int d = c / 8;
            if (c % 8) d++;
            ans += it.first * d;
        }
        return ans;
    }
};