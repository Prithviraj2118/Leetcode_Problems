class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> m;
        
        for(int i=0; i<groupSizes.size(); i++){
            m[groupSizes[i]].push_back(i);
        }
        int j;
        for(auto x:m){
            int v1 = x.second.size();
            j=0;
            while(j<v1){
                vector<int> temp;
                int v = x.first;
                while(v--){
                    temp.push_back(x.second[j]);
                    j++;
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};