class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posCount = 0;
        int negCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                continue;
            }
            else if(nums[i]>0){
                posCount++;
            }
            else{
                negCount++;
            }
        }
        return max(posCount,negCount);
    }
};