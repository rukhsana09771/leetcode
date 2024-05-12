class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& arr, int n) {
        vector<int> ans(n, 0);
        for(int i=0; i<arr.size(); i++){
            ans[arr[i][0] - 1] += arr[i][2];
            if(arr[i][1] < n) ans[arr[i][1]] -= arr[i][2];
        }
        for(int i=1; i<n; i++){
            ans[i] += ans[i-1];
        }
        return ans;
    }
};