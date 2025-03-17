class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i = 0, j = 0;
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        while (i < ransomNote.size() && j < magazine.size()) {
            if (ransomNote[i] == magazine[j]) {
                i++;
                j++;
            }
            else j++;
        }

        return ransomNote.size() <= i ? true : false;
    }
};