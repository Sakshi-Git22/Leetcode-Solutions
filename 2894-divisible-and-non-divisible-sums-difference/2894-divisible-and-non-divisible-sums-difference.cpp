class Solution {
public:
    int differenceOfSums(int n, int m) {
        long long divisible = 0;
        long long nonDivisible = 0;
        for(int i=1;i<=n;i++){
            if(i%m!=0)
            nonDivisible+=i;
            else
            divisible+=i;
        }
        int ans = (int)nonDivisible-divisible;
        return ans;
    }
};