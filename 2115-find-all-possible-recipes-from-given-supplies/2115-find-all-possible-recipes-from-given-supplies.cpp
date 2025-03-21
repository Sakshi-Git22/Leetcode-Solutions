class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        int n = recipes.size();
        unordered_map<string,int>sm;
        for(auto it : supplies){
            sm[it]++;
        }
        unordered_map<string,vector<int>>adj;
        vector<int>indegree(n,0);
         for (int i = 0; i < n; i++) {
            for (auto &ing : ingredients[i]) {
                if (sm.find(ing) == sm.end()) { 
                    adj[ing].push_back(i);
                    indegree[i]++;
                }
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<string>result;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            result.push_back(recipes[front]);

            for(auto idx : adj[recipes[front]]){
                indegree[idx]--;
                if(indegree[idx]==0){
                    q.push(idx);
                }
            }
        }
            return result;
    }
};