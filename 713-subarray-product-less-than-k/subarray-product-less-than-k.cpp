class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = nums.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            int s = 1;

            for (int j = i; j < n; j++) {

                s = s * nums[j];

                if(s < k) ans++;
                else break;

            }
        }

        return ans;
    }
};