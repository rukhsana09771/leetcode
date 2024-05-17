class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long int n = nums.size();
        long long int i=0, j=0, sum=0, ans=0, score=0;
        while(i<n && j<n){
            sum += nums[j];
            score = sum*(j-i+1);
            while(i<=j && score>=k){
                sum -= nums[i++];
                score = sum*(j-i+1);
            }
            ans += (j-i+1);
            j++;
        }
        return ans;
    }
};