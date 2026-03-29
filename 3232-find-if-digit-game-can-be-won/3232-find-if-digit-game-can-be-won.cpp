class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sindig = 0, doubdig = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<10) sindig += nums[i];
            else doubdig += nums[i];
        }
        return sindig!=doubdig;
    }
};