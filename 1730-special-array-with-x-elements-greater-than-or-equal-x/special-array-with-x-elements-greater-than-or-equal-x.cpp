class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> frequency(n + 1, 0);

        for (int num : nums) {
            frequency[min(n, num)]++;
        }

        int numGE = 0;
        for (int cadNum = n; cadNum > 0; cadNum--) {
            numGE += frequency[cadNum];
            if (cadNum == numGE) return cadNum;
        }

        return -1;
    }
};