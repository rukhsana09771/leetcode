class Solution {
public:
    bool isPalindrome(int n) {
        int num = n;
        long long rev = 0;
        if(n<0) return false;
        while(n>0){
            int rem = n%10;
            rev = rev*10 + rem;
            n /= 10;
        }
        return rev==num;
    }
};