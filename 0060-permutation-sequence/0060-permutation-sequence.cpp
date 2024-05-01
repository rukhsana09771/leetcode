class Solution {
public:
    string getPermutation(int n, int k) {
        int fac=1;
        vector<int> arr;
        for(int i=1;i<n;i++){
            fac*=i;
            arr.push_back(i);
        }
        arr.push_back(n);
        string ans="";
        //0-based indexing
        k=k-1;
        while(true){
            ans+=to_string(arr[k/fac]);
            arr.erase(arr.begin()+k/fac);
            if(arr.size()==0)
                break;
            k=k%fac;
            fac=fac/arr.size();
        }
        return ans;
    }
};