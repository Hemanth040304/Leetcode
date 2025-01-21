class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> ans;
        multiset<long long> lo, hi;

        auto balance = [&]() {

            if (lo.size() < hi.size()) {
                lo.insert(*hi.begin());
                hi.erase(hi.begin());
            }
            if (lo.size() > hi.size() + 1) {
                hi.insert(*lo.rbegin());
                lo.erase(prev(lo.end())); 
            }
        };

        for (int i = 0; i < (int)nums.size(); i++) {
            if (lo.empty() or nums[i] <= *lo.rbegin()) lo.insert(nums[i]);
            else hi.insert(nums[i]);
            balance();

            if (i >= k) {
                long long out = nums[i - k];
                auto it = lo.find(out);

                if (it != lo.end()) lo.erase(it);
                else {
                    it = hi.find(out);
                    if (it != hi.end()) hi.erase(it);
                }
                
                balance();
            }

            if (i >= k - 1) {
                if (k % 2) ans.push_back(*lo.rbegin());
                else ans.push_back(((double)*lo.rbegin() + (double)*hi.begin()) / 2.0);
            }
        }

        return ans;
    }
};