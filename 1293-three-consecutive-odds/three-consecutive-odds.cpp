class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c = 0, k = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] % 2)c++;
            else 
            {
                k = max(k,c);
                c = 0;
            }
        }
        return (k >= 3 || c >= 3)?1:0;
    }
};