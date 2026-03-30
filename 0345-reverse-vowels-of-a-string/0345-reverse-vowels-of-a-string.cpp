class Solution {
public:
    string reverseVowels(string s) {
        vector<char> temp;
        for(int i=s.size()-1; i>=0; i--){
            if(isVowel(s[i])) temp.push_back(s[i]);
        }
        int j=0;
        for(int i=0; i<s.size(); i++){
           if(isVowel(s[i])) s[i] = temp[j++];
        }
        return s;
    }
    bool isVowel(char c){
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
};