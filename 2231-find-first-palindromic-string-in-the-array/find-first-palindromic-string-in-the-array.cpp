class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            string s = it;
            reverse(s.begin(), s.end()); 
            if(it == s)return it;
        }
        return "";
    }
};