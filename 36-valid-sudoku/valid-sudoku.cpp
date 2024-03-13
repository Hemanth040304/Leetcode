class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if((i % 3 == 1) && (j % 3 == 1)){
                    unordered_set<char> subgrid;
                    for (int x = -1; x < 2; x++){
                        for (int y = -1; y < 2; y++){
                            char curr = board[i + x][j + y];
                            if (curr != '.' && subgrid.find(curr) != subgrid.end())
                                return false;
                            subgrid.insert(curr);
                        }
                    }
                }
                char number = board[i][j];
                if (number != '.') {
                    for (int x = 0; x < n; x++) {
                        if (x != i && board[x][j] == number) return false;
                    }
                    for (int y = 0; y < m; y++) {
                        if (y != j && board[i][y] == number) return false;
                    }
                }
            }
        }
        return true;
    }
};
