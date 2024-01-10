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
     
        // vector <int> dp(n+1,-1);
        //STEP1 *: pass it in a function 
        // int ans=solveDp(n,dp);
        int ans= solveUsingTabulation(n);
        return ans;
        
        
    }
    int solveUsingTabulation(int n){
        //step1: create an array
        vector<int> dp(n+1,-1);
        dp[0]=0;
        if(n==0){
            return dp[0];
        }
        dp[1]=1;
        // step 3 fill the remainng dp array
        //size n+1
        // mtlb index 0- n
        //index fill ho chuke he =>0,1
        // remaining index 2, n
        for(int i=2; i<=n; i++){
            // copy from dp not the base case
               dp[i]=dp[i-1]+dp[i-2];
            
            // copy krne ke baad dp array me convert krna he
            // fir n ko i me convert krna he
            
            //   dp[n]=solveDp(n-1,dp)+solveDp(n-2,dp); iss cheez me
        
     
        
            
        }
        return dp[n];
    }
};