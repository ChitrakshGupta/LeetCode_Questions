class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // apparoch 1 -sum
        int n=size(nums);
        int des_sum=n*(n+1)/2;
        int sum=0;
        for(int i: nums){
            sum+=i;
        }
        des_sum=des_sum-sum;
        return des_sum;
        
        
    }
};