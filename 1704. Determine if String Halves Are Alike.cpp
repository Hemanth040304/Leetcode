//https://leetcode.com/problems/determine-if-string-halves-are-alike/description/?envType=daily-question&envId=2024-01-12


class Solution {
public:
    bool halvesAreAlike(string s) {
        string a,b;
        a = s.substr(0,s.size()/2);
        b = s.substr(s.size()/2,s.size());
        int oveA = 0, oveB = 0;
        for(auto it:a){
            it = tolower(it);
            if(it=='a' or it=='e' or it=='i' or it=='o' or it=='u')oveA++;
        }
        for(auto it:b){
            it = tolower(it);
            if(it=='a' or it=='e' or it=='i' or it=='o' or it=='u')oveB++;
        }
        return oveA==oveB;
    }
};
