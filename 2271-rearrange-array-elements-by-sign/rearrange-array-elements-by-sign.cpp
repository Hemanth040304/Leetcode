class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        vector<int> ans(nums.size());
        int i=0,j=1;
        for(int k = 0 ; k < nums.size() ; k++){
            if(nums[k] > 0){
                ans[i] = nums[k];
                i+=2;
            }
            else{
                ans[j] = nums[k];
                j+=2; 
            }
        }

        return ans;
    }
};