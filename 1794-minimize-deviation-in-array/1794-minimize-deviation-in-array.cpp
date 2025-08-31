class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
        int minVal = INT_MAX;
        for(int num : nums){
            if(num%2==1) num *= 2;
            minVal = min(minVal, num);
            pq.push(num);
        }
        int ans = INT_MAX;
        while(!pq.empty()){
            int maxVal = pq.top();
            pq.pop();
            ans = min(ans, maxVal-minVal);
            if(maxVal%2==0){
                int half = maxVal/2;
                minVal = min(minVal, half);
                pq.push(half);
            }else break;
        }
        return ans;
    }
};