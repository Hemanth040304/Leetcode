class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        int count = 0, oddCount = 0, result = 0;
        unordered_map<int, int> countMap;
        countMap[0] = 1;
        
        for (int num : nums) {
            if (num % 2 == 1) oddCount++;
            if (countMap.find(oddCount - k) != countMap.end()) result += countMap[oddCount - k];
            countMap[oddCount]++;
        }
        
        return result;
    }
};