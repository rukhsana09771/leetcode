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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list1;
        int i = 0;
        for(i=1; i<a; i++){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        for(; i<=b+1; i++){
            ptr2 = ptr2->next;
        }
        ptr1->next = list2;
        ListNode* temp = list2;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = ptr2;
        return list1;
    }
};