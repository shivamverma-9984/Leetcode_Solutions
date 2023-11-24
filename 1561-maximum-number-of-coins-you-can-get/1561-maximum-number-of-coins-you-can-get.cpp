class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        sort(begin(nums),end(nums));

        for(int i=n/3;i<n;i+=2)
        {
            result+=nums[i];
        }
        return result;
    }
};