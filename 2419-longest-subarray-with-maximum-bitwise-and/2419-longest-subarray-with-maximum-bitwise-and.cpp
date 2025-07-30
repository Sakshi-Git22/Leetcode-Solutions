class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0;i<nums.size();i++){
            maxi = max(maxi , nums[i]);
        }
        int maxLength = 0;
        int length = 0;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==maxi){
                length++;
                maxLength = max(length,maxLength);
            }
            else{
                length = 0;
            }
        }
        return maxLength;
    }
};