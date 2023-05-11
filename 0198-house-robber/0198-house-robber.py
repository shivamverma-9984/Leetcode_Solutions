class Solution:
    def rob(self, nums: List[int]) -> int:
        dp=[-1]*(len(nums)+1)
        def solve(i,nums,n):
            if i>=n:
                return 0
            if dp[i]!=-1:
                return dp[i]
            pick=nums[i]+solve(i+2,nums,n)
            notpick=solve(i+1,nums,n)
            dp[i]=max(pick,notpick)
            return dp[i]
        
        return solve(0,nums,len(nums))