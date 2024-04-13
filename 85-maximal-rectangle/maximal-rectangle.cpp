class Solution {
public:
    
    int Return_Maximal(vector<int> &ds){
        int n = ds.size();
        int maxi = 0;
        for (int i = 0; i < n; i++){
            int mini = INT_MAX;
            int len = 0;
            for (int j = i; j < n; j++){
                mini = min(mini, ds[j]);
                len = j - i + 1;
                maxi = max(maxi, len * mini);
            }
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int ans = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>streatch(m,0);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(matrix[i][j] == '0')streatch[j] = 0;
                else streatch[j] += matrix[i][j] - '0';
            }
            ans = max(ans, Return_Maximal(streatch));
        }
        return ans;
    }
};