class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = nums.size();
        vector<int>ans;
        bool f = false;
        int index = -1;
        int sum = 1 , sum1 = 1 , c = 0;
        for (int i = 0; i < n; i++){
            if(nums[i] == 0) {
                f = true;
                index = i;
                sum1 = sum;
                sum = 1;
                c++;
                if(c >= 2) {
                    vector<int> retu(n, 0);
                    return retu;
                }
            }
            else sum *= nums[i];
        }
        
        for (int i = 0; i < n; i++) {
            if(f) {
                if(i == index) ans.emplace_back(sum1 * sum);
                else ans.emplace_back(0);
            }
            else ans.emplace_back(sum / nums[i]);
        }
        return ans;
    }
};
