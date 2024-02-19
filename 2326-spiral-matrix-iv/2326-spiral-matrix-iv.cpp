/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n,-1));
        
        
            int top = 0, left = 0, right = n-1, down = m-1;

            int direction = 0;
        int num=1;

           	// 0 L ->r
           	// 1 t ->d
           	//2 r->l
           	// 3 d->t
        ListNode* root=head;
        
            while (top <= down && left <= right && root!=NULL)
            {
                if (direction == 0)
                {
                    for (int i = left; i <= right; i++)
                    {
                        if(!root){
                            break;
                        }
                        ans[top][i]=root->val;
                          root=root->next;
                    }
                   
                    top++;
                }
                else if (direction == 1)
                {
                    for (int i = top; i <= down; i++)
                    {
                        if(!root){
                            break;
                        }
                        ans[i][right]=root->val;
                          root=root->next;
                    }
                    right--;
                }
                else if (direction == 2)
                {
                    for (int i = right; i >= left; i--)
                    {
                        if(!root){
                            break;
                        }
                        ans[down][i]=root->val;
                          root=root->next;
                    }
                   
                    down--;
                }
                else if(direction ==3)
                {

                   	//down same
                    for (int i = down; i >=top; i--)
                    {
                        if(!root){
                            break;
                        }
                        ans[i][left]=root->val;
                           root=root->next;
                    }
                    left++;

                }
              
                direction=(direction+1)%4;
            }

            return ans;
    }
};