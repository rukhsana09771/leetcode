class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        int rightSum = 0, leftSum = 0;
        for(auto x:arr) rightSum += x;
        for(int i=0; i<n; i++){
            rightSum -= arr[i];
            if(leftSum==rightSum) return i;
            leftSum += arr[i];
        }
        return -1;
    }
};