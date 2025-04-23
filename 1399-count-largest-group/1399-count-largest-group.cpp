class Solution {
public:
    int countLargestGroup(int n) {
        int maxSize = 0;
        int count = 0;
     unordered_map<int,int>mp;
     for(int i=1;i<=n;i++){
        int num = 0;
        int temp = i;
        while(temp){
            num+=temp%10;
            temp=temp/10;
        }
        mp[num]++;
        maxSize = max(mp[num],maxSize);
     }   
     int ans = 0;
     for(auto it : mp){
        if(it.second == maxSize)
        ans++;
     }
     return ans;
    }
};