class Solution:
    def canJump(self, nums: List[int]) -> bool:
#          def solve(i,nums,n,dp):
#             if i==n-1:
#                 return True
#             if i>n-1:
#                 return False
#             if dp[i]!=-1:
#                 return dp[i]
#             for k in range(1,nums[i]+1):
#                 if solve(i+k,nums,n,dp)==True:
#                     dp[i]=True
#                     return dp[i]
#             dp[i]=False
#             return dp[i]
        
#             dp=[-1]*(10001)
#             return solve(0,nums,len(nums),dp)
     
            maxsearch=0
            for i,num in enumerate(nums):
                if i>maxsearch:
                    return False
                maxsearch=max(maxsearch,i+num)
            return True  
                