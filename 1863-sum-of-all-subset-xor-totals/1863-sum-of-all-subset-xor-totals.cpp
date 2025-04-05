class Solution {
public:
    void findSubsets(int index,vector<int>& nums, vector<int>& arr, int n,int& ans){
        if(index>=n){
            int xorVal = 0;
            for(int i=0;i<arr.size();i++){
                xorVal^=arr[i];
            }
            ans+=xorVal;
            return;
        }
        //include call
        arr.push_back(nums[index]);
        findSubsets(index+1,nums,arr,n,ans);
        //exclude call
        arr.pop_back();
        findSubsets(index+1,nums,arr,n,ans);
    }
    int subsetXORSum(vector<int>& nums) {
      int ans = 0;
      vector<int>arr;
      findSubsets(0,nums,arr,nums.size(),ans);  
      return ans;
    }
};