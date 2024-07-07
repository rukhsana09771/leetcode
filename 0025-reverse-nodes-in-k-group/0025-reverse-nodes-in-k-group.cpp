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
int length(ListNode* head){
    int len = 0;
    ListNode* temp = head;
    while(temp){
     temp = temp->next;
     len++;
    }
    return len;
}

 ListNode* reverse( ListNode* head, int len, int k){
     if(len<k) return head;
     ListNode* prev = NULL, *curr = head, *nex = NULL;
     int count = 0;
    while(curr && count<k){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }
     if(nex) head->next = reverse(nex, len-k, k);
    return prev;
}

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = length(head);
        return reverse(head, len, k);
    }
};