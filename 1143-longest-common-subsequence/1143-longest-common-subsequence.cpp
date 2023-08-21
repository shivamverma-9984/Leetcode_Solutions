class Solution {
public:
    int m,n;
    int memoziation(string x, string y,int i,int j,vector<vector<int>>&dp)
    {
      if(i>=m || j>=n)
          return 0;
      if(dp[i][j]!=-1)
          return dp[i][j];
       if(x[i]==y[j])
           return 1+memoziation(x,y,i+1,j+1,dp);
       return dp[i][j]=max(memoziation(x,y,i+1,j,dp),memoziation(x,y,i,j+1,dp));
        
    }
    
    int longestCommonSubsequence(string x, string y) {
       m=x.size();
       n=y.size();
       vector<vector<int>>dp(m+1,vector<int>(n+1,0));
       for(int i=1;i<m+1;i++){
           for(int j=1;j<n+1;j++)
           {
               if(x[i-1]==y[j-1])
                   dp[i][j]=1+dp[i-1][j-1];
               else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
        return dp[m][n];
        
        // vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        // return memoziation(x,y,0,0,dp);
    }
};