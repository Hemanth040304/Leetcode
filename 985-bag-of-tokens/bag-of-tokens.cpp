class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort ( tokens.begin(), tokens.end());
        int ans = 0;
        int n = tokens.size();
        for (int i = 0, j = n - 1; i <= j;){
            if( power >= tokens[i]){
                ans++;
                power -= tokens[i];
                i++;
            }
            else if(i == j) break;
            else if(ans > 0){
                power += tokens[j];
                j--;
                ans--;
            }
            else break;
        }
        return ans;
    }
};