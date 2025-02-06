class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int product = nums[i]*nums[j];
                mp[product]++;
            }
        }
        for(auto it:mp){
            int freq = it.second;
            ans+=(freq * (freq-1))/2;

        }
        return ans*8;
    }
};