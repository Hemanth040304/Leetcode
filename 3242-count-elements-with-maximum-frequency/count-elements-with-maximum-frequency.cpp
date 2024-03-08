class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int numberOfNumbers = 0;
        map<int,int> mp;
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > maxi){
                maxi = mp[nums[i]];
                numberOfNumbers = 1;
            }
            else if(mp[nums[i]] == maxi) numberOfNumbers++;
        }
        return numberOfNumbers * maxi;
    }
};