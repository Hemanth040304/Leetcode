class Solution {
public:
    int numSubarraysWithSum(std::vector<int>& nums, int goal) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<int> preSumCnt(30001, 0);
        int ans = 0, n = nums.size();
        int sum = 0;
        preSumCnt[0] = 1;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int target = sum - goal;
            if (target >= 0) {
                ans += preSumCnt[target];
            }
            preSumCnt[sum]++;
        }

        return ans;
    }
};
