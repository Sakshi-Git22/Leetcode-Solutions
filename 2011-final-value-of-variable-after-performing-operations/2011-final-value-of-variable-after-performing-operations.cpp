class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for(auto str : operations){
            if(str[0]=='+'){
                result++;
            }
            else if(str[0]=='-'){
                result--;
            }
            else if(str[0]=='X' && str[1]=='+'){
                result++;
            }
            else{
                result--;
            }
        }
        return result;
    }
};