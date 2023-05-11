class Solution:
    def maxUncrossedLines(self, nums1: List[int], nums2: List[int]) -> int:
        m,n=len(nums1),len(nums2)
        dp=[[-1 for i in range(501)]for j in range(501)]
        def solve(i,j,nums1,nums2):
            if i>=m or j>=n:
                return 0
            if dp[i][j]!=-1:
                return dp[i][j]
            if nums1[i]==nums2[j]:
                    dp[i][j]=1+solve(i+1,j+1,nums1,nums2)
                    return dp[i][j]
          
            dp[i][j]=max(solve(i,j+1,nums1,nums2),solve(i+1,j,nums1,nums2))
            return dp[i][j]
        
        return solve(0,0,nums1,nums2)