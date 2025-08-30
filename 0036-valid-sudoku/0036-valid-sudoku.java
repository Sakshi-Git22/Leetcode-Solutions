class Solution {
    public boolean checkBox(int row , int col, char[][] board){
        boolean[] arr = new boolean[9];
        for(int i=row;i<row+3;i++){
            for(int j = col;j<col+3;j++){
                if(board[i][j]!='.'){
                    int idx = board[i][j]-'1';
                    if(arr[idx]==true)return false;
                    arr[idx]=true;
                }
            }
        }
        return true;
    }
    public boolean isValidSudoku(char[][] board) {
        for(int i = 0;i<board.length;i++){
            boolean[] arr1 = new boolean[9];
            boolean[] arr2 = new boolean[9];
            for(int j=0;j<board.length;j++){
                if(board[i][j] != '.'){
                    int idx = board[i][j]-'1';
                    if(arr1[idx]==true)return false;
                    arr1[idx]=true;
                }
                if(board[j][i]!='.'){
                    int idx = board[j][i]-'1';
                    if(arr2[idx]==true)return false;
                    arr2[idx]=true;
                }
            }
        }
        for(int i = 0;i<board.length;i=i+3){
            for(int j=0;j<board.length;j=j+3){
                if(checkBox(i,j,board)==false){
                    return false;
                }
            }
        }
        return true;
    }
}