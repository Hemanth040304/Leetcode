class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int count = 1, n = word.size();

        for (int i = 0; i < n - 1; i++) {
            if (count == 9) {
                ans += '9';
                ans += word[i];
                count = 1;
                continue;
            }
            if (word[i] != word[i + 1]) {
                ans += count + 48;
                ans += word[i];
                count = 1;
            }
            else if (word[i] == word[i + 1]){
                count++;
            }
        }

        ans += count + 48;
        ans += word[n - 1];

        return ans;
    }
};