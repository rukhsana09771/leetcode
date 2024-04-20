class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        // Calculating smallest +ve no. & its index
        int pos = 0;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]<=0) low = mid + 1;
            else{ // nums[mid]>0
                if(mid>0 && nums[mid-1]>0) high = mid - 1;
                else {
                    pos = n - mid;
                    break;
                }
            }
        }
        
        // Calculating largest -ve no. & its index
        int neg = 0;
        low = 0;
        high = n-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>=0) high = mid - 1;
            else{ // nums[mid]<0
                if(mid+1<n && nums[mid+1]<0) low = mid + 1;
                else {
                    neg = mid + 1;
                    break;
                }
            }
        }
        return max(pos, neg);
    }
};