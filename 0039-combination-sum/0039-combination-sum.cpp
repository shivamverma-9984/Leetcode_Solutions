class Solution {
public:
void solve(int x,vector<int>nums,int t,vector<int>&ans,int csum,set<vector<int>>&st)
    {
        if(csum==t)
        {
            st.insert(ans);
            return ;
        }
        if(csum>t)
        {
            return ;
        }
        for(int i=x;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
            solve(i,nums,t,ans,csum+nums[i],st);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
     set<vector<int>>st;
     vector<int>ans;
     solve(0,nums,t,ans,0,st); 
     vector<vector<int>>result(st.begin(),st.end());
     return result; 
    }
};