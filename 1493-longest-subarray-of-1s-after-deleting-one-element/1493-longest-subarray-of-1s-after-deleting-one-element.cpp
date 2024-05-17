class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
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
                    i++;  // i ko just uske age wle 0 se el idx age le jao then 100% nums[i]=0
                    j++;
                }
            }
        }
        len = j - i;
        maxLen = max(maxLen, len);
        return maxLen - 1;
    }
};