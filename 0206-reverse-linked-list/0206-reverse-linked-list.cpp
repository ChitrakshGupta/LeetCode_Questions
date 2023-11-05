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
};