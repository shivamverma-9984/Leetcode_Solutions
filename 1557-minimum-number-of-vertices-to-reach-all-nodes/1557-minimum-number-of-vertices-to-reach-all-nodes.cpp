class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges)     {
        vector<int>ans;
        vector<bool>res(n,false);
       for(auto edge:edges)
       {
           int u=edge[0];
           int v=edge[1];
           res[v]=true;
       }
        for(int i=0;i<n;i++)
        {
            if(res[i]==false)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};