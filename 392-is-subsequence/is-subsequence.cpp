class Solution {
public:
    bool isSubsequence(string s, string t) {

        int ind = 0;

        for (int i = 0; i < t.size(); i++) {
            if (t[i] == s[ind]) ind++;
        }  

        return ind == s.size();
    }
};