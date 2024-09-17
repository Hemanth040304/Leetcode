class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        ans = []
        s1 = list(s1.split(" "))
        s2 = list(s2.split(" "))
        for i in s1:
            if i not in s2 and i not in ans and s1.count(i)==1:
                ans.append(i)
        for i in s2:
            if i not in s1 and i not in ans and s2.count(i)==1:
                ans.append(i)
        return ans