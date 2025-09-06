class Solution {
public:
    static bool cmp(vector<int>& c1, vector<int>& c2){
        return c1[1]>c2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int n = boxTypes.size();
        int profit = 0;
        for(int i=0; i<n; i++){
            if(truckSize==0) break;
            else if(boxTypes[i][0]<=truckSize){
                profit += boxTypes[i][0]*boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }else{
                profit += truckSize*boxTypes[i][1];
                truckSize = 0;
            }
        }
        return profit;
    }
};