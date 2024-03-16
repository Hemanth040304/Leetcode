class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int max_length = 0;
        int n = nums.size();
        unordered_map<int, int> count;
        count[0] = -1;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += (nums[i] == 0 ? -1 : 1);

            if (count.find(sum) != count.end()) max_length = max(max_length, i - count[sum]);
            else count[sum] = i;
        }

        return max_length;
    }
};
