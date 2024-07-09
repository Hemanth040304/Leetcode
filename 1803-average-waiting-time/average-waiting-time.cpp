class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int currentTime = 0;
        long long totalWaitTime = 0;

        for(auto customer : customers) {
            int arrival = customer[0], time = customer[1];
            
            if(currentTime <  arrival) currentTime = arrival;
            totalWaitTime += currentTime + time - arrival;
            currentTime += time;
        }
        return static_cast<double>(totalWaitTime)/customers.size();
    }
};