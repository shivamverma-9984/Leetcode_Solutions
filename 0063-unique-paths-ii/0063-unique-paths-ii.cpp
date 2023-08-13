class Solution {
public:
    int n,m;
    int dp[101][101];
    int solve(int i,int j,vector<vector<int>>& grid){
        if(i>=n ||j>=m || grid[i][j]==1)
            return 0;
        if(i==n-1 && j==m-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int bottom=solve(i+1,j,grid);
        int right=solve(i,j+1,grid);
        return dp[i][j]=bottom+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        n=obstacleGrid.size();
        m=obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,obstacleGrid);
    }
};