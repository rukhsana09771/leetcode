class Solution {
public:
    bool isPerfectSquare(int num) {
    int x = num;
    int low = 0;
    int high = x;
    while(low<=high){
        int mid = low + (high-low)/2;
        long long m = (long long)mid;
        long long y = (long long)x;
        if((m*m)==y) return true;  // perfect square
        else if(m*m<y) low = mid+1;
        else  high = mid-1;
    }
    return false;
    }
};