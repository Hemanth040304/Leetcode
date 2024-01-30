class Solution {
public:
    bool oper(string s){
        int n=s.size();
        if(n==1 and (s[0]=='*' or s[0]=='+' or s[0]=='-' or s[0]=='/')){
            return true;
        }
        return false; 
    } 
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto it: tokens){
            if(oper(it)){
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                if(it=="+")st.push(x+y);
                else if(it=="-")st.push(y-x);
                else if(it=="*")st.push(x*y);
                else if(it=="/")st.push(y/x);
            }
            else st.push(stoi(it));
        }
        return st.top();
    }
};