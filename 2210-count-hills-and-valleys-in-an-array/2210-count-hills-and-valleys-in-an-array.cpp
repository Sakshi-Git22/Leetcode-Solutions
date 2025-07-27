class Solution {
public:
    int countHillValley(vector<int>& nums) {
       vector<int>arr;
       arr.push_back(nums[0]);
       int j = 0;
       for(int i=1;i<nums.size();i++){
        if(arr[j]!=nums[i]){
            arr.push_back(nums[i]);
            j++;
        }
       }
       int count = 0;
       if(arr.size()<3){
        return 0;
       }
       for(int i = 1;i<arr.size()-1;i++){
        if(arr[i-1]>arr[i] && arr[i+1]>arr[i]){
            count++;
        }
        else if(arr[i-1]<arr[i] && arr[i+1] < arr[i]){
            count++;
        }
       }
       return count;
    }
};