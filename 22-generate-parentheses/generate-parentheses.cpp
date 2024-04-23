class Solution {
public:
    void Print(int n, int close, int open, string str, vector<string> &s){
        if(close == n and open == n) s.emplace_back(str);
        if(open < n){
            str += '(';
            Print(n, close, open + 1, str, s);
            str.pop_back();
        }
        if(open > close and close < n){
            str += ')';
            Print(n, close + 1, open, str, s);
            str.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        Print(n, 0, 0, "", s);
        return s;
    }
};