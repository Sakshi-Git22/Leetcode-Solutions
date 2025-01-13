class Solution {
public:
    int minimumLength(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(mp[s[i]]==3){
                mp[s[i]]-=2;
            }
        }
        int result = 0;
        for(auto it : mp){
            result += it.second;
        }
        return result;
    }
};