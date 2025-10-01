class Solution {
public:
    void rotate(vector<int>&arr, int d) {
        int n = arr.size();
        d = d%n;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[(i+d)%n] = arr[i];
        }
        for(int i=0; i<n; i++){
            arr[i] = ans[i];
        }
    }
};