class Solution {
public:
   
 bool dfs(unordered_map<int,vector<int>>&mp,int s,int d,vector<bool>&visited)
    {
        if(s==d)
            return true;
        if(visited[s]==true)
            return false;
        visited[s]=true;
        for(auto v:mp[s])
            if(dfs(mp,v,d,visited))
                return true;
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(auto edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        vector<bool>visited(n,false);
        return dfs(mp,source,destination,visited);
        
    }
};