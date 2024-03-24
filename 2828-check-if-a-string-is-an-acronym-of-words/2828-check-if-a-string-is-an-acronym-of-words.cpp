class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size()!=s.size()) return false;
        int  n = words.size();
        string str = "";
        for(int i=0; i<n; i++){
            str.push_back(words[i][0]);
        }
        if(str!=s) return false;
        return true;   
    }
};