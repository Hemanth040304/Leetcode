class Solution {
public:
    int numSubarraysWithSum(std::vector<int>& nums, int goal) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        unordered_map<int, int> preSumCnt;
        int ans = 0, n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sum == goal) ans++;
            ans += preSumCnt[sum - goal];
            preSumCnt[sum]++;
        }

        return ans;
    }
};
