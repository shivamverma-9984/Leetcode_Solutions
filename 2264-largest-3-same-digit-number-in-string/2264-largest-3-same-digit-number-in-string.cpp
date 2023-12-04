class Solution {
public:
    string largestGoodInteger(string s) {
        char maxchar=' ';
       for(int i=1;i<s.size()-1;i++){
           if(s[i]==s[i-1]  && s[i]==s[i+1])
           {
               maxchar=max(maxchar,s[i]);
           }
        
       } 
       return maxchar==' '?"":string(3,maxchar); 
    }
};