class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
          vector<int> ans;
          
          ans.push_back(first);
          
          int temp=first;
          
         for(auto num :encoded){
              
            temp= num ^ first;
          
            ans.push_back(temp);
              
            first=temp;
          }
        return  ans;
        
    }
};