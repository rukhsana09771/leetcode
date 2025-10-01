class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> st(arr.begin(), arr.end());
        int longest = 0;
        for(int x : st){
             // Only start counting if x is start of a sequence
            if(st.find(x-1)==st.end()){
                int curr = x;
                int temp = 1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    temp++;
                }
                longest = max(longest, temp);
            }
        }
        return longest;
    }
};