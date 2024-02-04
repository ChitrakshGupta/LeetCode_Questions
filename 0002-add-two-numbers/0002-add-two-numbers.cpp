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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
         ListNode* head = nullptr;
    ListNode* tail = nullptr;
        
        ListNode* h1=l1;
        ListNode* h2=l2;
        
        int carry=0;
        
        while(h1!=NULL && h2!=NULL){
            int sum=h1->val+h2->val+carry;
            carry=sum/10;
            // h1->val=sum%10;
            
             ListNode* newNode = new ListNode(sum%10);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
             h2=h2->next;
            h1=h1->next;
        }
        
        while(h1!=NULL){
            int sum=h1->val+carry;
               carry=sum/10;
            
             ListNode* newNode = new ListNode(sum%10);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
            h1=h1->next;
            
            
            
        }
        
        
        while(h2!=NULL){
            int sum=h2->val+carry;
               carry=sum/10;
            
             ListNode* newNode = new ListNode(sum%10);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
            h2=h2->next;
            
            
            
        }
        if(carry!=0){
             ListNode* n=new  ListNode(carry);
            h1=l1;
            
            tail->next=n;
        }
        
        return head;


        
    }
};