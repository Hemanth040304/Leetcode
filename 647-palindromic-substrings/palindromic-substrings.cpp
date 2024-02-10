class Solution {
public:

    int count_pal(int l, int r, string s){
        int res = 0;
        while(l >= 0 and r < s.size() and s[l] == s[r]){
            res++;
            l--;
            r++;
        }
        return res;
    }

    int countSubstrings(string s) {
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            ans += count_pal(i,i,s);
            ans += count_pal(i,i+1,s);
        }
        return ans;
    }
};