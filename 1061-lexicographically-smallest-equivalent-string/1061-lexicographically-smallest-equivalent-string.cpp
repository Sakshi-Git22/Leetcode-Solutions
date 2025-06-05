class Solution {
public:
    char dfs(unordered_map<char,vector<char>>& adj , char ch , vector<int>& visited){
        visited[ch-'a']=1;
        char min_char = ch;
        for(char &v : adj[ch]){
            if(!visited[v-'a'])
            min_char = min(min_char , dfs(adj,v,visited));
        }
        return min_char;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int n = s1.length();
        int m = baseStr.length();
        unordered_map<char,vector<char>>adj;
        for(int i=0;i<n;i++){
            adj[s1[i]].push_back(s2[i]);
            adj[s2[i]].push_back(s1[i]);
        }
        string result;
        for(int i=0;i<m;i++){
            vector<int>visited(26,0);
            result+=dfs(adj,baseStr[i],visited);
        }
        return result;
    }
};