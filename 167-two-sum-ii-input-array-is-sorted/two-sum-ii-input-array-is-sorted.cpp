class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2, 0);
        int n = numbers.size(), i = 0, j = n - 1;


        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) {
                ans = {i + 1, j + 1};
                return ans;
            }
            else if (sum > target) j--;
            else if (sum < target) i++;
        }

        return ans;
    }
};