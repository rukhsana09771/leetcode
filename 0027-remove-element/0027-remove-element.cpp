class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(nums[i]==val && nums[j]!=val){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            else if(nums[i]!=val) i++;
            else if(nums[j]==val) j--;
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!=val) count++;
        }
        return count;
    }
};