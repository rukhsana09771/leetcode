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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        while(head){
            st.push(head);
            head = head->next;
        }
        ListNode* tail = st.top();
        st.pop();
        int mx = tail->val;
        while(!st.empty()){
            ListNode* top = st.top();
            st.pop();
            if(top->val >= mx){
                top->next = tail;
                tail = top;
                mx = top->val;
            }
        }
        return tail;
    }
};