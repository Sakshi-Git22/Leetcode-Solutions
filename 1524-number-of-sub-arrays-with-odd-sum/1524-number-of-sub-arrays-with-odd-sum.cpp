class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int ans = 0;
        int oddCount = 0;
        int evenCount = 1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0){
                ans+=oddCount;
                evenCount++;
            }
            else{
                ans+=evenCount;
                oddCount++;
            }
        }
        return ans;
    }
};