class Solution {
public:
    int H,L,O,Z;
    int mod =1e9+7;
    int solve(int l,vector<int>&dp)
    {
        if(l>H)
             return 0;
        
        int cnt=0;
        if(l>=L && l<=H)
            cnt=1;
        
        if(dp[l]!=-1)
            return dp[l];
        
        int add_zero=solve(l+Z,dp);
        int add_one=solve(l+O,dp);
        
        return dp[l]=(cnt+add_zero+add_one)%mod;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        L=low;
        H= high;
        Z=zero;
        O=one;
        vector<int>dp(high+1,-1);
        return solve(0,dp);
    }
};