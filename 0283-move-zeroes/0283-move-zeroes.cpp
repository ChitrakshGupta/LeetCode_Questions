class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int j=0;
            vector<int> ans(nums.size(),0);
        
       for(int i=0; i<nums.size(); i++){
           if(nums[i]!=0){

               ans[j++]=nums[i];
               
               
               
           }
       }
        for(int i=0; i<nums.size(); i++){
            nums[i]=ans[i];
        }
        
        
        
        
    }
};