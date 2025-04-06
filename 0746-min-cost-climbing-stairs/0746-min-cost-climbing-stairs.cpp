class Solution {
public:
    void solve(int index,vector<int>& cost,vector<int>& ans,int sum,int n){
        if(index>=n){
            ans.push_back(sum);
            return;
        }
        solve(index+1,cost,ans,sum+cost[index],n);
        solve(index+2,cost,ans,sum+cost[index],n);    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>ans;
        int n = cost.size();
        solve(0,cost,ans,0,n);
        solve(1,cost,ans,0,n);
        return *min_element(ans.begin(), ans.end());
    }
};