class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int limit = sqrt(r);
        
        // Sieve to find primes up to sqrt(r)
        vector<bool> isPrime(limit + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= limit; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= limit; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Count special numbers
        int special = 0;
        for (int i = 2; i <= limit; i++) {
            if (isPrime[i]) {
                int sq = i * i;
                if (sq >= l && sq <= r) {
                    special++;
                }
            }
        }

        int total = r - l + 1;
        return total - special;
    }
};