class Solution {
private:
    bool isSorted(const vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i - 1] > arr[i]) return false;
        }

        return true;
    }       
public:
    
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i -1; j++) {
                int x = __builtin_popcount(nums[j]);
                int y = __builtin_popcount(nums[j+1]);
                if (nums[j] > nums[j + 1] and x == y) swap(nums[j], nums[j + 1]);
            }
        }

        return isSorted(nums);
    }
};