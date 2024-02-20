class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> vis(n,(vector<int>(m,0)));
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0 and (!vis[i][j])){
                    vis[i][j]=1;
                    for(int x = 0 ; x < n ; x++){
                        if(matrix[x][j] != 0){
                            matrix[x][j] = 0;
                            vis[x][j] = 1;
                        }
                    }
                    for(int x = 0; x < m ; x++){
                        if(matrix[i][x] != 0){
                            matrix[i][x] = 0;
                            vis[i][x] = 1;
                        }
                    }
                }
            }
        }
    }
};