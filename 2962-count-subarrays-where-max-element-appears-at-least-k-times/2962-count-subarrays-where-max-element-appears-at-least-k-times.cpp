class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++)
        maxi=max(nums[i],maxi);

        int i=0;
        int j=0;
        int maxCount=0;
        long long result=0;
        while(j<nums.size()){
            if(nums[j]==maxi){
                maxCount++;
            }
            while(maxCount>=k){
                result = result+nums.size()-j;
                if(nums[i]==maxi){
                    maxCount--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};