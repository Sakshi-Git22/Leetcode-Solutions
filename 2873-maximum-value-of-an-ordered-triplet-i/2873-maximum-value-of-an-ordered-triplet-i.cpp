class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0; // Triplet requires at least 3 elements

        vector<int> leftMax(n);
        vector<int> rightMax(n);

        // Compute leftMax (stores max value before index i)
        leftMax[0] = nums[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], nums[i - 1]);
        }

        // Compute rightMax (stores max value after index i)
        rightMax[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], nums[i + 1]);
        }

        long long ans = 0;
        for (int i = 1; i < n - 1; i++) {
            long long product = (long long)(leftMax[i] - nums[i]) * rightMax[i];
            ans = max(ans, product);
        }

        return ans;
    }
};
