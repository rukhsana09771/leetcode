class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> pos, neg, temp;
        
        // Step 1: Separate positives and negatives
        for(int x : arr){
            if(x>=0) pos.push_back(x);
            else neg.push_back(x);
        }
        
        // Step 2: Alternate positives and negatives
        int i=0, j=0;
        while(i<pos.size() && j<neg.size()){
            temp.push_back(pos[i++]);
            temp.push_back(neg[j++]);
        }
        
         // Step 3: Append remaining positives
        while(i<pos.size()) temp.push_back(pos[i++]);
        
        // Step 4: Append remaining negatives
        while(j<neg.size()) temp.push_back(neg[j++]);
        arr = temp;

        return arr;
    }
};