class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> m1;
        vector<int> v1, v2;
        for(auto x:matches){
            m1[x[0]];   //Just note the winners in map
            m1[x[1]]++; //Store freq of losses
        }

        for(auto x:m1){
            if(x.second==0) v1.push_back(x.first);
            else if(x.second == 1) v2.push_back(x.first);
        }
        return {v1, v2};
    }
};