class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        /* int n = arr.size();
        int idx = -1;
        for(int i=1; i<=n-2; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                idx = i;
                break;
            }
        }
        return idx; */
        
        // Binary Search
        int n = arr.size();
        int low = 1;
        int high = n-2;
        int idx = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                idx = mid;
                break;
            }
            else if(arr[mid]<arr[mid-1]) high = mid -1;
            else low = mid + 1;
        }
        return idx;
    }
};