class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto it : nums){
            if(it < 0)neg.emplace_back(it);
            else pos.emplace_back(it);
        }
        vector<int> ans;
        for(int i = 0 ; i < pos.size() ; i++){
            ans.emplace_back(pos[i]);
            ans.emplace_back(neg[i]);
        }
        return ans;
    }
};