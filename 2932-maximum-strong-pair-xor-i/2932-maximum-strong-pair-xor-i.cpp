class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans=0;
       for(int i=0;i<nums.size()-1;i++){
           for(int j=i+1;j<nums.size();j++)
           {
               if(abs(nums[j]-nums[i])<=min(nums[i],nums[j]))
                      ans=max(ans,nums[i]^nums[j]);
           }
       } 
    return ans;
    }
};