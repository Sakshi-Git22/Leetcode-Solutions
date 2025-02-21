class Solution {
public:
    bool isHappy(int num) {
     unordered_map<int,int>mp;
     int sum=0;
     while(true){
        while(num){
            sum+=pow((num%10),2);
            num=num/10;
        }
        if(mp.find(sum)!=mp.end()){
            break;
        }
        if(sum==1){
            return true;
        }
        mp[sum]++;
        num = sum;
        sum=0;
     }
     return false;   
    }
};