class Solution {
public:
    int trap(vector<int>& height) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int i = 0, left_max = height[0], ans = 0;
        int j = height.size() - 1, right_max = height[j];
        while (i < j) {
            if (left_max <= right_max) {
                ans += (left_max - height[i]);
                i++;
                left_max = max(left_max, height[i]);
            }
            else {
                ans += (right_max - height[j]);
                j--;
                right_max = max(right_max, height[j]);
            }
        }
        return ans;
    }
};