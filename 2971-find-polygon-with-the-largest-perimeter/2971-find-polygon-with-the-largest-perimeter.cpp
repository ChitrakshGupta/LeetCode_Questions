class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        
        long long sum=0;
        for(int i=0; i<nums.size()-1; i++){
            sum+=nums[i];
        }
        
        while (j>=2){
            if(nums[j]<sum){
                return sum+nums[j];
            }
            else{
                j--;
                sum=sum-nums[j];
                
                
            }
        }
        
        return -1;
        
        
    }
};