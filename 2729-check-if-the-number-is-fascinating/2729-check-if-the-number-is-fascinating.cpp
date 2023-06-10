class Solution {
public:
    bool isFascinating(int n) {
         string result=to_string(n)+to_string(n*2)+to_string(n*3);
         cout<<result;
         unordered_map<int,int>mp;
         for(int i=0;i<result.size();i++)
         {
            if((result[i]-'0')!=0)
                  mp[(result[i])-'0']++;    
         }
         if(mp.size()==9)
         {
             for(auto i:mp)
             {
                 if(i.second>1){
                     return false;
                 }
             }
             return true;
         }
         return false;
             
    }
};