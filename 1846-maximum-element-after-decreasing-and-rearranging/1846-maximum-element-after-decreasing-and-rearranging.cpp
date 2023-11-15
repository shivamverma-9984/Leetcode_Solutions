class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& nums) {
       int n=nums.size(); 
       int maxelem=-1;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
            if(i==0)
            {
                nums[0]=1;
            }
            else if(abs(nums[i]-nums[i-1])>1){
                    nums[i]=nums[i-1]+1;
            }
           maxelem=max(maxelem,nums[i]);
        }
        return maxelem;
    }
};