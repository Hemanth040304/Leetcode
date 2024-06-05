class Solution {
private:
    void recurPermute(int ind, vector<vector<int>> &ans, vector<int> &nums, int n){
        if(ind == n){
            ans.emplace_back(nums);
            return;
        }

        for (int i = ind; i < n; i++) {
            swap(nums[ind], nums[i]);
            recurPermute(ind + 1, ans, nums, n);
            swap(nums[ind], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recurPermute(0, ans, nums, nums.size());
        return ans;
    }
};