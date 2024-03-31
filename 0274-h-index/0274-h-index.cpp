class Solution {
public:
    int hIndex(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int hMax = 0;
        for(int i=0; i<n; i++){
            int h = min(arr[i],n-i);
            hMax = max(hMax,h);
        }
        return hMax;
    }
};