class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp{{'b', 0}, {'a', 0}, {'l', 0}, {'o', 0}, {'n', 0}};
        for (char ch: text) {
            if(mp[ch] > -1) mp[ch]++;
        }
        int ans = min({mp['b'], mp['a'], mp['l']/2, mp['o']/2, mp['n']});
        return ans;
    }
};