class Solution {
public:
    string makeGood(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        string ans;
        stack< char> st;
        int n = s.size();

        for(int i = 0; i < n; i++){
            if(st.empty()) st.push(s[i]);
            else if(abs(st.top() - s[i]) == 32) st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};