class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans = nums[0], l = 0, h = nums.size() - 1;

        while (l <= h) {
            if (nums[l] < nums[h]) {
                ans = min(ans, nums[l]);
                break;
            }

            int m = l + (h - l) / 2;
            ans = min(ans, nums[m]);

            if (nums[m] >= nums[l]) l = m + 1;
            else h = m - 1;
        }

        return ans;
    }
};
