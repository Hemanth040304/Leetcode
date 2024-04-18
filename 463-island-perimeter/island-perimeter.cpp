class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int ans = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) {
                    ans += 4;
                    if (r > 0 and grid[r-1][c] == 1) ans -= 2;
                    if (c > 0 and grid[r][c-1] == 1) ans -= 2;
                }
            }
        }
        
        return ans;
    }
};