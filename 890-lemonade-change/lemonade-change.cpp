class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0, amount = 0;
        for (auto it : bills) {
            if(it == 5) {
                five++;
                amount += it;
            }
            else if (it == 10) {
                if (five) {
                    ten++;
                    five--;
                    amount += 5;
                }
                else return false;
            }
            else if (it == 20) {
                if (ten and five) {
                    ten--;
                    five--;
                    amount += 5;
                }
                else if (five > 2) {
                    five -= 3;
                    amount == 5;
                }
                else return false;
            }
        }

        return true;
    }
};