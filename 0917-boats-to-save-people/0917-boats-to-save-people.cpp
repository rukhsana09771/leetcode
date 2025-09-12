class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int st = 0, end = people.size()-1;
        int boat = 0;
        while(st<=end){
            if(people[st]+people[end]<=limit){
                boat++;  // allocate a boat to the pair
                st++;
                end--;
            }else{
                boat++; // allocate a boat to the heaviest
                end--;
            }
        }
        return boat;
    }
};