class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX, mx = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]>mx) mx = nums[i];
            if(nums[i]<mn) mn = nums[i];
        }
        int ans = 1;
        for(int j=mn; j>0; j--){
            if(mn%j==0 && mx%j==0){
                ans = j;
                break;
            }
        }
        return ans;
    }
};