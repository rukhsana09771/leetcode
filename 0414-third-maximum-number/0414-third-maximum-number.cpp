class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long fmx=LONG_MIN, smx=LONG_MIN, tmx=LONG_MIN;
        for(int num : nums){
            if(num==fmx || num==smx || num==tmx) continue;
            else if(num>fmx){
                tmx = smx;
                smx = fmx;
                fmx = num;
            }
            else if(num>smx){
                tmx = smx;
                smx = num;
            }
            else if(num>tmx) tmx = num;
        }
        return (tmx==LONG_MIN) ? fmx : tmx;
    }
};