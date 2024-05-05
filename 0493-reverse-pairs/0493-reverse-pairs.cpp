class Solution {
public:
    int ans = 0;
    void merge(vector<int>& arr, int low, int mid, int high){
        int i = low, j = mid + 1;
        while(i<=mid && j<=high){
            if((long long int)arr[i]>(long long int)2*arr[j]){
                ans += mid - i + 1;
                j++;
            }
            else i++;
        }
        i = low, j = mid + 1;
        vector<int> b;
        while(i<=mid && j<=high){
        if(arr[i]<arr[j]) b.push_back(arr[i++]);
        else b.push_back(arr[j++]);
    }
    while(i<=mid) b.push_back(arr[i++]);
    while(j<=high) b.push_back(arr[j++]);
        for(int i=low; i<=high; i++) arr[i] = b[i-low];
        }
    void mergeSort(vector<int>& arr, int low, int high){
        if(low==high) return;
        int mid = low + (high-low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
        }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return ans;
    }
};