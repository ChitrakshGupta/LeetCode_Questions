class Solution {
public:
    void helper(vector<int>& arr, vector<vector<int>>& ans, int ind, int target,vector<int>& curAns){
        if(ind==arr.size()){
         
        
        if(target==0){
            ans.push_back(curAns);
            
        }
           return;}
        
        // pick up element
        if(arr[ind]<=target){
            curAns.push_back(arr[ind]);
            helper(arr,ans,ind,target-arr[ind],curAns);
            curAns.pop_back();
        }
        helper(arr,ans,ind+1,target,curAns);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curAns;
        helper(candidates,ans,0,target,curAns);
        return ans;
    }
};