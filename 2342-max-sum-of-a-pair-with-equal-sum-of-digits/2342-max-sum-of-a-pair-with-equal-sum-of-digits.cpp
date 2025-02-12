class Solution {
public:
    int countSum(int num){
        int sum=0;
        while(num){
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        int result = -1;
        for(int i=0;i<nums.size();i++){
            int digitSum = countSum(nums[i]);
            if(mp.count(digitSum)){
                result = max(result , nums[i]+mp[digitSum]);
            }
            mp[digitSum] = max(nums[i],mp[digitSum]);
        }
        return result;
    }
};