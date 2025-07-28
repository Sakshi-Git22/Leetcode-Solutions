class Solution {
public:
    void findSubsets(int index, int maxOr,int currOr, int& count, vector<int>& nums){
        if(index==nums.size()){
            if(currOr==maxOr){
                count++;
            }
            return;
        }
        findSubsets(index+1,maxOr,currOr|nums[index],count,nums);
        findSubsets(index+1,maxOr,currOr,count,nums);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for(int i=0;i<nums.size();i++){
            maxOr = maxOr|nums[i];
        }
        int orCount = 0;
        int currOr = 0;
        findSubsets(0,maxOr,currOr,orCount,nums);
        return orCount;
    }
};