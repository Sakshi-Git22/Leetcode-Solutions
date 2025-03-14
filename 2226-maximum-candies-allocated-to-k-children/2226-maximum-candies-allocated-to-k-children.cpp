class Solution {
public:
    bool canDistribute(int value,vector<int>candies,long long k){
        for(int i=0;i<candies.size();i++){
            k-=candies[i]/value;
            if(k<=0){
                return true;
            }
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int maxi = 0;
        long long total = 0;
        for(int i=0;i<candies.size();i++)
            {
                maxi=max(candies[i],maxi);
                total+=candies[i];
            }
            if(total<k){
                return 0;
            }
            int l=1;
            int r=maxi;
            int result = 0;
            while(l<=r){
                int mid = l +(r-l)/2;
                if(canDistribute(mid,candies,k)){
                    result = mid;
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }

            return result;
        }
};