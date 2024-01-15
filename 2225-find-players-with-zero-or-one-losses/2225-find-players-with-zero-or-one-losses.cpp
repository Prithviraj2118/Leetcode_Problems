class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> m1;
        set<int> s;
        vector<int> v1, v2;
        for(auto x:matches){
            m1[x[1]]++;
            s.insert(x[0]);
        }
        
        for(auto x:m1){
            if(x.second == 1) v2.push_back(x.first);
        }
        
        for(auto x:s){
            if(m1.find(x) == m1.end()) v1.push_back(x);
        }
        return {v1, v2};
    }
};