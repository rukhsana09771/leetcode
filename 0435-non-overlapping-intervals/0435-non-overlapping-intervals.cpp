class Solution {
public:
    static bool cmp(vector<int>& v1, vector<int>& v2){
        return v1[0]<v2[0];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int ans = 0;
        int lastEndTime = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0]<lastEndTime){
                ans++;
                lastEndTime = min(lastEndTime, intervals[i][1]);
            } 
            else lastEndTime = intervals[i][1];
        }
        return ans;
    }
};