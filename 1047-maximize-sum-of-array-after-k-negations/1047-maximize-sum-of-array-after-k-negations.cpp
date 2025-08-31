class Solution {
public:
    int largestSumAfterKNegations(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        int sum = 0;
        for(int i=0; i<arr.size(); i++) sum += arr[i];
        while(k--){
                int el = pq.top();
                if(el==0) break;
                pq.pop();
                sum -= el;
                pq.push(-1*el);
                sum += (-el);     
        }
        return sum;
    }
};