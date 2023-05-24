class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        bool flag=true;
       for(int i=s.size()-1;i>=0;i--)
       {
           if(s[i]!=' '){
               res++;
               flag=false;
           }
           if(s[i]==' ' && flag==false){
               break;
           }
       }
        return res;
    }
};