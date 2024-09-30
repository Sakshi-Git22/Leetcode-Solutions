class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0;
        int denominator = 1;

        int i=0;

        while(i<expression.length()){

            int currNum = 0;
            int currDen = 0;

            bool isNegative = false;

            if(expression[i]=='-')
                isNegative = true;

            if(expression[i]=='+' || expression[i]=='-')i++;

            while(i<expression.length() && isdigit(expression[i])){
                int val = expression[i]-'0';
                currNum = currNum*10 + val;
                i++;
            }
            
            i++; // as it is a division operator we already know

            while(i<expression.length() && isdigit(expression[i])){
                int val=expression[i]-'0';
                currDen = currDen*10 + val;
                i++;
            }

            if(isNegative) currNum = currNum*-1;

            numerator = numerator * currDen + currNum * denominator;
            denominator = denominator*currDen;
            
        }
         int divisor = abs(__gcd(numerator,denominator));
         numerator/=divisor;
         denominator/=divisor;

         return to_string(numerator)+"/"+to_string(denominator);
    }
};