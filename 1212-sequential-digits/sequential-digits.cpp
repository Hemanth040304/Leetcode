typedef long long ll;
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int start = 0, last = 0;
        ll t = low;
        while(t){
            t/=10;
            start++;
        }
        t = high;
        while(t){
            t/=10;
            last++;
        }
        vector<int>ans;
        for(int r = start ; r < last+1 ; r++){
            for(int i = 1 ; i < 10-r+1 ; i++){
                t = r;
                int x = i;
                ll num=0;
                while(t--){
                    num = num*10+x;
                    x++;
                }
                if(num >= low and num <= high)ans.emplace_back(num);
            }
            
        }
        return ans;
    }
};