class Solution {
public:
    set<vector<int>>s;
    void solve(int i,vector<int>&nums)
    {
        if(i>=nums.size())
        {
            s.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            solve(i+1,nums);
            swap(nums[i],nums[j]);

        }
        
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
     solve(0,nums);
     return vector<vector<int>>{s.begin(),s.end()};
    }
};