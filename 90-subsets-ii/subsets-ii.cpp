class Solution {
public:

    void SubSetDup(int ind, vector<int> &nums, vector<vector<int>> &ans, vector<int> ds){
        ans.emplace_back(ds);
        for(int i = ind ; i < nums.size() ; i++){
            if(i != ind and nums[i] == nums[i-1])continue;
            ds.emplace_back(nums[i]);
            SubSetDup(i+1, nums, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        SubSetDup(0,nums,ans,{});
        return ans;
    }
};