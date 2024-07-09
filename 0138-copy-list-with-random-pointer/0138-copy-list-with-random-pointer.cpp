/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        // Create the deep copy without random pointer
        Node* dummy = new Node(0);
        Node* tempC = dummy;
        Node* temp = head;
        while(temp){
            Node* a = new Node(temp->val);
            tempC->next = a;
            tempC = tempC->next;
            temp = temp->next;
        }
        
        //making alternate connection
        Node* duplicate = dummy->next;
        Node* a = head;
        Node* b = duplicate;
        dummy = new Node(-1);
        Node* tempD = dummy;
        while(a){
            tempD->next = a;
            tempD = tempD->next;
            a = a->next;
            tempD->next = b;
            tempD = tempD->next;
            b = b->next;
        }
        
        // Assigning random pointer
        dummy = dummy->next;
        Node* t1 = dummy; // t1 wil traverse in the original list
        while(t1){
            Node* t2 = t1->next;  // t2 is for duplicate
            if(t1->random) t2->random = t1->random->next;
            t1 = t1->next->next;
        }
        
        // removing the connection(seperate)
        Node* d1 = new Node(-1);
        Node* d2 = new Node(-1);
        t1 = d1;
        Node* t2 = d2;
        Node* t = dummy;
        while(t){
            t1->next = t;
            t1 = t1->next;
            t = t->next;
            t2->next = t;
            t2 = t2->next;
            t = t->next;
        }
        t1->next = NULL;
        t2->next = NULL;
        d1 = d1->next;
        d2 = d2->next;
        return d2;
    }
};