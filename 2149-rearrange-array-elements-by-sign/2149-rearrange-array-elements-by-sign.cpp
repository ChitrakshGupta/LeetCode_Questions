class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> negative(nums.size()/2);
        vector<int> positive(nums.size()/2);

         int n=0;
        int j=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                negative[n++]=nums[i];
            }
            else{
                  positive[j++]=nums[i];
            }
        }
        n=0;
        j=0;
        for(int k=0; k<nums.size(); k++){
            if(k%2==0){
                nums[k]=positive[j];
                j++;
            }
            else{
              
            nums[k]=negative[n];
                n++;
            }
        }
        
        return nums;
        
    }
};