class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows==1) return s;
        string ans = "";
        for(int i=0; i<numRows; i++){
            int inc = (numRows-1)*2;
            for(int j=i; j<n; j+=inc){
                ans += s[j];
                if(i>0 && i<numRows-1 && j+(inc-2*i)<n){
                    ans += s[j+inc-2*i];
                }
            }
        }
        return ans;
    }
};