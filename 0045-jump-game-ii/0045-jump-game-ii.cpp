class Solution {
public:
      int dp[10001];
      long long solve(int idx,vector<int>&nums){
        if(idx>=nums.size()-1)
              return 0;
         if(dp[idx]!=-1)
               return dp[idx];
        long long res=INT_MAX;
        for(long long i=1;i<=nums[idx];i++){
            long long jump=1+solve(idx+i,nums);
            res=min(res,jump);
        }
        return dp[idx]=res;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(0,nums);
    }
};