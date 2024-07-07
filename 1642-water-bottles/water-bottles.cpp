class Solution {
public:
    int numWaterBottles(int n, int E) {
        int t = n, e = n;
        
        while (e >= E) {
            int N = e / E;
            t += N;
            e = N + (e % E);
        }
        
        return t;
    }
};