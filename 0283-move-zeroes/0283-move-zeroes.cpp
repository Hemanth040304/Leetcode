class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]!=0){
                v.emplace_back(nums[i]);
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==0){
                v.emplace_back(nums[i]);
            }
        }
        for(int i = 0 ; i < v.size() ; i++){
            nums[i]=v[i];
        }
    }
};