class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
    int n = a.size();
        
    stack<int>st;
    vector<int>ans(n , -1);
    for(int i=0;i<2*n;i++){
        int idx = i%n;
        
        while(!st.empty() and (a[idx] > a[st.top()])){
            ans[st.top()] = a[idx];
            st.pop();
        }
        st.push(idx);
     }
        return ans;
    }
};