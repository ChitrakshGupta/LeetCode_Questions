class Solution {
public:
    int maxArea(vector<int>& nums) {
        
//         int i=0;
//         int j=i+1;
//         int ar=0;
//         for(int k=0; k<nums.size()-1; k++){
                    
//         int i=k;
//         int j=k+1;
//             while(j<nums.size()){
//                 int a=min(nums[i],nums[j])*(j-i);
//                 j++;
//                 if(a>ar){
//                     ar=a;
//                 }
//             }
            

//         }
//         return ar;
        
        int i=0; 
        int j=nums.size()-1;
        int ar=0;
         while(j>=i){
             int area=min(nums[i],nums[j])*(j-i);
             if(area>ar){
                 ar=area;
             }
             if(nums[j]<=nums[i]){
                 j--;
             }
            else{
                i++;
            }
         }
        return ar;
        
        
    }
};