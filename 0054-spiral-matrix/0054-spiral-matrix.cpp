class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count = matrix.size() * matrix[0].size();
        int startrow = 0;
        int startcol = 0;
        int endrow = matrix.size()-1;
        int endcol = matrix[0].size()-1;
        vector<int>ans;
        while(count){
            for(int i=startcol;i<=endcol && count!=0;i++){
                ans.push_back(matrix[startrow][i]);
                count--;
            }
            startrow++;
            for(int i=startrow;i<=endrow && count!=0;i++){
                ans.push_back(matrix[i][endcol]);
                count--;
            }
            endcol--;
            for(int i=endcol;i>=startcol && count!=0; i--){
                ans.push_back(matrix[endrow][i]);
                count--;
            }
            endrow--;
            for(int i=endrow;i>=startrow && count!=0; i--){
                ans.push_back(matrix[i][startcol]);
                count--;
            }
            startcol++;
        }
        return ans;
    }
};