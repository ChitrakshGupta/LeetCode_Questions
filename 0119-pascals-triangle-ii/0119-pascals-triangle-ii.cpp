class Solution {
public:
    vector<int> getRow(int rowIndex) {
           vector<vector<int>> ans;
        ans.push_back({1});
        if(rowIndex==0){
         
            return  ans[0];
        }
        // ans.push_back({1});
        for(int i=1; i<rowIndex+1; i++){
            vector<int> col(i+1,1);
            for(int j=1; j<i; j++){
                col[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(col);
        }
        return ans[rowIndex];
        
    }
};