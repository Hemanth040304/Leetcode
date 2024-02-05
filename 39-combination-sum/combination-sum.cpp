class Solution {
public:
    void Print(int ind,int n,vector<int>&arr,vector<int>&v,vector<vector<int>>&ans,int t){
        if(ind==n){
            if(t==0){
                ans.emplace_back(v);
            }
            return;
        }
        if(arr[ind]<=t){
            v.emplace_back(arr[ind]);
            Print(ind,n,arr,v,ans,t-arr[ind]);
            v.pop_back();
        }
        Print(ind+1,n,arr,v,ans,t);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        vector<int>v;
        vector<vector<int>>ans;
        Print(0,arr.size(),arr,v,ans,t);
        return ans;
    }
};