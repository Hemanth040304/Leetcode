class Solution {
public:
    int longestPalindrome(string s) {
        int count = 0;
        unordered_map<char, int> Freq;

        for (char ch : s) {
            Freq[ch]++;
            if (Freq[ch] % 2 == 1) count++;
            else count--;
        }
        
        if (count > 1) return s.size() - count + 1;
        return s.size();
    }
};