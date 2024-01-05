class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>result;
         priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> >pq;
        for(int i=0;i<mat.size();i++)
        {
                 int cnt=count(begin(mat[i]),end(mat[i]),1);
                  pq.push({cnt,i});    
        }
        while(!pq.empty()  && k--)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};