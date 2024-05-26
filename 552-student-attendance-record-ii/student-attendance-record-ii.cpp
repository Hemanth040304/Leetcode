class Solution {
public:
    int checkRecord(int n) {
        const int kMod = 1'000'000'007;
        long dp[2][3] = {0};
        dp[0][0] = 1;

        while (n-- > 0) {
            long prev[2][3];
            memcpy(prev, dp, sizeof(dp));
            dp[0][0] = (prev[0][0] + prev[0][1] + prev[0][2]) % kMod;
            dp[0][1] = prev[0][0];
            dp[0][2] = prev[0][1];
            dp[1][0] = (prev[0][0] + prev[0][1] + prev[0][2] + prev[1][0] + prev[1][1] + prev[1][2]) % kMod;
            dp[1][1] = prev[1][0];
            dp[1][2] = prev[1][1];
        }

        return (dp[0][0] + dp[0][1] + dp[0][2] + dp[1][0] + dp[1][1] + dp[1][2]) % kMod;
    }
};
