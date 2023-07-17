class Solution {
public: 
   using  ll= long long;
   ll dp[500001][2];
    
    ll solve(int idx ,vector<int>&nums,bool flag){
        if(idx>=nums.size())
            return 0;
        
        if(dp[idx][flag]!=-1)
            return dp[idx][flag];
        
        ll skip=solve(idx+1,nums,flag);
        
        ll val=nums[idx];
        
        if(flag==false)
        {
           val=-val; 
        } 
        
        ll take=solve(idx+1,nums,!flag)+val;
        
        return  dp[idx][flag]=max(skip,take);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(0,nums,true);
    }
};