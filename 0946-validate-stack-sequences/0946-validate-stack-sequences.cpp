class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
      stack<int>st;
      int i=0;
      for(auto elem:pushed){
         st.push(elem);
          while(!st.empty() && st.top()==popped[i])
          {
              st.pop();
              i+=1;
          }
     
      }
        return st.empty()==true;
    }
};