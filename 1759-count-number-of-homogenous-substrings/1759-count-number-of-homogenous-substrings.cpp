class Solution {
public:
    int mod=1e9+7;
    int countHomogenous(string s) {
       int cnt=0;
       int res=0;
       for(int i=0;i<s.size();i++){
           
           if(i>0 && s[i-1]==s[i]){
               
               cnt+=1;
           }
           else{
               
               cnt=1;
           }
           res=(res+cnt)%mod;
     }
        
        return res;
    }
};