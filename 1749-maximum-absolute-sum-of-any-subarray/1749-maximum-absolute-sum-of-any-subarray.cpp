class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
      int maxSum = nums[0];
      int currMaxSum =  nums[0];
      int minSum = nums[0];
      int currMinSum = nums[0];
      for(int i=1;i<nums.size();i++){
        currMaxSum = max(nums[i],currMaxSum+nums[i]);
        currMinSum = min(nums[i],currMinSum+nums[i]);
        maxSum = max(maxSum,currMaxSum);
        minSum = min(minSum,currMinSum);
      } 
      return max(maxSum , abs(minSum));
    }
};