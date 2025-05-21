class Solution {
public:
    void setRowZero(vector<vector<int>>& matrix , int row){
        
        for(int i=0;i<matrix[0].size();i++){
            matrix[row][i]=0;
        }
        return;
    }
    void setColZero(vector<vector<int>>& matrix , int col){
        for(int i=0;i<matrix.size();i++){
            matrix[i][col]=0;
        }
        return;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> newMat = matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    setRowZero(newMat,i);
                    setColZero(newMat,j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]=newMat[i][j];
            }
        }
        return;
    }
};