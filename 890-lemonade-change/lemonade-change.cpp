class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0;
        for (auto it : bills) {
            if(it == 5) five++;
            else if (it == 10) {
                if (five) {
                    ten++;
                    five--;
                }
                else return false;
            }
            else if (it == 20) {
                if (ten and five) {
                    ten--;
                    five--;
                }
                else if (five > 2) five -= 3;
                else return false;
            }
        }

        return true;
    }
};