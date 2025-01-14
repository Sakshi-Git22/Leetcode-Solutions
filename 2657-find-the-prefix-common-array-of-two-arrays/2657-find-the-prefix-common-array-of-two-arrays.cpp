class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
     map<int,int>mp;
     vector<int>C;
     int count = 0;
     for(int i=0;i<A.size();i++){
        int pointer = 0;
        mp[A[i]]++;
        if(mp[A[i]]==2){
            pointer++;
        }
        mp[B[i]]++;
        if(mp[B[i]]==2){
            pointer++;
        }
        count+=pointer;
        C.push_back(count);
     }
     return C;
    }
};