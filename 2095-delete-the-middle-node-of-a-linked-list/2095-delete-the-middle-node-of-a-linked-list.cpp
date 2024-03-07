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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* prev=NULL;
        int x=0;
           ListNode* first=head;
        ListNode* second=head;
        while(second!=NULL && second->next!=NULL){
            
            second=second->next->next;
            first=first->next;
            if(x==0){
                prev=head;
                x++;
            }
            else{
                prev=prev->next;
            }
            
        }
       prev->next=prev->next->next;
        
        return head;
    }
};