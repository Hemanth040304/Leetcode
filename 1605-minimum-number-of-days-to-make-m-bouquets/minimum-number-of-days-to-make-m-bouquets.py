class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def check(day: int) -> bool:
            cnt = cur = 0
            for bd in bloomDay:
                if bd <= day:
                    cur += 1
                else:
                    cur = 0
                if cur == k:
                    cnt += 1
                    cur = 0
            return cnt >= m

        left, right = min(bloomDay), max(bloomDay)
        while left < right:
            mid = (left + right) >> 1
            if check(mid):
                right = mid
            else:
                left = mid + 1
        return left