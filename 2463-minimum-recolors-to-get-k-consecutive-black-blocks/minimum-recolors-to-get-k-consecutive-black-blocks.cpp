class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0, n = blocks.size(),it = 0;
        map<char,int>mp;
        int ans = INT_MAX;
        while(i < n) {
            mp[blocks[i]]++;
            if(i >= k) {
                mp[blocks[it]]--;
                it++;
            }
            ans = min((k-mp['B']),ans);
            i++;
        }
        return ans;
    }
};