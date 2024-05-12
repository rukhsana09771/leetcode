class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& arr) {
        int n = arr.size();
        vector<long long int> ans(n);
        ans[0] = 2*arr[0];
        int maxi = arr[0];
        for(int i=1; i<n; i++){
            maxi = max(maxi, arr[i]);
            ans[i] = arr[i] + maxi + ans[i-1];
        }
        return ans;
    }
};