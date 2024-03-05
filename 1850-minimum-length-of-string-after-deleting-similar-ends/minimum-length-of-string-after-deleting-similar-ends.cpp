class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(0);
        int i = 0, j = s.size()-1;
        while(i < j){
            if(i >= j)break;
            if(s[i] == s[j]){
                while(i < s.size() - 1 and s[i] == s[i + 1]) i++;
                while(j > 0 and s[j] == s[j - 1]) j--;
                i++;
                j--;
            }
            else break;
        }
        if(j < i)return 0;
        return j - i + 1;
    }
};