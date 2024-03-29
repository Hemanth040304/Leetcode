class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        while(i < n and j < m){
            if(nums1[i] == nums2[j]) return nums1[i];
            else if (nums1[i] < nums2[j]) i++;
            else j++;
        }
        return -1;
    }
};