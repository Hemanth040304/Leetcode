class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans, diff = INT_MAX;

        for (int num : nums) {
            if (diff > abs(num)) {
                diff = abs(num);
                ans = num;
            }
            else if (diff == abs(num)) {
                if (ans < num) ans = num;
            }
        }

        return ans;
    }
};