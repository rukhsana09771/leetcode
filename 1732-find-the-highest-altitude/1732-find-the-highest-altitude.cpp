class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> temp;
        temp.push_back(0);
        int sum = 0;
        for(int i=0; i<gain.size(); i++){
            sum += gain[i];
            temp.push_back(sum);
        }
        int maxi = 0;
        for(int i=0; i<temp.size(); i++){
            if(maxi<temp[i]) maxi = temp[i];
        }
        return maxi;
    }
};