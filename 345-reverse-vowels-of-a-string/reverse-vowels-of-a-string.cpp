class Solution {
private:
    bool vol (char ch) {
        switch (ch) {
            case 'a':
                return true;
                break;
            case 'e':
                return true;
                break;
            case 'i':
                return true;
                break;
            case 'o':
                return true;
                break;
            case 'u':
                return true;
                break;
            case 'A':
                return true;
                break;
            case 'E':
                return true;
                break;
            case 'I':
                return true;
                break;
            case 'O':
                return true;
                break;
            case 'U':
                return true;
                break;
            default:
                return false;
        }
    }

public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            while (!(vol(s[i])) and i < j) i++;
            while (!(vol(s[j])) and i < j) j--;
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};