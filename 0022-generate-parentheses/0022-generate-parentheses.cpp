class Solution {
public:
    vector<string>result;
    void solve(int n,int open,int close,string s )
    {
        if(open==n && close==open)
        {
            result.push_back(s);
            return ;
        }
        if(open<n)
        {
            s.push_back('(');
            solve(n,open+1,close,s);
            s.pop_back();
        }
         if(close<open)
        {
            s.push_back(')');
            solve(n,open,close+1,s);
            s.pop_back();
        }
    }
    
   
vector<string> generateParenthesis(int n) {
    
     
    solve(n,0,0,"");
        
    return result;
    
}
    
};