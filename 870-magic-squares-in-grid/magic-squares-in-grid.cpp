class Solution {
private:
    bool isMagicSquare(const vector<vector<int>>& grid, int x, int y) {
        vector<int> nums(9);
        int index = 0, magicSum = 15;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                nums[index++] = grid[x + i][y + j];
            }
        }

        sort(nums.begin(), nums.end());
        for (int i = 0; i < 9; i++) {
            if (nums[i] != i + 1) return false;
        }
        
        for (int i = 0; i < 3; i++) {
            if (grid[x + i][y] + grid[x + i][y + 1] + grid[x + i][y + 2] != magicSum) return false;
        }
        for (int i = 0; i < 3; i++) {
            if (grid[x][y + i] + grid[x + 1][y + i] + grid[x + 2][y + i] != magicSum) return false;
        }
        
        
        if (grid[x][y] + grid[x + 1][y + 1] + grid[x + 2][y + 2] != magicSum) return false;
        if (grid[x][y + 2] + grid[x + 1][y + 1] + grid[x + 2][y] != magicSum) return false;

        return true;
    }

public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;

        for (int i = 0; i <= n - 3; i++) {
            for (int j = 0; j <= m - 3; j++) {
                if (isMagicSquare(grid, i, j)) count++;
            }
        }

        return count;
    }
};
