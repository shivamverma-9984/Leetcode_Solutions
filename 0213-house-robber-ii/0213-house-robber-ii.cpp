class Solution {
public:
    int dp[101];
    int memo(vector<int>& nums,int i,int n){
        if(i>n)
             return 0;
        if(dp[i]!=-1)
            return dp[i];
        int pick=nums[i]+memo(nums,i+2,n);
        int notpick=memo(nums,i+1,n);
        return dp[i]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
    int n=nums.size();
    if(n==1)
        return nums[0];
    memset(dp,-1,sizeof(dp));
    int fhouse=memo(nums,0,n-2);
    memset(dp,-1,sizeof(dp));
    int lhouse=memo(nums,1,n-1);
    return max(fhouse,lhouse);
    }
};