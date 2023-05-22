class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto elem:nums)
        {
            mp[elem]++;
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        while(!pq.empty() && k--)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};