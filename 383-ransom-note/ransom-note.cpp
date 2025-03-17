class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> store(26, 0);
        for (char ch : magazine) store[ch - 'a']++;
        for (char ch : ransomNote) {
            if (store[ch - 'a'] == 0) return false;
            else store[ch - 'a']--;
        }
        return true;
    }
};