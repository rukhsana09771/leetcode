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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> arr(m, vector<int> (n, -1));
        ListNode* temp = head;
        int minr = 0, maxr = m-1, minc = 0, maxc = n-1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc; j<=maxc; j++){  // right
                if(temp==NULL) return arr;
                arr[minr][j] = temp->val;
                temp = temp->next;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            
            for(int i=minr; i<=maxr; i++){  // down
                if(temp==NULL) return arr;
                arr[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;
            
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc; j>=minc; j--){  // left
                if(temp==NULL) return arr;
                arr[maxr][j] = temp->val;
                temp = temp->next;
            }
            maxr--;
            
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr; i>=minr; i--){  // top
                if(temp==NULL) return arr;
                arr[i][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
            
            if(minr>maxr || minc>maxc) break;
        }
            return arr;
    }
};