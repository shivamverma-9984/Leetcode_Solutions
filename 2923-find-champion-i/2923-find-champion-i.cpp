class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
         int strongest=INT_MIN;
        map<int,int> mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==1){
                    mp[i]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<grid.size();i++){
           if(mp[i]>strongest){
               ans=i;
               strongest=mp[i];
              }
        }
        return ans;
    }
};