class Solution {
public:
//     int dp(int n, vector<int> arr){
        
//     }
    int climbStairs(int n) {
        
        int prev1=1,prev2=1;
        for(int i=2;i<=n;i++){
            int curi=prev1+prev2;
            prev2=prev1;
            prev1=curi;
        }
        return prev1;
        
        
    }
};