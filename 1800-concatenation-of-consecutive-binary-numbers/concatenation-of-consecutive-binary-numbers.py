class Solution:
    def concatenatedBinary(self, n: int) -> int:
        s = ''
        for _ in range(1,n+1):
            Binary = bin(_)
            s += Binary[2:]
        return int(s, 2) % 1000000007