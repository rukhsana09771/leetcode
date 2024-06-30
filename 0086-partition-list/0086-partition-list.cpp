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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo = new ListNode(200);
        ListNode* templo = lo;
        ListNode* hi = new ListNode(200);
        ListNode* temphi = hi;
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val < x){
                templo->next = temp;
                templo = templo->next;
                temp = temp->next;
            }else{
                temphi->next = temp;
                temphi = temphi->next;
                temp = temp->next;
            }
        }
        templo->next = hi->next;
        temphi->next = NULL;
        return lo->next;
    }
};