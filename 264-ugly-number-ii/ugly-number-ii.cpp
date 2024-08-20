class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> t(n + 1);
        t[1] = 1;

        int t2 = 1, t3 = 1, t5 = 1;
        for (int i = 2; i <= n; i++) {
            int nd = t[t2] * 2, rd = t[t3] * 3, th = t[t5] * 5;
            t[i] = min({nd, rd, th});
            if (t[i] == nd) t2++;
            if (t[i] == rd) t3++;
            if (t[i] == th) t5++;
        }

        return t[n];
    }
};