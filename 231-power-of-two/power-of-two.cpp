class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
        while (n) {
            if(n & 1) c++;
            if(c>1) return false;
            n=n>>1;
        }
        return c==1;
    }
};