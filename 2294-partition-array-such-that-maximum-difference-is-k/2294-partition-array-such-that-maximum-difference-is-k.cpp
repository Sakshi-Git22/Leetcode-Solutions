class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int partitionCount = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int startIndex = 0;
        int i=0;
        while(i<n){
            if(nums[i]-nums[startIndex]>k){
                startIndex = i;
                partitionCount++;
            }
            i++;
        }
        return partitionCount+1;
    }
};