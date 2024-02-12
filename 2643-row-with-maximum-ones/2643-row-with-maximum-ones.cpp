class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        // vector<int> ans;
        int maxOnes = INT_MIN;
        int idx=0;
        for(int i=0; i<mat.size(); i++){
            int count=0;
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>maxOnes){
                maxOnes=count;
                idx=i;
            }
        }
        
       vector<int> ans={idx,maxOnes};
        // ans[0]=idx;
        // ans[1]=maxOnes;
        return ans;
        
        
    }
};