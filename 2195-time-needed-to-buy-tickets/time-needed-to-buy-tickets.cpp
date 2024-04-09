class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int time = 0;
        int index = 0;
        int n = tickets.size();
        
        while(tickets[k] != 0) {
            if(tickets[index] > 0) {
                time++;
                tickets[index]--;
                index = (index + 1) % n;
            }
            else if(tickets[index] == 0) index = (index + 1) % n;
        }
        
        return time;
    }
};