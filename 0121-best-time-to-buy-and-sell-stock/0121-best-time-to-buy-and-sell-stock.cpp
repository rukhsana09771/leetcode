class Solution {
public:
    int maxProfit(vector<int>& arr) {
         int maxProfit = 0, minPrice = arr[0];
        for(int i=1; i<arr.size(); i++){
            maxProfit = max(maxProfit, arr[i]-minPrice);
            minPrice = min(minPrice, arr[i]);
        }
        return maxProfit;
    }
};