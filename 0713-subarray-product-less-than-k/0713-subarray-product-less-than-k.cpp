class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k<=1) return 0;
        int i=0, j=0, prod=1, count=0;
        while(j<n){
            prod *= nums[j];
            while(prod>=k){
                count += (j-i);
                prod /= nums[i];
                i++;
            }
            j++;
        }
        while(i<n){
                count += (j-i);
                prod /= nums[i];
                i++;
            }
        return count;
    }
};