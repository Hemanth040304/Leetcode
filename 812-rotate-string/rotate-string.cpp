class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        int c = 0;
        unordered_map<char, string> mp;

        for (int i = 0; i < s.size(); i++) {
            if (i == s.size() - 1) mp[s[i]] += '0';
            else mp[s[i]] += s[i + 1];
        }

        for (int i = 0; i < goal.size() - 1; i++) {
            string str = mp[goal[i]];
            int z = 0, n = 0;
            for (char ch : str) {
                if (ch == '0') z++;
                else if (ch == goal[i + 1]) n++;
            }
            if (z != 0) continue;
            if (n == 0) c++;
        }

        cout << c << " ";

        return !c;
    }
};