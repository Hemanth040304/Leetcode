class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0 , f=0,s=0;
        for(int i = 0 ; i < bank.size() ; i++){
            int c=0;
            for(int j = 0 ; j < bank[i].size() ; j++){
                if(bank[i][j]=='1')c++;
            }
            if(f==0){
                f=c;
                c=0;
            }
            else if(s==0){
                s=c;
                c=0;
            }
            if(f!=0 and s!=0){
                ans += (f*s);
                f=s;
                s=0;
            }
        }
        return ans;
    }
};
