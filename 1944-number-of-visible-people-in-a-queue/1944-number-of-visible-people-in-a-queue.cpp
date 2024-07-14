class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        stack<int> st;
        ans[n-1] = 0;
        st.push(arr[n-1]);
        for(int i=n-2; i>=0; i--){
            int count = 0;
            while(!st.empty() && arr[i] > st.top()){
                st.pop();
                count++;
            }
            if(!st.empty()) count++;
            ans[i] = count;
            st.push(arr[i]);
        }
        return ans;
    }
};