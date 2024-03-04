class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        //transpose
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){  
                //swap i,j and j,i
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        //reverse each row
        for(int p=0; p<n; p++){ //traversing each row
            int i = 0;
            int j = n-1;
            while(i<=j){ 
                //swapping p,i and p,j
                int temp = matrix[p][i];
                matrix[p][i] = matrix[p][j];
                matrix[p][j] = temp;
                i++;
                j--;
          }
        }
        return;
    }
};