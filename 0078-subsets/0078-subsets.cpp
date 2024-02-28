class Solution {
public:
    void help(vector<int>& nums,vector<vector<int>>& ans, vector<int> subset, int index){
        ans.push_back(subset);
        for(int i=index; i<nums.size(); i++){
             subset.push_back(nums[i]);
 
        
        help(nums, ans, subset, i + 1);
 
       
        subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
            help(nums, ans, subset, 0);
        return ans;
 
        
    }
};