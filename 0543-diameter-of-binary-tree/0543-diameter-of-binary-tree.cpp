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
      int helper(TreeNode* root, int& diameter) {
        if (root == NULL) return 0;                         // Base case: NULL node has height 0
        int left = helper(root->left, diameter);             // Height of left subtree
        int right = helper(root->right, diameter);          // Height of right subtree
        diameter = max(diameter, left + right);          // Update diameter
        return max(left, right) + 1;                    // Return current subtree height
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;                            // Initialize diameter to 0
       helper(root, diameter);                       // Call helper function
        return diameter;                           // Return final diameter
    }
    
};