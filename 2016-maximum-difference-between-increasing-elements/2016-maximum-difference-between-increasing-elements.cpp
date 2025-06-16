class Solution {
public:
    int maximumDifference(vector<int>& nums) {
      int n = nums.size();
      vector<int>rightMax(n);
      vector<int>leftMin(n);
      rightMax[n-1]=nums[n-1];
      leftMin[0]=nums[0];
      for(int i=n-2;i>=0;i--)
      rightMax[i]=max(rightMax[i+1],nums[i]);
      for(int i=1;i<n;i++)
      leftMin[i]=min(leftMin[i-1],nums[i]);
      int ans = 0;
      for(int i=0;i<n;i++)
      ans = max(ans,rightMax[i]-leftMin[i]);
      return ans==0 ? -1 : ans;
    }
};