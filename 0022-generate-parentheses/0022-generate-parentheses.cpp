class Solution {
public:
    void Print(int n, int close, int open, string str, vector<string> &s){
        if(close == n and open == n) {
            s.emplace_back(str);
            return;
        }
        if(open < n) Print(n, close, open + 1, str + '(', s);
        
        if(open > close and close < n) Print(n, close + 1, open, str + ')', s);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        Print(n, 0, 0, "", s);
        return s;
    }
};