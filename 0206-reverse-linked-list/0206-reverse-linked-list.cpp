
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* prev = NULL, *curr = head, *Next = head;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;  
        
        // 2nd method
        
        /*  if(head==NULL || head->next==NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next == NULL;
        return newHead; */
    }
};