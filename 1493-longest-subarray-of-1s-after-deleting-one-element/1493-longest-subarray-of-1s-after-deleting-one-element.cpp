class Solution {
public:
  
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int ans=0;
        int cnt=0;
        while(j<n){
            if(nums[j]==0)
                cnt++;
            while(cnt>1){
                if(nums[i]==0)
                    cnt--;
                i++;
            }
            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};