// class MyQueue {
// public:
//     stack<int> st;
//     stack<int> healper;
//     MyQueue() {
        
//     }
    
//     void push(int x) { // O(1)
//         st.push(x);
//     }
    
//     int pop() {  // O(n)
//         // remove at bottom
//         while(st.size()>0){
//             healper.push(st.top());
//             st.pop();
//         }
//         int x = healper.top();
//         healper.pop();
//         while(healper.size()>0){
//             st.push(healper.top());
//             healper.pop();
//         }
//         return x;
//     }
    
//     int peek() { // front O(n)
//         // retreive at bottom
//         while(st.size()>0){
//             healper.push(st.top());
//             st.pop();
//         }
//         int x = healper.top();
//         while(healper.size()>0){
//             st.push(healper.top());
//             healper.pop();
//         }
//         return x;
//     }
    
//     bool empty() {
//         if(st.size()==0) return true;
//         else return false;
//     }
// };


// 2nd approach
class MyQueue {
public:
    stack<int> st;
    stack<int> healper;
    MyQueue() {
        
    }
    
    void push(int x) { // O(n)
        // push at bottom 
        if(st.size()==0) st.push(x);
        else{
            while(st.size()>0){
              healper.push(st.top());
              st.pop();
        }
        st.push(x);
        while(healper.size()>0){
            st.push(healper.top());
            healper.pop();
        }
    }
 }
    int pop() {  // O(1)
        int x = st.top();
        st.pop();
        return x;
    }
    
    int peek() { // front O(1)
        return st.top();
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */