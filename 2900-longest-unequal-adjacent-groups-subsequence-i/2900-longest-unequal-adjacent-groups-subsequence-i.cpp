class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        if(words.size()==0){
            return ans;
        }
        bool nextAddition = groups[0];
        ans.push_back(words[0]);
        for(int i=1;i<groups.size();i++){
            if(nextAddition!=groups[i]){
                ans.push_back(words[i]);
                nextAddition = groups[i];
            }
        }
        return ans;
    }
};