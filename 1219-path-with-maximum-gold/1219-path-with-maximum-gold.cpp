class Solution {
public:
    int m,n;
    // bool issafe(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&vis)
    // {
    //     if(i>=0 && i<m || j>=0 && j<n || grid[i][j]!=0 || vis[i][j]!=0)
    //         return true;
    //     return false;
    // }
    int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&vis)
    {
         if(i<0 || i>=m || j<0  || j>=n || grid[i][j]==0 || vis[i][j])
              
             return 0;

        vis[i][j]=1;
        int left  =solve(i-1,j,grid,vis);
        int right =solve(i,j+1,grid,vis);
        int up    =solve(i,j-1,grid,vis);
        int down  =solve(i+1,j,grid,vis);
        vis[i][j]=0;
        return grid[i][j]+max({left,right,up,down});
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int ans =0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    ans=max(ans,solve(i,j,grid,vis));
                }
            }
        }
        return ans;
    }
};