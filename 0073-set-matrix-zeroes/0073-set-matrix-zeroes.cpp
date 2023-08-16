class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> r(matrix.size(),false);
        vector<bool> c(matrix.size(),false);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    r[i]=true;
                    c[j]=true;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(r[i]==true || c[j]==true)
                    matrix[i][j]=0;
            }
        }
    }
};