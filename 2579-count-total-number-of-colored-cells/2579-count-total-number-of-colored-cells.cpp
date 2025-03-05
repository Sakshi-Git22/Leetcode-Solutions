class Solution {
public:
    long long coloredCells(int n) {
        long long ans;
        int count = 0;
        int i=0;
        while(n--){
            count = (i*(i+1))/2;
            ans = 1+4*count;
            i++;
        }
        return ans;
    }
};