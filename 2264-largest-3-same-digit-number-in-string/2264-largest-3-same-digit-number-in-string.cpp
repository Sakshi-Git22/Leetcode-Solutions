class Solution {
public:
    string largestGoodInteger(string num) {
        bool assigned = false;
        string ans = "";
        char largestNum;
        for(int i=2;i<num.length();i++){
            if(num[i-2]==num[i-1] && num[i-1]==num[i]){
                if(!assigned || num[i]>largestNum){
                    assigned = true;
                    ans = num.substr(i-2, 3);
                    largestNum = num[i];
                }
            }
        }
        return ans;
    }
};