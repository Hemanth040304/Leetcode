class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans = 0, n = rating.size();
        vector<vector<int>> high(n), low(n);

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (rating[i] < rating[j]) high[i].push_back(j);
                if (rating[i] > rating[j]) low[i].push_back(j);
            }
            if (!high[i].size()) high[i].push_back(-1);
            if (!low[i].size()) low[i].push_back(-1);
        }

        for (int i = 0; i < high.size(); i++) {
            int c = 0;
            for (int j = 0; j < high[i].size(); j++) {
                if (high[i][j] != -1){
                    int ind = high[i][j];
                    if (high[ind][0] != -1) ans += high[ind].size();
                }
            }
        }
        for (int i = 0; i < low.size(); i++) {
            int c = 0;
            for (int j = 0; j < low[i].size(); j++) {
                if (low[i][j] != -1) {
                    int ind = low[i][j];
                    if (low[ind][0] != -1) ans += low[ind].size();
                }
            }
        }

        return ans;
    }
};