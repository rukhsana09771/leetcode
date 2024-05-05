class Solution {
public:
    int ans = 0;
    void merge(vector<int>& a, int low, int mid, int high){
        int i = low, j = mid + 1;
        while(i<=mid && j<=high){
            if((long long int)a[i]>(long long int)2*a[j]){
                ans += mid - i + 1;
                j++;
                }
            else i++;
            }
        i = low, j = mid + 1;
        vector<int> b;
        while(i<=mid && j<=high){
        if(a[i]<a[j]) b.push_back(a[i++]);
        else b.push_back(a[j++]);
    }
    while(i<=mid) b.push_back(a[i++]);
    while(j<=high) b.push_back(a[j++]);
        for(int i=low; i<=high; i++) a[i] = b[i-low];
        }
    void mergeSort(vector<int>& a, int low, int high){
        if(low==high) return;
        int mid = low + (high-low)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high);
        }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return ans;
    }
};