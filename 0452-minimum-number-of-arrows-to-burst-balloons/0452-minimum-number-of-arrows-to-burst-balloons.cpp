bool cmp(vector<int>& v1, vector<int>& v2){
        return v1[1]<v2[1];
    }

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int ans = 0;
        int lastEndTime = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0]<=lastEndTime) ans++;
            else lastEndTime = intervals[i][1];
        }
        return intervals.size() - ans;
    }
};