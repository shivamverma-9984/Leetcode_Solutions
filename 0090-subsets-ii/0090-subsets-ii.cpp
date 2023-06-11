class Solution {
    public:
    void fun(vector<int>nums, int index, set<vector<int>>& st, vector<int> vec)
    {
        if(index >= nums.size())
        {
            sort(vec.begin(), vec.end());
            st.insert(vec);
            return ;
        }

        fun(nums, index+1, st, vec);
        vec.push_back(nums[index]);
        fun(nums, index+1, st, vec);
        vec.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        int index=0;
        set<vector<int>> st;
        fun(nums, index, st, {});
        return vector<vector<int>>(st.begin(), st.end());
    }
};