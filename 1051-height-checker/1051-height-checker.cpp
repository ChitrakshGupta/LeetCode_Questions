class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>aux;
         for(int i=0; i<heights.size(); i++){
             aux.push_back(heights[i]);
         }
        sort(aux.begin(),aux.end());
        int ans=0;
        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=aux[i]){
                ans++;
            }
        }
        
        return ans;
    }
};