class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int> zeroRow(matrix.size(),1);
          vector<int> zeroCol(matrix[0].size(),1);
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    zeroRow[i]=0;
                    zeroCol[j]=0;
                }
            }
        }
        
        for(int i=0; i<matrix.size(); i++){
            if(zeroRow[i]==0){
                for(int j=0; j<matrix[0].size(); j++){
                    matrix[i][j]=0;
                }
            }
        }
         for(int i=0; i<matrix[0].size(); i++){
            if(zeroCol[i]==0){
                for(int j=0; j<matrix.size(); j++){
                    matrix[j][i]=0;
                }
            }
        }
        
    }
};