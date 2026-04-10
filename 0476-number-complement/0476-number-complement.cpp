class Solution {
public:
    int findComplement(int num) {
        vector<int> temp;
        vector<int> arr;
        while(num>0){
            int rem = num%2;
            temp.push_back(rem);
            num = num/2;
        }
        for(int i=temp.size()-1; i>=0; i--){
            arr.push_back(temp[i]);
        }
        for(int i=0; i<arr.size(); i++){
           arr[i] = 1 - arr[i];
        }
        int sum = 0;
        int k = 0;
        for(int i=arr.size()-1; i>=0; i--){
            sum += (1<<k)*arr[i];
            k++;
        }
        return sum;
    }
};