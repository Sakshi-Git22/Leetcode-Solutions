class Solution {
public:
    void dfs(int num,vector<int>&ans,int n){
        if(num>n){
            return;
        }
        ans.push_back(num);
        for(int i=0;i<=9;i++){
            if(num*10+i>n)break;
            dfs(num*10+i,ans,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        for(int i=1;i<=9;i++){
            if(i>n)break;
            dfs(i,ans,n);
        }
        return ans;
    }
};