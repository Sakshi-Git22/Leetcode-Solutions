class Solution {
public:
    vector<vector<int>>mergeIntervals(vector<vector<int>>interval){
        vector<vector<int>>ans;
        sort(interval.begin(),interval.end());
        ans.push_back(interval[0]);
        for(int i=0;i<interval.size();i++){
            if(interval[i][0]<ans.back()[1]){
                ans.back()[1] = max(ans.back()[1],interval[i][1]);
            }
            else{
                ans.push_back(interval[i]);
            }
        }
        return ans;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>>hor;
        vector<vector<int>>vert;
        for(auto it : rectangles){
            int x1 = it[0];
            int y1 = it[1];
            int x2 = it[2];
            int y2 = it[3];
            hor.push_back({x1,x2});
            vert.push_back({y1,y2});
        }
        vector<vector<int>>result1 = mergeIntervals(hor);
        vector<vector<int>>result2 = mergeIntervals(vert);

        return result1.size()>=3 || result2.size()>=3;
    }
};