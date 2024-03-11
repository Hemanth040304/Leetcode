class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> charCount;

        for (char c : s) {
            charCount[c]++;
        }

        string ans = "";

        for (char c : order) {
            if (charCount.find(c) != charCount.end()) {
                ans += string(charCount[c], c);
                charCount.erase(c);
            }
        }

        for (auto& pair : charCount) {
            ans += string(pair.second, pair.first);
        }

        return ans;

    }
};