class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>v;
        for(int i = 0 ; i < nums.size()-2 ; i+=3){
            if((abs(nums[i]-nums[i+1])<=k) and (abs(nums[i]-nums[i+2])<=k)){
                v.emplace_back(nums[i]);
                v.emplace_back(nums[i+1]);
                v.emplace_back(nums[i+2]);
                ans.emplace_back(v);
                v.clear();
            }
            else return {};
        }
        return ans;
    }
};