class Solution {
public:
   
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
      
        for(int i=0; i < arr1.size(); i++){
            bool flag=0;
            for(int j=0; j < arr2.size(); j++){
                if(d >= abs(arr2[j] - arr1[i])){
                    flag = 1;
                    break;
                }
            }
            if(flag==0) ans++;
        }
        return ans;
    }
};