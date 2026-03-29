class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        for(int i=0; i<m; i++){
            if(flowerbed[i]==0){
            int prev = 0, next = 0;
            if(i-1>=0) prev = flowerbed[i-1];
            if(i<flowerbed.size()-1) next = flowerbed[i+1];
                if(prev==0 && next==0){
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        return n<=0;
    }
};