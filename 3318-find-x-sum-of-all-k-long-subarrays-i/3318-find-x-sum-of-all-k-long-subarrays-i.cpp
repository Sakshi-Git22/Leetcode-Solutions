#define compare [](auto &a, auto &b){ \
    if(a.second == b.second) return a.first > b.first; \
    else return a.second > b.second; \
}

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;
        
        for (int i = 0; i <= n - k; i++) {
            vector<int> freq(51, 0);
            
            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }
            
            vector<pair<int, int>> v;
            for (int num = 1; num <= 50; num++) {
                if (freq[num] > 0) {
                    v.push_back({num, freq[num]});
                }
            }
            
            sort(v.begin(), v.end(), compare);
            
            int sum = 0, cnt = 0;
            for (auto& p : v) {
                if (cnt == x) break;
                sum += p.first * p.second;
                cnt++;
            }
            
            ans.push_back(sum);
        }
        
        return ans;
    }
};