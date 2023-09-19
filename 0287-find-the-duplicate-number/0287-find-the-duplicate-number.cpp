class Solution {
public:
    int findDuplicate(vector<int>& nums) {  //array vector of int datatype
        
        set<int> s;
        
        for(auto x:nums){
            if(s.find(x) != s.end()) return x;
            s.insert(x);
        }
        return 0;
    }
};