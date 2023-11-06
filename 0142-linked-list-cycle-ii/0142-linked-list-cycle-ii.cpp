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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return NULL;
        int f=0;
        
        ListNode* slow=head;
        ListNode* fast=head;
       
        
        while(fast->next!= NULL){
            fast=fast->next;
            if(fast->next!= NULL){
                slow=slow->next;
                fast=fast->next;
                
                
            }
            
            // check for loop
            if(slow==fast){
                f=1;
            
                break;
                
            }
        }
        
        if( f==0){
            return NULL;
        }
        // yha agr flag 1 hoga to loop present he 
        
            slow=head;
            while(slow!=fast){
                fast=fast->next;
                slow=slow->next;
                
            }
            
            return slow;
            
            
        
        
       
        
    }
};