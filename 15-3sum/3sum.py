class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        z = []
        for i in range(len(nums)-2):
            k=i+1
            j=len(nums)-1
            while k<j:
                if nums[i]+nums[j]+nums[k]>0:
                    j-=1
                elif nums[i]+nums[j]+nums[k]<0:
                    k+=1
                elif nums[i]+nums[j]+nums[k]==0:
                    z.append((nums[i],nums[j],nums[k]))
                    k+=1
        return list(set(z))