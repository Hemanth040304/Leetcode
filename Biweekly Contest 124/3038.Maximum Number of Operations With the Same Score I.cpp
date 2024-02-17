//Contest Link
//https://leetcode.com/contest/biweekly-contest-124/problems/maximum-number-of-operations-with-the-same-score-i/

//Pronlem Link
//https://leetcode.com/problems/maximum-number-of-operations-with-the-same-score-i/description/


class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int ans = 0;
        int m=0;
        for(int i =  0 ; i < nums.size() ; i+=2){
            if(m==0){
                m = nums[i]+nums[i+1];
                ans++;
            }
            else if(m== nums[i]+nums[i+1])ans++;
            else break;
        }
        return ans;
    }
};
