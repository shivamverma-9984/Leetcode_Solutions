class Solution {
public:
    int dp[2501][2501];
    int solve(int prev,int idx,vector<int>&nums)
    {
        if(idx>=nums.size())
           
            return 0;
        
       if(dp[prev+1][idx]!=-1)
            
           return dp[prev+1][idx];
        
        int take=0;
        
        if(prev==-1 || nums[prev]<nums[idx])
        {
            take=1+solve(idx,idx+1,nums);
        }
       
        int not_take=solve(prev,idx+1,nums);
        
        return  dp[prev+1][idx]=max(take,not_take);
    }
    
    int lengthOfLIS(vector<int>& nums) {
      
       int n=nums.size();
        
      memset(dp,-1,sizeof(dp));
      
      return solve(-1,0,nums);
    }
};


