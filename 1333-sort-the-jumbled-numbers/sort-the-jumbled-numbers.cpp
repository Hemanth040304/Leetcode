class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> vp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) vp.push_back({mapping[0], i});
            else{
                int x = nums[i];
                int number = 0, n = 1;
                while (x) {
                    number += n * mapping[x % 10];
                    x /= 10;
                    n *= 10;
                }
                vp.push_back({number, i});
            }
        }

        sort(vp.begin(), vp.end());

        vector<int> ans;
        for (auto it : vp) {
            cout << it.first << " " << nums[it.second] << "\n";
            ans.emplace_back(nums[it.second]);
        }

        return ans;
    }
};