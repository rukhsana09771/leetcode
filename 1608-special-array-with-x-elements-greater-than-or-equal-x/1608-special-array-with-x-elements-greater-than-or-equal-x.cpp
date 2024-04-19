class Solution {
public:
    int specialArray(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        if(arr[0]>=n) return n;
        for(int i=1; i<n; i++){
            int len = n - i;
            if(arr[i]==arr[i-1]) continue;
            if(arr[i]>=len && len>arr[i-1]) return len;
        }
        return -1;
    }
};