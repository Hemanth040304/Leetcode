class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minVal = arrays[0][0], maxVal = arrays[0].back();
        int ans = 0;
        
        for (int i = 1; i < arrays.size(); i++) {
            ans = max(ans, max(abs(arrays[i].back() - minVal), abs(maxVal - arrays[i][0])));
            minVal = min(minVal, arrays[i][0]);
            maxVal = max(maxVal, arrays[i].back());
        }
        
        return ans;
    }
};
