class Solution {
public:
    int mySqrt(int x) {
       int low = 0;
       int high = x;
        while(low<=high){
            int mid = low + (high-low)/2;
            long long m = (long long)mid;
            long long y = (long long)x;
            if(m*m==x) return mid;
            else if(m*m>y) high = mid-1;
            else low = mid+1;
        }
        return high;
    }
};