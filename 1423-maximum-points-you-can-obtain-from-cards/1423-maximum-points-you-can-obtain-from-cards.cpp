class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0, rsum = 0;
        for(int i=0; i<k; i++) lsum += cardPoints[i];
        int maxi = lsum;
        int left = k-1, right = n-1;
        while(left>=0){
            lsum -= cardPoints[left];
            rsum += cardPoints[right];
            maxi = max(maxi, lsum+rsum);
            left--;
            right--;
        }
        return maxi;
    }
};