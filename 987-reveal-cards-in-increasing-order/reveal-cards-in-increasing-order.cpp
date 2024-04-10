class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        sort(deck.begin(), deck.end());
        vector<int> ans(deck.size(), 0);
        deque<int> q;
        for (int i = 0; i < deck.size(); ++i) q.push_back(i);
        for (auto n : deck) {
            int i = q.front();
            q.pop_front();
            ans[i] = n;
            if (!q.empty()) {
                q.push_back(q.front());
                q.pop_front();
            }
        }

        return ans;
    }
};