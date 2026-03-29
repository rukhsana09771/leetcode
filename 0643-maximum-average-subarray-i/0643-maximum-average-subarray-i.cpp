class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum = INT_MIN, sum = 0;
        for(int i=0; i<k; i++) sum += nums[i];
        int le = 0, ri = k;
        while(ri<nums.size()){
            maxSum = max(maxSum, sum);
            sum -= nums[le++];
            sum += nums[ri++];
        }
        maxSum = max(maxSum, sum);
        return double(maxSum)/k;
    }
};