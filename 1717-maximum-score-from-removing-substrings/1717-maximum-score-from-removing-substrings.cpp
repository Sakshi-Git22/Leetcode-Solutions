class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;
        char c;
        char d;
        if(x>y){
            c='a';
            d='b';
        }
        else{
            c='b';
            d='a';
            swap(x,y);
        }
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if (!st.empty() && st.top() == c && s[i] == d) {
                st.pop();
                score += x;
            } else {
                st.push(s[i]);
            }
        }

        string remaining;
        while(st.empty()==false){
            remaining+=st.top();
            st.pop();
        }
        reverse(remaining.begin(),remaining.end());
        for(int i=0;i<remaining.length();i++){
            if (!st.empty() && st.top() == d && remaining[i] == c) {
                st.pop();
                score += y;
            } else {
                st.push(remaining[i]);
            }
        }
        return score;
    }
};