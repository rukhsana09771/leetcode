class Solution {
public:
    int numRabbits(vector<int>& arr) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i=0; i<arr.size(); i++){
            if(!mp[arr[i]+1]){
                ans += arr[i] + 1;
                if(arr[i]==0) continue;
                mp[arr[i]+1] = 1;
            }else{
                mp[arr[i]+1]++;
                int key = arr[i] + 1;
                int val = mp[key];
                if(key==val) mp.erase(key);
            }
        }
        return ans;
    }
};