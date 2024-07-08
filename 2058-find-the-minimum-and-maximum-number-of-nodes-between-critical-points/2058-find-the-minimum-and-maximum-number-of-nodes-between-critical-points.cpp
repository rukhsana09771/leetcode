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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx = 1, firidx = -1, secidx = -1;
        int f = -1, s = -1;
        ListNode* a = head, *b = head->next, *c = head->next->next;
        if(c==NULL) return {-1,-1};
        int mindis = INT_MAX;
        while(c){
            if((a->val < b->val && c->val < b->val) || (a->val > b->val && c->val > b->val)){
               // max distance
                if(firidx==-1) firidx = idx;
                else secidx = idx;
              // min distance
                f = s;
                s = idx;
                if(f!=-1){
                    int d = s - f;
                    mindis = min(mindis, d);
                }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        if(secidx==-1) return {-1,-1};
        int maxdis = secidx - firidx;
        return {mindis, maxdis};
    }
};