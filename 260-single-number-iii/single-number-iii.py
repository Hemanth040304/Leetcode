class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        ans = []
        mp = {}
        
        for num in nums:
            if num in mp:
                mp[num] += 1
            else:
                mp[num] = 1
        
        for key, value in mp.items():
            if value < 2:
                ans.append(key)

        return ans