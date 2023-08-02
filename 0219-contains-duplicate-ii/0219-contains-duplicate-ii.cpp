class Solution {
public:
     
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>s;
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n)
        {
            
         if(j-i>k){
             s.erase(nums[i]);
             i++;
         }
            
         if(s.find(nums[j])!=s.end()) {
             return true;
         }
            
        s.insert(nums[j]);
        
        j++;
        
        }
        return false;
    }
};