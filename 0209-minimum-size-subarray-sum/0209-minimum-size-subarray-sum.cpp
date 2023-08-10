class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {

       int ans =INT_MAX;
        int i=0;
        int j=0;
        int n=nums.size();
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=t){
                sum-=nums[i];
                ans=min(ans,j-i+1);
                i++;
            }
         j++;   
        }

      
        return ans==INT_MAX?0:ans;
    }
};