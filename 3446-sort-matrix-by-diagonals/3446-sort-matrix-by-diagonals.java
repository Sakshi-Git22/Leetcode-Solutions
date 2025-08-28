class Solution {
    public void sortDiagonal(int row , int col , int[][] grid, boolean asc){
        int n = grid.length;
        List<Integer>vec = new ArrayList<>();
        int i = row , j = col;
        while(i<n && j<n){
            vec.add(grid[i][j]);
            i++;
            j++;
        }
        if (asc) {
            Collections.sort(vec);
        } else {
            vec.sort(Collections.reverseOrder());
        }
        i = row;
        j=col;
        for (int val : vec) {
            grid[i][j] = val;
            i++;
            j++;
        }
    }
    public int[][] sortMatrix(int[][] grid) {
        int n = grid.length;
        for(int i = 0;i<n;i++){
            sortDiagonal(i,0,grid,false);
        }
        for(int i = 1;i<n;i++){
            sortDiagonal(0,i,grid,true);
        }
        return grid;
    }
}