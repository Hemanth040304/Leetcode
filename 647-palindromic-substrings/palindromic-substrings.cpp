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
            int l = i, r = i;
            ans += count_pal(l,r,s);
            l = i;
            r = i+1;
            ans += count_pal(l,r,s);
        }
        return ans;
    }
};