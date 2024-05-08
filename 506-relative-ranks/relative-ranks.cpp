class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> store;
        store = score;
        sort(store.begin(), store.end(), greater<int>());
        unordered_map<int, string> place;
        vector<string> ans;
        int p = 1;
        for(int i = 0; i < store.size(); i++){
            if(i == 0) {
                place[store[i]] = "Gold Medal";
                p++;
            }
            else if(i == 1){
                place[store[i]] = "Silver Medal";
                p++;
            }
            else if(i == 2){
                place[store[i]] = "Bronze Medal";
                p++;
            }
            else{
                place[store[i]] = to_string(p);
                p++;
            }
        }

        for(int i = 0; i < store.size(); i++){
            ans.emplace_back(place[score[i]]);
        }
        return ans;
    }
};