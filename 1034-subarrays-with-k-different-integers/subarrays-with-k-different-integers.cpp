class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);


        int n = nums.size();
        int ans = 0;
        map<int,int> mp;
        int lnear = 0, lfar = 0;
        for (int r = 0;r < n; r++){
            mp[nums[r]]++;

            while(mp.size() > k){
                mp[nums[lnear]]--;
                if(mp[nums[lnear]] == 0) mp.erase(nums[lnear]);
                lnear++;
                lfar = lnear;
            }

            while(mp[nums[lnear]] > 1){
                mp[nums[lnear]]--;
                lnear++;
            }

            if(mp.size() == k) ans += lnear - lfar + 1;
        }
        return ans;
    }
};