class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    
    vector<int>result;
    
     map<int,vector<int>>mp;
    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++)
        {
            mp[i+j].push_back(mat[i][j]);
        }
    }
    bool flag=true;
        
    for(auto it:mp){
        {
            if(flag)
                  
                 reverse(it.second.begin(),it.second.end()); 
            
            for(auto i:it.second)
               
                result.push_back(i);
         
            flag=!flag;
        }
    }
    return result;
    }
};