class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<float, pair<int,int>>> pq;
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                float div = (float)arr[i]/arr[j];
                pq.push({div, {arr[i],arr[j]}});
                if(pq.size()>k) pq.pop();
            }
        }
        pair<int,int> kthpair = pq.top().second;
        return {kthpair.first, kthpair.second};
    }
};