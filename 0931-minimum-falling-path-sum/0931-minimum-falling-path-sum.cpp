class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
         vector<vector<int>> ans(n, vector<int>(n, 0));
        for(int col=0;col<n;col++){
            ans[0][col]=matrix[0][col];
        }
        for(int row=1;row<matrix.size();row++){
            for(int col = 0;col<matrix[0].size();col++){
                int up = ans[row-1][col];
                int leftDiagonal = (col>0) ? ans[row-1][col-1] : INT_MAX; 
                int rightDiagonal = (col < n - 1) ? ans[row-1][col+1] : INT_MAX; 
                
                ans[row][col] =matrix[row][col] +  min(up, min(leftDiagonal, rightDiagonal));
            }
        }
        int output = INT_MAX;
        for(int i=0;i<matrix[0].size();i++){
            output = min(output,ans[n-1][i]);
        }
        return output;
    }
};