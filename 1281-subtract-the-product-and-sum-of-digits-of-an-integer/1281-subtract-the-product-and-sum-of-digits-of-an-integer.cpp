class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> arr;
        while(n>0){
            int rem = n%10;
            arr.push_back(rem);
            n /= 10;
        }
        int sum = 0, prod = 1;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            prod *= arr[i];
        }
        return prod - sum;
    }
};