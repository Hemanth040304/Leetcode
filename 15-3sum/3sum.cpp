class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 and nums[i] == nums[i-1]) continue;
            for (int j = i + 1, k = n - 1; j < k; ) {

                int val = nums[i] + nums[j] + nums[k];
                if (val == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (nums[j] == nums[j - 1] and j < k) j++;
                }
                else if (val > 0) k--;
                else j++;
            }
        }

        return ans;
    }
};