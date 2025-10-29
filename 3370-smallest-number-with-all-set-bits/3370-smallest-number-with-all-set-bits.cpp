class Solution {
public:
    int smallestNumber(int n) {
        int counter = 0;
        int ans = 0;
        while(n!=0){
            ans = ans + pow(2,counter);
            counter++;
            n=n>>1;
        }
        return ans;
    }
};