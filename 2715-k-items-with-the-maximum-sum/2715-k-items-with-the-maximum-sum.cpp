class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int onesTaken = std::min(numOnes, k);
        int negTaken  = std::max(0, k - numOnes - numZeros);
        return onesTaken - negTaken;
    }
};