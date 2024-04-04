class Solution {
public:
    int maxDepth(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int ans = 0;
        int c = 0;
        for (auto it : s){
            if(it == '(') {
                c++;
                ans = max(ans, c);
            }
            else if(it == ')') c--;
        }
        return ans;
    }
};