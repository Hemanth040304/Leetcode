class Solution {
public:
    int pivotInteger(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int sumn = (n * (n + 1)) / 2;
        int sumi = 0;
        for(int i = 1; i <= n ; i++){
            sumi += i;
            if(sumi == sumn - sumi + i) return i;
        }
        return -1;
    }
};