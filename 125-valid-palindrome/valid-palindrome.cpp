class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (char ch : s) {
            if (ch >= 'A' and ch <='Z') str += (ch + 32);
            else if (ch >= 'a' and ch <= 'z' or ch >= '0' and ch <= '9') str += ch;
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