class Solution:
    def numSquares(self, n: int) -> int:
        def solve(n,dp):
            if n==0:
                return 0
            if dp[n]!=-1:
                return dp[n]
            res=float("inf")
            for i in range(1,int(sqrt(n))+1):
                res=min(res,solve(n-i*i,dp)+1)
            dp[n]=res
            return dp[n]
        dp=[-1]*(n+1)
        return solve(n,dp)
            
        