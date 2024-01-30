class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
         vector<vector<int>> ans;
        if(numRows==0){
            return ans;
        }
        ans.push_back({1});
        for(int i=1; i<numRows; i++){
            vector<int> col(i+1,1);
            for(int j=1; j<i; j++){
                col[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(col);
        }
        return ans;
        
    }
};