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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long> pq;
        queue<TreeNode*> q;
        q.push(root);
        int l=0;
        
        while(!q.empty()){
            long long sum=0;
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* temp=q.front();
                q.pop();
                
                if(temp->right){
                    q.push(temp->right);
                }
                if(temp->left){
                    q.push(temp->left);
                }
                
                sum+=temp->val;
            }
            
            pq.push(sum);
            l++;
            
        }
        if(k>l){
            return -1;
        }
        
        for(int i=0; i<k-1; i++){
            pq.pop();
        }
        return pq.top();

    }
};