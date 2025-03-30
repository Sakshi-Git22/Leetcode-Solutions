class Solution {
public:
    vector<int> partitionLabels(string s) {
     unordered_map<char,int>mp;
     for(int i=0;i<s.length();i++){
        mp[s[i]]=i;
     }   
     int n = s.length();
     vector<int>ans;
     int i=0;
     int idx = 0;
     int j=mp[s[i]];
     while(i<n && j<n){
        if(i==j){
            ans.push_back(j-idx+1);
            i++;
            idx=i;
            j=mp[s[i]];
        }
        else if(i<j){
            i++;
            j=max(j,mp[s[i]]);
        }
     }
     return ans;
    }
};