class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans = 0, n = customers.size();

        for (int i = 0; i < n; i++) {
            if(grumpy[i] == 0) ans += customers[i];
        }

        int val = 0, maxi = 0;

        for (int i = 0; i < n; i++){
            if(grumpy[i]) val += customers[i];

            if(i >= minutes and grumpy[i - minutes]) val -= customers[i - minutes];

            if(i >= minutes - 1) maxi = max(maxi, val);
        }

        return ans + maxi;
    }
};