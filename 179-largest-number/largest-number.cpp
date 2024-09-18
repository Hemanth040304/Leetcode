class Solution {
private:
    static bool compare(const string& a, const string& b) {
        return a + b > b + a;
    }
    
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        for (int num : nums) {
            str_nums.emplace_back(to_string(num));
        }

        sort(str_nums.begin(), str_nums.end(), compare);

        if (str_nums[0] == "0") return "0";

        string ans;
        for (const string& num : str_nums) {
            ans += num;
        }

        return ans;
    }
};
