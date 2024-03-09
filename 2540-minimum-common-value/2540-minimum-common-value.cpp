class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(auto x:nums1){
            s.insert(x);
        }
        sort(nums2.begin(), nums2.end());
        for(auto x:nums2){
            if(s.find(x)!=s.end()) return x;
        }
        
        return -1;
    }
};