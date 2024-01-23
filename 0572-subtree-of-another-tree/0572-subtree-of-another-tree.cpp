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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        
        if(root==NULL && subRoot!=NULL)
        {
            return false;
            
        }
        if(root->val==subRoot->val){
         bool ans=  isSameTree(root,subRoot);
            if(ans){
                return true;
            }
        }
        bool q=false;
        bool b=isSubtree(root->left,subRoot);
        if(b){
            return true;
        }
        else{
        q=isSubtree(root->right,subRoot);
        }
        if(q){
            return true;
        }
        return false;
        
    }
    
     bool isSameTree(TreeNode* r1, TreeNode* r2) {
            if(r1==NULL && r2==NULL){
            return true;
        }
        if((r1!=NULL && r2==NULL) || (r1==NULL && r2!=NULL)){
            return false;
        }
        if(r1->val==r2->val){
            bool l=isSameTree(r1->left, r2->left);
            bool r=false;
            if (l==true)
           { r=isSameTree(r1->right, r2->right);}
            else{
               return false;
            }
            if(l && r){
                return true;
            }
            
        }
        
            return false;
      
        
            
        
    }
};