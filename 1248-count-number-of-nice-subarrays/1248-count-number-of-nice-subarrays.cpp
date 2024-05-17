class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0, j=0, odd=0, cnt=0, ans=0;
        while(j<n){
            if(nums[j]%2!=0){
                cnt = 0;
                odd++;
            }
            while(i<=j && odd==k){
                cnt++;
                if(nums[i++]%2!=0) odd--;
            }
                ans += cnt;
                j++;
        }
        return ans;
    }
};