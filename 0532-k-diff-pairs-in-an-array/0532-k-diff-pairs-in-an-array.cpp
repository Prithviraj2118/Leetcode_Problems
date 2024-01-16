class Solution {
public: //Similar to Two Sum
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int cnt=0;
        for(auto x:nums){
            m[x]++;
        }
        
        for(auto x:m){
            if(k==0 && x.second>1) cnt++;
            else if(k>0){
                if(m.find(x.first+k)!=m.end()) cnt++;
            }
        }
        return cnt;
    }
};