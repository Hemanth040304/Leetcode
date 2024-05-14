class Solution {
public:
    void traversal(int i, int j, int n, int m, vector<vector<int>>& grid, vector<vector<int>>& vis, int sum, int& ans) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0 || vis[i][j] == 1) return;
        
        sum += grid[i][j];
        ans = max(ans, sum);
        
        vis[i][j] = 1;
        traversal(i + 1, j, n, m, grid, vis, sum, ans);
        traversal(i - 1, j, n, m, grid, vis, sum, ans);
        traversal(i, j + 1, n, m, grid, vis, sum, ans);
        traversal(i, j - 1, n, m, grid, vis, sum, ans);
        
        vis[i][j] = 0;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0) traversal(i, j, n, m, grid, vis, 0, ans);
            }
        }
        return ans;
    }
};
