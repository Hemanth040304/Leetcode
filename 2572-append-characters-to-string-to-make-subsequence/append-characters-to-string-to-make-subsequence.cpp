class Solution {
public:
    int appendCharacters(string s, string t) {
        int sInd = 0, tInd = 0;
        int sSiz = s.size(), tSiz = t.size();
    
        while (sInd < sSiz && tInd < tSiz) {
            if (s[sInd] == t[tInd]) tInd++;
            sInd++;
        }
    
        return tSiz - tInd;
    }
};