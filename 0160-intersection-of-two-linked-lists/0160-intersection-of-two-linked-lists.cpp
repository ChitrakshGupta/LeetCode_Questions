/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *h1=headA;
        // ListNode *h2=headB;
        
//         while(h1!=NULL && h2!=NULL){
//             if(h1->val==h2->val){
//                 return h1;
//             }
//             h1=h1->next;
//             h2=h2->next;
//         }
        while(h1!=NULL){
              ListNode *h2=headB;
            
            while(h2!=  NULL){
                if(h1==h2){
                    return h1;
                }
                h2=h2->next;
            }
                            h1=h1->next;
        }
        
        return NULL;
        
    }
};