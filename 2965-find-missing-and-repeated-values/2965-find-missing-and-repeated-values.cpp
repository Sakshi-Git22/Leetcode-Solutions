class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>arr;
        int repeated=0;
        int missing=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                repeated=arr[i];
            }
            if(arr[i]+2==arr[i+1]){
                missing=arr[i]+1;
            }
        }
        if(missing == 0){
            if(arr.size()==arr[arr.size()-1])
            missing=1;
            else
            missing=arr.size();
        }
        ans.push_back(repeated);
        ans.push_back(missing);
        return ans;
    }
};