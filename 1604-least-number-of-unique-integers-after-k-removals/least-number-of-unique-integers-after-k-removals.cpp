bool comparePair(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}

class Solution {
public:

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> ump;
        for(auto it : arr){
            ump[it]++;
        }
        vector<pair<int, int>> vec(ump.begin(), ump.end());
        sort(vec.begin(), vec.end(), comparePair);
        int ans=0;
        for(auto it:vec){
            if(k<=0)ans++;
            else{
                k -= it.second;
                if(k<0)ans++;
            }
        }
        return ans;
    }
};
