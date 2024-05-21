class Solution {
public:
    vector<vector<int>> v;

    void print(int ind, int n, vector<int> &nums, vector<int> &ds){
        if(ind == n){
            v.emplace_back(ds);
            return ;
        }
        ds.emplace_back(nums[ind]);
        print(ind + 1, n, nums, ds);
        ds.pop_back();
        print(ind + 1, n, nums, ds);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        print(0, nums.size(), nums, ds);
        return v;
    }
};