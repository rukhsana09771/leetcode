class Solution {
public:
    vector<int> dp;
    int fbu(vector<int> arr){
        int n = arr.size();
        if(n==1) return arr[0];
        dp.clear();
        dp.resize(n);
        dp[n-1] = arr[n-1];
        dp[n-2] = max(arr[n-1], arr[n-2]);
        for(int i=n-3; i>=0; i--){
            dp[i] = max(arr[i]+dp[i+2], dp[i+1]);
        }
        return dp[0];
    }
    int rob(vector<int>& nums) {
        return fbu(nums);
    }
};