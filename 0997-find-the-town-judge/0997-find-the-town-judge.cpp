class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       
         vector<int> temp(n+1);
        
        for(auto i:trust)
        {
            temp[i[0]]--; 
            temp[i[1]]++; 
        }
        
        for(int i=1; i<=n; i++)
            if(temp[i]==n-1) return i;
       
        return -1;
        
    }
};