class Solution {
    private:
    int singleNum(int n) {
        if(n < 10) return n;
        return n % 10 + n / 10;
    }
public:
    int getLucky(string s, int k) {
        k--;
        int num = 0;
        for (char c : s) {
            num += singleNum(c - 96);
        }
        if (k == 0) return num;
        int ans = 0;
        while (k--) {
            while (num) {
                ans += num % 10;
                num /= 10;
            }
            if (k != 0) {
                num = ans;
                ans = 0;
            }
        }
        return ans;
    }
};