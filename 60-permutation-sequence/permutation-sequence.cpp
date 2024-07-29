class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        int fact = 1;
        for (int i = 1; i < n; i++) {
            nums.emplace_back(i);
            fact *= i;
        }
        nums.emplace_back(n);

        string ans = "";
        k -= 1;

        while (true) {
            ans = ans + to_string(nums[k / fact]);
            nums.erase(nums.begin() + k / fact);
            if (!nums.size()) break;
            k %= fact;
            fact /= nums.size();
        }

        return ans;
    }
};