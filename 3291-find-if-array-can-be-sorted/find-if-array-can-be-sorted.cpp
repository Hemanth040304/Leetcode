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
        for(int i = 0 ; i < nums.size()-1 ; i++){
            for(int j = 0 ; j < nums.size()-i-1 ; j++){
                if(nums[j]>nums[j+1] and (__builtin_popcount(nums[j]))==(__builtin_popcount(nums[j+1]))){
                    swap(nums[j],nums[j+1]);
                }
            }
        }

        return isSorted(nums);
    }
};