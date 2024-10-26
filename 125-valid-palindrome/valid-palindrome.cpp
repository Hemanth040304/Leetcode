class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string str;
        
        for (char ch : s) {
            if (isalnum(ch)) str += ch;
        }

        int i = 0, j = str.size() - 1;
        while (i < j) {
            if (str[i] != str[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};
