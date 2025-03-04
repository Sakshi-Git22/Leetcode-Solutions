class Solution {
public:
    bool checkPowersOfThree(int n) {
        int p = 0;
        while(n>= pow(3,p)){
            p++;
        }
        while(n>0){
            if(n>= pow(3,p)){
                n = n-pow(3,p);
            }
            if(n>=pow(3,p)){
                return false;
            }
            p--;
        }
        return true;
    }
};