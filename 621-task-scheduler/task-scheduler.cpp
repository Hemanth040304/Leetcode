class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);


        vector<int> count(26, 0);
        for (char task : tasks) count[task - 'A']++;
        
        sort(count.begin(), count.end(), greater<int>());
        
        int maxCount = count[0];
        int idleTime = (maxCount - 1) * n;
        
        for (int i = 1; i < count.size() && idleTime > 0; i++) 
            idleTime -= min(count[i], maxCount - 1);
        
        idleTime = max(0, idleTime);
        
        return tasks.size() + idleTime;
    }
};