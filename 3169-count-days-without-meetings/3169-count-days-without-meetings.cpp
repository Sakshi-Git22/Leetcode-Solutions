class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int n = meetings.size();
        int lastIndex=meetings[0][1];
        int count = meetings[0][0]-1;
        for(int i=1;i<n;i++){
            int start=meetings[i][0];
            if(start>lastIndex+1){
                count+=start-lastIndex-1;
            }
            lastIndex = max(meetings[i][1],lastIndex);
        }
        count+=days-lastIndex;
        return count;
    }
};