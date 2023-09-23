class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // apparoch 1 -sum
        int n=size(nums);
        
        
        // int des_sum=n*(n+1)/2;
        // int sum=0;
        // for(int i: nums){
        //     sum+=i;
        // }
        // des_sum=des_sum-sum;
        // return des_sum;
        
        
        // aparoch 2 xor gate 
        // for all values of array
        int xorr=0;
        for(int i=0; i<n; i++){
            xorr ^=nums[i];
        }
        // for all number 0,1,2,3,4,---n
         for(int i=0; i<=n; i++){
            xorr ^=i;
        }
        
        return xorr;
        
        
    }
};