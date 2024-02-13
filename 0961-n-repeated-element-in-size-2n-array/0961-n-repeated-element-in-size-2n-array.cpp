class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int x:nums){
            m[x]++;
            if(2*m[x]==nums.size()) return x;
        }
        return -1;
    }
};