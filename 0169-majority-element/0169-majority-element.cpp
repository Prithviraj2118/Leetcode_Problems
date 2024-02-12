class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x:nums){
            if(m[x]>=nums.size()/2) return x;
            m[x]++;
        }
        return -1;
    }
};