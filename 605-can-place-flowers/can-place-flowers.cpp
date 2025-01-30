class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans = 0, length = flowerbed.size();
        
        for (int i = 0; i < length; i++) {
            if (flowerbed[i] == 0 and (i == 0 or flowerbed[i - 1] == 0) and (i == length - 1 or flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                ans++;
                if (ans >= n) return true;
            }
        }
        
        return ans >= n;
    }
};
