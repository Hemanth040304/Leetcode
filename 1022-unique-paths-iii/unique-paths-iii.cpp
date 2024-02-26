class Solution {
public:
    void call(int i, int j, int n, int m, int zero, vector<vector<int>>& grid, int c, int& ans, vector<vector<int>>& vis) {
        if (i >= n || j >= m || i < 0 || j < 0 || grid[i][j] == -1 || vis[i][j] == 1)return;
        
        if (grid[i][j] == 2) {
            if (zero == c - 1) ans++;
            return;
        }
        
        vis[i][j] = 1;
        call(i + 1, j, n, m, zero, grid, c + 1, ans, vis);
        call(i - 1, j, n, m, zero, grid, c + 1, ans, vis);
        call(i, j + 1, n, m, zero, grid, c + 1, ans, vis);
        call(i, j - 1, n, m, zero, grid, c + 1, ans, vis);
        vis[i][j] = 0;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int zero = 0;
        pair<int, int> start;
        int n = grid.size();
        int m = grid[0].size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) zero++;
                if (grid[i][j] == 1) {
                    start.first = i;
                    start.second = j;
                }
            }
        }
        
        int ans = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        call(start.first, start.second, n, m, zero, grid, 0, ans, vis);
        return ans;
    }
};
