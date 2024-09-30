class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size());
        result[0]=1;
        for(int i=1;i<result.size();i++){
            result[i]=nums[i-1]*result[i-1];
        }
        int product = 1;
        for(int i=result.size()-1;i>=0;i--){
            result[i]=product*result[i];
            product=product*nums[i];
        }
        return result;
    }
};