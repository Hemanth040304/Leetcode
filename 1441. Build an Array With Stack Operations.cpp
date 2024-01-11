//https://leetcode.com/problems/build-an-array-with-stack-operations/


class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int mi = *min_element(target.begin(),target.end());
        int ma = *max_element(target.begin(),target.end());
        map<int,int>mp;
        for(auto it:target){
            mp[it]++;
        }
        for(int i = 1 ; i < ma ; i++){
            if(mp[i]!=0){
                ans.emplace_back("Push");
            }
            else{
                ans.emplace_back("Push");
                ans.emplace_back("Pop");
            } 
        }
        ans.emplace_back("Push");
        return ans;
    }
};
