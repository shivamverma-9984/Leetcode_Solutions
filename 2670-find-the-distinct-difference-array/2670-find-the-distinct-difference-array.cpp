class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            set<int> s1(nums.begin(),nums.begin()+i+1);
            set<int> s2(nums.begin()+i+1,nums.end());
            ans.push_back(s1.size()-s2.size());
        }
        return ans;
    }
};