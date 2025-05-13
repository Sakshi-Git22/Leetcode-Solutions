class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;
        long long arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        while(t--){
            long long newArr[26]={0};
            for(int i=0;i<25;i++){
                newArr[i+1]= (newArr[i+1]+arr[i])%MOD;
            }
            if(arr[25]){
                newArr[0]=(newArr[0]+arr[25])%MOD;
                newArr[1]=(newArr[1]+arr[25])%MOD;
            }
        for(int i=0;i<26;i++){
            arr[i]=newArr[i];
        }
        }
        int count = 0;
        for(int i=0;i<26;i++){
            count=(count + arr[i])%MOD;
        }
        return count;
    }
};