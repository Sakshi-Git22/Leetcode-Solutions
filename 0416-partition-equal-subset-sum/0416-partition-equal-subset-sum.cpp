class Solution {
public:
    int solve(vector<int>& nums,int n,int target,vector<vector<int>>& dp){
        if(target==0){
            return 1;
        }
        if(n==0){
            return nums[0]==target;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        bool notTake = solve(nums,n-1,target,dp);
        bool take = false;
        if(target>=nums[n]){
            take = solve(nums,n-1,target-nums[n],dp);
        }
        return dp[n][target] = take|notTake;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target = sum/2;
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        bool ans = solve(nums,n-1,target,dp);
        return ans;
    }
};