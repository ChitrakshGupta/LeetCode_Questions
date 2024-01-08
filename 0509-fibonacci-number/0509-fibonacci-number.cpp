class Solution {
public:
    int solveRecursion(int n) {
        //base case resursive solution
        if(n==0 || n==1){
            return n;
        }
        return solveRecursion(n-1)+solveRecursion(n-2);
        
        
    }
    int solveDp(int n, vector <int> &dp ){
                if(n==0 || n==1){
            return n;
        }
        // step 3: if answer alerdy exist then return the answer from array
        // agr pahele se calculate kr rkha ho to 
        if(dp[n]!=-1){
            return dp[n];
        }
        
        //STEP2: store and return the dp array;
        dp[n]=solveDp(n-1,dp)+solveDp(n-2,dp);
        return dp[n];
        
    }
    int fib(int n) {
        //STEP 1: crate dp array 
     
        vector <int> dp(n+1,-1);
        //STEP1 *: pass it in a function 
        int ans=solveDp(n,dp);
        return ans;
        
        
    }
};