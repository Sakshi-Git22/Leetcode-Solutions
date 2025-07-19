class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string>st(folder.begin(),folder.end());
        vector<string>result;
        for(string currFolder : folder){
            bool isFound = false;
            string temp = currFolder;
            while(!currFolder.empty()){
                size_t position = currFolder.find_last_of('/');
                currFolder = currFolder.substr(0,position);
                if(st.find(currFolder)!=st.end()){
                    isFound = true;
                    break;
                }
            }
            if(!isFound){
                result.push_back(temp);
            }
        }
        return result;
    }
};