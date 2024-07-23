class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b) {
        if (a[0] < b[0]) return true;
        if (a[0] == b[0]) return a[1] > b[1];
        return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> ump;
        for (int i = 0; i < nums.size(); i++) ump[nums[i]]++;

        vector<vector<int>> ans;
        for (auto it: ump) {
            ans.push_back({it.second, it.first});
        }
        vector<int> result;
        sort(ans.begin(), ans.end(), cmp);

        for (auto it : ans) {
            int x = it[0];
            while (x--) {
                result.emplace_back(it[1]);
            }
        }

        return result;
    }
};