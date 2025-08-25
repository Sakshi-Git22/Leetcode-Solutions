class Solution {
    public int[] findDiagonalOrder(int[][] mat) {
        Map<Integer,List<Integer>>map = new LinkedHashMap<>();
        int m = mat.length;
        int n = mat[0].length;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                int key = i + j;
                map.putIfAbsent(key, new ArrayList<>());
                map.get(key).add(mat[i][j]);
            }
        }
        int[] ans = new int[m*n];
        int i = 0;
        boolean flip = true;
        for(Map.Entry<Integer,List<Integer>>entry : map.entrySet()){
            List<Integer>list = entry.getValue();
            if(flip==true){
                Collections.reverse(list);
            }
            flip = !flip;
            for(int num : list){
                ans[i]=num;
                i++;
            }
        }
        return ans;
    }
}