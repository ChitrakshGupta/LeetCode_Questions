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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) { 
        // base case agr dono null hui to
        if(!list1 && !list2){
            return NULL;
        }
        //agr ek null hui to
        if(!list2){
            return list1;
        }
        if(!list1){
            return list2;
        }
        // merged node
        ListNode* ans=new ListNode(-1);
        //merged node pointer jisko move karenge
        ListNode* head=ans;
      
        
        // pointer list 1 and 2 ke
        ListNode* it1=list1;
        ListNode* it2=list2;
        
        while(it1 && it2){//koi bhi null nhi hona chayie
            
            if(it2->val>=it1->val){ // jiska element chota 
                head->next=it1; //usko add kr do merged wale list me
                head=it1;          //aur head pointer ki loc uss node pe kr do jis pe present he
                it1=it1->next;// baki uss list ek elemnt age bda do
            }
            else {
                head->next=it2;
                head=it2;
                it2=it2->next;
            }
        }
        //agr koi element bche to
        while(it1){
            head->next=it1;
                head=it1;
                it1=it1->next;
        }
        while(it2){
            head->next=it2;
                head=it2;
                it2=it2->next;
        }
        
        return ans->next;
    }
};