class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>row,col;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    row.emplace_back(i);
                    col.emplace_back(j);
                }
            }
        }
        for(int i = 0 ; i < row.size() ; i++){
            int pos = row[i];
            for(int j = 0 ; j < m ; j++){
                matrix[pos][j] = 0;
            }
        }
        for(int i = 0 ; i < col.size() ; i++){
            int pos = col[i];
            for(int j = 0 ; j < n ; j++){
                matrix[j][pos] = 0;
            }
        }
    }
};