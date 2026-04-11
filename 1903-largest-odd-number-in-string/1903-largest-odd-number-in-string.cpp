class Solution {
public:
    string largestOddNumber(string num) {
       int n = num.size();
       int idx = -1;
       for(int i=n-1; i>=0; i--){
        if((num[i]-'0')%2==1){
            idx = i;
            break;
        }
       } 
       if(idx==-1) return "";
       int i=0;
       while(i<=idx && num[i]=='0') i++;
       return num.substr(i, idx-i+1);
    }
};