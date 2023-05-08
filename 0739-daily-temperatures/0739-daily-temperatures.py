class Solution:
    def dailyTemperatures(self, nums: List[int]) -> List[int]:
            ans=[0]*len(nums)
            stack=[]
            for i in range(len(nums)):
                while stack and nums[stack[-1]]<nums[i]:
                    ans[stack[-1]]=(i-stack[-1])
                    stack.pop()
                stack.append(i)
            return ans