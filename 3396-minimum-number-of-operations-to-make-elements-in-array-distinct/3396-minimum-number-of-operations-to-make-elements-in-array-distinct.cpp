class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> seen(101, 0);
        reverse(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            seen[nums[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (seen[nums[i]]>1) {
                int s = 3;
                while (s-- && nums.size()>0) {
                    seen[nums.back()]--;
                    nums.pop_back();
                } 
                ans++;
            }
        }
        return ans;
    }
};