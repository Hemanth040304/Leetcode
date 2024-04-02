class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int indexT[200];
        int indexS[200];
        int len = s.length();
        if(len != t.length()) {
            return false;
        }
        for(int i = 0; i < len; i++) {
            if(indexS[s[i]] != indexT[t[i]]) {
                return false;
            }
            indexS[s[i]] = i + 1;
            indexT[t[i]] = i + 1;
        }
        return true;
    }
};