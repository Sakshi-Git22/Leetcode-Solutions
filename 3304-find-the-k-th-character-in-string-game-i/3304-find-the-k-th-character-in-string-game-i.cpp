class Solution {
public:
    char kthCharacter(int k) {
        string original = "a";
        while(original.length()<k){
            string temp = "";
            for(int i=0;i<original.length();i++){
                if(original[i]=='z'){
                    temp+='a';
                } else{
                    temp+=original[i]+1;
                }
            }
            original+=temp;
        }
        return original[k-1];
    }
};