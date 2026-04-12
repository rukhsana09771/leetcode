class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int twoback = 1;
        int oneback = 2;
        for(int i=2; i<n; i++){
            int nextnum = twoback + oneback;
            twoback = oneback;
            oneback = nextnum; 
        }
        return oneback;
    }
};