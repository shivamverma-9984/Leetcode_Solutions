class Solution {
public:
    string removeOuterParentheses(string s) {
         int open=0,close=0;
        int n=s.length();
        
        string curr="";
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                open++;
                curr=curr+s[i];
            }
            
            if(s[i]==')')
            {
                close++;
                curr=curr+s[i];
            }
            
            if(open!=0 and open==close)
            {
                string temp=curr.substr(1,curr.length()-2);
                ans=ans+temp;
                open=0;
                close=0;
                curr="";
            }
        }
        return ans;
    }
};