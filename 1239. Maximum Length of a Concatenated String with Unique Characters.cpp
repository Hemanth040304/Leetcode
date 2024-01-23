//https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/description/?envType=daily-question&envId=2024-01-23


class Solution {
public:


    void fun(vector<string> &arr, int &ans, int n, int i, string emp, vector<int>mp){
        if(i==n)return;
        fun(arr,ans,n,i+1,emp,mp);
        for(auto it:arr[i]){
            if(mp[it-'a']==1)return;
            mp[it-'a'] = 1;
        }
        emp+=arr[i];
        if(ans<emp.size())ans = emp.size();
        fun(arr,ans,n,i+1,emp,mp);
    }

    int maxLength(vector<string>& arr) {
        int ans = 0;
        vector<int>mp(26,0);
        fun(arr,ans,arr.size(),0,"",mp);
        return ans;
    }
};
