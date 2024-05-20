class Solution {
public:
    void print(int ind ,vector<int>&nums, vector<int>&ds , int &sum){
        if(ind == nums.size()){
            int ans = 0;
            for(auto it:ds) ans ^= it;
            sum += ans;
            return;
        }
        print(ind + 1, nums, ds, sum);
        ds.emplace_back(nums[ind]);
        print(ind + 1, nums, ds, sum);
        ds.pop_back();
    }

    int subsetXORSum(vector<int>& nums) {
        vector<int> ds;
        int ans = 0 ;
        print(0, nums, ds, ans);
        return ans;
    }
};