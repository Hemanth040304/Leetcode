class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = matrix.size(), m = matrix[0].size();
    
        for(int i = 0; i < n; i++){
            int x = i, y = 0, val = matrix[x][y];
            while(x >= 0 and x < n and y >= 0 and y < m){
                if(val != matrix[x][y]) return false;
                x++;
                y++;
            }
        }
        
        for(int j = 0; j < m; j++){
            int x = 0, y = j, val = matrix[x][y];
            while(x >= 0 and x < n and y >= 0 and y < m){
                if(val != matrix[x][y]) return false;
                x++;
                y++;
            }
        }

        return true;
    }
};