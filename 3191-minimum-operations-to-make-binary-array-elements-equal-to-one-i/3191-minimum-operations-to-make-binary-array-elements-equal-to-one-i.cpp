class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0 ){
                count++;
                nums[i]^=1;
                nums[i+1]^=1;
                nums[i+2]^=1;
            }
        }
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) return -1;
        }
        return count;
    }
};