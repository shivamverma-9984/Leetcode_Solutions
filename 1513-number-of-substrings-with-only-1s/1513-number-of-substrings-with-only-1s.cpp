class Solution {
public:
    int mod=1e9+7;
    int numSub(string s) {
       int cnt=0;
       int res=0;
       for(int i=0;i<s.size();i++){
          if(s[i]=='1'){
                cnt++;
                res=(res+cnt)%mod;
            }
            else{
                cnt=0;
            }     
     }  
        return res;
    }
};