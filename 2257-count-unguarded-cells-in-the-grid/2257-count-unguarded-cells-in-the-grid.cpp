#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void markRight(vector<vector<int>>& mat, int i, int j){
        j++; 
        while(j < mat[0].size()){
            if(mat[i][j] == 1 || mat[i][j] == 3) break; 
            mat[i][j] = 2;
            j++;
        }
    }

    void markLeft(vector<vector<int>>& mat, int i, int j){
        j--;
        while(j >= 0){
            if(mat[i][j] == 1 || mat[i][j] == 3) break;
            mat[i][j] = 2;
            j--;
        }
    }

    void markTop(vector<vector<int>>& mat, int i, int j){
        i--;
        while(i >= 0){
            if(mat[i][j] == 1 || mat[i][j] == 3) break;
            mat[i][j] = 2;
            i--;
        }
    }

    void markBottom(vector<vector<int>>& mat, int i, int j){
        i++;
        while(i < mat.size()){
            if(mat[i][j] == 1 || mat[i][j] == 3) break;
            mat[i][j] = 2;
            i++;
        }
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> mat(m, vector<int>(n, 0));

        for(auto &w : walls)
            mat[w[0]][w[1]] = 1;

        for(auto &g : guards)
            mat[g[0]][g[1]] = 3;

        for(auto &g : guards){
            int a = g[0];
            int b = g[1];
            markLeft(mat,a,b);
            markRight(mat,a,b);
            markTop(mat,a,b);
            markBottom(mat,a,b);
        }

        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0)
                    count++;
            }
        }

        return count;
    }
};