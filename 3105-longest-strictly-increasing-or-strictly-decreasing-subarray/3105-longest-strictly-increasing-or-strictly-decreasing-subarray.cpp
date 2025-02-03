class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        int count = 1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
                ans = max(ans,count);
            }
            else{
                
                count=1;
            }
        }
        count = 1;
        for(int i=n-1;i>0;i--){
            if(nums[i]<nums[i-1]){
                count++;
                ans = max(ans,count);
            }
            else{
                
                count=1;
            }
        }
        return ans;
    }
};