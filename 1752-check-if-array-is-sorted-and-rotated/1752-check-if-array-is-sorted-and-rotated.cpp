class Solution {
public:
    bool check(vector<int>& nums) {
    int maxindex=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]>nums[i]){
            maxindex=i;
        }
    }
    reverse(nums.begin(),nums.begin()+maxindex);
    reverse(nums.begin()+maxindex,nums.end());
    reverse(nums.begin(),nums.end());

        
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }    
        
      return true; 
    }
};