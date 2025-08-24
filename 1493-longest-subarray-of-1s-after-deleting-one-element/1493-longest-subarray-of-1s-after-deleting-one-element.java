class Solution {
    public int longestSubarray(int[] nums) {
        int lastZeroIdx=-1;
        int maxSize = 0;
        int i = 0;
        int j = 0;
        while(j<nums.length){
            if(nums[j]==0){
                i = lastZeroIdx+1;
                lastZeroIdx = j;
            }
            maxSize = Math.max(maxSize , j-i);
            j++;
        }
        return maxSize;
    }
}