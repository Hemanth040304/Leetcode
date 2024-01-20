//https://leetcode.com/problems/sum-of-subarray-minimums/description/?envType=daily-question&envId=2024-01-20


#define MOD 1000000007

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        vector<long>v,sum(n,0);
        for(int i = 0 ; i < n ; i++){
            while(!v.empty() and arr[v.back()] > arr[i])
                v.pop_back();
            if(!v.empty()) j = v.back();
            else j = -1;
            if(j >= 0) sum[i] = ( sum[j] + (i - j) * arr[i] ) % MOD;
            else sum[i] = ((i - j) * arr[i] ) % MOD;
            v.push_back(i);
        }
        int res=0;
        for(int i = 0 ; i < sum.size() ; i++){
            res = (res + sum[i] ) % MOD;
        }
        return res;
    }
};
