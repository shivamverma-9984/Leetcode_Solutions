class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows(m,0); 
        vector<int> cols(n,0);
        int length = indices.size();

        for(int i=0; i<length; i++){
            rows[indices[i][0]]++;
            cols[indices[i][1]]++;
        }

        int ans = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int element = rows[i]+cols[j];
                if(element % 2 != 0){
                    ans++;
                }
            }
        }
        return ans;
    }
};


       