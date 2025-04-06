class Solution {
public:
    int solve(int index,int n,vector<int>& arr){
        if(index==n){
            return 1;
        }
        if(index>n){
            return 0;
        }
        if(arr[index]!=-1){
            return arr[index];
        }
        arr[index] = solve(index+1,n,arr)+solve(index+2,n,arr);
        return arr[index];
    }
    int climbStairs(int n) {
        vector<int>arr(n+1,-1);
        int ans = solve(0,n,arr);
        return ans;
    }
};