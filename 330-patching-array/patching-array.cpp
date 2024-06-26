class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long miss = 1;
        int ans = 0;
        size_t i = 0;
        int s = nums.size();

        while (miss <= n) {
            if (i < s && nums[i] <= miss) {
                miss += nums[i];
                i++;
            }
            else {
                miss += miss;
                ans++;
            }
        }

        return ans;
    }
};