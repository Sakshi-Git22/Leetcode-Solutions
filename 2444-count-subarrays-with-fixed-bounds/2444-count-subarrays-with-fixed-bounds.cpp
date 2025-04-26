class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
      long long ans=0;
      int minn = -1;
      int maxx = -1;
      int idx = -1;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<minK || nums[i]>maxK)
        idx=i;
        if(nums[i]==minK)
        minn= i;
        if(nums[i]==maxK)
        maxx=i;

        long smaller = min(minn,maxx);
        long temp = smaller-idx;
        if(temp>0)
        ans+=temp;
        
      } 
      return ans; 
    }
};