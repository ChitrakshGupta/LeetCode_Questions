/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        recursion(root, ans,0);
        return ans;
    }
    void recursion(TreeNode* root, vector<int>& ans, int leval){
        if(root==NULL){
            return;
        }
        if(leval==ans.size()){
            ans.push_back(root->val);
        }
        recursion(root->right, ans, leval+1);
         recursion(root->left, ans, leval+1);
    }
};