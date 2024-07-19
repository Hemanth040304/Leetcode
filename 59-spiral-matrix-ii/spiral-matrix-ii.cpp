class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int left = 0, right = n - 1, top = 0, bottom = n - 1, number = 0;
        while (top <= bottom and left <= right) {
            for (int i = left; i <= right; i++) {
                ans[top][i] = ++number;
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                ans[i][right] = ++number;
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans[bottom][i] = ++number;
                }
            }
            bottom--;
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans[i][left] = ++number;
                }
            }
            left++;
        }

        return ans;
    }
};