class Solution {
public:
    vector<string> mp = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
    };
    void helper(string &digits, vector<string> &ans, int ind, string curr) {
    if (ind == digits.length()) {
        ans.push_back(curr);
        return;
    }
    int num = digits[ind] - '0';
    string letters = mp[num];
    for (int i = 0; i < letters.length(); i++) {
        helper(digits, ans, ind + 1, curr + letters[i]);
    }
}
    vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if (digits.length() == 0) return ans;
    helper(digits, ans, 0, "");
    return ans;
    }
};