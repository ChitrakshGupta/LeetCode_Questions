class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int ones=0;
        for(int i :nums){
            if(i==1){
                ones++;
            }
            else{
                if(ones>max){
                    max=ones;
                }
                ones=0;
            }
        }
        if(ones>max){
                    max=ones;
                }
        return max;
    }
};