class FindSumPairs {
public:
    vector<int>num1;
    vector<int>num2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            num1.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            num2.push_back(nums2[i]);
        }
    }
    
    void add(int index, int val) {
        num2[index]+=val;
    }
    
    int count(int tot) {
        unordered_map<int,int>mp;
        for(int i=0;i<num2.size();i++){
            mp[num2[i]]++;
        }
        int ans = 0;
        for(int i=0;i<num1.size();i++){
            int value = tot-num1[i];
            if(mp.find(value)!=mp.end()){
                ans+=mp[value];
            }
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */