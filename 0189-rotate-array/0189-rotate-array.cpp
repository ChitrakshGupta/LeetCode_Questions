class Solution {
public:
    void reverse(vector<int>& arr, int i, int j){
        while(j>i){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
            j--;
        }
        
        
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()!=1){
            while(k>=nums.size()){
                k=k-nums.size();
            }
            
        
        //pura reverse
        
        reverse(nums, 0, nums.size()-1);
        // k element reverse
        reverse(nums, 0, k-1);
        // k element ke bad wale reverse
        reverse(nums, k, nums.size()-1);
        
        
        }
        
    }
};