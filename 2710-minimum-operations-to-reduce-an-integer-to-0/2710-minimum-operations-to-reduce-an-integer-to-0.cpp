class Solution {
public:
    int minOperations(int n) {
        if(n==0 || n==1) return n;
        int prod = 1;
        while(prod*2 < n) prod *= 2;
        return 1 + min(minOperations(prod*2-n),  minOperations(n-prod));
    }
};