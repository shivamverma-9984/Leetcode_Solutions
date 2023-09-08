class Solution {
public:
    vector<int>ds;
    int ans=0;

    bool check(int x,vector<int>&ds,int k)
    {
           for(auto i:ds)
            {
               if(abs(i-x)==k)
                    return false;
            }
        
        return true;
    }
    void solve(int idx,vector<int>& nums, int k){
    
        if(idx>=nums.size())
        {
            ans++;
            return ;
        }
        if(check(nums[idx],ds,k))
        {
            ds.push_back(nums[idx]);
            solve(idx+1,nums,k);
            ds.pop_back();
        }
        solve(idx+1,nums,k); 
    }
    
    
    int beautifulSubsets(vector<int>& nums, int k) {
        solve(0,nums,k);
        return ans-1;
    }
};