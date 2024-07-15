class Solution {
private:
    void dfs(int node, vector <int> adjls[], vector <int> &vis){
        vis[node] = 1;
        for (auto it : adjls[node]){
            if(!vis[it]) dfs(it, adjls, vis);
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector <int> adjls[V];
        
        // to change adjaency matrix to list
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if(isConnected[i][j] == 1 and i != j) {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        vector<int> vis(V, 0);
        int provinces = 0;
        
        for (int i = 0; i < V; i++){
            if(!vis[i]){
                provinces++;
                dfs(i, adjls, vis);
            }
        }
        
        return provinces;
    }
};