class Solution {
public:
    bool hasSameDigits(string s) {
       while(s.length()>2){
        string str;
        for(int i = 0;i<s.length()-1;i++){
            int num1 = s[i]-'0';
            int num2 = s[i+1]-'0';
            int value = (num1+num2)%10;
            char c = '0'+ value;
            str.push_back(c);
        }
        s=str;
       }
       if(s[0]==s[1])
        return true;
        else
        return false; 
    }
};