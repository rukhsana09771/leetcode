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
    int len = 0;
    ListNode* reverseLL(ListNode* head){
    ListNode *prev = NULL, *curr = head, *nex = NULL;
    while(curr){
        len++;
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        head = reverseLL(head);
        stack<int> st;
        vector<int> ans(len, 0);
        int i = 0;
        while(head){
            while(!st.empty() && head->val>=st.top()) st.pop();
            if(!st.empty()) ans[i] = st.top();
            st.push(head->val);
            head = head->next;
            i++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};