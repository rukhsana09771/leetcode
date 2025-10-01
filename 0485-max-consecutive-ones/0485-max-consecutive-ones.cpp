class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int cone = 0;
        int mx1 = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                cone++;
                mx1 = max(mx1, cone);
            }else cone = 0;
        }
        return mx1;
    }
};