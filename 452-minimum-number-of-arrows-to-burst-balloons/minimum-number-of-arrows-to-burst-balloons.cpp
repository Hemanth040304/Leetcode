class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        sort(points.begin(), points.end());

        int ans = points.size();
        vector<int> prev = points[0];
        int n = points.size();

        for(int i = 1; i < n; i++) {
            vector<int> curr = points[i];
            if (curr[0] <= prev[1]) {
                ans -= 1;
                prev = {curr[0], std::min(curr[1], prev[1])};
            }
            else prev = curr;
        }
        return ans;
    }
};
