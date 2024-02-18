class Solution {
public:

    bool end(int i, int j, int &n, int &m, vector<vector<int>> &grid, char Last, vector<vector<int>> &vis){
        if(i < 0 || i >= n || j < 0 || j >= m || vis[i][j]) return false;
        if(i == n - 1 && j == m - 1){
            if(Last == 'R'){
                cout <<"hi";
                cout <<grid[i][j]<<" ";
                if(grid[i][j] == 1 || grid[i][j] == 3 || grid[i][j] == 5) return true;
                return false;
            } 
            else if(Last == 'D'){
                cout <<"bye";
                if(grid[i][j] == 2 || grid[i][j] == 5 || grid[i][j] == 6) return true;
                return false;
            }
        }
        vis[i][j] = 1;
        if(Last == 'R'){
            if(grid[i][j] == 1) return end(i,j+1,n,m,grid,'R',vis);
            else if(grid[i][j] == 3) return end(i+1,j,n,m,grid,'D',vis);
            else if(grid[i][j] == 5) return end(i-1,j,n,m,grid,'U',vis);
            return false;
        }
        else if(Last == 'L'){
            if(grid[i][j] == 1) return end(i,j-1,n,m,grid,'L',vis);
            else if(grid[i][j] == 4) return end(i+1,j,n,m,grid,'D',vis);
            else if(grid[i][j] == 6) return end(i-1,j,n,m,grid,'U',vis);
            return false;
        }
        else if(Last == 'U'){
            if(grid[i][j] == 2) return end(i-1,j,n,m,grid,'U',vis);
            else if(grid[i][j] == 3) return end(i,j-1,n,m,grid,'L',vis);
            else if(grid[i][j] == 4) return end(i,j+1,n,m,grid,'R',vis);
            return false;
        }
        else if(Last == 'D'){
            if(grid[i][j] == 2) return end(i+1,j,n,m,grid,'D',vis);
            else if(grid[i][j] == 5) return end(i,j-1,n,m,grid,'L',vis);
            else if(grid[i][j] == 6) return end(i,j+1,n,m,grid,'R',vis);
            return false;
        }
        vis[i][j] = 0;
        return false;
    }

    bool hasValidPath(vector<vector<int>>& grid) {
        if(grid[0][0] == 5) return false;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        char Last = '.';
        bool ans = false;
        int i = 0, j = 0;
        if(grid[i][j] == 4){
            if(end(i,j,n,m,grid,'L',vis))return true;
            vis[0][0]=0;
            if(end(i,j,n,m,grid,'U',vis)) return true;
        }
        else{
            if(grid[i][j] == 1) Last = 'R';
            else if(grid[i][j] == 2) Last = 'D';
            else if(grid[i][j] == 3) Last = 'R';
            else if(grid[i][j] == 6) Last = 'D';
            if(end(i,j,n,m,grid,Last,vis)) return true;
            return false;
        }
        return false;
    }
};
