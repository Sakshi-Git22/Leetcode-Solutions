class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=n-1;i>=0;i--){
            if(k>0){
                mp[v[i]]++;
                k--;
            }
            else{
                break;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end() && mp[nums[i]]!=0){
                ans.push_back(nums[i]);
                mp[nums[i]]--;
            }
        }
        return ans;
    }
};