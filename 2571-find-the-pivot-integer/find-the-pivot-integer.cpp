class Solution {
public:
    int pivotInteger(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int sumn = (n * (n + 1)) / 2;
        for(int i = 1; i <= n ; i++){
            int sumi = (i * (i + 1)) / 2;
            if(sumi == sumn - sumi + i) return i;
        }
        return -1;
    }
};