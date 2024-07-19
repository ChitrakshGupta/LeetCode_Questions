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
 int maxLevelSum(TreeNode* root) {
    if (!root) return 0; // Check for an empty tree

    queue<TreeNode*> q;
    q.push(root);
    int level = 0;
    int maxLevel = 1;
    int maxSum = INT_MIN; // Initialize to a very small value to handle negative values in nodes

    while (!q.empty()) {
        int sum = 0;
        int n = q.size();
        level++; // Increment the level at the beginning of each level traversal

        for (int i = 0; i < n; i++) {
            TreeNode* temp = q.front();
            q.pop();

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }

            sum += temp->val;
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxLevel = level;
        }
    }

    return maxLevel;
}

};