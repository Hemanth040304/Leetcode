class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), ans = 0;

        for (int i = n - 1; i > -1; i--) {
            if (s[i] != ' ') ans++;
            else if (ans > 0) break;
        }

        return ans;
    }
};