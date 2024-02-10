class Solution {
public:
    void sortColors(vector<int>& nums) {
              int zero,one,two;
        zero=one=two=0;
        for(int i: nums){
            if(i==0){
                zero++;
            }
            else if(i==1){
                one++;
            }
            else{
                two++;
            }
        }
        int j=0;
      while(zero--){
          
          nums[j]=0;
          j++;
      }
          while(one--){
          nums[j]=1;
                 j++;
      } 
              while(two--){
          nums[j]=2;
                     j++;
      }  

        
        
    }
};