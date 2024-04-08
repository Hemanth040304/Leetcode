class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int ones = 0, zeroes = 0, n = sandwiches.size();

        for(int i : students) ones += i;
        zeroes = n - ones;
        
        for(int i = 0; i < n; i++) {
            int val = sandwiches[i];
            if(val == 0) {
                if(zeroes == 0) return n - i;
                zeroes--;
            }
            else {
                if(ones == 0) return n - i;
                ones--;
            }
        }
        return 0;
    }
};
   