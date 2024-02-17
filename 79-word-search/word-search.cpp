class Solution {
public:

    bool Search(int i, int j, int n, int m, vector<vector<char>>& board, string& word, int ind, int len, vector<vector<bool>>& visited) {
    if (ind == len) return true;
    
    if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || board[i][j] != word[ind]) return false;
    
    visited[i][j] = true;
    
    if (Search(i - 1, j, n, m, board, word, ind + 1, len, visited) ||
        Search(i + 1, j, n, m, board, word, ind + 1, len, visited) ||
        Search(i, j - 1, n, m, board, word, ind + 1, len, visited) ||
        Search(i, j + 1, n, m, board, word, ind + 1, len, visited))
        return true;
    
    visited[i][j] = false;
    
    return false;
}


    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,0));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(word[0] == board[i][j] and Search(i,j,n,m,board,word,0,word.size(),visited))return true;
            }
        }
        return false;
    }
};