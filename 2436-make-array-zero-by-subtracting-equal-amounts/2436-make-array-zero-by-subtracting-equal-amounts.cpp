class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        if(st.find(0)!=st.end()) return st.size()-1;
        return st.size();
    }
};