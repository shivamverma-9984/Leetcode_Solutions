class Solution {
public:
   
    long long solve(int i,vector<vector<int>>& ques, vector<long long>&dp)
    {
        if(i>=ques.size())
             return 0;
        if (dp[i]!=-1)
           return dp[i];
        long long take=ques[i][0]+solve(i+ques[i][1]+1,ques,dp);
        long long nottake=solve(i+1,ques,dp);
        return dp[i]=max(take, nottake);
    }
    long long mostPoints(vector<vector<int>>& questions) {
    int n=questions.size();
    vector<long long>dp(n+1,-1);
    return solve(0,questions,dp);
    }
};