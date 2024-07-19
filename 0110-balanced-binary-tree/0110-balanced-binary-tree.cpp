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
   int height(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

    bool isBalanced(TreeNode* root) {
        
    if(root==NULL){
        return true;
    }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
         int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    bool heightBalanced = abs(leftHeight - rightHeight) <= 1;
    
        if(left&& right&& heightBalanced){
            return true;
        }
        return false;
        
    }
};