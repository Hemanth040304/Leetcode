class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size()) return -1;
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[0]) {
                string compare = haystack.substr(i, needle.size());
                if (compare == needle) return i;
            }
        }
        return -1;
    }
};