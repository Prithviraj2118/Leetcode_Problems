class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            
            if(m[nums[i]] == 2)
                ans.push_back(nums[i]);
        }
        
        return ans;
    }
};