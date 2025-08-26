class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        double maxHypo = 0;
        int maxArea = 0;
        for(int i = 0;i<dimensions.length;i++){
            int l = dimensions[i][0];
            int b = dimensions[i][1];
            double hypoteneuse = Math.sqrt((l*l) + (b*b));
            int area = l*b;
            if(hypoteneuse > maxHypo || (hypoteneuse==maxHypo && area > maxArea)){
                maxArea = area;
                maxHypo = hypoteneuse;
            }
        }
        return maxArea;
    }
}