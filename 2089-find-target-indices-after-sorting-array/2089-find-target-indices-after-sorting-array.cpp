class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>  ans;
        sort(nums.begin(),nums.end());
        
        int i=0; int j=nums.size()-1;
        int m=0;
        while(j>=i){
            m=i+(j-i)/2;
            if(target==nums[m]){
                int left=m;
                int right=m+1;
                
            while (left >= 0 && nums[left] == target) {
                 ans.push_back(left);
                left--;
            }
            while (right < nums.size() && nums[right] == target) {
                 ans.push_back(right);
                right++;
            }
                break;
               
            }
            else if(target>nums[m]){
                i=m+1;
            }
            else{
                j=m-1;
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};