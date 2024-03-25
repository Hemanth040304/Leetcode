class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        map<int,int> mp;
        vector<int> ans;

        for(auto it : nums) {
            mp[it]++;
            if(mp[it] == 2) ans.emplace_back(it);
        }

        return ans;
    }
};