// forward  merge
class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        vector<vector<int>> result;
        int n = intervals.size();
        result.push_back(intervals[0]);
        for(int i=1; i<n; i++){
            vector<int> curr = intervals[i];
            if(curr[0]<=result[result.size()-1][1]){
                result[result.size()-1][0] = min(result[result.size()-1][0], curr[0]);
                result[result.size()-1][1] = max(result[result.size()-1][1], curr[1]);
            }else{
                result.push_back(intervals[i]);
            }
        
        }
        return result;
    }
};