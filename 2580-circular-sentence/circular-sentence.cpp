class Solution {
public:
    bool isCircularSentence(string sentence) {
        int c = 0, n = sentence.size();
        for (int i = 0; i < n; i++) {
            if (sentence[i] == ' ') c++;
            if (sentence[i] == ' ' and sentence[i - 1] != sentence[i + 1]) return false;
        }
        
        return sentence[0] == sentence[n - 1];
    }
};