class Solution {
public:
    int dp[301];
    bool solve(int idx ,string s,  unordered_set<string>&st)
    {
        if(idx>=s.size())
            return true;
        
        if(dp[idx]!=-1)
            return dp[idx];
        
        if(st.find(s)!=st.end())
            return true;
        
        for(int i=1;i<=s.size();i++){
            
            string temp=s.substr(idx,i);
            
            if(st.find(temp)!=st.end() && solve(idx+i,s,st))
                  
                return dp[idx]=true; 
        }
       
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
       
        memset(dp,-1,sizeof(dp));
        
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        
        return solve(0,s,st);
    }
};