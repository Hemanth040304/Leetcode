//https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/?envType=daily-question&envId=2024-01-02

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<vector<int>>ans;
        while(1){
            vector<int>temp;
            int x=0;
            for(auto &it:mp){
                if(it.second>0){
                    temp.emplace_back(it.first);
                    it.second=it.second-1;
                    if(it.second>0)x++;
                }
            }
            ans.emplace_back(temp);
            temp.clear();
            if(x==0)break;
        }
        return ans;
    }
};
