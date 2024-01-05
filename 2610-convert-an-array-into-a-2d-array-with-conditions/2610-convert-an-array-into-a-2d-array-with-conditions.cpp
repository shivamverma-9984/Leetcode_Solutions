class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>result;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
          int freq=mp[nums[i]];
          if(result.size()==freq){
             result.push_back({});
          }
          result[freq].push_back(nums[i]);
          mp[nums[i]]++;
       }
        return result;
    }
};