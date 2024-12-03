class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int n = s.size(), ind = 0;
          
        for (int i = 0; i < n; i++) {
            if (ind < spaces.size() and i == spaces[ind]) {
                ans += " ";
                ind++;
            }
            ans += s[i];
        }

        return ans;
    }
};