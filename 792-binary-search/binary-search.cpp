class Solution {
public:
    int sort(int l, int h, vector<int>& nums, int target) {
        if (l > h) return -1;
        int m = (l + h) / 2;
        if (nums[m] == target) return m;
        if (nums[m] > target) return sort(l, m - 1, nums, target);
        else return sort(m + 1, h, nums, target);
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return sort(0, n - 1, nums, target);
    }
};
