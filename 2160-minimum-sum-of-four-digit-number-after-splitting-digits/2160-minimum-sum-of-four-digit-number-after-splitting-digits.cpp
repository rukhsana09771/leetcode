class Solution {
public:
    int minimumSum(int num) {
        // 2932
        
        int ones = num%10;  // 2
        num /= 10;
        int tens = num%10; // 3
        num /= 10;
        int huns = num%10;  // 9
        num /= 10;
        int thous = num%10;  // 2
        num /= 10;
        
        vector<int> arr(4);
        arr[0] = ones;
        arr[1] = tens;
        arr[2] = huns;
        arr[3] = thous;
        
        sort(arr.begin(), arr.end()); // 2 2 3 9
        
        int new1 = arr[0]; 
        new1 *= 10;
        new1 += arr[2];
        
        int new2 = arr[1];
        new2 *= 10;
        new2 += arr[3];
        
        return new1+new2;
        
    }
};