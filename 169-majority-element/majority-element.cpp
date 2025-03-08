class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        for(auto itr:nums)
        {
            mpp[itr]++;
        }
        for(auto itr:mpp)
        {
            if(itr.second>n/2)
        {
            return itr.first;
        }
        }
        return -1;
    }
};