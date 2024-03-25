class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> m;
        for(auto x:nums)
        {
            m[x]++;
            if(m[x]==2) ans.push_back(x);
        } 
        return ans;
    }
};