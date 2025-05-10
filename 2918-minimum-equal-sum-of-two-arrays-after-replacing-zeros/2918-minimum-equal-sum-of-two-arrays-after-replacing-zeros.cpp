class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int zero1 = 0;
        int zero2 = 0;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            sum1 += nums1[i];
            if (nums1[i] == 0) {
                zero1++;
                sum1+=1;
            }
        }
        for (int i = 0; i < nums2.size(); i++) {
            sum2 += nums2[i];
            if (nums2[i] == 0) {
                zero2++;
                sum2+=1;
            }
        }
        if((sum1<sum2 && zero1==0)||(sum2<sum1 && zero2==0)){
            return -1;
        }
        return max(sum1,sum2);
    }
};