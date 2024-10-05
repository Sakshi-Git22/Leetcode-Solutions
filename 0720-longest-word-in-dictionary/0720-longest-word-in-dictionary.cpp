class Solution {
public:
    string longestWord(vector<string>& words) {
        map<string, bool>mp;
        sort(words.begin(), words.end());        
        string result = "";
        for(auto it : words){
            if(it.length()==1 || mp[it.substr(0,it.length()-1)]){
                mp[it]=true;
                if(result.length()<it.length()){
                    result=it;
                }
            }
        }
        return result;
    }
};