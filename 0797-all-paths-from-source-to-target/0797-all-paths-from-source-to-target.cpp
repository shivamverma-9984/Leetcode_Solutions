class Solution {
public:
    vector<vector<int>>result;
    void dfs(vector<vector<int>>&graph,int curr,vector<int>&temp)
    {
        temp.push_back(curr);
        if(curr==graph.size()-1)
            result.push_back(temp);
        for(auto v:graph[curr])
            dfs(graph,v,temp);
        temp.pop_back();
    
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<int>temp;
        dfs(graph,0,temp);
        return result;
    }
};