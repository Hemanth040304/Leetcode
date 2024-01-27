class Solution {
public:
    void Print(int ind, int n, string &digits, string &s, vector<string>& ans, map<char, string>& mp, unordered_map<string, vector<string>>& memo) {
        if (ind == n) {
            ans.emplace_back(s);
            return;
        }
        if (memo.find(s) != memo.end()) {
            ans.insert(ans.end(), memo[s].begin(), memo[s].end());
            return;
        }
        for (auto it : mp[digits[ind]]) {
            s.push_back(it);
            Print(ind + 1, n, digits, s, ans, mp, memo);
            s.pop_back();
        }
        memo[s] = ans;
    }

    vector<string> letterCombinations(string digits) {
        map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        if (digits.size() == 0) return {};
        string s;
        vector<string> ans;
        unordered_map<string, vector<string>> memo;
        Print(0, digits.size(), digits, s, ans, mp, memo);
        return ans;
    }
};
