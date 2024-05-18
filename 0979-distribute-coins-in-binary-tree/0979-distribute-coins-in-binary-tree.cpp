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
    int distributeCoins(TreeNode* root) {
        moves = 0;
        help(root);
        return moves;
    }

    int moves;
    int help(TreeNode* current) {
        if (current == nullptr) return 0;

        // Calculate the coins each subtree has available to exchange
        int leftCoins = help(current->left);
        int rightCoins = help(current->right);

        // Add the total number of exchanges to moves
        moves += abs(leftCoins) + abs(rightCoins);

        // The number of coins current has available to exchange
        return (current->val - 1) + leftCoins + rightCoins;
    }
};