class Solution {
public:
    string alphabetBoardPath(string target) {
        map<char,pair<int,int>> hash = 
        { {'a', {0,0}}, {'b', {0,1}}, {'c', {0,2}}, {'d', {0,3}}, {'e', {0,4}},
        {'f', {1,0}}, {'g', {1,1}}, {'h', {1,2}}, {'i', {1,3}}, {'j', {1,4}}, 
        {'k', {2,0}}, {'l', {2,1}}, {'m', {2,2}}, {'n', {2,3}}, {'o', {2,4}},
        {'p', {3,0}}, {'q', {3,1}}, {'r', {3,2}}, {'s', {3,3}}, {'t', {3,4}}, 
        {'u', {4,0}}, {'v', {4,1}}, {'w', {4,2}}, {'x', {4,3}}, {'y', {4,4}},
        {'z', {5,0}} };
        string ans = "";
        int i = 0, j = 0;
        for(auto ind:target){
            pair<int,int> pos = hash[ind];
            string s;
            if(i == 5 and j == 0 and j < pos.second){
                s += 'U';
                i--;
            }
            //cout<<pos.first<<" "<<pos.second<<" ";
            if(j < pos.second){
                int diff = pos.second-j;
                while(diff--){
                    s += 'R';
                    j++;
                }
            }
            else if(j > pos.second){
                int diff = j-pos.second;
                while(diff--){
                    s += 'L';
                    j--;
                }
            }
            if(i < pos.first){
                int diff = pos.first-i;
                while(diff--){
                    s += 'D';
                    i++;
                }
            }
            else if(i > pos.first){
                int diff = i-pos.first;
                while(diff--){
                    s += 'U';
                    i--;
                }
            }
            if(i==pos.first and j == pos.second){
                s += '!';
                ans += s;
            }
        }
        return ans;
    }
};