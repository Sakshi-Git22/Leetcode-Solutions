class Solution {
public:
    int myAtoi(string s) {
        int result = 0;
        bool isNegative = false;
        int i=0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        if (i<s.length() && (s[i] == '+' || s[i] == '-')) {
            isNegative = (s[i] == '-');
            i++;
        }
        while(i<s.length() && s[i]>='0' && s[i]<='9'){
            int value = s[i]-'0';
            if (result > (INT_MAX - value) / 10) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            result = result * 10 + value;
            i++;
        }
        return isNegative ? -result : result;
    }
};