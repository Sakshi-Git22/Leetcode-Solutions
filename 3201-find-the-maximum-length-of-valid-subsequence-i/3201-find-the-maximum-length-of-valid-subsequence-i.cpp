class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
        int oddCount = 0;
        int evenCount = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                evenCount++;
            }
            else
            oddCount++;
        }
        int count = 1;
        int alternate = nums[0]%2;
        for(int i=1;i<n;i++){
            int curr = nums[i]%2;
            if(alternate!=curr){
                count++;
                alternate = curr;
            }
        }
        return max({count,evenCount,oddCount});
    }
};