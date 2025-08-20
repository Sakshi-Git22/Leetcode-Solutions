class Solution {
    public int solve(int i, int j, int[][] matrix, int[][] dp) {
        if (i >= matrix.length || j >= matrix[0].length || matrix[i][j] == 0) {
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int row = solve(i, j + 1, matrix, dp);
        int diagonal = solve(i + 1, j + 1, matrix, dp);
        int column = solve(i + 1, j, matrix, dp);

        return dp[i][j] = 1 + Math.min(row, Math.min(diagonal, column));
    }

    public int countSquares(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        int result = 0;
        int[][] dp = new int[n + 1][m + 1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                dp[i][j] = -1;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] != 0) {
                    result += solve(i, j, matrix, dp);
                }
            }
        }
        return result;
    }
}