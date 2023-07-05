class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(max==nums[i] || min==nums[i])
                continue;
            else
                  return nums[i];
        }
        return -1;
    }
};