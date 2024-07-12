class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string store;
        int ans = 0;
        if(x > y){
            int n = s.size(); 
            for (int i = 0; i < n; i++){
                store += s[i];
                if(store.size() > 1 and store.substr(store.size() - 2 ) == "ab"){
                    ans += x;
                    store.pop_back();
                    store.pop_back();
                }
            }
            s = "";
            n = store.size();
            for (int i = 0; i < n; i++){
                s += store[i];
                if(s.size() > 1 and s.substr(s.size() - 2) == "ba"){
                    ans += y;
                    s.pop_back();
                    s.pop_back();
                }
            }
        }
        else{
            int n = s.size(); 
            for (int i = 0; i < n; i++){
                store += s[i];
                if(store.size() > 1 and store.substr(store.size() - 2 ) == "ba"){
                    ans += y;
                    store.pop_back();
                    store.pop_back();
                }
            }
            s = "";
            n = store.size();
            for (int i = 0; i < n; i++){
                s += store[i];
                if(s.size() > 1 and s.substr(s.size() - 2) == "ab"){
                    ans += x;
                    s.pop_back();
                    s.pop_back();
                }
            }
        }
        return ans;
    }
};