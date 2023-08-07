class Solution {
public:
    bool check(vector<int>nums,int i,int j){
         sort(nums.begin()+i,nums.begin()+j);
         
        int k=nums[i+1]-nums[i];
        
        for(int x=i;x<j-1;x++){
            
            if(k!=nums[x+1]-nums[x]){
                return false;
            }
        }
         return true; 
    }
vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
            vector<bool>result;
            for(int i=0;i<l.size();i++){
              result.push_back(check(nums,l[i],r[i]+1));
            }
         return result;
    }
};