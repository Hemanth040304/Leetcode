class Solution {
public:

    bool pal(string s){
        int i = 0, j = s.size() - 1;
        while(i <= j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    void partitionHelper(string &s, int start, vector<string> &current, vector<vector<string>> &ans) {
        if (start == s.size()) {
            ans.push_back(current);
            return;
        }

        for (int i = start; i < s.size(); i++) {
            string substring = s.substr(start, i - start + 1);
            if (pal(substring)) {
                current.push_back(substring);
                partitionHelper(s, i + 1, current, ans);
                current.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> current;

        partitionHelper(s, 0, current, ans);

        return ans;
    }
};
