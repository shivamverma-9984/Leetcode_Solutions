class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int low=i+1;
            int high=nums.size()-1;
            while(low<high)
            {
                int t=nums[i]+nums[low]+nums[high];
                if(t==0)
                {
                    res.insert({nums[i],nums[low],nums[high]});
                    low++;high--;
           
                }
                else if(t<0)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }
        return vector<vector<int>>{res.begin(),res.end()};
    }
};