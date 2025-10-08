class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int col0 = 1;

        // Step 1: Mark rows and columns
        for (int i = 0; i < n; i++) {
            if (mat[i][0] == 0) col0 = 0;
            for (int j = 1; j < m; j++) {
                if (mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }

        // Step 2: Set zeroes using marks
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (mat[i][0] == 0 || mat[0][j] == 0)
                    mat[i][j] = 0;
            }
        }

        // Step 3: Handle first row
        if (mat[0][0] == 0) {
            for (int j = 0; j < m; j++) mat[0][j] = 0;
        }

        // Step 4: Handle first column
        if (col0 == 0) {
            for (int i = 0; i < n; i++) mat[i][0] = 0;
        }
        
    }
};