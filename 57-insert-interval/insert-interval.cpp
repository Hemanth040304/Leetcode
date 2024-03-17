class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<vector<int>> ans;
        int n = intervals.size();
        int i = 0;
        while (i < n and intervals[i][1] < newInterval[0]) {
            ans.emplace_back(intervals[i]);
            i++;
        }
        while (i < n and intervals[i][0] <= newInterval[1]) {
            newInterval = {min(newInterval [0], intervals[i][0]), max(newInterval [1], intervals[i][1])};
            i++;
        }
        ans.emplace_back(newInterval);
        while (i < n) {
            ans.emplace_back(intervals[i]);
            i++;
        }
        
        return ans;
    }
};