class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){  // flip
            int prev = kthGrammar(n-1, k/2);
            if(prev==1) return 0;
            else return 1;
        }
        else {
            int prev = kthGrammar(n-1, k/2+1);
            return prev;
        }
    }
};