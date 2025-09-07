class Solution {
    public int[] sumZero(int n) {
      int[] arr = new int[n];
      int idx = 0;
      if(n%2!=0){
        arr[idx]=0;
        idx++;
      }
      int digit = 1;
      boolean flag = false;
      for(int i = idx ;i<n;i++){
        if(flag){
            arr[i]=digit;
            digit++;
        }
        else{
            arr[i]=-digit;
        }
        flag = !flag;
      }
      return arr;  
    }
}