class Solution {
public:
    int m,n;
int fun(vector<vector<int>>&grid,int i,int j,vector<vector<int>>&dp){
       if(i>m-1 || j>n-1 )
            return INT_MAX;
       if(i==m-1 &&  j==n-1)
            return grid[i][j];
       if(dp[i][j]!=-1)
            return dp[i][j];
       return dp[i][j]=grid[i][j]+min(fun(grid,i+1,j,dp),fun(grid,i,j+1,dp));

    }
    int minPathSum(vector<vector<int>>& grid) {
         m=grid.size();
         n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(grid,0,0,dp);
    }
};