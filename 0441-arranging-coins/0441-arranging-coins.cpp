class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 0, high = n;
        while(low<=high){
            long long k = low + (high-low)/2;
            long long m = k*(k+1)/2;
            if(m==n) return (int)k;
            if(m>n) high = k-1;
            else low = k + 1;
        }
        return (int)high; 
    }
};