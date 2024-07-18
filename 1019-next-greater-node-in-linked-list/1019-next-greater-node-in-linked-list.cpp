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
    vector<int> nextLargerNodes(ListNode* head) {
        stack <int> s;
        vector<int> arr;
        int max=0;
        ListNode* curr=head;
        // int 
        while(curr!=NULL){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        // s.push(0);
        for(int i=0; i<arr.size(); i++){
            
                // stack me jitne bh elements he unk agreater element arr[i]
                while(!s.empty() && arr[s.top()]<arr[i]){
                   
                        arr[s.top()]=arr[i];
                    s.pop();
                    
                }
                s.push(i);
            }
          
               

            
        
        while(!s.empty()){
            arr[s.top()]=0;
            s.pop();
        }
        arr[arr.size()-1]=0;
        return arr;
        
        
        
    }
};