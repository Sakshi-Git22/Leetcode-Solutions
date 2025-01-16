class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans1 = 0;
        for(int i=0;i<nums2.size();i++){
            ans1 = ans1^nums2[i];
        }
        int ans2 = 0;
        for(int i=0;i<nums1.size();i++){
            ans2=ans2^nums1[i];
        }
        int result = 0;
        if(nums1.size()%2!=0){
            result = result^ans1;
        }
        if(nums2.size()%2!=0){
            result = result^ans2;
        }
        return result;
    }
};