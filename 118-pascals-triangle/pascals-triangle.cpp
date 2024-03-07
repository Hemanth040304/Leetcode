class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 0 ; i < numRows; i++){
            vector<int> sub;
            for (int j = 0; j < i + 1; j++){
                if(j == i or j == 0) sub.emplace_back(1);
                else sub.emplace_back(ans[i - 1][j] + ans[i - 1][j - 1]);
            }
            ans.emplace_back(sub);
        }

        return ans;
    }
};