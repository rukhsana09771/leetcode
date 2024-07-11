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
        ListNode* slow = head;
        ListNode* fast = head;
       for(int i=1; i<k; i++){
           fast = fast->next;
        }
        ListNode* a = fast; // kth node from start
        fast = fast->next; // fast has moved k steps ahead
        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* b = slow; // kth node from end
        int temp = a->val;
        a->val = b->val;
        b->val = temp;
        return head;
    }
};