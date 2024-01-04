class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        
        for(auto x:nums){
            m[x]++;
        }
        
        int ans=0;
        for(auto x:m){
            if(x.second==1) return -1;  //If freq is 1
            else if(x.second%3>0) ans+= (x.second/3) + 1;   //No. of groups (of 2  or 3)
            else ans+=(x.second/3);     //No.of groups of 3
        }
        return ans;
    }
};