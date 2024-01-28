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
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        
        int left=1;
        TreeNode* left_node=root->left;
        while(left_node){
            left++;
            left_node=left_node->left;
        }
        
        
        int right=1;
        TreeNode* right_node=root->right;
        while(right_node){
            right++;
            right_node=right_node->right;
        }
        if(left==right){
            return pow(2,left)-1;
        }
        
        
        return 1+countNodes(root->left)+countNodes(root->right);
        
    }
};