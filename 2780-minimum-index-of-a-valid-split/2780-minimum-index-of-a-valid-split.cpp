class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<nums.size();i++){
            mp2[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            int dominant = nums[i];
            mp1[dominant]++;
            mp2[dominant]--;
            int n1 = i+1;
            int n2 = nums.size()-n1;
            if(mp1[dominant]>n1/2 && mp2[dominant]>n2/2){
                return i;
            }
        }
        return -1;
    }
};