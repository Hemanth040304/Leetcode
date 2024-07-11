class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> stack;
        int n = s.size();
        for (int i = 0; i < n; i++){
            if (s[i] == '(') stack.push(i);
            else if (s[i] == ')') {
                reverse(s.begin() + stack.top(), s.begin() + i);
                stack.pop();
            }
        }
        s.erase(remove(s.begin(), s.end(), '('), s.end());
        s.erase(remove(s.begin(), s.end(), ')'), s.end());
        return s;
    }
};