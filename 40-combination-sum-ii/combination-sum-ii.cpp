class Solution {
public:

    void FindCombinations(int ind, vector<int> &candidates, vector<vector<int>> &ans, vector<int> ds, int target){
        if(target == 0){
            ans.emplace_back(ds);
            return;
        }
        for(int i = ind; i < candidates.size(); i++){
            if(i > ind && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            ds.emplace_back(candidates[i]);
            FindCombinations(i+1,candidates,ans,ds,target - candidates[i]);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        FindCombinations(0,candidates,ans,ds,target);
        return ans;
    }
};