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
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode* first=head;
        for(int i=0; i<k-1; i++){
            first=first->next;
        }
        
        ListNode* firstP=first;
        ListNode* sec=head;
        while(firstP->next!=NULL){
            sec=sec->next;
            firstP=firstP->next;
        }
        int temp=first->val;
        first->val=sec->val;
        sec->val=temp;
        
        return head;
        
    }
};