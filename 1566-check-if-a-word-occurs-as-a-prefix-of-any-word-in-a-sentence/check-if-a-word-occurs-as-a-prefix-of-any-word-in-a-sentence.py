class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        ind = 0
        for i in sentence.split(' '):
            if searchWord in i and searchWord == i[:len(searchWord)]:
                return ind + 1
            ind += 1
        
        return -1