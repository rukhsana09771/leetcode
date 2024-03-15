class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        bool flag = false;  // false means not visit
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
            if(flag==true)  return false;
            flag = true;
            if(arr[n-1]>arr[0]) return false;
        }
     }
    return true;
    }
};