class Solution {
public:
    int missingNumber(vector<int>& nums) {
          int xorr=0;
        for(int i=0; i<nums.size(); i++){
            xorr ^=nums[i];
        }
        // for all number 0,1,2,3,4,---n
         for(int i=0; i<=nums.size(); i++){
            xorr ^=i;
        }
        
        return xorr;
    }
};