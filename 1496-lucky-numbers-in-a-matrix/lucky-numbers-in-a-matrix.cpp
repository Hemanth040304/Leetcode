class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        vector <int> ans;

        set <int> row_min;

        for (int i = 0; i < rows; i++) {
            row_min.insert(*min_element(matrix[i].begin(), matrix[i].end()));
        }

        for (int i = 0; i < cols; i++) {
            int maxi = matrix[0][i];
            for (int j = 0; j < rows; j++) {
                maxi = max(maxi, matrix[j][i]);
            }
            if (row_min.find(maxi) != row_min.end()) ans.emplace_back(maxi);
        }

        return ans;
    }
};