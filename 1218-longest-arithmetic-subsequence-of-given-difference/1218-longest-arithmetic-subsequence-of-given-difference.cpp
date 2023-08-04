class Solution {
public:
    int longestSubsequence(vector<int>& nums, int d) {
        if(nums.size()==0)
            return 0;
        unordered_map<int,int>mp;
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-d)!=mp.end())
            {
                mp[nums[i]]=mp[nums[i]-d]+1;
                ans=max(ans,mp[nums[i]]);
            }
            else
            {
                mp[nums[i]]=1;                                                  
            }
        }
        return ans;
    }
};