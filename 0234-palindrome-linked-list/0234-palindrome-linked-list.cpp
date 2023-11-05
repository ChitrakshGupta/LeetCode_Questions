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
     ListNode* reverseRecursion(ListNode* prev,ListNode*curr){
        if(curr==NULL){
            return prev;
        }
        
        // ek case hmne solve kr diya 
         
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
         // baaki kon samelega - recursion
        
        ListNode * recursionKaAns=reverseRecursion(prev,curr);
        return recursionKaAns;
        
    }
      ListNode* reverseList(ListNode* head) {
        
        //Iterative
        
        ListNode* curr=head;
        
        ListNode* prev=NULL;
        
//         while(curr!=NULL){
//             ListNode* nextnode=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextnode;
//         }
        
//         return prev;
        
        
        //recursion 
       return  reverseRecursion(prev,curr);
        

           
        
    }
       ListNode* middleNode(ListNode* head) {
        
        ListNode* first=head;
        ListNode* second=head;
        while( second->next!=NULL){
            second=second->next;
            if(second->next!=NULL){
                
            second=second->next;
            first=first->next;}
            
        }
        return first;
        
    }
    bool compare(ListNode* head1,ListNode* head2){
          while(head1!=NULL && head2!=NULL){
            if(head1->val != head2->val){
                return false;
            }
              else{
                  head1=head1->next;
                  head2=head2->next;
              }
              
           
        }
           return true;
        
    }
    
    bool isPalindrome(ListNode* head) {
        
        // break into two halves
        ListNode* midNode=middleNode(head);
        ListNode* head2 =midNode->next;
        // reverse sec ll
        head2= reverseList(head2);
        
        // compare both linked list
        bool ans=compare(head,head2);
        return ans;
      
        
        
            
        
        
    }
};