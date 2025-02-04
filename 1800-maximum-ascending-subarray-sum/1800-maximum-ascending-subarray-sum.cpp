class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                sum+=nums[i+1];
                maxi = max(sum,maxi);
            }
            else{
                
                sum=nums[i+1];
            }
        }
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        return maxi;
    }
};