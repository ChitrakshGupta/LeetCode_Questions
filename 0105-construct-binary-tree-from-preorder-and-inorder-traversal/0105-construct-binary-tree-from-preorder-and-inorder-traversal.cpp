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
    int positionInorder( vector<int>& inorder, int ele,int n){
        for(int i=0; i<n; i++)
        {
            if(inorder[i]==ele){
                return i;
            }
        }
        
        return -1;
    }
      TreeNode* help(vector<int>& preorder, vector<int>& inorder, int &index, int n, int instart,int inend){
          if(index>n-1 || instart>inend ){
              return NULL;
              
          }
          int element=preorder[index++];
          
          
            TreeNode* root= new TreeNode(element);
          int pos=positionInorder(inorder,element,n);
          root->left=help(preorder,inorder,index,n,instart,pos-1);
          root->right=help(preorder,inorder,index,n,pos+1,inend);
          
          return root;
          
      }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int ind=0;
        TreeNode* root=help(preorder,  inorder, ind,n,0,n-1);
        return root;
        
    }
};