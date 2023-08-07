class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int k=nums[1]-nums[0];
        for(int i=0;i<n-1;i++)
        {
            if(k!=nums[i+1]-nums[i])
            {
                return false;
            }
        }
        return true;
    }
};