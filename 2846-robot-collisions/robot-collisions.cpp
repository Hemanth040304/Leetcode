class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string& directions) {
        unordered_map<int, int> index_map;
        for (int i = 0; i < positions.size(); ++i) index_map[positions[i]] = i;

        stack<int> stack;
        sort(positions.begin(), positions.end());

        for (int p : positions) {
            int i = index_map[p];

            if (directions[i] == 'R') stack.push(i);
            else {
                while (!stack.empty() && healths[i] > 0) {
                    int i2 = stack.top();
                    stack.pop();

                    if (healths[i] > healths[i2]) {
                        healths[i]--;
                        healths[i2] = 0;
                    }
                    else if (healths[i] < healths[i2]) {
                        healths[i2]--;
                        healths[i] = 0;
                        stack.push(i2);
                    }
                    else healths[i] = healths[i2] = 0;
                }
            }
        }

        vector<int> survived_healths;
        for (int h : healths) {
            if (h > 0) survived_healths.emplace_back(h);
        }

        return survived_healths;
    }
};
