class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int sum = 0;
        int opt2 = INT_MIN;
        bool found = false;
        for(auto it : mp){
            if(it.first > 0){
                sum+=it.first;
                found = true;
            }
            else{
                opt2 = max(it.first,opt2);
            }
        }
        return found == true ? sum : opt2;
    }
};