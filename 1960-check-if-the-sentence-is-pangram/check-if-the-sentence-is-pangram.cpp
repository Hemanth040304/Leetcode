class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        if (n < 26) return false;
        bool visited[26]={0};
        for (int i = 0; i < n; i++) {
            char x = sentence[i];
            if (x >= 'a' and x <= 'z') visited[x - 'a'] = true;
            if (x >= 'A' and x <= 'Z') visited[x - 'A'] = true;
        }
        for(int i = 0; i < 26; i++){
            if (!visited[i]) return false;
        }
        return true;
    }
};