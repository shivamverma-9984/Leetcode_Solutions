class Solution {
public:
    void sortColors(vector<int>& nums) {
    int c=0,c1=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) c++;
            if(nums[i]==1) c1++;
        }
        nums.clear();
        for(int i=0;i<c;i++) nums.push_back(0);
        for(int i=c;i<c+c1;i++) nums.push_back(1);
        for(int i=c+c1;i<n;i++) nums.push_back(2);
    }
};

  