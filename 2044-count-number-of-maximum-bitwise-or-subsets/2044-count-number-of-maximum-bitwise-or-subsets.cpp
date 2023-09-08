class Solution {
public:
    int ans=0,t=0;
    
    void solve(int idx,int sum,vector<int>&nums)
    {
        if(idx>=nums.size()){
            
            ans+=sum==t?1:0;
            
            return;
        }
           
        solve(idx+1,sum | nums[idx],nums);
        
        solve(idx+1,sum,nums);

    }
    int countMaxOrSubsets(vector<int>& nums) {
      
        for(auto num:nums)
           
            t|=num;
      
        solve(0,0,nums);
      
        return ans; 
    }
};