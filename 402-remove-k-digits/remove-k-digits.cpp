class Solution {
public:
    string removeKdigits(string num, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        string ans = "";

        for (char it : num) {
            while (!ans.empty() and ans.back() > it and k) {
                ans.pop_back();
                k--;
            }
            if (!(ans.empty() and it == '0')) ans.push_back(it);
        }

        while (k and !ans.empty()) {
            ans.pop_back();
            k--;
        }

        if (ans.empty()) return "0";

        return ans;
    }
};
