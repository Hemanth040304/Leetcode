class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n < original.size()) return {};
        if (m * n > original.size()) return {};
        vector<vector<int>> ans;
        int ind = 0;

        for (int i = 0; i < m; i++) {
            vector<int> t;
            for (int j = 0; j < n; j++) {
                t.emplace_back(original[ind++]);
            }
            ans.emplace_back(t);
            t.clear();
        }

        return ans;
    }
};