class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int n = box.size(), m = box[0].size();
        vector<vector<char>> ans(m, vector<char>(n, '.'));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[j][n - i - 1] = box[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = m - 1 ; j > -1; j--) {
                if (ans[j][i] == '#') {
                    int ind = j;
                    while (ind + 1 < m and ans[ind + 1][i] == '.') {
                        swap(ans[ind][i], ans[ind + 1][i]);
                        ind++;
                    }
                }
            }
        }

        return ans;
    }
};