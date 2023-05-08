class Solution:
    def nthUglyNumber(self, n: int) -> int:
        
        x,y,z=0,0,0
        dp=[0]*(n)
        dp[0]=1
        for i in range(1,n):
            m2=dp[x]*2
            m3=dp[y]*3
            m5=dp[z]*5
            dp[i]=min(m2,m3,m5)
            if dp[i]== m2:
                x+=1
            if dp[i]== m3:
                y+=1
            if dp[i]== m5:
                z+=1
        return dp[n-1]
        
        
