class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prev = 0;
        int laser = 0;
        for(int i=0; i<n; i++){
            string str = bank[i];
            int m = str.size();
            int curr = 0;
            for(int j=0; j<m; j++){
                if(str[j]=='1') curr++;
            }
            if(curr==0) continue;
            laser += (prev*curr);
            prev = curr;
        }
        return laser;
    }
};