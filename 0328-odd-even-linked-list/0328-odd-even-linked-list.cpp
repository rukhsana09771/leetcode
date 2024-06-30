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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* lo = new ListNode(200);
        ListNode* templo = lo;
        ListNode* hi = new ListNode(200);
        ListNode* temphi = hi;
        ListNode* temp = head;
        int i = 0;
        while(temp!=NULL){
            if(i%2==0){
                templo->next = temp;
                templo = templo->next;
                temp = temp->next;
            }else{
                temphi->next = temp;
                temphi = temphi->next;
                temp = temp->next;
            }
            i++;
        }
        templo->next = hi->next;
        temphi->next = NULL;
        return lo->next;
    }
};