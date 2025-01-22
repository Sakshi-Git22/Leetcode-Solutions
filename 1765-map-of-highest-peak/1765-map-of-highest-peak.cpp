class Solution {
public:
    typedef pair<int,int>P;
    bool isSafe(int i, int j , vector<vector<int>>& newMat){
        if(i>=0 && j>=0 && i<newMat.size() && j<newMat[0].size() && newMat[i][j]==-1){
            return true;
        }
        return false;
    }
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
       int m = isWater.size();
       int n = isWater[0].size();
       vector<vector<int>>newMat(m,vector<int>(n,-1));
       int ans = 0;
       queue<P>q;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(isWater[i][j]==1){
                newMat[i][j]=0;
                q.push({i,j});
            }
        }
       }
       while(!q.empty()) {
        int size = q.size();
        while(size--){
            P current = q.front();
            q.pop();
            int i=current.first;
            int j=current.second;
            //LRDU
            //LEFT
            if(isSafe(i,j-1,newMat)){
                q.push({i,j-1});
                newMat[i][j-1]=ans+1;
            }
            //RIGHT
            if(isSafe(i,j+1,newMat)){
                q.push({i,j+1});
                newMat[i][j+1]=ans+1;
            }
            //UP
            if(isSafe(i-1,j,newMat)){
                q.push({i-1,j});
                newMat[i-1][j]=ans+1;
            }
            //down
            if(isSafe(i+1,j,newMat)){
                q.push({i+1,j});
                newMat[i+1][j]=ans+1;
            }
        }
        ans++;
       }
       return newMat;
    }
};