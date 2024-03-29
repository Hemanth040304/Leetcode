class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int max_count = 0, l = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == maxi) max_count++;

            while(max_count == k){
                if(nums[l] == maxi) max_count--;
                l++;
            }
            ans += l;
        }
        return ans;
    }
};