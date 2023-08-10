class Solution {
    public:
    set<vector<int>>s;
    vector<int>sub;
    void solve(int i,vector<int>&nums)
    {
        if(i>=nums.size())
        {
            s.insert(sub);
            return ;
        }
        sub.push_back(nums[i]);
        solve(i+1,nums);
        sub.pop_back();
        
        solve(i+1,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
       sort(nums.begin(),nums.end());
       solve(0,nums);
       return vector<vector<int>>{s.begin(),s.end()};
    }
};