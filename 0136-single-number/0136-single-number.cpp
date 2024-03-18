class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n; i++){
            bool flag = false;
            for(int j=0; j<n; j++){
                if(j==i) continue;
                if(arr[i]==arr[j]) {
                    flag  = true;
                    break;
                }
            }
            if(flag==false) return arr[i];
        }
        return 6;
    }
};