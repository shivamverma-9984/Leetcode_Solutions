class Solution {
public:
     bool check(string s,int i,int j)
    {
          while(i<=j){
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }
    
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)
            {
                if(check(s,i,j))
                {
                    cnt++;
                }
            }
        }
      return cnt;
    }
};