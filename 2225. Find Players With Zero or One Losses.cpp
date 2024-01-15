//https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/?envType=daily-question&envId=2024-01-15


class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        map<int,int>win;
        map<int,int>loss;
        for(int i = 0 ; i < matches.size() ; i++){
            win[matches[i][0]]++;
            loss[matches[i][1]]++;
        }
        vector<int>o;
        vector<int>s;
        for(auto it:win){
            if(loss[it.first]==NULL)o.emplace_back(it.first);
        }
        for(auto it:loss){
            if(it.second==1)s.emplace_back(it.first);
        }
        ans.emplace_back(o);
        ans.emplace_back(s);
        return ans;
    }
};
