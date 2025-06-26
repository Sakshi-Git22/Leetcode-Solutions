class Solution {
public:
    int longestSubsequence(string s, int k) {
        if(stoi(s,nullptr,2)<k){
            return s.length();
        }
        int i;
        string binary = "";
        int binaryLength = 0;
        for(i=s.length()-1;i>=0;i--){
            binary = s[i]+binary;
            int decimal = stoi(binary,nullptr,2);
           if(decimal==k){
            binaryLength = binary.length();
            break;
           } 
           else if(decimal>k){
            binary.pop_back();
           }
        }
        int zeroCount = 0;
        for(int j=0;j<i;j++){
            if(s[j]=='0'){
                zeroCount++;
            }
        }
        return binaryLength + zeroCount;
    }
};