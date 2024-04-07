class Solution {
public:
    bool checkValidString(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);


        int open = 0, close = 0;

        for (char c : s) {
            if (c == '(') {
                open++;
                close++;
            }
            else if (c == ')') {
                open--;
                close--;
            }
            else {
                open--;
                close++;
            }
            if (close < 0) return false;
            if (open < 0) open = 0;
        }
        
        return open == 0;
    }
};