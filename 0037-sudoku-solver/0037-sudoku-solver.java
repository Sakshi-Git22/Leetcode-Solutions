class Solution {
    public boolean isPossible(char value, int i , int j, char[][] board){
        for(int k = 0;k<9;k++){
            if(board[i][k]==value || board[k][j]==value){
                return false;
            }
        }
        int startRow = (i / 3) * 3;
        int startCol = (j / 3) * 3;
        for(int r = startRow; r < startRow + 3; r++){
            for(int c = startCol; c < startCol + 3; c++){
                if(board[r][c] == value){
                    return false;
                }
            }
        }
        return true;
    }
    public boolean solve(char[][] board){
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char value = '1';value <= '9';value++){
                        if(isPossible(value,i,j,board)==true){
                            board[i][j]=value;
                            if(solve(board)){
                                return true;
                            }
                        board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    public void solveSudoku(char[][] board) {
        solve(board);
    }
}