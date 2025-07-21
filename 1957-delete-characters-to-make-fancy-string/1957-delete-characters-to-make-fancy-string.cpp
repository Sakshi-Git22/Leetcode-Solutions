class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        if(n<2)return s;
        string ans = "";
        ans+=s[0];
        ans+=s[1];
        int j = 2;
        for(int i=2;i<n;i++){
            if(ans[j-2]==ans[j-1] && ans[j-1]==s[i]){
                continue;
            }
            else{
                ans+=s[i];
                j++;
            }
        }
        return ans;
    }
};