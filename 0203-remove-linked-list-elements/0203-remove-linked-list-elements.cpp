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
    ListNode* removeElements(ListNode* head, int val) {
 ListNode* dummy = new ListNode(0); // Create a dummy node to handle the case when the target value is at the head
    dummy->next = head;
    ListNode* prev = dummy;
    ListNode* curr = head;

    while (curr != nullptr) {
        if (curr->val == val) {
            prev->next = curr->next; // Skip the current node
            delete curr; // Delete the current node
            curr = prev->next; // Move to the next node
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    head = dummy->next; // Update the head pointer
    delete dummy; // Delete the dummy node
    return head;
        
    }
};