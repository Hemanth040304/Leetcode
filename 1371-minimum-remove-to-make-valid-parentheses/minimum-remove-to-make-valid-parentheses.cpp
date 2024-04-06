class Solution {
public:
    string minRemoveToMakeValid(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        string ans;
        int count = 0, n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') count++;
            else if (s[i] == ')') {
                if (count == 0) s[i] = '*';
                else count--;
            }
        }

        count = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')') count++;
            else if (s[i] == '(') {
                if (count == 0) s[i] = '*';
                else count--;
            }
        }

        for (char c : s) {
            if (c != '*') ans += c;
        }

        return ans;
    }
};