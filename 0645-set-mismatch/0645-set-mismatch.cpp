class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        //O(N) space
        unordered_map<int, int> m;
        vector<int> ans;
        
        for(auto x:nums)
        {
            m[x]++;
            
            if(m[x] > 1)
                ans.push_back(x);
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(m.find(i+1) == m.end())
                ans.push_back(i+1);
        }
        
        return ans;
    }
};


