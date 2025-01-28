class Solution {
private:
    long long mod = 1000000007;

    int call (long long n, long long val) {
        int ans = 1;

        while (val) {
            if (val % 2)  ans = ans * n % mod;
            n = n * n % mod;
            val /= 2;
        }

        return ans;
    }

public:
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long five = call(5, even);
        long long four = call(4, odd);
        return five * four % mod;
    }
};