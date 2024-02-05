class Solution {
public:
    // merge sort
     void divide( vector<int>& nums, int i,int j){
         
         if(i>=j){
             return ;
         }
         
         int mid=i+(j-i)/2;
         divide(nums, i, mid);
         divide(nums, mid+1, j);
         conquor(nums, i, mid,j);
         
         
         
     }
    
    void conquor(vector<int>& nums, int start,int mid,int end){
         vector<int> ans(end-start+1,0);
        int track1=start;
        int track2=mid+1;
        int i=0;
        while(track1<=mid && track2<=end){
            if(nums[track2]>=nums[track1]){
                ans[i++]=nums[track1++];
            }
            
            else{
                  ans[i++]=nums[track2++];
                
            }
        }
        
        
        while(track1<=mid){
              ans[i++]=nums[track1++];
            
        }
           while(track2<=end){
              ans[i++]=nums[track2++];
            
        }
        
        
         for(int k=0; k<ans.size(); k++){
            nums[start+k]=ans[k];
        }
        
        
    }
    
    
    vector<int> sortArray(vector<int>& nums) {
        divide(nums, 0,nums.size()-1);
        
        return nums;
    }
};