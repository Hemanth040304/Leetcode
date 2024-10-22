class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> store(nums.begin(), nums.end());

        for (int num : nums) {
            int res = 0, curr = num;
            while (store.find(curr) != store.end()){
                curr++;
                res++;
            }
            ans = max(ans, res);
        }

        return ans;
    }
};