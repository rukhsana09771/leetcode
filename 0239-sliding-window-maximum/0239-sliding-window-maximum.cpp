/* class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        if(k==1) return arr;
        int n = arr.size();
        stack<int> st;
        int ngi[n];
        ngi[n-1] = n;
        st.push(n-1);
        for(int i=n-2; i>=0; i--){
        while(!st.empty() && arr[st.top()]<=arr[i]){
             st.pop();
        }
        if(st.empty()) ngi[i] = n;
        else ngi[i] = st.top();
        st.push(i);
    }
        vector<int> ans;
        int j = 0;
        for(int i=0; i<n-k+1; i++){
            if(j<i) j = i;
            int mx = arr[j];
            while(j<k+i){
                mx = arr[j];
                if(ngi[j] >= i+k) break;
                j = ngi[j];
            }
            ans.push_back(mx);
        }
        return ans;
    }
};  */

// 2nd approach
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        if(k==1) return arr;
        int n = arr.size();
        vector<int> ans; // i should be min k-1
        deque<int> dq; // decreasing order of ele (index)
        for(int i=0; i<n; i++){
            while(dq.size()>0 && arr[i]>arr[dq.back()]) 
            dq.pop_back();
            dq.push_back(i);
            int j = i-k+1; // start of the window
            while(dq.front()<j) dq.pop_front();
            if(i>=k-1) ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};