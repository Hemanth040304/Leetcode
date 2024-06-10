class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v(heights);
        sort(v.begin(),v.end());
        int count = 0, n = heights.size();
        for(int i = 0; i < n; i++){
            if(heights[i] != v[i]) count++;
        }
        return count;
    }
};