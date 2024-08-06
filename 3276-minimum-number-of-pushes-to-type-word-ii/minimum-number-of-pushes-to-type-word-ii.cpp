class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> ump;
        vector<int> v;

        for (char c : word) ump[c]++;
        for (auto it : ump) v.emplace_back(it.second);
        sort(v.begin(), v.end(), greater<>());
        int ans = 0, c = 0;

        for (int i : v) {
            c++;
            int d = c / 8;
            if (c % 8) d++;
            ans += i * d;
        }
        return ans;
    }
};