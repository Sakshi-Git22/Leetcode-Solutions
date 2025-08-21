class Solution {
    public int solve(int[] arr){
        int count = 0;
        int ans = 0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==1){
                count++;
                ans+=count;
            }
            else{
                count=0;
            }
        }
        return ans;
    }
    public int numSubmat(int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;
        int ans = 0;
        for(int startRow = 0; startRow<m;startRow++){
            int[] arr = new int[n];
            Arrays.fill(arr,1);
            for(int endRow=startRow;endRow<m;endRow++){
                for(int col = 0;col<n;col++){
                    arr[col] = arr[col] & mat[endRow][col];
                }
                ans+= solve(arr);
            }
        }
        return ans;
    }
}