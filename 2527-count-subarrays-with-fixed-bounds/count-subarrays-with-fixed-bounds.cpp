class Solution {
    public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        long long ans = 0;
        int j = -1;
        int prevMinKIndex = -1;
        int prevMaxKIndex = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < minK || nums[i] > maxK)
            j = i;
            if (nums[i] == minK)
            prevMinKIndex = i;
            if (nums[i] == maxK)
            prevMaxKIndex = i;
            ans += max(0, min(prevMinKIndex, prevMaxKIndex) - j);
        }

        return ans;
    }
};