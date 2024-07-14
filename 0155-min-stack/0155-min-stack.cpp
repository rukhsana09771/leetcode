class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() { // constructor
        min = LLONG_MAX;
    }
    
    void push(int val) { // O(1)
        long long x = (long long) val;
        if(st.size()==0){
            st.push(x);
            min = x;
        }
        else if(x>=min) st.push(x);
        else{ // x<min
            st.push(2*x-min);
            min = x;
        }
    }
    
    void pop() { // O(1)
        if(st.top()<min){ 
            // before pop make sure to retrieve the old min
            long long oldMin = 2*min - st.top();
            min = oldMin;
        }
        st.pop();
    }
    
    int top() { // O(1)
        if(st.top()<min) return (int)min;
        else return (int)st.top();
    }
    
    int getMin() { // O(1)
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */