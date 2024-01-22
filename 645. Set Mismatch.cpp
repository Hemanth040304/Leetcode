//https://leetcode.com/problems/set-mismatch/description/?envType=daily-question&envId=2024-01-22


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int dup=0,n = nums.size();
        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i]==nums[i+1]){
                dup=nums[i];
                break;
            }
        }
        int array_sum=accumulate(nums.begin(),nums.end(),0);
        int accual = n*(n+1)/2;
        if(accual>array_sum){
            ans.emplace_back(dup);
            ans.emplace_back(dup+abs(accual-array_sum));
        }
        else{
            ans.emplace_back(dup);
            ans.emplace_back(dup-abs(accual-array_sum));
        }
        return ans;
    }
};
