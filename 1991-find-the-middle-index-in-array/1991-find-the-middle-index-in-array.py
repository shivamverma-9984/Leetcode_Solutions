class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        r = sum(nums)
        l  = 0
        for i, x in enumerate(nums):
            r -= x
            if l== r: 
                return i
            l+= x
        return -1