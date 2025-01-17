class Solution {
public:
    bool isValid(vector<int>original, vector<int>derived, int startInd , int n){
        original[0]=startInd;
        for(int i=1;i<n;i++){
            original[i]=original[i-1]^derived[i-1];
        }
        if((original[n-1]^derived[n-1])==original[0]){
            return true;
        }
        else return false;
    }
    bool doesValidArrayExist(vector<int>& derived) {
       int n = derived.size();
       vector<int>original(n);
       if(isValid(original,derived,0,n) || isValid(original,derived,1,n)){
        return true;
       } 
       return false;
    }
};