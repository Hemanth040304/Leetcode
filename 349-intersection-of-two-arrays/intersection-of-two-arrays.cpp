class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);

        unordered_set<int> numSet(nums1.begin(), nums1.end());
        vector<int> ans;
        
        for (int num : nums2) {
            if (numSet.count(num) && find(ans.begin(), ans.end(), num) == ans.end()) {
                ans.push_back(num);
            }
        }
        
        return ans;
    }
};