class MyCircularDeque {
public:
    int f; // front
    int b; // back / rear
    int s; // curr size
    int c; // capacity
    vector<int> arr;
    MyCircularDeque(int k) {
        f = 0;
        b = 0;
        s = 0;
        c = k;
        vector<int> v(k);
        arr = v;
    }
    
    bool insertFront(int val) {
        if (s == c) return false; // Check if deque is full
        if (f == 0) {
            f = c - 1; // Wrap front index around to the end
        } else {
            f--; // Move front index backward
        }
        arr[f] = val;
        s++; // Increment size
        return true;
    }
    
    bool insertLast(int val) {
         if(s==c) return false;
        arr[b] = val;
        b++;
        if(b==c) b = 0;
        s++;
        return true;
    }
    
    bool deleteFront() {
        if(s==0) return false;
        f++;
        if(f==c) f = 0;
        s--;
        return true;
    }
    
    bool deleteLast() {
         if (s == 0) return false; // Check if deque is empty
        if (b == 0) {
            b = c - 1; // Wrap back index around to the end
        } else {
            b--; // Move back index backward
        }
        s--; // Decrement size
        return true;
    }
    
    int getFront() {
        if(s==0) return -1;
        return arr[f];
    }
    
    int getRear() {
        if(s==0) return -1;
        if(b==0) return arr[c-1];
        return arr[b-1];
    }
    
    bool isEmpty() {
       if(s==0) return true;
        else return false;
    }
    
    bool isFull() {
       if(s==c) return true;
        else return false; 
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */