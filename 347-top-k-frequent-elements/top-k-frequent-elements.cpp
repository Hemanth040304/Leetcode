class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ump;

        for (int num : nums) ump[num]++;

        vector<pair<int, int>> arr;
        for (auto it : ump) arr.push_back({it.second, it.first});
        sort(arr.rbegin(), arr.rend());

        vector<int> ans;
        for (int i = 0; i < k; i++) ans.emplace_back(arr[i].second);

        return ans;
    }
};