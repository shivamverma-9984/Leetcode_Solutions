class Solution {
public:
    vector<vector<string>>result;
    bool check(string s,int i,int j)
    {
          while(i<=j){
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }
    void solve(string s,int idx,vector<string>&ans)
    {
        if(idx>=s.size()){
            result.push_back(ans);
        }
        for(int i=idx;i<s.size();i++)
        {
            if(check(s,idx,i))
            {
                ans.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1,ans);
                ans.pop_back();
            }
            
        }
    }

  
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        solve(s,0,ans);
        return result;
       
    }
};