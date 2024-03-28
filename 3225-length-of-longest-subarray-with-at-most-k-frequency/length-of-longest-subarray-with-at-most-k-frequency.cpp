class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int ans = 0;
        map<int,int>mp;
        int n = nums.size();
        int l = 0;
        for (int r = 0; r < n; r++) {
            mp[nums[r]]++;

            while(mp[nums[r]] > k){
                mp[nums[l]]--;
                l++;
            }

            ans = max((r - l + 1), ans);
        }

        return ans;
    }
};