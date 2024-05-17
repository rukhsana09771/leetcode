class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0, j=0, flip=0;
        int maxLen = INT_MIN, len = INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{ // nums[j]==0
                if(flip<k){
                    flip++;
                    j++;
                }else{ // flip==k
                    len = j-i;
                    maxLen = max(maxLen, len);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        len = j - i;
        maxLen = max(maxLen, len);
        return maxLen;
    }
};