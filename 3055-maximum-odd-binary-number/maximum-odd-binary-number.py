class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        n = int(s)
        one = s.count('1')
        zero = s.count('0')
        ans = ''
        if one > 1:
            ans = '1'*(one-1) + ans
        ans += '0'*zero
        if one != 0:
            ans += '1'
        return ans