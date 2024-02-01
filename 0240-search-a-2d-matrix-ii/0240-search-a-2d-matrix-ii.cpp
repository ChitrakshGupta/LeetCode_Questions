class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
            int rows = matrix.size(),
			cols = matrix[0].size(),
            row = 0, col = cols - 1;
            for(int i=0; i<rows; i++){
                if(target<=matrix[i][cols-1]){
                    int flag=0;
                    for(int j=0; j<cols; j++){
                        flag=1;
                        if(target==matrix[i][j]){
                            return true;
                        }
                        
                
                    }
                   
                }
                else{
                    col--;
                }
            }
        
        return false;
        
        
    }
};