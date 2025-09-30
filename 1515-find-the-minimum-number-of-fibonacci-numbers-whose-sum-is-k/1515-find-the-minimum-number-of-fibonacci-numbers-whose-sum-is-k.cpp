class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fib = {1,1};
        int prev=1, curr=1, count = 0;
        while(1){
            if(prev+curr > k) break;
            fib.push_back(prev+curr);
            prev = curr;
            curr = fib.back();
        }
        for(int i=fib.size()-1; i>=0; i--){
            if(fib[i]<=k){
                k -= fib[i];
                count++;
            }
            if(k==0) return count;
        }
        return count;
    }
};