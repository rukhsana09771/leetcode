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
ListNode* reverseList(ListNode* head) {
       ListNode* prev = NULL, *curr = head, *Next = head;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
}
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* r = reverseList(head);
        ListNode* temp = r;
        int x = 0;
        int ans = 0;
        while(temp){
            if(temp->val!=0) ans += temp->val * pow(2,x);
            temp = temp->next;
            x++;
        }
        return ans;
    }
};