class Solution {
    int n;
    public boolean isValid(int[] nums,int value,int p){
        int count=0;
        for(int i=0;i<n-1;i++){
            if(Math.abs(nums[i]-nums[i+1])<=value){
                count++;
                if(count>=p){
                    return true;
                }
                i++;
            }
        }
        return false;
    }
    public int minimizeMax(int[] nums, int p) {
        n = nums.length;
        Arrays.sort(nums);
        int l=0;
        int r = nums[n-1]-nums[0];
        int result= Integer.MAX_VALUE;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isValid(nums,mid,p)==true){
                result=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return result;
    }
}