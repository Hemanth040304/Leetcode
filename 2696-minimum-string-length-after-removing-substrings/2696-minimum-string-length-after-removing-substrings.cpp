class Solution {
public:
    int minLength(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            char cur = s[i];

            if (st.empty()){
                st.push(cur);
                continue;
            }

            if (cur == 'B' and st.top() == 'A') st.pop();
            else if (cur == 'D' and st.top() == 'C') st.pop();
            else st.push(cur);
        }

        return st.size();
    }
};