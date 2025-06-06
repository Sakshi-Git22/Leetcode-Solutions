class Solution {
public:
    string robotWithString(string s) {
        int n = s.length();
        vector<char>nextSmaller(n);
        char temp = s[n-1];
        for(int i=n-1;i>=0;i--){
            nextSmaller[i]=min(temp,s[i]);
            temp=min(temp,s[i]);
        }
        string t = "";
        string p = "";
        for (int i=0;i<n;i++){
            t.push_back(s[i]);
            char minChar = (i+1<n) ? nextSmaller[i+1] : s[i];
            while(!t.empty() && t.back()<=minChar){
                p += t.back();
                t.pop_back();
            }
        }
        while(!t.empty()){
            p+=t.back();
            t.pop_back();
        }
        return p;
    }
};