class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> count;
        
        
        for (int num : arr) {
            count[num]++;
        }
        
        for (int num : arr) {
            if ((num == 0 and count[num] > 1) || (num != 0 and count.count(2 * num))) {
                return true;
            }
        }
        
        return false;
    }

};